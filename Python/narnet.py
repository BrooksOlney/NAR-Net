import math
from operator import mul, add
import time

class settings:
    def __init__(self, xoffset, gain, ymin):
        self.xoffset = xoffset
        self.gain = gain
        self.ymin = ymin
        
def NAR_inference(weights, x):
    n = 5
    feedbackDelay = 16
    
    b1, w1, b2, w2 = weights
    
    w1 = [w1[i*16:(i+1)*16] for i in range(n)]
    
    x1_step = settings(2.2, 0.1, -1)
    y1_step = settings(2.2, 0.1, -1)

    xd1 = [16] * 16    
    y = [0] * len(x)
    
    def mapminmax_apply(x, xsettings):
        return (x - xsettings.xoffset) * xsettings.gain + xsettings.ymin
    
    def mapminmax_reverse(y, ysettings):
        return (y - ysettings.ymin) / ysettings.gain + ysettings.xoffset
    
    def tansig(n):
        return [2 / (1 + math.exp(-2*ni)) - 1 for ni in n]

    for ts in range(16):
        xd1[ts] = mapminmax_apply(xd1[ts],x1_step)
        
    xd1 += [0]
    
    # time loop
    for ts in range(len(x)):
        
        # rotating delay state position
        xdts = (ts + 15) % 17
        xd1[xdts] = mapminmax_apply(x[ts], x1_step)

        # layer 1
        tapdelay1 = [xd1[(xdts - i - 1) % 17] for i in range(0,16)]
        a1 = tansig(map(add, list(sum(map(mul, neuron, tapdelay1)) for neuron in w1), b1))
        
        # layer 2 
        a2  = sum(map(mul, w2, a1)) + b2[0]
        
        # output
        y[ts] = mapminmax_reverse(a2, y1_step)
 
    return y
 
# load weights
weights = open("Python/modelWeights.txt", "r").read().splitlines()
weights = list(list(map(float, w.split())) for w in weights)

# load testing data
x_test = open("Python/S1_test.txt", "r").read().splitlines()
x_test = list(list(map(float, x.split())) for x in x_test)

delays = [16 for _ in range(16)]
y = NAR_inference(weights, x_test[0])
