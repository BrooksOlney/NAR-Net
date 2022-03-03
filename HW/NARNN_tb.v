`timescale 1ns / 1ps

`define TRACE_SOURCE "F:\\Research\\NAR-Net\\HW\\InputVectors\\S4_D1.txt"
`define OUTPUT_LOC "F:\\Research\\NAR-Net\\VerilogOutputs\\S4_D1_Q8.7.txt"

module NARNN_tb(

    );

parameter N=8;
parameter Q=7;
reg clk = 0, rst = 0, enable = 1, x_ready = 0;
wire signed [N-1:0] y_out;
reg signed [N-1:0] x_in;
reg signed [N-1:0] trace_data [0:297];
reg signed [N-1:0] test_output [0:297];

reg [8:0] trace_ind = 0;
reg waiting = 0;
wire out_ready;

integer i;
initial begin

   $readmemb(`TRACE_SOURCE, trace_data);

end

NARNet #(N,Q) uut (.clk(clk), .enable(enable), .rst(rst), .x_in(x_in), .x_ready(x_ready), .y_out(y_out), .out_ready(out_ready));

always begin
    
    clk = 1'b0;
    #1;
    clk = 1'b1;
    #1;
end

integer f;
initial begin
  f = $fopen(`OUTPUT_LOC,"w");
end
    
always @(posedge clk) begin

    if (out_ready == 0 && waiting == 0) begin
        
        if (trace_ind < 298) begin
            x_ready <= 1;
            waiting <= 1;
            x_in <= trace_data[trace_ind];
            
        end else begin
            for (i = 0; i < 298; i = i + 1)
                $fwrite(f, "b%b\n", test_output[i]);

            $fclose(f);
            $stop;
        end
    

    end else if (out_ready == 1) begin
        test_output[trace_ind] <= y_out;
        $display("%b", y_out);
//        $fwrite(f, "%d\n", y_out);
        waiting <= 0;
        trace_ind <= trace_ind + 1;

    end else begin 
        x_ready <= 0;
    end

        

end
    
    
endmodule
