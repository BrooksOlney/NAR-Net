
module NARNet_SmallCache(clk,enable,rst,x_in,x_ready,y_out,out_ready);

// parameters for NARNN
parameter N=5;
parameter feedbackDelay=16;

// inputs/outputs 
input wire clk, enable, rst, x_ready;
input wire signed [7:0] x_in;
output wire signed [7:0] y_out;
output reg out_ready;

wire [7:0] bram_addr;
wire signed [7:0] bram_out;
wire signed [7:0] tanh_out;
reg [7:0] tanh_addr;


weights_rom wrom (.clk(clk), .addr(bram_addr), .rom_out(bram_out));
tanh_lut tanhlut (.clk(clk), .addr(tanh_addr), .tanh_out(tanh_out));

// register for input
reg signed [7:0] x_in_reg;
integer i, j;

reg [2:0] row  = 0;
reg [6:0] count = 0;

//end
// NARNet pipeline states
parameter s_wait = 3'b000;
parameter s_delay = 3'b001;
parameter s_loadw1 = 3'b010;
parameter s_layer1 = 3'b011;
parameter s_tanh = 3'b100;
parameter s_loadw2 = 3'b101;
parameter s_layer2 = 3'b110;
parameter s_output = 3'b111;

reg [2:0] current_state = s_wait;
reg signed [9:0] ts = 0;

reg delay_set = 0;

wire signed [7:0] w_n1, w_n2, w_n3, w_n4, w_n5, qmi1, qmi2, qmi3, qmi4, qmi5;
wire signed [7:0] b_n1, b_n2, b_n3, b_n4, b_n5;
wire signed [7:0] n_out1, n_out2, n_out3, n_out4, n_out5;

reg signed [7:0] n_reg1, n_reg2, n_reg3, n_reg4, n_reg5;
reg signed [7:0] tapdelay1 [0:15];
reg signed [7:0] xdl [0:16];
reg signed [5:0] tap = 0, l1_ind = 0, l2_ind = 0;

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
reg signed [7:0] y_out_reg;
reg signed [3:0] w_ind = 0;
reg signed [7:0] acc_res;
reg signed [8:0] xdts;

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
                   (current_state == s_loadw2 || current_state == s_layer2) ? w_ind + 86 : 8'h00;
                   
                   
//assign out_ready = (current_state == s_output) ? 1 : 0;
          
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
            out_ready <= 0;
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
                tapdelay1[tap] <= xdl[(((xdts - tap - 1) % 17) + 17) % 17];
                tap <= tap + 1;
            end 
            else begin
                tap <= 0;
                current_state <= s_loadw1;
                delay_set <= 1'b0;
                n_reg1 <= 62;
                n_reg2 <= 54;
                n_reg3 <= -10;
                n_reg4 <= 65;
                n_reg5 <= -62;
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
        
//            if (l1_ind < 16) begin
            // capture output, feedback into neurons
            n_reg1 <= n_out1;
            n_reg2 <= n_out2;
            n_reg3 <= n_out3;
            n_reg4 <= n_out4;
            n_reg5 <= n_out5;
            if (l1_ind == 15) begin
                l1_ind <= l1_ind + 1;
//                n_reg1 = tanh_LUT(n_out1);
//                n_reg2 = tanh_LUT(n_out2);
//                n_reg3 = tanh_LUT(n_out3);
//                n_reg4 = tanh_LUT(n_out4);
//                n_reg5 = tanh_LUT(n_out5);
                param_cache[0] <= n_out1;
                param_cache[1] <= n_out2;
                param_cache[2] <= n_out3;
                param_cache[3] <= n_out4;
                param_cache[4] <= n_out5;
                tanh_addr <= n_out1;
            end else if (l1_ind < 16) begin
                current_state <= s_loadw1;
                l1_ind <= l1_ind + 1;
            end else begin
                l1_ind <= 0;
                current_state <= s_tanh;
            end
        end
        
        s_tanh: begin
            
            if (w_ind < 5) begin
                param_cache[w_ind] <= tanh_out;
                tanh_addr <= param_cache[(w_ind + 1) % 5];
                w_ind <= w_ind + 1;
            end else begin
                w_ind <= 0;
                n_reg1 <= param_cache[0];
                n_reg2 <= param_cache[1];
                n_reg3 <= param_cache[2];
                n_reg4 <= param_cache[3];
                n_reg5 <= param_cache[4];
                current_state <= s_loadw2;
            end
        end
        
        s_loadw2: begin
        
            param_cache[w_ind] <= bram_out;
            
            
            if (w_ind == 4) begin
                current_state <= s_layer2;
                w_ind <= 0;
            end else begin
                w_ind <= w_ind + 1; 
            end
        end
        
        s_layer2: begin
            acc_res <= n_out1 + n_out2 + n_out3 + n_out4 + n_out5;
            
//            if (w_ind == 0) begin
//                param_cache[0] <= n_out1;
//                param_cache[1] <= n_out2;
//                param_cache[2] <= n_out3;
//                param_cache[3] <= n_out4;
//                param_cache[4] <= n_out5;
//            end
            
            current_state <= s_output;
        end
        
        s_output: begin
            y_out_reg <= acc_res;
            out_ready <= 1;
            current_state <= s_wait;
            ts <= ts + 1;
        end
    endcase
end

end

endmodule

