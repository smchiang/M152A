`timescale 10ns / 1ps
module looper_bank_tb;
	
	reg clock_loop;
	reg loop_active;
	reg record_ready;
	reg [102400:0] record_data;
	reg [31:0] record_data_length;
	wire [15:0] output_looper_vector;

	looper_bank UUT (
		.clock_loop(clock_loop),
		.loop_active(loop_active),
		.record_ready(record_ready),
		.record_data(record_data),
		.record_data_length(record_data_length),
		.output_looper_vector(output_looper_vector)
	);

	initial
	begin
		#1 
		record_ready = 1;
		record_data = 102400'b1111111111111111000011111111111100000000111111110000000000001111;
		record_data_length = 4;
		clock_loop = 0;
		loop_active = 1;
		#10
		record_ready = 0;
		#20
		loop_active = 0;
	end

	always
	begin
		#1
		clock_loop = ~clock_loop;
	end

	initial
	begin
		#10000 $finish;
	end
endmodule