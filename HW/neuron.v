`timescale 1ns / 1ps


module neuron(
        w, x, b, ovr, out
    );
    
//    input wire clk, enable, rst;
    input wire signed [7:0] w, x, b;
    output wire ovr;
    output wire [7:0] out;
    
    wire signed [7:0] int_res;
    reg signed [15:0] tmp;
    
    assign int_res = {w[7] ^ x[7], tmp[12:6]};    
    assign out = int_res + b;
    
    always @(w or x or b) begin
        
        tmp <= w * x;
        
    end
    
//    qmult mult (.i_multiplicand(w), .i_multiplier(x), .o_result(int_res), .ovr(ovr));
//    qadd acc (.a(int_res), .b(b), .c(out));
    
    
endmodule
