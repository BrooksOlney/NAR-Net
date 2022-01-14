`define WEIGHT_SOURCE "F:\\Research\\NAR-Net\\weights_quantized.txt"

module NARNet(clk,enable,rst,x_in,y_out);

parameter N=5;
parameter feedbackDelay=16;

input wire clk, enable, rst;
input wire signed [31:0] x_in;
output wire [31:0] y_out;

reg signed [7:0] b1 [0:4];
reg signed [7:0] w1 [0:4] [0:15];
reg signed [7:0] w2 [0:4];
reg signed [7:0] b2;


integer i, j;
integer weights_file, read;

initial begin
    weights_file = $fopen(`WEIGHT_SOURCE, "r");
    for (i = 0; i < 5; i = i + 1) begin
        read = $fscanf(weights_file, "%d", b1[i]);
    end
    for (i = 0; i < 5; i = i + 1) begin
        for (j = 0; j < 16; j = j + 1) begin
            read = $fscanf(weights_file, "%d", w1[i][j]);
        end
    end
    read = $fscanf(weights_file, "%d", b2);
    for (i = 0; i < 5; i = i + 1) begin
        read = $fscanf(weights_file, "%d", w2[i]);
    end
    $fclose(weights_file);
end

always @(posedge clk) begin



end


endmodule