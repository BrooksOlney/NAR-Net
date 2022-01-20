`timescale 1ns / 1ps


module neuron
(
        w, x, b, ovr, out
    );
    
//  input wire clk, enable, rst;
    input wire signed [7:0] w, x, b;
    output wire ovr;
    output reg signed [7:0] out;
    
    reg signed [7:0] mult_res, add_res;
    reg signed [15:0] tmp;
    reg overflow, underflow, extra;
    
    
//    assign int_res = {w[7] ^ x[7], tmp[12:6]};    
        
//    assign out = (mult_res[7] == 1 && add_res[7] == 1) ? 8'b01111111 : 
//                 (mult_res[7] == 0 && add_res[7] == 0) ? 8'b10000000 : add_res;
//    assign out = mult_res + b;
    always @(w or x or b) begin
        
        tmp = w * x;
        mult_res = {w[7] ^ x[7], tmp[12:6]};
        {extra, add_res} = {mult_res[7], mult_res} + {b[7], b};
        overflow = ({extra, add_res[7]} == 2'b01);
        underflow = ({extra, add_res[7]} == 2'b10);
//        if (b[7] == 1) begin
//            add_res = mult_res - b;
//        end
//        else begin
//            add_res = mult_res + b;
//        end
    end
    
    always @* begin
        
        if (overflow) begin
            out = {1'b0, {7{1'b1}}}; 
        end else if (underflow) begin
            out = {1'b1, {7{1'b0}}};
        end else begin
            out = add_res;
        end
    
    end
    
//    qmult mult (.i_multiplicand(w), .i_multiplier(x), .o_result(int_res), .ovr(ovr));
//    qadd acc (.a(int_res), .b(b), .c(out));
    
    
endmodule
