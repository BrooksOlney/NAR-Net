
module NARNet_SmallCache #(parameter N=10, parameter Q = 8)(clk,enable,rst,x_in,x_ready,y_out,out_ready);

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
localparam s_wait   = 3'b000, s_delay  = 3'b001, s_loadw1 = 3'b010, s_layer1 = 3'b011, s_tanh = 3'b100, s_loadw2 = 3'b101, s_layer2 = 3'b110, s_output = 3'b111;
//parameter s_delay  = 3'b001;
//parameter s_loadw1 = 3'b010;
//parameter s_layer1 = 3'b011;
//parameter s_tanh   = 3'b100;
//parameter s_loadw2 = 3'b101;
//parameter s_layer2 = 3'b110;
//parameter s_output = 3'b111;

reg [2:0] current_state = s_wait;
reg signed [10:0] ts = 0;

reg delay_set = 0, load_bias = 0;

wire signed [N-1:0] w_n1, w_n2, w_n3, w_n4, w_n5, qmi1, qmi2, qmi3, qmi4, qmi5;
reg signed [N-1:0] b_n1, b_n2, b_n3, b_n4, b_n5;
wire signed [N-1:0] n_out1, n_out2, n_out3, n_out4, n_out5;

reg signed [N-1:0] n_reg1, n_reg2, n_reg3, n_reg4, n_reg5;
reg signed [N-1:0] tapdelay1 [0:15];
reg signed [N-1:0] xdl [0:16];
reg signed [9:0] tap = 0;
reg signed [5:0] l1_ind = 0;

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

reg signed [N-1:0] param_cache [0:4];
reg signed [N-1:0] y_out_reg;
wire signed [N-1:0] acc_out;

reg signed [3:0] w_ind = 0;
reg signed [N-1:0] acc_term;
reg signed [9:0] xdts;

assign w_n1 = param_cache[0];
assign w_n2 = param_cache[1];
assign w_n3 = param_cache[2];
assign w_n4 = param_cache[3];
assign w_n5 = param_cache[4];
                                             
//assign qmi1 = (current_state == s_layer1 || current_state == s_loadw1) ? tapdelay1[l1_ind] : 
//              (current_state == s_layer2 || current_state == s_loadw2) ? n_reg1 : 'bx;
//assign qmi2 = (current_state == s_layer1 || current_state == s_loadw1) ? tapdelay1[l1_ind] : 
//              (current_state == s_layer2 || current_state == s_loadw2) ? n_reg2 : 'bx;
//assign qmi3 = (current_state == s_layer1 || current_state == s_loadw1) ? tapdelay1[l1_ind] : 
//              (current_state == s_layer2 || current_state == s_loadw2) ? n_reg3 : 'bx;
//assign qmi4 = (current_state == s_layer1 || current_state == s_loadw1) ? tapdelay1[l1_ind] : 
//              (current_state == s_layer2 || current_state == s_loadw2) ? n_reg4 : 'bx;
//assign qmi5 = (current_state == s_layer1 || current_state == s_loadw1) ? tapdelay1[l1_ind] : 
//              (current_state == s_layer2 || current_state == s_loadw2) ? n_reg5 : 'bx;

assign qmi1 = n_reg1;
assign qmi2 = n_reg2;
assign qmi3 = n_reg3;
assign qmi4 = n_reg4;
assign qmi5 = n_reg5;

assign bram_addr = bram_addr_reg;
assign tanh_addr = param_cache[w_ind];
            
reg nReset = 1, finalSum = 0;
reg nReady = 0;
wire nDone, n1Done, n2Done, n3Done, n4Done, n5Done;
reg accRst = 0;

reg [4:0] addrCounter [0:16]; 

neuron_v2 #(N,Q) n1 (.clk(clk), .inptReady(nReady), .rst(nReset), .w(w_n1), .x(qmi1), .b(b_n1), .out(n_out1));
neuron_v2 #(N,Q) n2 (.clk(clk), .inptReady(nReady), .rst(nReset), .w(w_n2), .x(qmi2), .b(b_n2), .out(n_out2));
neuron_v2 #(N,Q) n3 (.clk(clk), .inptReady(nReady), .rst(nReset), .w(w_n3), .x(qmi3), .b(b_n3), .out(n_out3));
neuron_v2 #(N,Q) n4 (.clk(clk), .inptReady(nReady), .rst(nReset), .w(w_n4), .x(qmi4), .b(b_n4), .out(n_out4));
neuron_v2 #(N,Q) n5 (.clk(clk), .inptReady(nReady), .rst(nReset), .w(w_n5), .x(qmi5), .b(b_n5), .out(n_out5));
accumulator #(N,Q) acc (.clk(clk), .rst(accRst), .a(acc_term), .add(finalSum), .out(acc_out));


assign y_out = y_out_reg;
assign nDone = n1Done & n2Done & n3Done & n4Done & n5Done;

always @(posedge clk) begin

if (rst == 1) begin
    current_state <= s_wait;
    ts <= 0;
    
    // re-initialize delay states
    for (i = 0; i < 16; i = i + 1) begin
//        xdl[i] <= 8'b00011000; // 0.375 in S8.6 
//          xdl[i] <= 8'b00110000; //0.375 in S8.7
//         xdl[i] <= 10'b0011000000;
//           xdl[i] <= {4'b0011, {(N-4){1'b0}}};
//        xdl[i] <= {1'b0, {(N-Q-1){1'b0}}, 3'b011, 4'b0000};
        if (N == 10 && Q == 7) xdl[i] <= 10'b0001100000;
        if (N == 10 && Q == 8) xdl[i] <= 10'b0001100001;
        if (N == 10 && Q == 9) xdl[i] <= 10'b0011000010;
        if (N == 8 && Q == 7) xdl[i] <= 8'b00110000;
                if (N == 16 && Q == 10) xdl[i] <= 16'b1101000101100101;

    end
    xdl[16] <= 0;
    nReset <= 1;
end
else if (enable == 1) begin
    case (current_state)
        s_wait: begin
            out_ready <= 0;
            accRst <= 1;
            if (x_ready == 1'b1) begin
                x_in_reg <= x_in;
                current_state <= s_delay;
                
                acc_term <= 0;
                finalSum <= 0;
                accRst <= 0;

            end
        end
        
        // intialize tap delays
        s_delay: begin
            if (delay_set != 1'b1) begin
                xdl[(ts + 16) % 17] <= x_in_reg;
                delay_set <= 1'b1;
                xdts <= (ts + 16) % 17;
            end
            
            // more efficient than pure combinational logic...
            else if (tap < 16) begin
                tapdelay1[tap] <= xdl[(((xdts - tap - 1) % 17) + 17) % 17];
                tap <= tap + 1;
            end 
            
            // done updating delay states, load layer1 weights
            else begin
                tap <= 0;
                current_state <= s_loadw1;
                delay_set <= 1'b0;
                load_bias <= 1;
                bram_addr_reg <= 0;
                w_ind <= 0;
            end
        end
        
        s_loadw1: begin
            n_reg1 <= tapdelay1[l1_ind];
            n_reg2 <= tapdelay1[l1_ind];
            n_reg3 <= tapdelay1[l1_ind];
            n_reg4 <= tapdelay1[l1_ind];
            n_reg5 <= tapdelay1[l1_ind];

            // load bias terms first
            if (load_bias == 1 && w_ind < 5) begin
                param_cache[w_ind] <= bram_out;
                w_ind <= w_ind + 1;
                bram_addr_reg <= bram_addr_reg + 1;
            
            // store bias terms for later, start loading weights
            end else if (load_bias == 1 && w_ind == 5) begin
                b_n1 <= param_cache[0];
                b_n2 <= param_cache[1];
                b_n3 <= param_cache[2];
                b_n4 <= param_cache[3];
                b_n5 <= param_cache[4];
                nReset <= 0;
                load_bias <= 0;
                w_ind <= 0;

            // load the weights
            end else if (w_ind < 5) begin
                
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
                b_n1 <= 0;
                b_n2 <= 0;
                b_n3 <= 0;
                b_n4 <= 0;
                b_n5 <= 0;
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
                b_n1 <= bram_out;
                load_bias <= 0;
                bram_addr_reg <= bram_addr_reg + 1;
            end else if (w_ind < 5) begin
                param_cache[w_ind] <= bram_out;
                nReset <= 0;
                w_ind <= w_ind + 1;
                bram_addr_reg <= bram_addr_reg + 1;
            end else begin
                w_ind <= 0;
                current_state <= s_layer2;
                nReady <= 1;
            end
        end
        
        s_layer2: begin
            // 1 clock cycle for vals to load and then we compute
            if (nReady == 1) begin
                nReady <= 0;
                
            // get results from neurons, start adding them
            end else if (finalSum == 0) begin
                param_cache[0] <= n_out1;
                param_cache[1] <= n_out2;
                param_cache[2] <= n_out3;
                param_cache[3] <= n_out4;
                param_cache[4] <= n_out5;
                finalSum <= 1;
                acc_term <= n_out1;
                w_ind <= 1;
                
            end else if (w_ind < 5) begin
                acc_term <= param_cache[w_ind];
                w_ind <= w_ind + 1;
//                if (w_ind == 4) finalSum <= 0;
            end else begin
                finalSum <= 0;
                current_state <= s_output;
                w_ind <= 0;
            end
        end
        
        s_output: begin
            y_out_reg <= acc_out;
//            y_out_reg <= n_out1 + n_out2 + n_out3 + n_out4 + n_out5;
            nReset <= 1;
            out_ready <= 1;
            current_state <= s_wait;
            ts <= ts + 1;
        end
    endcase
end

end

endmodule

