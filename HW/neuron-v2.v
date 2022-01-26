`timescale 1ns / 1ps

module neuron_v2 #(parameter N=10,Q=9)(
    input clk,
    input inptReady,
    input rst,
    input signed [N-1:0] w,
    input signed [N-1:0] x,
    output signed [N-1:0] out,
    output reg outReady
    );
    
    reg signed [2*N-2:0] acc = 0, mult_res = 0;
    reg overflow;
    assign out = acc >>> Q;
    
    always @(posedge clk) begin
        if (rst == 1) begin
            acc = 0;
            outReady = 0;
        end else if (inptReady == 1) begin
            mult_res = w * x;
            {overflow, acc} = acc + mult_res;

            // if (overflow) begin
            //   if (acc[2*N-2] == mult_res[2*N-2]) begin
                
            //   end
            // end

            outReady = 1;
        end else
            outReady = 0;
    end
    
endmodule
