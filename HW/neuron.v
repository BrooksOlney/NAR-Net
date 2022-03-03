`timescale 1ns / 1ps

(* use_dsp = "yes" *) module neuron_v2 #(parameter N=10,Q=8)(
    input clk,
    input inptReady,
    input rst,
    input signed [N-1:0] w,
    input signed [N-1:0] x,
    input signed [N-1:0] b,
    output signed [N-1:0] out
    );
    
//    wire g, r, s; // guard, round and sticky bits
    reg signed [2*N+4:0] acc = 0; 
    reg signed [2*N:0] mult_res = 0;
    reg overflow = 0;
    reg biasAdded = 0;
//    assign out = {acc[2*N-2], acc[Q+N-1:Q]};
    assign out = 
//    (acc[2*N+4:2*N+3] == 2'b10) ? {1'b1, {(N-1){1'b0}}}:
//                 (acc[2*N+4:2*N+3] == 2'b01) ? {1'b0, {(N-1){1'b1}}} : 
                //  (!g) ? {acc[2*N+4], acc[2*Q-1:Q]} :
                //  (g & (r|s)) ? {acc[2*N+4], acc[2*Q-1:Q+1], 1'b0} : 
                //  (g & r & s) ? {acc[2*N+4], acc[2*Q-1:Q] + 1'b1}  :
                 {acc[2*N+4], acc[N-2+Q:Q] }; 
                 
    
//    assign g = acc[Q-1];
//    assign r = acc[Q-2];
//    assign s = |acc[Q-3:0];


    always @(posedge clk) begin
        if (rst == 1) begin
            acc = 0;
            biasAdded = 0;
        end else if (inptReady == 1) begin
            
            mult_res = w * x;
            {overflow, acc} = acc + mult_res;
        end else if (biasAdded == 0) begin
                {overflow, acc} = acc + (b <<< Q);
                biasAdded = 1;
        end 
    end
    
endmodule
