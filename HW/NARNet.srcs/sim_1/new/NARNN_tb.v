`timescale 1ns / 1ps
`define TRACE_SOURCE "F:\\Research\\NAR-Net\\HW\\InputVectors\\S1_D1.txt"
`define OUTPUT_LOC "F:\\Research\\NAR-Net\\VerilogOutputs\\S1_D1.txt"

module NARNN_tb(

    );
    
reg clk = 0, rst = 0, enable = 1, x_ready = 0;
wire [7:0] y_out;
reg [7:0] x_in;
reg [7:0] trace_data [0:293];
reg [7:0] test_output [0:293];

reg [8:0] trace_ind = 0;
reg waiting = 0;
wire out_ready;

integer i;
initial begin

   $readmemb(`TRACE_SOURCE, trace_data);

end

NARNet_SmallCache uut (.clk(clk), .enable(enable), .rst(rst), .x_in(x_in), .x_ready(x_ready), .y_out(y_out), .out_ready(out_ready));

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
        
        if (trace_ind < 293) begin
            x_ready <= 1;
            waiting <= 1;
            x_in <= trace_data[trace_ind];        
            trace_ind <= trace_ind + 1;
            
        end else begin
            $fclose(f);
            $stop;
        end
    

    end else if (out_ready == 1) begin
        test_output[trace_ind - 1] <= y_out;
        $display("%b", y_out);
        $fwrite(f, "8b%b\n", y_out);
        waiting <= 0;
    end else begin 
        x_ready <= 0;
    end

        

end
    
    
endmodule
