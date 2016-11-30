`timescale 10ns / 1ps
module looper_tb;

	reg clock_loop;
	reg [6:0] loop_switches;
	reg record_ready;
	reg [6:0] record_bank_number;
	reg [102400:0] record_data;
	reg [31:0] record_data_length;
	wire [15:0] output_looper_vector;

	looper UUT(
		.clock_loop(clock_loop),
		.loop_switches(loop_switches),
		.record_ready(record_ready),
		.record_bank_number(record_bank_number),
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
		loop_switches = 7'b1100111;
		record_bank_number = 7'b1011001;
		#10
		record_ready = 0;
		#20
		loop_switches = 0;
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