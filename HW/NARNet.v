
module NARNet #(parameter N=10, parameter Q = 8)(clk,enable,rst,x_in,x_ready,y_out,out_ready);

// inputs/outputs 
input wire clk, enable, rst, x_ready;
input wire signed [N-1:0] x_in;
output wire signed [N-1:0] y_out;
output reg out_ready;

wire [7:0] bram_addr;
reg [7:0] bram_addr_reg;
wire signed [N-1:0] bram_out;
wire signed [N-1:0] tanh_out;
wire signed [N-1:0] tanh_addr;

weights_rom #(N,Q)  wrom (.clk(clk), .addr(bram_addr), .rom_out(bram_out));
tanh_lut #(N,Q) tanhlut (.clk(clk), .addr(tanh_addr), .tanh_out(tanh_out));

// register for input
reg signed [N-1:0] x_in_reg;
integer i, j;

// NARNet pipeline states
localparam s_wait   = 3'b000, 
           s_delay  = 3'b001,
           s_loadw1 = 3'b010,
           s_layer1 = 3'b011,
           s_tanh = 3'b100,
           s_loadw2 = 3'b101,
           s_layer2 = 3'b110,
           s_output = 3'b111;

reg [2:0] current_state = s_wait;
reg signed [10:0] ts = 0;

reg delay_set = 0, load_bias = 0;

wire signed [N-1:0] w_n1, w_n2, w_n3, w_n4, w_n5, qmi1, qmi2, qmi3, qmi4, qmi5;
wire signed [N-1:0] n_out1, n_out2, n_out3, n_out4, n_out5;

reg signed [N-1:0] n_reg1, n_reg2, n_reg3, n_reg4, n_reg5;
wire [4:0] tapdelay1 [0:15];
reg signed [N-1:0] xdl [0:16];
reg [5:0] l1_ind = 0;

// initialize delay states
initial begin 
    for (i = 0; i < 16; i = i + 1) begin
//        xdl[i] <= 10'b0011000000; // 0.375 in fixed point (16)
        if (N == 10 && Q == 7) xdl[i] <= 10'b0001100000;

       if (N == 10 && Q == 8) xdl[i] <= 10'b0110000000;
        if (N == 10 && Q == 9) xdl[i] <= 10'b0011000010;
        if (N == 8 && Q == 7) xdl[i] <= 8'b00110000;
        if (N == 16 && Q == 10) xdl[i] <= 16'b1101000101100101;
    end
    xdl[16] <= 0;
end

reg tdcRst = 0, tdcEn = 0;
wire [4:0] xdlt;
tapdelayCounter  #(5'b10000) xdlTap (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(xdlt));
tapdelayCounter  #(15) tdc0 (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(tapdelay1[0]));
tapdelayCounter  #(14) tdc1 (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(tapdelay1[1]));
tapdelayCounter  #(13) tdc2 (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(tapdelay1[2]));
tapdelayCounter  #(12) tdc3 (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(tapdelay1[3]));
tapdelayCounter  #(11) tdc4 (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(tapdelay1[4]));
tapdelayCounter  #(10) tdc5 (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(tapdelay1[5]));
tapdelayCounter  #(9) tdc6 (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(tapdelay1[6]));
tapdelayCounter  #(8) tdc7 (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(tapdelay1[7]));
tapdelayCounter  #(7) tdc8 (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(tapdelay1[8]));
tapdelayCounter  #(6) tdc9 (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(tapdelay1[9]));
tapdelayCounter  #(5) tdc10 (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(tapdelay1[10]));
tapdelayCounter  #(4) tdc11 (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(tapdelay1[11]));
tapdelayCounter  #(3) tdc12 (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(tapdelay1[12]));
tapdelayCounter  #(2) tdc13 (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(tapdelay1[13]));
tapdelayCounter  #(1) tdc14 (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(tapdelay1[14]));
tapdelayCounter  #(0) tdc15 (.clk(clk), .rst(tdcRst), .en(tdcEn), .count(tapdelay1[15]));

reg signed [N-1:0] bias_cache [0:4];
reg signed [N-1:0] param_cache [0:4];
reg signed [N-1:0] y_out_reg;

reg signed [3:0] w_ind = 0;

assign w_n1 = param_cache[0];
assign w_n2 = param_cache[1];
assign w_n3 = param_cache[2];
assign w_n4 = param_cache[3];
assign w_n5 = param_cache[4];

assign qmi1 = n_reg1;
assign qmi2 = n_reg2;
assign qmi3 = n_reg3;
assign qmi4 = n_reg4;
assign qmi5 = n_reg5;

assign bram_addr = bram_addr_reg;
assign tanh_addr = param_cache[w_ind];
            
reg nReset = 1, finalSum = 0;
reg nReady = 0;
neuron #(N,Q) n1 (.clk(clk), .inptReady(nReady), .rst(nReset), .w(w_n1), .x(qmi1), .b(bias_cache[0]), .out(n_out1));
neuron #(N,Q) n2 (.clk(clk), .inptReady(nReady), .rst(nReset), .w(w_n2), .x(qmi2), .b(bias_cache[1]), .out(n_out2));
neuron #(N,Q) n3 (.clk(clk), .inptReady(nReady), .rst(nReset), .w(w_n3), .x(qmi3), .b(bias_cache[2]), .out(n_out3));
neuron #(N,Q) n4 (.clk(clk), .inptReady(nReady), .rst(nReset), .w(w_n4), .x(qmi4), .b(bias_cache[3]), .out(n_out4));
neuron #(N,Q) n5 (.clk(clk), .inptReady(nReady), .rst(nReset), .w(w_n5), .x(qmi5), .b(bias_cache[4]), .out(n_out5));

assign y_out = y_out_reg;

always @(posedge clk) begin

if (rst == 1) begin
    current_state <= s_wait;
    ts <= 0;
    tdcRst <= 1;
    // re-initialize delay states
    for (i = 0; i < 16; i = i + 1) begin
        xdl[i] <= 10'b0110000000;
    end
    xdl[16] <= 0;
    nReset <= 1;
end
else if (enable == 1) begin
    case (current_state)
        s_wait: begin
            tdcRst <= 0;
            tdcEn <= 0;
            out_ready <= 0;
            if (x_ready == 1'b1) begin
                x_in_reg <= x_in;
                current_state <= s_delay;
                finalSum <= 0;

            end
        end
        
        // intialize tap delays
        s_delay: begin
                xdl[xdlt] <= x_in_reg;
             
            if (w_ind < 5) begin
                bias_cache[w_ind] <= bram_out;
                w_ind <= w_ind + 1;
                bram_addr_reg <= bram_addr_reg + 1;
            
            end else begin
                w_ind <= 0;
                current_state <= s_loadw1;
            end            
        end
        
        s_loadw1: begin
            n_reg1 <= xdl[tapdelay1[l1_ind]];
            n_reg2 <= xdl[tapdelay1[l1_ind]];
            n_reg3 <= xdl[tapdelay1[l1_ind]];
            n_reg4 <= xdl[tapdelay1[l1_ind]];
            n_reg5 <= xdl[tapdelay1[l1_ind]];
            nReset <= 0;

            if (w_ind < 5) begin
                param_cache[w_ind] <= bram_out;
                w_ind <= w_ind + 1;
                bram_addr_reg <= bram_addr_reg + 16;
            
            // finished loading weights
            end else begin

                nReady <= 1;
                current_state <= s_layer1;
                w_ind <= 0;
                bram_addr_reg <= 0;
            end
        end
        
        // perform layer 1 computation
        s_layer1: begin
        
            // capture output, feedback into neurons
            if (l1_ind == 15) begin
//                l1_ind <= l1_ind + 1;
                param_cache[0] <= n_out1;
                param_cache[1] <= n_out2;
                param_cache[2] <= n_out3;
                param_cache[3] <= n_out4;
                param_cache[4] <= n_out5;
                current_state <= s_tanh;
                w_ind <= 0;
                nReset <= 1;
                l1_ind <= 0;
                nReady <= 0;
            // not done with computation, load next column of weights and tapdelay
            end else if (l1_ind < 16) begin
                current_state <= s_loadw1;
                bram_addr_reg <= 5 + l1_ind + 1;
                l1_ind <= l1_ind + 1;
                nReady <= 0;

            end 
        end
        
        s_tanh: begin
            // nReady <= 0;
            // nReset <= 0;
            if (w_ind < 5) begin
                param_cache[w_ind] <= tanh_out;
//                tanh_addr <= param_cache[w_ind];
                w_ind <= w_ind + 1;
            end else begin
                w_ind <= 0;
                n_reg1 <= param_cache[0];
                n_reg2 <= param_cache[1];
                n_reg3 <= param_cache[2];
                n_reg4 <= param_cache[3];
                n_reg5 <= param_cache[4];

                current_state <= s_loadw2;
                
                load_bias <= 1;
                bram_addr_reg <= 85;
            end
        end
        
        s_loadw2: begin
        
            if (load_bias == 1) begin
                nReset <= 1;
                bias_cache[0] <= bram_out;
                bias_cache[1] <= 0;
                bias_cache[2] <= 0;
                bias_cache[3] <= 0;
                bias_cache[4] <= 0;
                load_bias <= 0;
                bram_addr_reg <= bram_addr_reg + 1;
            end else if (w_ind < 5) begin
                param_cache[w_ind] <= bram_out;
                nReset <= 0;
                w_ind <= w_ind + 1;
                bram_addr_reg <= bram_addr_reg + 1;
            end else begin
                bram_addr_reg <= 0;
                w_ind <= 0;
                current_state <= s_layer2;
                nReady <= 1;
            end
        end
        
        s_layer2: begin
            // 1 clock cycle for vals to load and then we compute
//            if (nReady == 1) begin
                nReady <= 0;
                
            // get results from neurons, add them
//            end else begin
                current_state <= s_output;
//            end
        end
        
        s_output: begin
            y_out_reg <= n_out1 + n_out2 + n_out3 + n_out4 + n_out5;
            nReset <= 1;
            out_ready <= 1;
            current_state <= s_wait;
            tdcEn <= 1;
            ts <= ts + 1;
        end
    endcase
end

end

endmodule

