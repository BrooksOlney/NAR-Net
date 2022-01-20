`timescale 1ns / 1ps


module tanh_lut(
    input [7:0] addr,
    input clk,
    output [7:0] tanh_out
    );

reg [7:0] tanh_out_reg;
assign tanh_out = tanh_out_reg;

always @(negedge clk) begin
    case (addr)
		8'b00000000 : tanh_out_reg <= 8'b00000000;
		8'b00000001 : tanh_out_reg <= 8'b00000000;
		8'b00000010 : tanh_out_reg <= 8'b00000001;
		8'b00000011 : tanh_out_reg <= 8'b00000010;
		8'b00000100 : tanh_out_reg <= 8'b00000011;
		8'b00000101 : tanh_out_reg <= 8'b00000100;
		8'b00000110 : tanh_out_reg <= 8'b00000101;
		8'b00000111 : tanh_out_reg <= 8'b00000110;
		8'b00001000 : tanh_out_reg <= 8'b00000111;
		8'b00001001 : tanh_out_reg <= 8'b00001000;
		8'b00001010 : tanh_out_reg <= 8'b00001001;
		8'b00001011 : tanh_out_reg <= 8'b00001010;
		8'b00001100 : tanh_out_reg <= 8'b00001011;
		8'b00001101 : tanh_out_reg <= 8'b00001100;
		8'b00001110 : tanh_out_reg <= 8'b00001101;
		8'b00001111 : tanh_out_reg <= 8'b00001110;
		8'b00010000 : tanh_out_reg <= 8'b00001111;
		8'b00010001 : tanh_out_reg <= 8'b00010000;
		8'b00010010 : tanh_out_reg <= 8'b00010001;
		8'b00010011 : tanh_out_reg <= 8'b00010010;
		8'b00010100 : tanh_out_reg <= 8'b00010011;
		8'b00010101 : tanh_out_reg <= 8'b00010100;
		8'b00010110 : tanh_out_reg <= 8'b00010101;
		8'b00010111 : tanh_out_reg <= 8'b00010110;
		8'b00011000 : tanh_out_reg <= 8'b00010110;
		8'b00011001 : tanh_out_reg <= 8'b00010111;
		8'b00011010 : tanh_out_reg <= 8'b00011000;
		8'b00011011 : tanh_out_reg <= 8'b00011001;
		8'b00011100 : tanh_out_reg <= 8'b00011010;
		8'b00011101 : tanh_out_reg <= 8'b00011011;
		8'b00011110 : tanh_out_reg <= 8'b00011011;
		8'b00011111 : tanh_out_reg <= 8'b00011100;
		8'b00100000 : tanh_out_reg <= 8'b00011101;
		8'b00100001 : tanh_out_reg <= 8'b00011110;
		8'b00100010 : tanh_out_reg <= 8'b00011111;
		8'b00100011 : tanh_out_reg <= 8'b00011111;
		8'b00100100 : tanh_out_reg <= 8'b00100000;
		8'b00100101 : tanh_out_reg <= 8'b00100001;
		8'b00100110 : tanh_out_reg <= 8'b00100010;
		8'b00100111 : tanh_out_reg <= 8'b00100010;
		8'b00101000 : tanh_out_reg <= 8'b00100011;
		8'b00101001 : tanh_out_reg <= 8'b00100100;
		8'b00101010 : tanh_out_reg <= 8'b00100100;
		8'b00101011 : tanh_out_reg <= 8'b00100101;
		8'b00101100 : tanh_out_reg <= 8'b00100110;
		8'b00101101 : tanh_out_reg <= 8'b00100110;
		8'b00101110 : tanh_out_reg <= 8'b00100111;
		8'b00101111 : tanh_out_reg <= 8'b00101000;
		8'b00110000 : tanh_out_reg <= 8'b00101000;
		8'b00110001 : tanh_out_reg <= 8'b00101001;
		8'b00110010 : tanh_out_reg <= 8'b00101001;
		8'b00110011 : tanh_out_reg <= 8'b00101010;
		8'b00110100 : tanh_out_reg <= 8'b00101010;
		8'b00110101 : tanh_out_reg <= 8'b00101011;
		8'b00110110 : tanh_out_reg <= 8'b00101100;
		8'b00110111 : tanh_out_reg <= 8'b00101100;
		8'b00111000 : tanh_out_reg <= 8'b00101101;
		8'b00111001 : tanh_out_reg <= 8'b00101101;
		8'b00111010 : tanh_out_reg <= 8'b00101110;
		8'b00111011 : tanh_out_reg <= 8'b00101110;
		8'b00111100 : tanh_out_reg <= 8'b00101110;
		8'b00111101 : tanh_out_reg <= 8'b00101111;
		8'b00111110 : tanh_out_reg <= 8'b00101111;
		8'b00111111 : tanh_out_reg <= 8'b00110000;
		8'b01000000 : tanh_out_reg <= 8'b00110000;
		8'b01000001 : tanh_out_reg <= 8'b00110001;
		8'b01000010 : tanh_out_reg <= 8'b00110001;
		8'b01000011 : tanh_out_reg <= 8'b00110001;
		8'b01000100 : tanh_out_reg <= 8'b00110010;
		8'b01000101 : tanh_out_reg <= 8'b00110010;
		8'b01000110 : tanh_out_reg <= 8'b00110011;
		8'b01000111 : tanh_out_reg <= 8'b00110011;
		8'b01001000 : tanh_out_reg <= 8'b00110011;
		8'b01001001 : tanh_out_reg <= 8'b00110100;
		8'b01001010 : tanh_out_reg <= 8'b00110100;
		8'b01001011 : tanh_out_reg <= 8'b00110100;
		8'b01001100 : tanh_out_reg <= 8'b00110101;
		8'b01001101 : tanh_out_reg <= 8'b00110101;
		8'b01001110 : tanh_out_reg <= 8'b00110101;
		8'b01001111 : tanh_out_reg <= 8'b00110110;
		8'b01010000 : tanh_out_reg <= 8'b00110110;
		8'b01010001 : tanh_out_reg <= 8'b00110110;
		8'b01010010 : tanh_out_reg <= 8'b00110110;
		8'b01010011 : tanh_out_reg <= 8'b00110111;
		8'b01010100 : tanh_out_reg <= 8'b00110111;
		8'b01010101 : tanh_out_reg <= 8'b00110111;
		8'b01010110 : tanh_out_reg <= 8'b00110111;
		8'b01010111 : tanh_out_reg <= 8'b00111000;
		8'b01011000 : tanh_out_reg <= 8'b00111000;
		8'b01011001 : tanh_out_reg <= 8'b00111000;
		8'b01011010 : tanh_out_reg <= 8'b00111000;
		8'b01011011 : tanh_out_reg <= 8'b00111000;
		8'b01011100 : tanh_out_reg <= 8'b00111001;
		8'b01011101 : tanh_out_reg <= 8'b00111001;
		8'b01011110 : tanh_out_reg <= 8'b00111001;
		8'b01011111 : tanh_out_reg <= 8'b00111001;
		8'b01100000 : tanh_out_reg <= 8'b00111001;
		8'b01100001 : tanh_out_reg <= 8'b00111010;
		8'b01100010 : tanh_out_reg <= 8'b00111010;
		8'b01100011 : tanh_out_reg <= 8'b00111010;
		8'b01100100 : tanh_out_reg <= 8'b00111010;
		8'b01100101 : tanh_out_reg <= 8'b00111010;
		8'b01100110 : tanh_out_reg <= 8'b00111010;
		8'b01100111 : tanh_out_reg <= 8'b00111011;
		8'b01101000 : tanh_out_reg <= 8'b00111011;
		8'b01101001 : tanh_out_reg <= 8'b00111011;
		8'b01101010 : tanh_out_reg <= 8'b00111011;
		8'b01101011 : tanh_out_reg <= 8'b00111011;
		8'b01101100 : tanh_out_reg <= 8'b00111011;
		8'b01101101 : tanh_out_reg <= 8'b00111011;
		8'b01101110 : tanh_out_reg <= 8'b00111100;
		8'b01101111 : tanh_out_reg <= 8'b00111100;
		8'b01110000 : tanh_out_reg <= 8'b00111100;
		8'b01110001 : tanh_out_reg <= 8'b00111100;
		8'b01110010 : tanh_out_reg <= 8'b00111100;
		8'b01110011 : tanh_out_reg <= 8'b00111100;
		8'b01110100 : tanh_out_reg <= 8'b00111100;
		8'b01110101 : tanh_out_reg <= 8'b00111100;
		8'b01110110 : tanh_out_reg <= 8'b00111100;
		8'b01110111 : tanh_out_reg <= 8'b00111100;
		8'b01111000 : tanh_out_reg <= 8'b00111101;
		8'b01111001 : tanh_out_reg <= 8'b00111101;
		8'b01111010 : tanh_out_reg <= 8'b00111101;
		8'b01111011 : tanh_out_reg <= 8'b00111101;
		8'b01111100 : tanh_out_reg <= 8'b00111101;
		8'b01111101 : tanh_out_reg <= 8'b00111101;
		8'b01111110 : tanh_out_reg <= 8'b00111101;
		8'b01111111 : tanh_out_reg <= 8'b00111101;
		8'b10000000 : tanh_out_reg <= 8'b11000011;
		8'b10000001 : tanh_out_reg <= 8'b11000011;
		8'b10000010 : tanh_out_reg <= 8'b11000011;
		8'b10000011 : tanh_out_reg <= 8'b11000011;
		8'b10000100 : tanh_out_reg <= 8'b11000011;
		8'b10000101 : tanh_out_reg <= 8'b11000011;
		8'b10000110 : tanh_out_reg <= 8'b11000011;
		8'b10000111 : tanh_out_reg <= 8'b11000011;
		8'b10001000 : tanh_out_reg <= 8'b11000011;
		8'b10001001 : tanh_out_reg <= 8'b11000100;
		8'b10001010 : tanh_out_reg <= 8'b11000100;
		8'b10001011 : tanh_out_reg <= 8'b11000100;
		8'b10001100 : tanh_out_reg <= 8'b11000100;
		8'b10001101 : tanh_out_reg <= 8'b11000100;
		8'b10001110 : tanh_out_reg <= 8'b11000100;
		8'b10001111 : tanh_out_reg <= 8'b11000100;
		8'b10010000 : tanh_out_reg <= 8'b11000100;
		8'b10010001 : tanh_out_reg <= 8'b11000100;
		8'b10010010 : tanh_out_reg <= 8'b11000100;
		8'b10010011 : tanh_out_reg <= 8'b11000101;
		8'b10010100 : tanh_out_reg <= 8'b11000101;
		8'b10010101 : tanh_out_reg <= 8'b11000101;
		8'b10010110 : tanh_out_reg <= 8'b11000101;
		8'b10010111 : tanh_out_reg <= 8'b11000101;
		8'b10011000 : tanh_out_reg <= 8'b11000101;
		8'b10011001 : tanh_out_reg <= 8'b11000101;
		8'b10011010 : tanh_out_reg <= 8'b11000110;
		8'b10011011 : tanh_out_reg <= 8'b11000110;
		8'b10011100 : tanh_out_reg <= 8'b11000110;
		8'b10011101 : tanh_out_reg <= 8'b11000110;
		8'b10011110 : tanh_out_reg <= 8'b11000110;
		8'b10011111 : tanh_out_reg <= 8'b11000110;
		8'b10100000 : tanh_out_reg <= 8'b11000111;
		8'b10100001 : tanh_out_reg <= 8'b11000111;
		8'b10100010 : tanh_out_reg <= 8'b11000111;
		8'b10100011 : tanh_out_reg <= 8'b11000111;
		8'b10100100 : tanh_out_reg <= 8'b11000111;
		8'b10100101 : tanh_out_reg <= 8'b11001000;
		8'b10100110 : tanh_out_reg <= 8'b11001000;
		8'b10100111 : tanh_out_reg <= 8'b11001000;
		8'b10101000 : tanh_out_reg <= 8'b11001000;
		8'b10101001 : tanh_out_reg <= 8'b11001000;
		8'b10101010 : tanh_out_reg <= 8'b11001001;
		8'b10101011 : tanh_out_reg <= 8'b11001001;
		8'b10101100 : tanh_out_reg <= 8'b11001001;
		8'b10101101 : tanh_out_reg <= 8'b11001001;
		8'b10101110 : tanh_out_reg <= 8'b11001010;
		8'b10101111 : tanh_out_reg <= 8'b11001010;
		8'b10110000 : tanh_out_reg <= 8'b11001010;
		8'b10110001 : tanh_out_reg <= 8'b11001010;
		8'b10110010 : tanh_out_reg <= 8'b11001011;
		8'b10110011 : tanh_out_reg <= 8'b11001011;
		8'b10110100 : tanh_out_reg <= 8'b11001011;
		8'b10110101 : tanh_out_reg <= 8'b11001100;
		8'b10110110 : tanh_out_reg <= 8'b11001100;
		8'b10110111 : tanh_out_reg <= 8'b11001100;
		8'b10111000 : tanh_out_reg <= 8'b11001101;
		8'b10111001 : tanh_out_reg <= 8'b11001101;
		8'b10111010 : tanh_out_reg <= 8'b11001101;
		8'b10111011 : tanh_out_reg <= 8'b11001110;
		8'b10111100 : tanh_out_reg <= 8'b11001110;
		8'b10111101 : tanh_out_reg <= 8'b11001111;
		8'b10111110 : tanh_out_reg <= 8'b11001111;
		8'b10111111 : tanh_out_reg <= 8'b11001111;
		8'b11000000 : tanh_out_reg <= 8'b11010000;
		8'b11000001 : tanh_out_reg <= 8'b11010000;
		8'b11000010 : tanh_out_reg <= 8'b11010001;
		8'b11000011 : tanh_out_reg <= 8'b11010001;
		8'b11000100 : tanh_out_reg <= 8'b11010010;
		8'b11000101 : tanh_out_reg <= 8'b11010010;
		8'b11000110 : tanh_out_reg <= 8'b11010010;
		8'b11000111 : tanh_out_reg <= 8'b11010011;
		8'b11001000 : tanh_out_reg <= 8'b11010011;
		8'b11001001 : tanh_out_reg <= 8'b11010100;
		8'b11001010 : tanh_out_reg <= 8'b11010100;
		8'b11001011 : tanh_out_reg <= 8'b11010101;
		8'b11001100 : tanh_out_reg <= 8'b11010110;
		8'b11001101 : tanh_out_reg <= 8'b11010110;
		8'b11001110 : tanh_out_reg <= 8'b11010111;
		8'b11001111 : tanh_out_reg <= 8'b11010111;
		8'b11010000 : tanh_out_reg <= 8'b11011000;
		8'b11010001 : tanh_out_reg <= 8'b11011000;
		8'b11010010 : tanh_out_reg <= 8'b11011001;
		8'b11010011 : tanh_out_reg <= 8'b11011010;
		8'b11010100 : tanh_out_reg <= 8'b11011010;
		8'b11010101 : tanh_out_reg <= 8'b11011011;
		8'b11010110 : tanh_out_reg <= 8'b11011100;
		8'b11010111 : tanh_out_reg <= 8'b11011100;
		8'b11011000 : tanh_out_reg <= 8'b11011101;
		8'b11011001 : tanh_out_reg <= 8'b11011110;
		8'b11011010 : tanh_out_reg <= 8'b11011110;
		8'b11011011 : tanh_out_reg <= 8'b11011111;
		8'b11011100 : tanh_out_reg <= 8'b11100000;
		8'b11011101 : tanh_out_reg <= 8'b11100001;
		8'b11011110 : tanh_out_reg <= 8'b11100001;
		8'b11011111 : tanh_out_reg <= 8'b11100010;
		8'b11100000 : tanh_out_reg <= 8'b11100011;
		8'b11100001 : tanh_out_reg <= 8'b11100100;
		8'b11100010 : tanh_out_reg <= 8'b11100101;
		8'b11100011 : tanh_out_reg <= 8'b11100101;
		8'b11100100 : tanh_out_reg <= 8'b11100110;
		8'b11100101 : tanh_out_reg <= 8'b11100111;
		8'b11100110 : tanh_out_reg <= 8'b11101000;
		8'b11100111 : tanh_out_reg <= 8'b11101001;
		8'b11101000 : tanh_out_reg <= 8'b11101010;
		8'b11101001 : tanh_out_reg <= 8'b11101010;
		8'b11101010 : tanh_out_reg <= 8'b11101011;
		8'b11101011 : tanh_out_reg <= 8'b11101100;
		8'b11101100 : tanh_out_reg <= 8'b11101101;
		8'b11101101 : tanh_out_reg <= 8'b11101110;
		8'b11101110 : tanh_out_reg <= 8'b11101111;
		8'b11101111 : tanh_out_reg <= 8'b11110000;
		8'b11110000 : tanh_out_reg <= 8'b11110001;
		8'b11110001 : tanh_out_reg <= 8'b11110010;
		8'b11110010 : tanh_out_reg <= 8'b11110011;
		8'b11110011 : tanh_out_reg <= 8'b11110100;
		8'b11110100 : tanh_out_reg <= 8'b11110101;
		8'b11110101 : tanh_out_reg <= 8'b11110110;
		8'b11110110 : tanh_out_reg <= 8'b11110111;
		8'b11110111 : tanh_out_reg <= 8'b11111000;
		8'b11111000 : tanh_out_reg <= 8'b11111001;
		8'b11111001 : tanh_out_reg <= 8'b11111010;
		8'b11111010 : tanh_out_reg <= 8'b11111011;
		8'b11111011 : tanh_out_reg <= 8'b11111100;
		8'b11111100 : tanh_out_reg <= 8'b11111101;
		8'b11111101 : tanh_out_reg <= 8'b11111110;
		8'b11111110 : tanh_out_reg <= 8'b11111111;
		8'b11111111 : tanh_out_reg <= 8'b00000000;

    endcase

end

     
endmodule
