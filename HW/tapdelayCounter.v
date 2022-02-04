`timescale 1ns / 1ps

module tapdelayCounter #(parameter INIT_VAL = 0)(
    input clk,
    input en,
    input rst,
    output [4:0] count
    );
    
    reg [4:0] count_reg = INIT_VAL;
    
    assign count = count_reg;
    
    always @(posedge clk) begin
    
        if (rst) begin
            count_reg <= INIT_VAL;
        end else if (en) begin
            if (count_reg == 5'b10000) 
                count_reg <= 0;
            else
                count_reg <= count_reg + 1;            
        end
    end
endmodule
