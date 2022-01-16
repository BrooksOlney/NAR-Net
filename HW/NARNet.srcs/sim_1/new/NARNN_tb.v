`timescale 1ns / 1ps

module NARNN_tb(

    );
    
reg clk = 0, rst = 0, enable = 0, x_ready = 0;
wire [31:0] y_out;
reg [31:0] x_in;


NARNet uut (.clk(clk), .enable(enable), .rst(rst), .x_in(x_in), .x_ready(x_ready), .y_out(y_out));

always begin
    
    clk = 1'b0;
    #1;
    clk = 1'b1;
    #1;
end

initial begin
    enable = 1;
    #200;
    x_in <= 32'b00000101010011001100110011001100;
    x_ready <= 1;
    #5;
    x_ready <= 0;
    #100;

end
    
endmodule
