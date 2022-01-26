`timescale 1ns / 1ps


module neuron #(parameter N = 8, Q = 7)
(
        w, x, b, out
    );
    
//  input wire clk, enable, rst;
    input wire signed [N-1:0] w, x;
    input wire signed [2*N-1:0] b;
//    output wire ovr;
    output wire signed [2*N-1:0] out;
    
//    reg signed  [7:0] w_reg, x_reg, add_res; 
    wire signed [2*N-1:0] mult_res, add_res;
    wire signed [N-1:0] tmp;
    reg overflow, underflow, extra;
    
    assign mult_res = w * x;
//    assign tmp = ((mult_res + (2**Q)) >>> (Q));
    

//    assign out = {add_res[(N*2)-1], add_res[(N*2)-2:(N*2)-3-Q]};
//    assign out = tmp + b;
//    assign out = add_res >>> Q;
//    assign out = (((mult_res + 2**(Q-1)) + (b <<< 1)) >>> 1;
//    assign out = (((mult_res) + (b <<< Q)) + 2**(Q-1)) >>> Q;
    assign out = mult_res + b;
    always @* begin
//        if (x[7] == 1) begin
//            x_reg <= ~x + 1;
//        end else begin
//            x_reg <= x;
//        end
    
//        if (w[7] == 1) begin
//            w_reg <= ~w + 1;
//        end else begin
//            w_reg <= w;
//        end
        
//        mult_res = w * x;
//        tmp = mult_res >> Q;
//        tmp = {mult_res[(N*2)-2], mult_res[(N*2)-3:(N*2)-3-Q]};
//        add_res = mult_res + (b <<< Q);
        
//        tmp = (mult_res >> Q);

        
//        {extra, add_res} = {tmp[15], tmp} + {b[7], 1'b0, b, {6{1'b0}}};
//        overflow = ({extra, add_res[7]} == 2'b01);
//        underflow = ({extra, add_res[7]} == 2'b10);
    
    end
    
    
//    always @* begin
        
//        if (overflow) begin
//            out = {1'b0, {7{1'b1}}}; 
//        end else if (underflow) begin
//            out = {1'b1, {7{1'b0}}};
//        end else begin
//            out = add_res;
//        end
    
//    end
    
endmodule
