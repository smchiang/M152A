`timescale 1us / 1ps
module metronome_tb;

	reg clk;
	reg btnUp;
	reg btnDown;
	wire [7:0] current_bpm;
	wire beat_clk;
	wire looper_clk;
	wire fast_clk;
	
	metronome UUT(
		.clk(clk), // 100 MHz system clock
		.btnUp(btnUp),
		.btnDown(btnDown),
		.current_bpm(current_bpm),
		.beat_clk(beat_clk),
		.looper_clk(looper_clk),
		.fast_clk(fast_clk)
	);

	initial
	begin
		clk = 0;
		btnUp = 0;
		btnDown = 0;
	end
	
	always
	begin
		#1
		clk = ~clk;
	end

	always
	begin
		#2000000
		btnUp = 1;
		#1000
		btnUp = 0;
	end
	
	initial
		#60000000 $finish; 

endmodule