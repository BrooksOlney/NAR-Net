
module NARNet_SmallCache(clk,enable,rst,x_in,x_ready,y_out);

// parameters for NARNN
parameter N=5;
parameter feedbackDelay=16;

// inputs/outputs 
input wire clk, enable, rst, x_ready;
input wire signed [7:0] x_in;
output wire [7:0] y_out;

wire [7:0] bram_addr;
wire [7:0] bram_out;

weights_rom wrom ( .addr(bram_addr), .rom_out(bram_out));

// register for input
reg signed [7:0] x_in_reg;

integer i, j;

reg [2:0] row  = 0;
reg [6:0] count = 0;

//end
// NARNet pipeline states
parameter s_wait = 3'b000;
parameter s_delay = 3'b001;
parameter s_layer1 = 3'b010;
parameter s_loadw1 = 3'b101;
parameter s_layer2 = 3'b011;
parameter s_loadw2 = 3'b110;
parameter s_output = 3'b100;

reg [2:0] current_state = s_wait;
reg [8:0] ts = 0;

wire signed [7:0] res;
wire res_ovf;
reg delay_set = 0;

wire signed [7:0] w_n1, w_n2, w_n3, w_n4, w_n5, qmi1, qmi2, qmi3, qmi4, qmi5;
wire signed [7:0] b_n1, b_n2, b_n3, b_n4, b_n5;
wire signed [7:0] n_out1, n_out2, n_out3, n_out4, n_out5;

reg signed [7:0] n_reg1, n_reg2, n_reg3, n_reg4, n_reg5;
reg signed [7:0] tapdelay1 [0:15];
reg signed [7:0] xdl [0:16];
reg [4:0] tap = 0, l1_ind = 0, l2_ind = 0;

// initialize delay states
initial begin 
    for (i = 0; i < 16; i = i + 1) begin
        xdl[i] <= 8'b00011000;
    end
    xdl[16] <= 0;
end

initial begin
    n_reg1 <= 62;
    n_reg2 <= 54;
    n_reg3 <= -10;
    n_reg4 <= 65;
    n_reg5 <= -62;
end

reg signed [7:0] param_cache [0:4];
reg [7:0] y_out_reg;
reg [2:0] w_ind = 0;
reg [7:0] acc_res;
reg [7:0] xdts;

assign w_n1 = param_cache[0];
assign w_n2 = param_cache[1];
assign w_n3 = param_cache[2];
assign w_n4 = param_cache[3];
assign w_n5 = param_cache[4];
                                             
assign qmi1 = (current_state == s_layer1 || current_state == s_loadw1) ? tapdelay1[l1_ind] : 
              (current_state == s_layer2 || current_state == s_loadw2) ? n_reg1 : 'bx;
assign qmi2 = (current_state == s_layer1 || current_state == s_loadw1) ? tapdelay1[l1_ind] : 
              (current_state == s_layer2 || current_state == s_loadw2) ? n_reg2 : 'bx;
assign qmi3 = (current_state == s_layer1 || current_state == s_loadw1) ? tapdelay1[l1_ind] : 
              (current_state == s_layer2 || current_state == s_loadw2) ? n_reg3 : 'bx;
assign qmi4 = (current_state == s_layer1 || current_state == s_loadw1) ? tapdelay1[l1_ind] : 
              (current_state == s_layer2 || current_state == s_loadw2) ? n_reg4 : 'bx;
assign qmi5 = (current_state == s_layer1 || current_state == s_loadw1) ? tapdelay1[l1_ind] : 
              (current_state == s_layer2 || current_state == s_loadw2) ? n_reg5 : 'bx;
              
assign b_n1 = (current_state == s_layer1 || current_state == s_loadw1) ? n_reg1 :
              (current_state == s_layer2 || current_state == s_loadw2) ? -20 : 'bx;
          
assign b_n2 = (current_state == s_layer1 || current_state == s_loadw1) ? n_reg2 : 8'h00;
assign b_n3 = (current_state == s_layer1 || current_state == s_loadw1) ? n_reg3 : 8'h00;
assign b_n4 = (current_state == s_layer1 || current_state == s_loadw1) ? n_reg4 : 8'h00;
assign b_n5 = (current_state == s_layer1 || current_state == s_loadw1) ? n_reg5 : 8'h00;
     
assign bram_addr = (current_state == s_loadw1 || current_state == s_layer1 ) ? l1_ind + 5 + (16 * w_ind) : 
                   (current_state == s_loadw2 || current_state == s_layer2) ? l1_ind + 86 : 8'h00;

             
neuron n1 (.w(w_n1), .x(qmi1), .b(b_n1), .out(n_out1));
neuron n2 (.w(w_n2), .x(qmi2), .b(b_n2), .out(n_out2));
neuron n3 (.w(w_n3), .x(qmi3), .b(b_n3), .out(n_out3));
neuron n4 (.w(w_n4), .x(qmi4), .b(b_n4), .out(n_out4));
neuron n5 (.w(w_n5), .x(qmi5), .b(b_n5), .out(n_out5));


assign y_out = y_out_reg;

always @(posedge clk) begin

if (rst == 1) begin
    current_state <= s_wait;
    ts <= 0;
    
    // re-initialize delay states
    for (i = 0; i < 16; i = i + 1) begin
        xdl[i] <= 8'b00011000; // 0.375 in S8.6 
    end
    xdl[16] <= 0;
end
else if (enable == 1) begin
    case (current_state)
        s_wait: begin
            if (x_ready == 1'b1) begin
                x_in_reg <= x_in;
                current_state <= s_delay;
            end
        end
        
        // intialize tap delays
        s_delay: begin
            if (delay_set != 1'b1) begin
                xdl[(ts + 16) % 17] <= x_in_reg;
                delay_set <= 1'b1;
                xdts <= (ts + 16) % 17;
            end
            else if (tap < 16) begin
                tapdelay1[tap] <= xdl[(xdts - tap - 1 ) % 17];
                tap <= tap + 1;
            end 
            else begin
                tap <= 0;
                current_state <= s_loadw1;
                delay_set <= 1'b0;
                tap <= 3'b000;
            end
        end
        
        s_loadw1: begin
            param_cache[w_ind] <= bram_out;

            if (w_ind == 4) begin
                current_state <= s_layer1;
                w_ind <= 0;
            end else w_ind <= w_ind + 1;
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
                current_state <= s_loadw1;
            end else if (l1_ind == 16) begin
                l1_ind <= l1_ind + 1;
                n_reg1 = tanh_LUT(n_out1);
                n_reg2 = tanh_LUT(n_out2);
                n_reg3 = tanh_LUT(n_out3);
                n_reg4 = tanh_LUT(n_out4);
                n_reg5 = tanh_LUT(n_out5);
            end else begin
                l1_ind <= 0;
                current_state <= s_loadw2;
            end
                   
        end
        
        s_loadw2: begin
        
            param_cache[w_ind] <= bram_out;
            
            
            if (w_ind == 4) begin
                current_state <= s_layer2;
                w_ind <= 0;
            end else w_ind <= w_ind + 1;
        end
        
        s_layer2: begin
            acc_res <= n_out1 + n_out2 + n_out3 + n_out4 + n_out5;
            current_state <= s_output;
        end
        
        s_output: begin
            y_out_reg <= acc_res;
            current_state <= s_wait;
        end
    endcase
end

end

function rom_reg; 
input [7:0] addr;
begin
        case (addr) 
            8'b00000000 : rom_reg = 8'b00111110;
            8'b00000001 : rom_reg = 8'b00110110;
            8'b00000010 : rom_reg = 8'b11110110;
            8'b00000011 : rom_reg = 8'b01000001;
            8'b00000100 : rom_reg = 8'b11000010;
            8'b00000101 : rom_reg = 8'b01001010;
            8'b00000110 : rom_reg = 8'b00011111;
            8'b00000111 : rom_reg = 8'b00001101;
            8'b00001000 : rom_reg = 8'b11101001;
            8'b00001001 : rom_reg = 8'b11011000;
            8'b00001010 : rom_reg = 8'b00010000;
            8'b00001011 : rom_reg = 8'b11100010;
            8'b00001100 : rom_reg = 8'b00011100;
            8'b00001101 : rom_reg = 8'b00101001;
            8'b00001110 : rom_reg = 8'b11101011;
            8'b00001111 : rom_reg = 8'b00011110;
            8'b00010000 : rom_reg = 8'b00101011;
            8'b00010001 : rom_reg = 8'b11110110;
            8'b00010010 : rom_reg = 8'b11111110;
            8'b00010011 : rom_reg = 8'b11011111;
            8'b00010100 : rom_reg = 8'b10110011;
            8'b00010101 : rom_reg = 8'b10000110;
            8'b00010110 : rom_reg = 8'b00010111;
            8'b00010111 : rom_reg = 8'b00001111;
            8'b00011000 : rom_reg = 8'b00011011;
            8'b00011001 : rom_reg = 8'b11111110;
            8'b00011010 : rom_reg = 8'b11101010;
            8'b00011011 : rom_reg = 8'b00000000;
            8'b00011100 : rom_reg = 8'b00000000;
            8'b00011101 : rom_reg = 8'b00001000;
            8'b00011110 : rom_reg = 8'b11111001;
            8'b00011111 : rom_reg = 8'b00001000;
            8'b00100000 : rom_reg = 8'b11111111;
            8'b00100001 : rom_reg = 8'b11111000;
            8'b00100010 : rom_reg = 8'b00001101;
            8'b00100011 : rom_reg = 8'b11111111;
            8'b00100100 : rom_reg = 8'b11111101;
            8'b00100101 : rom_reg = 8'b00101101;
            8'b00100110 : rom_reg = 8'b00001100;
            8'b00100111 : rom_reg = 8'b00100011;
            8'b00101000 : rom_reg = 8'b00000000;
            8'b00101001 : rom_reg = 8'b00000110;
            8'b00101010 : rom_reg = 8'b00100100;
            8'b00101011 : rom_reg = 8'b00111000;
            8'b00101100 : rom_reg = 8'b00000011;
            8'b00101101 : rom_reg = 8'b00011101;
            8'b00101110 : rom_reg = 8'b00000010;
            8'b00101111 : rom_reg = 8'b00111010;
            8'b00110000 : rom_reg = 8'b00110010;
            8'b00110001 : rom_reg = 8'b11111000;
            8'b00110010 : rom_reg = 8'b00010110;
            8'b00110011 : rom_reg = 8'b00001100;
            8'b00110100 : rom_reg = 8'b00000110;
            8'b00110101 : rom_reg = 8'b00000000;
            8'b00110110 : rom_reg = 8'b00001111;
            8'b00110111 : rom_reg = 8'b01000111;
            8'b00111000 : rom_reg = 8'b01000010;
            8'b00111001 : rom_reg = 8'b00001111;
            8'b00111010 : rom_reg = 8'b00110010;
            8'b00111011 : rom_reg = 8'b00010011;
            8'b00111100 : rom_reg = 8'b00000111;
            8'b00111101 : rom_reg = 8'b00011001;
            8'b00111110 : rom_reg = 8'b11111110;
            8'b00111111 : rom_reg = 8'b11100110;
            8'b01000000 : rom_reg = 8'b11010001;
            8'b01000001 : rom_reg = 8'b11100001;
            8'b01000010 : rom_reg = 8'b11011011;
            8'b01000011 : rom_reg = 8'b00000011;
            8'b01000100 : rom_reg = 8'b11110011;
            8'b01000101 : rom_reg = 8'b11001100;
            8'b01000110 : rom_reg = 8'b11011011;
            8'b01000111 : rom_reg = 8'b00100001;
            8'b01001000 : rom_reg = 8'b00001110;
            8'b01001001 : rom_reg = 8'b11111011;
            8'b01001010 : rom_reg = 8'b00001011;
            8'b01001011 : rom_reg = 8'b00000000;
            8'b01001100 : rom_reg = 8'b00001101;
            8'b01001101 : rom_reg = 8'b11101001;
            8'b01001110 : rom_reg = 8'b11111111;
            8'b01001111 : rom_reg = 8'b00010110;
            8'b01010000 : rom_reg = 8'b00011011;
            8'b01010001 : rom_reg = 8'b11110111;
            8'b01010010 : rom_reg = 8'b11101010;
            8'b01010011 : rom_reg = 8'b11101101;
            8'b01010100 : rom_reg = 8'b11111000;
            8'b01010101 : rom_reg = 8'b11101100;
            8'b01010110 : rom_reg = 8'b00010000;
            8'b01010111 : rom_reg = 8'b11010001;
            8'b01011000 : rom_reg = 8'b00000001;
            8'b01011001 : rom_reg = 8'b00000101;
            8'b01011010 : rom_reg = 8'b11001111;

    endcase

end
endfunction

function tanh_LUT;
input [7:0] x;
begin
    case (x)
        0 : tanh_LUT = 8'b00000000;
        1 : tanh_LUT = 8'b00000000;
        2 : tanh_LUT = 8'b11111111;
        3 : tanh_LUT = 8'b00000000;
        4 : tanh_LUT = 8'b11111101;
        5 : tanh_LUT = 8'b11111110;
        6 : tanh_LUT = 8'b11111111;
        7 : tanh_LUT = 8'b00000000;
        8 : tanh_LUT = 8'b11111001;
        9 : tanh_LUT = 8'b11111010;
        10 : tanh_LUT = 8'b11111011;
        11 : tanh_LUT = 8'b11111100;
        12 : tanh_LUT = 8'b11111101;
        13 : tanh_LUT = 8'b11111110;
        14 : tanh_LUT = 8'b11111111;
        15 : tanh_LUT = 8'b00000000;
        16 : tanh_LUT = 8'b11110001;
        17 : tanh_LUT = 8'b11110010;
        18 : tanh_LUT = 8'b11110011;
        19 : tanh_LUT = 8'b11110100;
        20 : tanh_LUT = 8'b11110101;
        21 : tanh_LUT = 8'b11110110;
        22 : tanh_LUT = 8'b11110111;
        23 : tanh_LUT = 8'b11111000;
        24 : tanh_LUT = 8'b11111001;
        25 : tanh_LUT = 8'b11111010;
        26 : tanh_LUT = 8'b11111011;
        27 : tanh_LUT = 8'b11111100;
        28 : tanh_LUT = 8'b11111101;
        29 : tanh_LUT = 8'b11111110;
        30 : tanh_LUT = 8'b11111111;
        31 : tanh_LUT = 8'b00000000;
        32 : tanh_LUT = 8'b11100011;
        33 : tanh_LUT = 8'b11100100;
        34 : tanh_LUT = 8'b11100101;
        35 : tanh_LUT = 8'b11100101;
        36 : tanh_LUT = 8'b11100110;
        37 : tanh_LUT = 8'b11100111;
        38 : tanh_LUT = 8'b11101000;
        39 : tanh_LUT = 8'b11101001;
        40 : tanh_LUT = 8'b11101010;
        41 : tanh_LUT = 8'b11101010;
        42 : tanh_LUT = 8'b11101011;
        43 : tanh_LUT = 8'b11101100;
        44 : tanh_LUT = 8'b11101101;
        45 : tanh_LUT = 8'b11101110;
        46 : tanh_LUT = 8'b11101111;
        47 : tanh_LUT = 8'b11110000;
        48 : tanh_LUT = 8'b11110001;
        49 : tanh_LUT = 8'b11110010;
        50 : tanh_LUT = 8'b11110011;
        51 : tanh_LUT = 8'b11110100;
        52 : tanh_LUT = 8'b11110101;
        53 : tanh_LUT = 8'b11110110;
        54 : tanh_LUT = 8'b11110111;
        55 : tanh_LUT = 8'b11111000;
        56 : tanh_LUT = 8'b11111001;
        57 : tanh_LUT = 8'b11111010;
        58 : tanh_LUT = 8'b11111011;
        59 : tanh_LUT = 8'b11111100;
        60 : tanh_LUT = 8'b11111101;
        61 : tanh_LUT = 8'b11111110;
        62 : tanh_LUT = 8'b11111111;
        63 : tanh_LUT = 8'b00000000;
        64 : tanh_LUT = 8'b11010000;
        65 : tanh_LUT = 8'b11010000;
        66 : tanh_LUT = 8'b11010001;
        67 : tanh_LUT = 8'b11010001;
        68 : tanh_LUT = 8'b11010010;
        69 : tanh_LUT = 8'b11010010;
        70 : tanh_LUT = 8'b11010010;
        71 : tanh_LUT = 8'b11010011;
        72 : tanh_LUT = 8'b11010011;
        73 : tanh_LUT = 8'b11010100;
        74 : tanh_LUT = 8'b11010100;
        75 : tanh_LUT = 8'b11010101;
        76 : tanh_LUT = 8'b11010110;
        77 : tanh_LUT = 8'b11010110;
        78 : tanh_LUT = 8'b11010111;
        79 : tanh_LUT = 8'b11010111;
        80 : tanh_LUT = 8'b11011000;
        81 : tanh_LUT = 8'b11011000;
        82 : tanh_LUT = 8'b11011001;
        83 : tanh_LUT = 8'b11011010;
        84 : tanh_LUT = 8'b11011010;
        85 : tanh_LUT = 8'b11011011;
        86 : tanh_LUT = 8'b11011100;
        87 : tanh_LUT = 8'b11011100;
        88 : tanh_LUT = 8'b11011101;
        89 : tanh_LUT = 8'b11011110;
        90 : tanh_LUT = 8'b11011110;
        91 : tanh_LUT = 8'b11011111;
        92 : tanh_LUT = 8'b11100000;
        93 : tanh_LUT = 8'b11100001;
        94 : tanh_LUT = 8'b11100001;
        95 : tanh_LUT = 8'b11100010;
        96 : tanh_LUT = 8'b11100011;
        97 : tanh_LUT = 8'b11100100;
        98 : tanh_LUT = 8'b11100101;
        99 : tanh_LUT = 8'b11100101;
        100 : tanh_LUT =8'b11100110;
        101 : tanh_LUT = 8'b11100111;
        102 : tanh_LUT = 8'b11101000;
        103 : tanh_LUT = 8'b11101001;
        104 : tanh_LUT = 8'b11101010;
        105 : tanh_LUT = 8'b11101010;
        106 : tanh_LUT = 8'b11101011;
        107 : tanh_LUT = 8'b11101100;
        108 : tanh_LUT = 8'b11101101;
        109 : tanh_LUT = 8'b11101110;
        110 : tanh_LUT = 8'b11101111;
        111 : tanh_LUT = 8'b11110000;
        112 : tanh_LUT = 8'b11110001;
        113 : tanh_LUT = 8'b11110010;
        114 : tanh_LUT = 8'b11110011;
        115 : tanh_LUT = 8'b11110100;
        116 : tanh_LUT = 8'b11110101;
        117 : tanh_LUT = 8'b11110110;
        118 : tanh_LUT = 8'b11110111;
        119 : tanh_LUT = 8'b11111000;
        120 : tanh_LUT = 8'b11111001;
        121 : tanh_LUT = 8'b11111010;
        122 : tanh_LUT = 8'b11111011;
        123 : tanh_LUT = 8'b11111100;
        124 : tanh_LUT = 8'b11111101;
        125 : tanh_LUT = 8'b11111110;
        126 : tanh_LUT = 8'b11111111;
        127 : tanh_LUT = 8'b00000000;
        128 : tanh_LUT = 8'b11000011;
        129 : tanh_LUT = 8'b11000011;
        130 : tanh_LUT = 8'b11000011;
        131 : tanh_LUT = 8'b11000011;
        132 : tanh_LUT = 8'b11000011;
        133 : tanh_LUT = 8'b11000011;
        134 : tanh_LUT = 8'b11000011;
        135 : tanh_LUT = 8'b11000011;
        136 : tanh_LUT = 8'b11000011;
        137 : tanh_LUT = 8'b11000100;
        138 : tanh_LUT = 8'b11000100;
        139 : tanh_LUT = 8'b11000100;
        140 : tanh_LUT = 8'b11000100;
        141 : tanh_LUT = 8'b11000100;
        142 : tanh_LUT = 8'b11000100;
        143 : tanh_LUT = 8'b11000100;
        144 : tanh_LUT = 8'b11000100;
        145 : tanh_LUT = 8'b11000100;
        146 : tanh_LUT = 8'b11000100;
        147 : tanh_LUT = 8'b11000101;
        148 : tanh_LUT = 8'b11000101;
        149 : tanh_LUT = 8'b11000101;
        150 : tanh_LUT = 8'b11000101;
        151 : tanh_LUT = 8'b11000101;
        152 : tanh_LUT = 8'b11000101;
        153 : tanh_LUT = 8'b11000101;
        154 : tanh_LUT = 8'b11000110;
        155 : tanh_LUT = 8'b11000110;
        156 : tanh_LUT = 8'b11000110;
        157 : tanh_LUT = 8'b11000110;
        158 : tanh_LUT = 8'b11000110;
        159 : tanh_LUT = 8'b11000110;
        160 : tanh_LUT = 8'b11000111;
        161 : tanh_LUT = 8'b11000111;
        162 : tanh_LUT = 8'b11000111;
        163 : tanh_LUT = 8'b11000111;
        164 : tanh_LUT = 8'b11000111;
        165 : tanh_LUT = 8'b11001000;
        166 : tanh_LUT = 8'b11001000;
        167 : tanh_LUT = 8'b11001000;
        168 : tanh_LUT = 8'b11001000;
        169 : tanh_LUT = 8'b11001000;
        170 : tanh_LUT = 8'b11001001;
        171 : tanh_LUT = 8'b11001001;
        172 : tanh_LUT = 8'b11001001;
        173 : tanh_LUT = 8'b11001001;
        174 : tanh_LUT = 8'b11001010;
        175 : tanh_LUT = 8'b11001010;
        176 : tanh_LUT = 8'b11001010;
        177 : tanh_LUT = 8'b11001010;
        178 : tanh_LUT = 8'b11001011;
        179 : tanh_LUT = 8'b11001011;
        180 : tanh_LUT = 8'b11001011;
        181 : tanh_LUT = 8'b11001100;
        182 : tanh_LUT = 8'b11001100;
        183 : tanh_LUT = 8'b11001100;
        184 : tanh_LUT = 8'b11001101;
        185 : tanh_LUT = 8'b11001101;
        186 : tanh_LUT = 8'b11001101;
        187 : tanh_LUT = 8'b11001110;
        188 : tanh_LUT = 8'b11001110;
        189 : tanh_LUT = 8'b11001111;
        190 : tanh_LUT = 8'b11001111;
        191 : tanh_LUT = 8'b11001111;
        192 : tanh_LUT = 8'b11010000;
        193 : tanh_LUT = 8'b11010000;
        194 : tanh_LUT = 8'b11010001;
        195 : tanh_LUT = 8'b11010001;
        196 : tanh_LUT = 8'b11010010;
        197 : tanh_LUT = 8'b11010010;
        198 : tanh_LUT = 8'b11010010;
        199 : tanh_LUT = 8'b11010011;
        200 : tanh_LUT = 8'b11010011;
        201 : tanh_LUT = 8'b11010100;
        202 : tanh_LUT = 8'b11010100;
        203 : tanh_LUT = 8'b11010101;
        204 : tanh_LUT = 8'b11010110;
        205 : tanh_LUT = 8'b11010110;
        206 : tanh_LUT = 8'b11010111;
        207 : tanh_LUT = 8'b11010111;
        208 : tanh_LUT = 8'b11011000;
        209 : tanh_LUT = 8'b11011000;
        210 : tanh_LUT = 8'b11011001;
        211 : tanh_LUT = 8'b11011010;
        212 : tanh_LUT = 8'b11011010;
        213 : tanh_LUT = 8'b11011011;
        214 : tanh_LUT = 8'b11011100;
        215 : tanh_LUT = 8'b11011100;
        216 : tanh_LUT = 8'b11011101;
        217 : tanh_LUT = 8'b11011110;
        218 : tanh_LUT = 8'b11011110;
        219 : tanh_LUT = 8'b11011111;
        220 : tanh_LUT = 8'b11100000;
        221 : tanh_LUT = 8'b11100001;
        222 : tanh_LUT = 8'b11100001;
        223 : tanh_LUT = 8'b11100010;
        224 : tanh_LUT = 8'b11100011;
        225 : tanh_LUT = 8'b11100100;
        226 : tanh_LUT = 8'b11100101;
        227 : tanh_LUT = 8'b11100101;
        228 : tanh_LUT = 8'b11100110;
        229 : tanh_LUT = 8'b11100111;
        230 : tanh_LUT = 8'b11101000;
        231 : tanh_LUT = 8'b11101001;
        232 : tanh_LUT = 8'b11101010;
        233 : tanh_LUT = 8'b11101010;
        234 : tanh_LUT = 8'b11101011;
        235 : tanh_LUT = 8'b11101100;
        236 : tanh_LUT = 8'b11101101;
        237 : tanh_LUT = 8'b11101110;
        238 : tanh_LUT = 8'b11101111;
        239 : tanh_LUT = 8'b11110000;
        240 : tanh_LUT = 8'b11110001;
        241 : tanh_LUT = 8'b11110010;
        242 : tanh_LUT = 8'b11110011;
        243 : tanh_LUT = 8'b11110100;
        244 : tanh_LUT = 8'b11110101;
        245 : tanh_LUT = 8'b11110110;
        246 : tanh_LUT = 8'b11110111;
        247 : tanh_LUT = 8'b11111000;
        248 : tanh_LUT = 8'b11111001;
        249 : tanh_LUT = 8'b11111010;
        250 : tanh_LUT = 8'b11111011;
        251 : tanh_LUT = 8'b11111100;
        252 : tanh_LUT = 8'b11111101;
        253 : tanh_LUT = 8'b11111110;
        254 : tanh_LUT = 8'b11111111;

    endcase

end

endfunction


endmodule

