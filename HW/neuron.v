`timescale 1ns / 1ps


module neuron
(
        w, x, b, out
    );
    
//  input wire clk, enable, rst;
    input wire signed [7:0] w, x, b;
//    output wire ovr;
    output wire signed [7:0] out;
    
//    reg signed  [7:0] w_reg, x_reg, add_res; 
    reg signed [15:0] mult_res, add_res;
    reg signed [7:0] tmp;
    reg overflow, underflow, extra;
    

//    assign out = {add_res[15], add_res[12:6]};
    assign out = tmp + b;

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
        
//        w_reg <= w;
//        x_reg <= x;
        
        mult_res = w * x;
        tmp = (mult_res >> 7);

//        tmp = {mult_res[15], mult_res[12:6]};  
        
//        if (mult_res[5:0] >= 32 && mult_res[12:6] < 127 && tmp[7] == 1) begin
//            tmp = tmp + {8'b00000001};
//        end
              
//        if (tmp[7] == 1) 
//            tmp = tmp ^ mult_res[5];
//        else
//            tmp = tmp | mult_res[5];        
//        add_res = mult_res + (b << 6);
        
//        {extra, add_res} = {tmp[15], tmp} + {b[7], 1'b0, b, {6{1'b0}}};
//        overflow = ({extra, add_res[7]} == 2'b01);
//        underflow = ({extra, add_res[7]} == 2'b10);
    
    end
    
//    always @(w_reg, x_reg) begin
        
//        mult_res <= w_reg * x_reg;
        
//    end
    
//    always @(mult_res) begin
//        if (w[7] ^ x[7] == 1) begin
//            add_res[7] <= 1;
//            add_res[6:0] <= ~mult_res[12:6] + 1;
//        end else begin
//            add_res[7] <= 0;
//            add_res[6:0] <= mult_res[12:6];
//        end
//    end
    
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
