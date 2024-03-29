# NAR-NET Project
This project implements a nonlinear autoregressive neural network in Verilog for low-power hardware implementations, and does some preliminary modeling, and input/output generation using Python and the fxpmath library. Originally this was used for the D1NAM0 type-2 diabetes dataset.

## Directories
- **C**: just some C code as an early implementation before going with Python, unimportant.
- **HW**: Vivado project with all hardware sources, and quantized neural network weight/bias files.
- **Matlab**: Just stored some matlab output scripts to use as a guide for writing the Python models and whatnot.
- **Paper/Figures**: Figures for the AICAS/MWSCAS papers (plots generated in Python).
- **Python**: All Python code for modeling the NARNN to test levels of quantization, and to generate weights and inputs for the Verilog code.
- **SubjectData**: Input data for each subject (S1, S2, ...) from the dataset. Each row is a day of samples, and considered an independent train or test set for the model.
- **SubjectNNWeights**: Weights for models of each subject trained on one row of data (in Matlab). Every 2 rows are the bias/weights for a different layer - e.g., row0 = layer0bias, row1 = layer0weight, row2 = layer1bias, row3 = layer1weight. These come directly from the Matlab output scripts e.g., from Matlab/ directory.
- **VerilogOutputs**: Where I would have the testbench output to for later comparison. Testbench outputs raw binary and there is Python code for parsing it and converting to float then comparing to the ground truth.

## Some important files
In the HW directory:
- **NARNET.v** is the top module, which instantiates the tanh LUT, neurons, tapdelay counters and the ROM (weights). The core logic for implementing the NARNN function is here.
- **neuron.v** performs the multiply-accumulate operations in fixed point. This is parameterized with N and Q to tell how many total bits and fraction bits there are (fixed point notation).
- **weights_rom.v** stores the weights and biases, which you have to specify the path for.
- **NARNN_tb.v** is the testbench for NARNET.v. It loads the input data and weights, then computes the output from the verilog model and puts it into a file specified in the testbench.

In the Python directory:
- **fpga_functions.py** contains all of the functions for generating input files to the Verilog code - subject weights, input trace data, and tanh LUT, all for a given fixed-point notation.
- **narnet.py** contains the code to implement the feedforward NARNN operation - essentially transcribed from the Matlab code.
- **mwscas_automate.py** just contains some code for automating some tests for the MWSCAS paper, which was a "design space exploration" of the architecture defined in the AICAS paper. It might help with showing how the flow works.

## How to use this repo
There are a lot of moving parts here, but generally the flow will consist of something like this.

Read the description of the directories, and inspect the contents to know how your own data fits into this organization. Basically, just **SubjectData** and **SubjectNNWeights**. 

If you need to change the architecture of the model, unfortunately, this isn't something that is parameterized in the HW code. You will have to go in and change the sizes of the registers for the tap delays (xdl) and the size of the hidden layer (l1_ind). Originally, the code implemented a model with 16 tap delays and 5 neurons. These aspects of the logic would have to be changed, as well as the storage of data in the ROM module. 

Once you have your data from matlab in place, you can use the Python code in **fpga_functions.py** to generate the fixed-point notation files that are formatted to work with the Verilog code. You will need to have all of this in place before running simulations.

Modify the testbench code to accept your files - this isn't something that is automated, and you'll have to specify different inputs then re-run the simulation. I used Vivado for the simulations, but you can use another open-source simulator since there aren't any Xilinx primitives being used. Once you have outputs generated by the testbench, you can use code in **fpga_functions.py** to analyze the data and compare it to the ground truths.