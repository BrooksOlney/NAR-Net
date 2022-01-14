`timescale 1ns / 1ps

module NARNN_tb(

    );
    
reg clk, rst, enable;
wire [31:0] y_out;


NARNet uut (.clk(clk), .enable(enable), .rst(rst), .x_in(32'd0), .y_out(y_out));

initial begin
    
    clk = 1'b0;
    #10;
    clk = 1'b1;
    #10;

end

    
endmodule
