import math
from operator import mul, add
from copy import deepcopy
from statistics import mean
import numpy as np
from fxpmath import Fxp
import matplotlib.pyplot as plt
import itertools as it
from fxpmath.utils import *

class settings:
    def __init__(self, xoffset, gain, ymin):
        self.xoffset = xoffset
        self.gain = gain
        self.ymin = ymin 
        
def write_quantized_weights(weights):
    b1, w1, b2, w2 = weights
    
    with open('weights_quantized.txt', 'w') as ofile:
        w1_bins = it.chain(*w1)
        ofile.write(' '.join(list(map(str, b1.val))) + '\n')
        ofile.write(' '.join(list(map(str, [w.val for w in w1_bins]))) + '\n')
        ofile.write(' '.join(list(map(str, b2.val))) + '\n')
        ofile.write(' '.join(list(map(str, w2.val))) + '\n')

    with open('weights_quantized.coe', 'w') as ofile:
        w1_bins = it.chain(*w1)
        allweights = it.chain([*b1, *w1_bins, *b2, *w2])
        ofile.write('memory_initialization_radix = 2;\nmemory_initialization_vector =\n')
        ofile.write(',\n'.join(map(str, [w.bin() for w in allweights])));
        ofile.write(';\n')
        
        # test = list(map(str, [w.bin() for w in allweights]))
        # for i,w in enumerate(test):
        #     ofile.write(f'8\'b{bin(i)[2:].zfill} : rom_reg <= 8\'b{w};\n')
        
def NAR_inference(weights, x):
    n = 5
    feedbackDelay = 16
    fxp_float = Fxp(None, dtype='fxp-s32/23')
    
    fxp_rng = Fxp(None, dtype='fxp-s8/6')
    
    b1, w1, b2, w2 = [Fxp(w, like=fxp_rng) for w in weights]

    write_quantized_weights((b1,w1,b2,w2))

    x1_step = settings(2.2, 0.1, -1)
    y1_step = settings(2.2, 0.1, -1)

    # xd1 = [16] * 16    
    # y = [0] * len(x)
    
    def mapminmax_apply(x, xsettings):
        return (x - xsettings.xoffset) * xsettings.gain + xsettings.ymin
    
    def mapminmax_reverse(y, ysettings):
        return (y - ysettings.ymin) / ysettings.gain + ysettings.xoffset
    
    def tansig(n):
        # return [2 / (1 + math.exp(-2*ni)) - 1 for ni in n]
        return Fxp(np.tanh(n), like=fxp_rng)

    y = np.zeros(len(x), dtype=float)
    xd1 = Fxp(np.zeros(17), like=fxp_rng)
    xd1[:16] = 16   
    
    for ts in range(16):
        # xd1[ts] = mapminmax_apply(xd1[ts],x1_step)
        xd1[ts] = 0.375
        
    # time loop
    for ts in range(len(x)):
        
        # rotating delay state position
        xdts = (ts + 16) % 17
        xd1[xdts] = mapminmax_apply(x[ts], x1_step)

        # layer 1
        tapdelay1 = Fxp(np.array([xd1[(xdts - i - 1) % 17] for i in range(16)]), like=fxp_rng)
        # a1 = fxp_rng(tansig(map(add, list(sum(map(mul, neuron, tapdelay1)) for neuron in w1), b1)))
        # a1 = Fxp(np.zeros(5), like=fxp_rng)
        # for i in range(5):
        #     acc = Fxp(b1[i], like=fxp_rng)
        #     for j in range(16):
        #         acc += Fxp(w1[i][j] * tapdelay1[j], like=fxp_rng) 
            
        #     # acc += 
        #     a1[i] = acc
            
        # a1 = tansig(a1)
        
        a1 = Fxp(tansig(Fxp(np.matmul(w1, tapdelay1), like=fxp_rng) + b1), like=fxp_rng)
        
        # layer 2 
        # a2  = sum(map(mul, w2, a1)) + b2[0]
        a2 = Fxp(np.matmul(w2, a1), like=fxp_rng) + b2
        # a2 = Fxp(0, like=fxp_rng)
        # for i in range(5):
        #     a2 += Fxp(w2[i] * a1[i], like=fxp_rng)
        
        # a2 += b2
        
        
        # output
        y[ts] = mapminmax_reverse(Fxp(a2, like=fxp_float), y1_step)
 
    return y
 
# load weights
weights = open("Python/modelWeights.txt", "r").read().splitlines()
weights = list(np.array(list(map(float, w.split()))) for w in weights)
weights[1] = weights[1].reshape(5, 16)

# load testing data
x_test = open("Python/S1_test.txt", "r").read().splitlines()
x_test = list(np.array(list(map(float, x.split()))) for x in x_test)

delays = [16 for _ in range(16)]
y_test = NAR_inference(weights, x_test[0])
y_matlab = x_test[0]

diff = mean([abs(yti - ymi) for yti,ymi in zip(y_test, y_matlab)])
rmse = math.sqrt(np.sum((y_test - y_matlab) ** 2) / y_test.size)

plt.plot(range(293), y_test, label='test')
plt.plot(range(293), y_matlab, label='true')
plt.plot(range(293), x_test[1], label='matlab')

plt.legend()
plt.show()

print('')