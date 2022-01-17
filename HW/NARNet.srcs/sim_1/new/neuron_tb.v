`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////

module neuron_tb(
     
    );
    
    reg clk = 0, enable = 0, rst = 0;
    reg signed [7:0] w, x, b;
    wire signed [7:0] res;
    
    neuron ntest (.w(w), .x(x), .b(b), .ovr(), .out(res));
    
    
    always begin
        clk = 0;
        #1;
        clk = 1;
        #1;
    end
    
    initial begin
        #5;
        w = 8'hcc;
        x = 8'h18;
        b = 8'hc2;
        #25;
    
    end
    
    
endmodule
