`timescale 1ns / 1ps


module neuron(
        w, x, b, out
    );
    
//    input wire clk, enable, rst;
    input wire [7:0] w, x, b;
    output wire [7:0] out;
    
    wire [7:0] int_res;
    
    qmult mult (.i_multiplicand(w), .i_multiplier(x), .o_result(int_res), .ovr(1'b0));
    qadd acc (.a(int_res), .b(b), .c(out));
    
    
endmodule
