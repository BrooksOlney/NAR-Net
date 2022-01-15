`timescale 1ns / 1ps

module NARNN_tb(

    );
    
reg clk, rst, enable;
wire [31:0] y_out;


NARNet uut (.clk(clk), .enable(1'b1), .rst(1'b0), .x_in(32'd0), .y_out(y_out));

always begin
    
    clk = 1'b0;
    #1;
    clk = 1'b1;
    #1;
    

end

    
endmodule
