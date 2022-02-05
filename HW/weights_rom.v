`timescale 1ns / 1ps
 (* rom_style = "block" *)
module weights_rom #(parameter N=8, parameter Q=7) (
    clk, addr, rom_out
    );
    input wire clk;
    input wire [7:0] addr;
    output wire signed [N-1:0] rom_out;
     (* rom_style = "block" *)
    reg signed [N-1:0] rom [0:255];
    reg signed [N-1:0] rom_reg = 0;
    assign rom_out = rom_reg;
     
    initial begin
        $readmemb("F:\\Research\\NAR-Net\\HW\\Weights\\S1.mem", rom);
    end
     
     
    always @(negedge clk) begin
        rom_reg <= rom[addr];

    end
endmodule
