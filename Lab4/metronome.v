`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:34:01 11/28/2016 
// Design Name: 
// Module Name:    metronome 
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
module metronome(
	clk, // 100 MHz system clock
	btnUp,
	btnDown,
	current_bpm,
	beat_clk,
	looper_clk,
	fast_clk
	);
	
	input clk;
	input btnUp;
	input btnDown;

	// 255 max is perfectly reasonable.
	output reg [7:0] 	current_bpm; 
	// Outputs a tick at every 30th of a beat, allowing for off beat recording.
	output reg 			looper_clk;
	// Outputs a tick at every beat.
	output reg 			beat_clk;
	// Completely independent from BPM. Outputs a 250 Hz frequency. 
	output reg 			fast_clk;

	// Stores the maximum count needed to hit 1/100 of the desired BPM. 
	// Note: To obtain this number, divide 60000000 by your desired BPM.
	reg [31:0] max_looper_count;
	// Stores the current actual looper count.
	reg [31:0] current_looper_count;

	// Stores the BPM count. BPM ticks off the looper clock, thus max 30
	reg [7:0] bpm_count;

	// Stores the count for the fast clock. At 250Hz, the max count is 2000
	reg [18:0] fast_count;

	initial 
	begin
		//A default of 100 is typical for a lot of music. 
		// 60 is for testing.
		current_bpm = 60; 
		beat_clk = 0;
		looper_clk = 0;
		fast_clk = 0;

		max_looper_count = 500000;
		current_looper_count = 1;
		bpm_count = 1;
		fast_count = 1;
	end

	// Increase BPM and associated max count if btnUp
	always @ (posedge btnUp) 
	begin
		current_bpm = current_bpm + 1;
		if (current_bpm == 0) current_bpm = 255;
		max_looper_count = (30000000 / current_bpm);
	end

	// Increase BPM and associated max count if
	always @ (posedge btnDown)
	begin
		current_bpm = current_bpm - 1;
		if (current_bpm == 0) current_bpm = 1;
		max_looper_count = (30000000 / current_bpm);
	end

	always @ (posedge clk) 
	begin
		// Looper clock
		if (current_looper_count < max_looper_count)
		begin
			current_looper_count = current_looper_count + 1;
		end
		else 
		begin
			current_looper_count = 1;
			looper_clk = ~looper_clk;
		end
		// Fast clock
		if (fast_count < 200000)
		begin
			fast_count = fast_count + 1;
		end
		else
		begin
			fast_count = 1;
			fast_clk = ~fast_clk;
		end
	end

	always @ (posedge looper_clk)
	begin
		// Beat clock
		if (bpm_count < 100)
		begin
			bpm_count = bpm_count + 1;
		end
		else 
		begin
			bpm_count = 1;
			beat_clk = ~beat_clk;
		end
	end

endmodule
