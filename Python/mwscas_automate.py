from fpga_functions import *
from narnet import *

NQs  = [(8,7), (10,8), (12,10), (14,12), (16,12)]
subs = [1,2,4,5,6,7,8]

for N,Q in NQs:
    global fxp_rng
    fxp_rng = Fxp(None, dtype=f'fxp-s{N}/{Q}', rounding='trunc')
    
    for sub in subs:
        weights = load_weights(fname=f"SubjectWeights/S{sub}.txt")
        x_test = open(f"SubjectData/S{sub}.txt", "r").read().splitlines()
        x_test = list(np.array(list(map(float, x.split()))) for x in x_test)[1:]
        
        for i,x in enumerate(x_test):
            y_test_q = NARNet_Quantized_Inference(weights, x)
            outputs = open(f"VerilogOutputs/S{sub}_D{i+1}.txt",'r').read().replace(' ','').replace('\t','').splitlines()
            outputs = [o for o in outputs if 'x' not in o]
            outputs = Fxp(outputs, like=fxp_rng)