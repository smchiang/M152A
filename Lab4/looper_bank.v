`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:33:48 11/30/2016 
// Design Name: 
// Module Name:    looper_bank 
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
module looper_bank(
	clock_loop,
	loop_active,
	record_ready,
	record_data,
	record_data_length,
	output_looper_vector
	);
	
	input wire clock_loop;
	// 1 if the loop bank should play its data, 0 otherwise
	input wire loop_active;
	// Signals an input update is available. Assumed to be synched with clock_loop
	input wire record_ready;
	// The data
	input wire [102400:0] record_data;
	// Length
	input wire [31:0] record_data_length;
	// Output
	output reg [15:0] output_looper_vector;

	// Stores data
	reg [102400:0] stored_record_data;
	reg [31:0] stored_record_data_length;
	reg [31:0] stored_record_data_count;
	// Stores a bitsmear of the loop.
	reg [15:0] loopActiveSpread;

	// An individual bank of the looper. Stores the data for this loop bank, the 
	// length for the loop bank, and the current count for the bank. Loops through
	// based on clock_loop. Updates values upon posedge (low to high) of record_ready.

	initial
	begin
		stored_record_data = 102400'b0;
		stored_record_data_length = 102400;
		stored_record_data_count = 0;
		loopActiveSpread = 0;
	end

	always @ (posedge record_ready)
	begin
		stored_record_data <= record_data;
		stored_record_data_length <= record_data_length;
		stored_record_data_count <= record_data_length;
	end

	always @ (posedge clock_loop)
	begin
		if (loop_active == 0) loopActiveSpread = 16'b0000000000000000;
		else if (loop_active == 1) loopActiveSpread = 16'b1111111111111111;	

		stored_record_data_count = stored_record_data_count + 1;
		if (stored_record_data_count >= stored_record_data_length)
		begin
			stored_record_data_count = 0;
		end
		output_looper_vector = stored_record_data[stored_record_data_count * 16 +: 16] & loopActiveSpread;
	end

endmodule
