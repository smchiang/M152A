`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:11:18 11/30/2016 
// Design Name: 
// Module Name:    looper 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module looper(
	clock_loop,
	loop_switches,

	record_ready,
	record_bank_number,
	record_data,
	record_data_length,
	
	output_looper_vector
	);
	
	input wire clock_loop;
	input wire [6:0] loop_switches;
	input wire record_ready;
	input wire [6:0] record_bank_number;
	input wire [102400:0] record_data;
	input wire [31:0] record_data_length;
	output wire [15:0] output_looper_vector;

	// Looper code: Store 7 sound banks, each with corresponding counts and max
	// counts (initialized to zero). Loop through all of them at all times. And
	// each banks' output to the swich number's value (so it goes to zero if
	// the switch is off) and or the outputs together.

	// To overwrite a bank, check if record is ready at any given time. If
	// it is, update teh bank number with the data, update the length, and reset
	// the bank's count. 

	// Bank 0
	wire [15:0] vector_0;
	looper_bank bank0 (
		.clock_loop(clock_loop),
		.loop_active(loop_switches[0]),
		.record_ready(record_ready && record_bank_number[0]),
		.record_data(record_data),
		.record_data_length(record_data_length),
		.output_looper_vector(vector_0)
	);

	// Bank 1
	wire [15:0] vector_1;
	looper_bank bank1 (
		.clock_loop(clock_loop),
		.loop_active(loop_switches[1]),
		.record_ready(record_ready && record_bank_number[1]),
		.record_data(record_data),
		.record_data_length(record_data_length),
		.output_looper_vector(vector_1)
	);

	// Bank 2
	wire [15:0] vector_2;
	looper_bank bank2 (
		.clock_loop(clock_loop),
		.loop_active(loop_switches[2]),
		.record_ready(record_ready && record_bank_number[2]),
		.record_data(record_data),
		.record_data_length(record_data_length),
		.output_looper_vector(vector_2)
	);

	// Bank 3
	wire [15:0] vector_3;
	looper_bank bank3 (
		.clock_loop(clock_loop),
		.loop_active(loop_switches[3]),
		.record_ready(record_ready && record_bank_number[3]),
		.record_data(record_data),
		.record_data_length(record_data_length),
		.output_looper_vector(vector_3)
	);

	// Bank 4
	wire [15:0] vector_4;
	looper_bank bank4 (
		.clock_loop(clock_loop),
		.loop_active(loop_switches[4]),
		.record_ready(record_ready && record_bank_number[4]),
		.record_data(record_data),
		.record_data_length(record_data_length),
		.output_looper_vector(vector_4)
	);

	// Bank 5
	wire [15:0] vector_5;
	looper_bank bank5 (
		.clock_loop(clock_loop),
		.loop_active(loop_switches[5]),
		.record_ready(record_ready && record_bank_number[5]),
		.record_data(record_data),
		.record_data_length(record_data_length),
		.output_looper_vector(vector_5)
	);

	// Bank 6
	wire [15:0] vector_6;
	looper_bank bank6 (
		.clock_loop(clock_loop),
		.loop_active(loop_switches[6]),
		.record_ready(record_ready && record_bank_number[6]),
		.record_data(record_data),
		.record_data_length(record_data_length),
		.output_looper_vector(vector_6)
	);

	assign output_looper_vector = 
		vector_0 | vector_1 | vector_2 | vector_3 | vector_4 | vector_5 | vector_6;

endmodule
