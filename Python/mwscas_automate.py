from matplotlib.pyplot import plot
from fpga_functions import load_weights, plot_fpga_output
from narnet import *
import time
plt.style.use(['science', 'ieee'])

def analyze_data():
    s = time.time()
    NQs  = [(8,7), (10,8), (12,10), (14,12), (16,12)]
    # NQs = [(12,10)]
    subs = [1,2,4,5,6,7,8]
    rmsesHW, rmsesSW = [], []

    for N,Q in NQs:
        global fxp_rng
        fxp_rng = Fxp(None, dtype=f'fxp-s{N}/{Q}', rounding='trunc', op_sizing='same')
        
        overallRMSE = 0
        overallRMSE_sw = 0
        for sub in subs:
            weights = load_weights(fname=f"../SubjectNNWeights/S{sub}.txt")
            x_test = open(f"../SubjectData/S{sub}.txt", "r").read().splitlines()
            x_test = list(np.array(list(map(float, x.split()))) for x in x_test)[1:]
            
            subRMSE = 0
            subRMSE_sw = 0
            count = 0
            for i,x in enumerate(x_test):
                
                # y_test_q = NARNet_Quantized_Inference(weights, x, fxp_rng)
                
                # parse FPGA outputs
                outputs = open(f"../VerilogOutputs/S{sub}_D{i+1}_Q{N}.{Q}.txt",'r').read().replace(' ','').replace('\t','').splitlines()
                outputs = [o for o in outputs if 'x' not in o]
                outputs = Fxp(outputs, like=fxp_rng)
                
                y_test_hw = np.array([mapminmax_reverse(Fxp(o, like=fxp_float) ) for o in outputs], dtype=float)[:len(x)]
                rmse_hw = math.sqrt(np.sum((y_test_hw[16:] - x[16:]) ** 2) / y_test_hw.size)
                
                # y_test_software = NARNet_Quantized_Inference(weights, x, fxp_rng)
                # rmse_sw = math.sqrt(np.sum((y_test_software[16:] - x[16:]) ** 2) / y_test_hw.size)
                
                count += 1
                subRMSE += rmse_hw
                # subRMSE_sw += rmse_sw
            
            subRMSE /= count
            subRMSE_sw /= count
            
            overallRMSE += subRMSE
            overallRMSE_sw += subRMSE_sw
            
        overallRMSE /= 7
        overallRMSE_sw /= 7
        
        
        rmsesHW.append(overallRMSE)
        rmsesSW.append(overallRMSE_sw)
    
    e = time.time() - s
    print(e)
    return rmsesHW, rmsesSW

def plot_graphs():
    NQs  = ["(8,7)", "(10,8)", "(12,10)", "(14,12)", "(16,12)"]
    area = np.array([11302.634, 24117.987, 79309.952, 251772.498, 1003547.863])
    power = np.array([253.192, 515.585, 1540.008, 5281.870, 19482.121])
    rmse = np.array([2.079, .500, .490, .490, .460])
    rmse_sw = np.array([1.05, 0.46, 0.42, 0.42, 0.42])
    
    fom = np.sqrt((area/1000000)**2 + (power/1000)**2 + rmse**2)
    
    xaxis = np.arange(5)
    
    # plt.plot(xaxis, rmse_sw, label="Software", linewidth=1.75)
    # plt.scatter(xaxis, rmse,  s=5)
    
    # plt.plot(xaxis, rmse, label="Hardware", linewidth=1.75, color='#ff7f0e')
    # plt.scatter(xaxis, rmse,  s=5, color='#ff7f0e')
    width = 0.35
    plt.bar(xaxis - width/2, rmse_sw, width=width, label='Software')
    plt.bar(xaxis + width/2, rmse, width=width, label='Hardware')
    plt.xlabel("Configuration")
    plt.ylabel("RMSE")
    plt.xticks(xaxis, NQs)
    plt.title("Model Error")
    plt.legend()
    plt.savefig("config_acc.pdf")
    
    fig,ax = plt.subplots()    
    # ax2 = ax.twinx()
    # l1 = ax.plot(xaxis, area, color='#1f77b4', label='Area', linewidth=1.75)
    # ax.scatter(xaxis, area, color='#1f77b4',  s=5)
    # l2 = ax2.plot(xaxis, power, color='#ff7f0e', label='Power', linewidth=1.75)
    # ax2.scatter(xaxis, power, color='#ff7f0e', s=5)
    plt.bar(xaxis, area)
    
    plt.xlabel("Configuration")
    plt.xticks(xaxis, NQs)
    plt.ylabel("Area ($\mu m^2$)")
    # ax2.set_ylabel("Power ($\mu W$)")
    # ax.legend(l1+l2, [l.get_label() for l in l1+l2])
    plt.title("Area Requirements")
    plt.savefig("area_req.pdf")
    
    fig,ax = plt.subplots()
    plt.xlabel("Configuration")
    plt.bar(xaxis, power)
    plt.ticklabel_format(axis='y', style='sci', scilimits=(0,0))
    plt.xticks(xaxis, NQs)
    plt.ylabel("Power ($\mu W$)")
    plt.title("Power Requirements")
    
    plt.savefig("power_req.pdf")
    
    fig,ax = plt.subplots()
    # plt.scatter(1, fom[1], color="none", fillstyle='none', edgecolor="red", s=15)
    
    plt.plot(xaxis, fom,linewidth=1.5)
    plt.scatter(xaxis, fom,s=5)
    plt.plot(1, fom[1], lw=0, marker='o', fillstyle='none', color='r')
    
    plt.xlabel("Configuration")
    plt.ylabel("Figure of Merit")
    plt.xticks(xaxis, NQs)
    plt.title("Tradeoff Analysis")
    plt.savefig("fom.pdf")
    
plot_graphs()