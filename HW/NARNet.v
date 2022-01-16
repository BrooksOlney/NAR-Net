`define WEIGHT_SOURCE "F:\\Research\\NAR-Net\\weights_quantized.txt"

module NARNet(clk,enable,rst,x_in,x_ready,y_out);

// parameters for NARNN
parameter N=5;
parameter feedbackDelay=16;
parameter xoffset = 32'b01000000000011001100110011001101;//8'b01_111111; // 2.2
parameter gain    = 32'b00111101110011001100110011001101;//8'b00_000110; // 0.1
parameter ymin    = 32'b10111111100000000000000000000000;//8'b11_000000; // -1
parameter ymin_opp    = 32'b00111111100000000000000000000000;//8'b11_000000; // 1


// inputs/outputs 
input wire clk, enable, rst, x_ready;
input wire signed [31:0] x_in;
output wire [31:0] y_out;

wire [7:0] bram_addr;
wire [7:0] bram_out;

//blk_mem_gen_0 param_bram (.clka(clk), .addra(bram_addr), .douta(bram_out));
weights_rom wrom ( .addr(bram_addr), .rom_out(bram_out));

// registers for input, weights and biases
reg signed [31:0] x_in_reg;
reg signed [7:0] b1 [0:4];
reg signed [7:0] w1 [0:4] [0:15];
reg signed [7:0] b2;
reg signed [7:0] w2 [0:4];

integer i, j;
//integer weights_file, read;

//// initialize all of the weights
//initial begin
//    weights_file = $fopen(`WEIGHT_SOURCE, "r");
//    for (i = 0; i < 5; i = i + 1) begin
//        read = $fscanf(weights_file, "%d", b1[i]);
//    end
//    for (i = 0; i < 5; i = i + 1) begin
//        for (j = 0; j < 16; j = j + 1) begin
//            read = $fscanf(weights_file, "%d", w1[i][j]);
//        end
//    end
//    read = $fscanf(weights_file, "%d", b2);
//    for (i = 0; i < 5; i = i + 1) begin
//        read = $fscanf(weights_file, "%d", w2[i]);
//    end
//    $fclose(weights_file);
    
//end

reg [7:0] bram_counter = 0;
reg [2:0] row  = 0;
reg [6:0] count = 0;
reg weights_loaded = 0;
assign bram_addr = bram_counter;

always @(posedge clk) begin
if (enable == 1) begin
    if (bram_counter < 5) begin
        b1[bram_counter] <= bram_out;
        bram_counter = bram_counter + 1;
    end 
    else if (bram_counter < (5 + 80)) begin
        w1[row][(bram_counter - 5) % 16] <= bram_out;    
        if ((bram_counter - 5 + 1) % 16 == 0) begin
            row <= row + 1;
        end
        bram_counter <= bram_counter + 1;
    end
    else if (bram_counter == 85) begin
        b2 <= bram_out;
        bram_counter <= bram_counter + 1;
        row <= 0;
    end
    else if (bram_counter < 91) begin
        w2[row] <= bram_out;
        row <= row + 1;
        bram_counter <= bram_counter + 1;
    end else weights_loaded <= 1;
end
end

// NARNet pipeline states
parameter s_wait = 3'b000;
parameter s_delay = 3'b001;
parameter s_layer1 = 3'b010;
parameter s_layer2 = 3'b011;
parameter s_output = 3'b100;

reg [2:0] current_state = s_wait;
reg [8:0] ts = 0;

wire signed [7:0] res;
wire res_ovf;
reg delay_set = 0;

wire signed [7:0] w_n1, w_n2, w_n3, w_n4, w_n5, qmi1, qmi2, qmi3, qmi4, qmi5;
//reg signed [7:0] r_w_n1, r_w_n2, r_w_n3, r_w_n4, r_w_n5, r_qmi1, r_qmi2, r_qmi3, r_qmi4, r_qmi5;
reg signed [7:0] b_n1, b_n2, b_n3, b_n4, b_n5;
wire signed [7:0] n_out1, n_out2, n_out3, n_out4, n_out5;
wire signed [7:0] s1, s2, s3, s4, s5;

reg signed [7:0] n_reg1, n_reg2, n_reg3, n_reg4, n_reg5;
reg signed [7:0] tapdelay1 [0:15];
reg signed [7:0] xdl [0:16];
reg [4:0] tap = 0, l1_ind = 0, l2_ind = 0;

// initialize delay states
initial begin 
    for (i = 0; i < 16; i = i + 1) begin
        xdl[i] <= 16;
    end
    xdl[16] = 0;
end

// assign all the wire inputs for multiplication..
assign w_n1 = (current_state == s_layer1) ? w1[0][l1_ind] : 
              (current_state == s_layer2) ? w2[0] : 'bx;
assign w_n2 = (current_state == s_layer1) ? w1[1][l1_ind] : 
              (current_state == s_layer2) ? w2[1] : 'bx;
assign w_n3 = (current_state == s_layer1) ? w1[2][l1_ind] : 
              (current_state == s_layer2) ? w2[2] : 'bx;
assign w_n4 = (current_state == s_layer1) ? w1[3][l1_ind] : 
              (current_state == s_layer2) ? w2[3] : 'bx;
assign w_n5 = (current_state == s_layer1) ? w1[4][l1_ind] : 
              (current_state == s_layer2) ? w2[4] : 'bx;
                                             
assign qmi1 = (current_state == s_layer1) ? tapdelay1[l1_ind] : 
              (current_state == s_layer2) ? n_reg1 : 'bx;
assign qmi2 = (current_state == s_layer1) ? tapdelay1[l1_ind] : 
              (current_state == s_layer2) ? n_reg2 : 'bx;
assign qmi3 = (current_state == s_layer1) ? tapdelay1[l1_ind] : 
              (current_state == s_layer2) ? n_reg3 : 'bx;
assign qmi4 = (current_state == s_layer1) ? tapdelay1[l1_ind] : 
              (current_state == s_layer2) ? n_reg4 : 'bx;
assign qmi5 = (current_state == s_layer1) ? tapdelay1[l1_ind] : 
              (current_state == s_layer2) ? n_reg5 : 'bx;                                             
                                       
neuron n1 (.w(w_n1), .x(qmi1), .b(b_n1), .out(n_out1));
neuron n2 (.w(w_n2), .x(qmi2), .b(b_n2), .out(n_out2));
neuron n3 (.w(w_n3), .x(qmi3), .b(b_n3), .out(n_out3));
neuron n4 (.w(w_n4), .x(qmi4), .b(b_n4), .out(n_out4));
neuron n5 (.w(w_n5), .x(qmi5), .b(b_n5), .out(n_out5));

reg [7:0] y_out_reg;

assign y_out = y_out_reg;

//reg [7:0] acc_a, acc_b;
reg [7:0] acc_res;
//qadd acc (.a(acc_a), .b(acc_b), .c(acc_res));
reg [7:0] temp;

always @(posedge clk) begin

if (rst == 1) begin
    current_state <= s_wait;
    ts <= 0;
    
    // re-initialize delay states
    for (i = 0; i < 16; i = i + 1) begin
        xdl[i] <= 16;
    end
    xdl[16] = 0;
end
else if (enable == 1) begin
    case (current_state)
        s_wait: begin
            if (x_ready == 1'b1 && weights_loaded == 1) begin
                x_in_reg <= x_in;
                current_state <= s_delay;
            end
        end
        
        // intialize tap delays
        s_delay: begin
            if (delay_set != 1'b1) begin
                temp = mapminmax_to_fixed(x_in_reg);
                xdl[(ts + 16) % 17] = {x_in_reg[31], temp[27:20]};
                delay_set <= 1'b1;
            end
            else if (tap < 16) begin
                tapdelay1[tap] = xdl[(ts - tap - 1 ) % 17];
                tap <= tap + 1;
            end 
            else begin
                tap <= 0;
                current_state <= s_layer1;
                delay_set <= 1'b0;
                tap <= 3'b000;
                
                // add bias during the first pass (only add once)
                b_n1 <= b1[0];
                b_n2 <= b1[1];
                b_n3 <= b1[2];
                b_n4 <= b1[3];
                b_n5 <= b1[4];
            end
        end
        
        // perform layer 1 computation
        s_layer1: begin
        
            if (l1_ind < 16) begin
                // capture output, feedback into neurons
                l1_ind <= l1_ind + 1;
                n_reg1 <= n_out1;
                n_reg2 <= n_out2;
                n_reg3 <= n_out3;
                n_reg4 <= n_out4;
                n_reg5 <= n_out5;
                
                b_n1 <= n_out1;
                b_n2 <= n_out2;
                b_n3 <= n_out3;
                b_n4 <= n_out4;
                b_n5 <= n_out5;
            end else begin
                l1_ind <= 0;
                b_n1 <= 0;
                b_n2 <= 0;
                b_n3 <= 0;
                b_n4 <= 0;
                b_n5 <= 0;
                n_reg1 <= tanh_LUT(n_out1);
                n_reg2 <= tanh_LUT(n_out2);
                n_reg3 <= tanh_LUT(n_out3);
                n_reg4 <= tanh_LUT(n_out4);
                n_reg5 <= tanh_LUT(n_out5);
                current_state <= s_layer2;
            end
                   
        end
        
        s_layer2: begin
            acc_res <= n_out1 + n_out2 + n_out3 + n_out4 + n_out5 + b2;
            current_state <= s_output;
        end
        
        s_output: begin
            y_out_reg <= {acc_res[7], acc_res};
        end
    endcase
end

end

function mapminmax_to_fixed;

input [31:0] x;
reg [31:0] temp;    

begin
temp = x - xoffset;
mapminmax_to_fixed = temp * gain + 1;

end

endfunction

function tanh_LUT;
input [7:0] x;
begin
    case (x)
        0 : tanh_LUT = 00000000;
        1 : tanh_LUT = 00000000;
        2 : tanh_LUT = 11111111;
        3 : tanh_LUT = 00000000;
        4 : tanh_LUT = 11111101;
        5 : tanh_LUT = 11111110;
        6 : tanh_LUT = 11111111;
        7 : tanh_LUT = 00000000;
        8 : tanh_LUT = 11111001;
        9 : tanh_LUT = 11111010;
        10 : tanh_LUT = 11111011;
        11 : tanh_LUT = 11111100;
        12 : tanh_LUT = 11111101;
        13 : tanh_LUT = 11111110;
        14 : tanh_LUT = 11111111;
        15 : tanh_LUT = 00000000;
        16 : tanh_LUT = 11110001;
        17 : tanh_LUT = 11110010;
        18 : tanh_LUT = 11110011;
        19 : tanh_LUT = 11110100;
        20 : tanh_LUT = 11110101;
        21 : tanh_LUT = 11110110;
        22 : tanh_LUT = 11110111;
        23 : tanh_LUT = 11111000;
        24 : tanh_LUT = 11111001;
        25 : tanh_LUT = 11111010;
        26 : tanh_LUT = 11111011;
        27 : tanh_LUT = 11111100;
        28 : tanh_LUT = 11111101;
        29 : tanh_LUT = 11111110;
        30 : tanh_LUT = 11111111;
        31 : tanh_LUT = 00000000;
        32 : tanh_LUT = 11100011;
        33 : tanh_LUT = 11100100;
        34 : tanh_LUT = 11100101;
        35 : tanh_LUT = 11100101;
        36 : tanh_LUT = 11100110;
        37 : tanh_LUT = 11100111;
        38 : tanh_LUT = 11101000;
        39 : tanh_LUT = 11101001;
        40 : tanh_LUT = 11101010;
        41 : tanh_LUT = 11101010;
        42 : tanh_LUT = 11101011;
        43 : tanh_LUT = 11101100;
        44 : tanh_LUT = 11101101;
        45 : tanh_LUT = 11101110;
        46 : tanh_LUT = 11101111;
        47 : tanh_LUT = 11110000;
        48 : tanh_LUT = 11110001;
        49 : tanh_LUT = 11110010;
        50 : tanh_LUT = 11110011;
        51 : tanh_LUT = 11110100;
        52 : tanh_LUT = 11110101;
        53 : tanh_LUT = 11110110;
        54 : tanh_LUT = 11110111;
        55 : tanh_LUT = 11111000;
        56 : tanh_LUT = 11111001;
        57 : tanh_LUT = 11111010;
        58 : tanh_LUT = 11111011;
        59 : tanh_LUT = 11111100;
        60 : tanh_LUT = 11111101;
        61 : tanh_LUT = 11111110;
        62 : tanh_LUT = 11111111;
        63 : tanh_LUT = 00000000;
        64 : tanh_LUT = 11010000;
        65 : tanh_LUT = 11010000;
        66 : tanh_LUT = 11010001;
        67 : tanh_LUT = 11010001;
        68 : tanh_LUT = 11010010;
        69 : tanh_LUT = 11010010;
        70 : tanh_LUT = 11010010;
        71 : tanh_LUT = 11010011;
        72 : tanh_LUT = 11010011;
        73 : tanh_LUT = 11010100;
        74 : tanh_LUT = 11010100;
        75 : tanh_LUT = 11010101;
        76 : tanh_LUT = 11010110;
        77 : tanh_LUT = 11010110;
        78 : tanh_LUT = 11010111;
        79 : tanh_LUT = 11010111;
        80 : tanh_LUT = 11011000;
        81 : tanh_LUT = 11011000;
        82 : tanh_LUT = 11011001;
        83 : tanh_LUT = 11011010;
        84 : tanh_LUT = 11011010;
        85 : tanh_LUT = 11011011;
        86 : tanh_LUT = 11011100;
        87 : tanh_LUT = 11011100;
        88 : tanh_LUT = 11011101;
        89 : tanh_LUT = 11011110;
        90 : tanh_LUT = 11011110;
        91 : tanh_LUT = 11011111;
        92 : tanh_LUT = 11100000;
        93 : tanh_LUT = 11100001;
        94 : tanh_LUT = 11100001;
        95 : tanh_LUT = 11100010;
        96 : tanh_LUT = 11100011;
        97 : tanh_LUT = 11100100;
        98 : tanh_LUT = 11100101;
        99 : tanh_LUT = 11100101;
        100 : tanh_LUT = 11100110;
        101 : tanh_LUT = 11100111;
        102 : tanh_LUT = 11101000;
        103 : tanh_LUT = 11101001;
        104 : tanh_LUT = 11101010;
        105 : tanh_LUT = 11101010;
        106 : tanh_LUT = 11101011;
        107 : tanh_LUT = 11101100;
        108 : tanh_LUT = 11101101;
        109 : tanh_LUT = 11101110;
        110 : tanh_LUT = 11101111;
        111 : tanh_LUT = 11110000;
        112 : tanh_LUT = 11110001;
        113 : tanh_LUT = 11110010;
        114 : tanh_LUT = 11110011;
        115 : tanh_LUT = 11110100;
        116 : tanh_LUT = 11110101;
        117 : tanh_LUT = 11110110;
        118 : tanh_LUT = 11110111;
        119 : tanh_LUT = 11111000;
        120 : tanh_LUT = 11111001;
        121 : tanh_LUT = 11111010;
        122 : tanh_LUT = 11111011;
        123 : tanh_LUT = 11111100;
        124 : tanh_LUT = 11111101;
        125 : tanh_LUT = 11111110;
        126 : tanh_LUT = 11111111;
        127 : tanh_LUT = 00000000;
        128 : tanh_LUT = 11000011;
        129 : tanh_LUT = 11000011;
        130 : tanh_LUT = 11000011;
        131 : tanh_LUT = 11000011;
        132 : tanh_LUT = 11000011;
        133 : tanh_LUT = 11000011;
        134 : tanh_LUT = 11000011;
        135 : tanh_LUT = 11000011;
        136 : tanh_LUT = 11000011;
        137 : tanh_LUT = 11000100;
        138 : tanh_LUT = 11000100;
        139 : tanh_LUT = 11000100;
        140 : tanh_LUT = 11000100;
        141 : tanh_LUT = 11000100;
        142 : tanh_LUT = 11000100;
        143 : tanh_LUT = 11000100;
        144 : tanh_LUT = 11000100;
        145 : tanh_LUT = 11000100;
        146 : tanh_LUT = 11000100;
        147 : tanh_LUT = 11000101;
        148 : tanh_LUT = 11000101;
        149 : tanh_LUT = 11000101;
        150 : tanh_LUT = 11000101;
        151 : tanh_LUT = 11000101;
        152 : tanh_LUT = 11000101;
        153 : tanh_LUT = 11000101;
        154 : tanh_LUT = 11000110;
        155 : tanh_LUT = 11000110;
        156 : tanh_LUT = 11000110;
        157 : tanh_LUT = 11000110;
        158 : tanh_LUT = 11000110;
        159 : tanh_LUT = 11000110;
        160 : tanh_LUT = 11000111;
        161 : tanh_LUT = 11000111;
        162 : tanh_LUT = 11000111;
        163 : tanh_LUT = 11000111;
        164 : tanh_LUT = 11000111;
        165 : tanh_LUT = 11001000;
        166 : tanh_LUT = 11001000;
        167 : tanh_LUT = 11001000;
        168 : tanh_LUT = 11001000;
        169 : tanh_LUT = 11001000;
        170 : tanh_LUT = 11001001;
        171 : tanh_LUT = 11001001;
        172 : tanh_LUT = 11001001;
        173 : tanh_LUT = 11001001;
        174 : tanh_LUT = 11001010;
        175 : tanh_LUT = 11001010;
        176 : tanh_LUT = 11001010;
        177 : tanh_LUT = 11001010;
        178 : tanh_LUT = 11001011;
        179 : tanh_LUT = 11001011;
        180 : tanh_LUT = 11001011;
        181 : tanh_LUT = 11001100;
        182 : tanh_LUT = 11001100;
        183 : tanh_LUT = 11001100;
        184 : tanh_LUT = 11001101;
        185 : tanh_LUT = 11001101;
        186 : tanh_LUT = 11001101;
        187 : tanh_LUT = 11001110;
        188 : tanh_LUT = 11001110;
        189 : tanh_LUT = 11001111;
        190 : tanh_LUT = 11001111;
        191 : tanh_LUT = 11001111;
        192 : tanh_LUT = 11010000;
        193 : tanh_LUT = 11010000;
        194 : tanh_LUT = 11010001;
        195 : tanh_LUT = 11010001;
        196 : tanh_LUT = 11010010;
        197 : tanh_LUT = 11010010;
        198 : tanh_LUT = 11010010;
        199 : tanh_LUT = 11010011;
        200 : tanh_LUT = 11010011;
        201 : tanh_LUT = 11010100;
        202 : tanh_LUT = 11010100;
        203 : tanh_LUT = 11010101;
        204 : tanh_LUT = 11010110;
        205 : tanh_LUT = 11010110;
        206 : tanh_LUT = 11010111;
        207 : tanh_LUT = 11010111;
        208 : tanh_LUT = 11011000;
        209 : tanh_LUT = 11011000;
        210 : tanh_LUT = 11011001;
        211 : tanh_LUT = 11011010;
        212 : tanh_LUT = 11011010;
        213 : tanh_LUT = 11011011;
        214 : tanh_LUT = 11011100;
        215 : tanh_LUT = 11011100;
        216 : tanh_LUT = 11011101;
        217 : tanh_LUT = 11011110;
        218 : tanh_LUT = 11011110;
        219 : tanh_LUT = 11011111;
        220 : tanh_LUT = 11100000;
        221 : tanh_LUT = 11100001;
        222 : tanh_LUT = 11100001;
        223 : tanh_LUT = 11100010;
        224 : tanh_LUT = 11100011;
        225 : tanh_LUT = 11100100;
        226 : tanh_LUT = 11100101;
        227 : tanh_LUT = 11100101;
        228 : tanh_LUT = 11100110;
        229 : tanh_LUT = 11100111;
        230 : tanh_LUT = 11101000;
        231 : tanh_LUT = 11101001;
        232 : tanh_LUT = 11101010;
        233 : tanh_LUT = 11101010;
        234 : tanh_LUT = 11101011;
        235 : tanh_LUT = 11101100;
        236 : tanh_LUT = 11101101;
        237 : tanh_LUT = 11101110;
        238 : tanh_LUT = 11101111;
        239 : tanh_LUT = 11110000;
        240 : tanh_LUT = 11110001;
        241 : tanh_LUT = 11110010;
        242 : tanh_LUT = 11110011;
        243 : tanh_LUT = 11110100;
        244 : tanh_LUT = 11110101;
        245 : tanh_LUT = 11110110;
        246 : tanh_LUT = 11110111;
        247 : tanh_LUT = 11111000;
        248 : tanh_LUT = 11111001;
        249 : tanh_LUT = 11111010;
        250 : tanh_LUT = 11111011;
        251 : tanh_LUT = 11111100;
        252 : tanh_LUT = 11111101;
        253 : tanh_LUT = 11111110;
        254 : tanh_LUT = 11111111;

    endcase

end

endfunction


endmodule

