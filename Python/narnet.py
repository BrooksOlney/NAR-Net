import math
from operator import mul, add
from copy import deepcopy
from statistics import mean
import numpy as np
from fxpmath import Fxp
import matplotlib.pyplot as plt
import itertools as it
from fxpmath.utils import *
import multiprocessing as mp

class settings:
    def __init__(self, xoffset, gain, ymin):
        self.xoffset = xoffset
        self.gain = gain
        self.ymin = ymin 

xsettings = settings(3.5, 0.2, -1)
ysettings = settings(3.5, 0.2, -1)

def mapminmax_apply(x):
    return (x - xsettings.xoffset) * xsettings.gain + xsettings.ymin

def mapminmax_reverse(y):
    return (y - ysettings.ymin) / ysettings.gain + ysettings.xoffset

        
def NAR_inference(weights, x):
    n = 5
    feedbackDelay = 16

    b1, w1, b2, w2 = [Fxp(w, like=fxp_rng) for w in weights]
    b1, w1, b2, w2 = [Fxp(w, like=fxp_rng) for w in weights]

    def tansig(n):
        # return [2 / (1 + math.exp(-2*ni)) - 1 for ni in n]
        return Fxp(np.tanh(n), like=fxp_rng)

    y = np.zeros(len(x), dtype=float)
    xd1 = Fxp(np.zeros(17), like=fxp_rng)
    xd1[:16] = 16   
    
    for ts in range(16):
        xd1[ts] = mapminmax_apply(xd1[ts])
        # xd1[ts] = 0.375
        
    # time loop
    tapdelayInds = []
    for ts in range(len(x)):
        
        # rotating delay state position
        xdts = (ts + 16) % 17
        xd1[xdts] = mapminmax_apply(x[ts])

        # layer 1
        
        # test = [(xdts - i - 1) % 17 for i in range(16)]
        # tapdelayInds.append(test)
        tapdelay1 = Fxp(np.array([xd1[(xdts - i - 1) % 17] for i in range(16)]), like=fxp_rng)
        # a1 = list(map(add, list(sum(map(mul, neuron, tapdelay1)) for neuron in w1), b1))
        # a1 = Fxp(np.zeros(5), like=fxp_rng)
        # for i in range(5):
        #     # acc = Fxp(b1[i], like=fxp_rng)
        #     acc = b1[i]
        #     for j in range(16):
        #         acc = Fxp(acc + w1[i][j] * tapdelay1[j], like=fxp_rng) 
            
        #     a1[i] = acc
            
        # a1 = tansig(a1)
        # test = np.matmul(w1, tapdelay1)
        a1 = tansig(np.matmul(w1, tapdelay1) + b1)
        
        # layer 2 
        # a2  = sum(map(mul, w2, a1)) + b2
        a2 = Fxp(np.matmul(w2, a1), like=fxp_rng) + b2
        # a2 = Fxp(b2, like=fxp_rng)
        # for i in range(5):
        #     a2 = Fxp(a2 + w2[i] * a1[i], like=fxp_rng)
        
        # output
        y[ts] = mapminmax_reverse(Fxp(a2, like=fxp_float))
 
    return y


def load_weights(fname="SubjectNNWeights/S2.txt"):
    # load weights
    weights = open(fname, "r").read().splitlines()
    weights = list(np.array(list(map(float, w.split()))) for w in weights)
    weights[1] = weights[1].reshape(5, 16)

    return weights

fxp_float = Fxp(None, dtype='fxp-s32/23')
fxp_rng = Fxp(None, dtype='fxp-s10/8', rounding='trunc')

if __name__ == "__main__":
    
    weights = load_weights(fname="SubjectNNWeights/S6.txt")

    # load testing data
    x_test = open("SubjectData/S6.txt", "r").read().splitlines()
    x_test = list(np.array(list(map(float, x.split()))) for x in x_test)

    # delays = [16 for _ in range(16)]
    y_test = NAR_inference(weights, x_test[2])
    y_true = x_test[2]

    diff = mean([abs(yti - ymi) for yti,ymi in zip(y_test, y_true)])
    rmse = math.sqrt(np.sum((y_test - y_true) ** 2) / y_test.size)

    plt.plot(y_true, label='Ground truth')
    plt.plot(y_test, label='test')
    # plt.plot(range(293), x_test[1], label='matlab')
    plt.text(x=30, y=16, s=f'RMSE = {rmse}')

    plt.legend()
    plt.show()

    print('')