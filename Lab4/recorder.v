`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:07:37 11/29/2016 
// Design Name: 
// Module Name:    recorder 
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
module recorder(
	clock_loop,
	clock_beat,
	keypad_vector,
	looper_vector,
	record_switch,
	loop_switches,
	output_ready,
	output_bank_number,
	output_memory
	);
	
	input 				clock_loop;
	input 				clock_beat;
	input [15:0]		keypad_vector;
	input [15:0]		looper_vector;
	input 				record_switch;
	input [6:0]			loop_switches;
	
	// Signals that the output is ready to be read
	output reg ready;
	// One hot representation that says what bank we should save this data to.
	output reg [6:0] output_bank_number; 
	// 16 measure maximum * 4 beats per measure * 100 ticks per beat * 16 bits per tick
	output reg [102400:0] output_memory;

	// Behavior is split in two sections: record and observe mode.
	// In observe mode (when record_switch is low), simply observe which loop switch was 
	// last toggled (using clock_loop).
	// Assuming it is still active when the record_switch is turned on, it becomes the 
	// bank that the recorder stores to.

	// In record mode (state determined by clock_beat), on each clock_loop tick, 
	// store the combined keypad_vector and looper_vector into the appropriate point 
	// in output_memory. Increase the count. 

	// When we exit recordMode, signal that the result is ready and make it available.
	// If no switch was made active, nothing is output and output_bank_number will be set to 0.

	// Stores the last switch to be toggled, as a number. Stores 0 if no switch is active.
	reg [6:0] lastToggled; 
	reg [6:0] lastSwitchState;

	initial
	begin
		ready = 0;
		output_bank_number = 0;
		output_memory = 0;
		lastToggled = 0;
		lastSwitchState = 0;
	end

	// Record mode code
	always @ (posedge clock_loop)
	begin
		if (record_switch == 0 && loop_switches != lastSwitchState)
		begin
			// We only care about record mode if record_switch is off.
			// We also only care if the switch state has actually changed. 
			if (loop_switches == 0) 
			begin
				lastToggled = 0;
			end
			else 
			begin
				// Something else changed. Go through bit by bit and set the lastToggled to
				// the appropriate state.
				// Not having access to for loops is REALLY OBNOXIOUS
				if (loop_switches[6] == 1 && lastSwitchState[6] == 0) lastToggled = 7'b1000000;
				if (loop_switches[5] == 1 && lastSwitchState[5] == 0) lastToggled = 7'b0100000;
				if (loop_switches[4] == 1 && lastSwitchState[4] == 0) lastToggled = 7'b0010000;
				if (loop_switches[3] == 1 && lastSwitchState[3] == 0) lastToggled = 7'b0001000;
				if (loop_switches[2] == 1 && lastSwitchState[2] == 0) lastToggled = 7'b0000100;
				if (loop_switches[1] == 1 && lastSwitchState[1] == 0) lastToggled = 7'b0000010;
				if (loop_switches[0] == 1 && lastSwitchState[0] == 0) lastToggled = 7'b0000001;
			end
			lastSwitchState = loop_switches;
		end
	end

endmodule
