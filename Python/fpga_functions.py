from fxpmath import Fxp
from narnet import *

def generate_tanh_lut():
    n = 2**fxp_rng.n_word
    
    lut = Fxp([0]*n, like=fxp_rng)
    for i in range(n): lut[i] |= i
    
    lutOut = Fxp(np.tanh(lut), like=fxp_rng)
    
    with open("HW/tanh_lut.v", 'w') as ofile:
        
        ofile.write('`timescale 1ns / 1ps\n')
        ofile.write('module tanh_lut #(parameter N=8, parameter Q=7) (\n')
        ofile.write('\tinput [N-1:0] addr,\n\t input clk,\n\t output signed [N-1:0] tanh_out\n\t);\n')
        ofile.write('reg signed [N-1:0] tanh_out_reg;\nassign tanh_out = tanh_out_reg;\n\n')
        
        ofile.write('always @(negedge clk) begin\n\tcase (addr)\n')
        
        for l,out in zip(lut.bin(),lutOut.bin()):
            ofile.write(f"\t\t{fxp_rng.n_word}'b{l} : tanh_out_reg <= {fxp_rng.n_word}'b{out};\n")

        ofile.write('\tendcase\nend\n\nendmodule\n')

def generate_trace_init(trace, fname):
    """
        Generate trace values in fixed-point notation for the FPGA to parse
    """
    
    with open(fname, "w") as ofile:
        normalized = list(map(mapminmax_apply, trace))
        fxptrace = Fxp(normalized, like=fxp_rng)
        
        ofile.write('\n'.join(fxptrace.bin()))
        
def write_quantized_weights(weights,fname):
    b1, w1, b2, w2 = [Fxp(w,like=fxp_rng) for w in weights]
    
    with open(fname, 'w') as ofile:
        w1_bins = it.chain(*w1)
        ofile.write(' '.join(list(map(str, b1.val))) + '\n')
        ofile.write(' '.join(list(map(str, [w.val for w in w1_bins]))) + '\n')
        ofile.write(' '.join(list(map(str, b2.val))) + '\n')
        ofile.write(' '.join(list(map(str, w2.val))) + '\n')

    with open(f'{fname[:-4]}.mem', 'w') as ofile:
        w1_bins = it.chain(*w1)
        allweights = it.chain([*b1, *w1_bins, *b2, *w2])
        # ofile.write('memory_initialization_radix = 2;\nmemory_initialization_vector =\n')
        ofile.write('\n'.join(map(str, [w.bin() for w in allweights])));
        ofile.write('\n')
        ofile.write('\n'.join(['0' * fxp_rng.n_word] * (255 - len(list(allweights)))))
        # test = list(map(str, [w.bin() for w in allweights]))
        # for i,w in enumerate(test):
        #     ofile.write(f'8\'b{bin(i)[2:].zfill} : rom_reg <= 8\'b{w};\n')        
        
def plot_fpga_output(x_test):
    
    outputs = open("VerilogOutputs/S6_D2.txt",'r').read().replace(' ','').replace('\t','').splitlines()
    outputs = [o for o in outputs if 'x' not in o]
    outputs = Fxp(outputs, like=fxp_rng)
    
    # y_test = list(map(mapminmax_reverse, Fxp(outputs, like=fxp_float)))
    y_test = np.array([mapminmax_reverse(Fxp(o, like=fxp_float) ) for o in outputs], dtype=float)[:len(x_test)]
    rmse = math.sqrt(np.sum((y_test - x_test) ** 2) / y_test.size)
    
    plt.plot(x_test, label='Ground Truth')
    plt.plot(y_test, label='FPGA')
    # y_python = NAR_inference(weights, x_test)
    # plt.plot(y_python, label='Python')
    plt.legend()
    plt.text(x=30, y=16, s=f'RMSE = {rmse}')
    plt.show()


def load_weights(fname="SubjectNNWeights/S1.txt"):
    # load weights
    weights = open(fname, "r").read().splitlines()
    weights = list(np.array(list(map(float, w.split()))) for w in weights)
    weights[1] = weights[1].reshape(5, 16)

    return weights

def generate_all_fpga_data():
    subs = [1,2,4,5,6,7,8]
    generate_tanh_lut()
    
    for sub in subs:
        weights = load_weights(fname=f"SubjectNNWeights/S{sub}.txt")
        mn = min([np.min(w) for w in weights])
        mx = max([np.max(w) for w in weights])

        write_quantized_weights(weights, f"HW/Weights/S{sub}.mem")
        x_test = open(f"SubjectData/S{sub}.txt", "r").read().splitlines()
        x_test = list(np.array(list(map(float, x.split()))) for x in x_test)

        for i in np.arange(len(x_test))[1:]:
            generate_trace_init(x_test[i],f'HW/InputVectors/S{sub}_D{i}.txt')

generate_all_fpga_data() 
# weights = load_weights()

# load testing data
x_test = open("SubjectData/S6.txt", "r").read().splitlines()
x_test = list(np.array(list(map(float, x.split()))) for x in x_test)

# write_quantized_weights(weights, "HW/Weights/S1.txt")


# generate_trace_init(x_test[1],'HW/InputVectors/S1_D1.txt')

plot_fpga_output(x_test[2])
print('')