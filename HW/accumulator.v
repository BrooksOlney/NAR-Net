`timescale 1ns / 1ps

module accumulator #(parameter N=10, parameter Q=9)(
    input clk,
    input signed [N-1:0] a,
    input add,
    input rst,
    output reg signed [N-1:0] out
    );
    
    reg signed [N+1:0] int_result, tmp;
    reg signed [N-1:0] out_reg;
    reg overflow;
    
//    assign out = out_reg;
    
    always @(posedge clk) begin
        if (rst) begin
            int_result <= 0;
            tmp <= 0;
            overflow <= 0;
        end else if (add == 1) begin
            {overflow, int_result} <= int_result + a;
            
        end
    end
    
    always @* begin
//        if (overflow) begin
//            if (a[N-1] == 1) begin
//                out <= {1'b1, {(N-1){1'b0}}};
//            end else begin
//                out <= {1'b0, {(N-1){1'b1}}};
//            end
//        end else begin
//            out <= {int_result[N+2], int_result[Q:0]};
//        end
//        if (int_result > 2**(N)) begin
//            out <= {1'b1, {(N){1'b0}}};
//        end else begin
//            out <= {int_result[N], int_result[Q-1:0]};
//        end
        
        if (int_result[N:N-1] == 2'b10) begin
            out <= {1'b1, {(N-1){1'b0}}};
        end else if (int_result[N:N-1] == 2'b01) begin
            out <= {1'b0, {(N-1){1'b1}}};
            
        end else begin
            out <= {int_result[N], int_result[Q-1:0]};
        end
    end
    
endmodule
