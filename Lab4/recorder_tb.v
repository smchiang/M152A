`timescale 10ns / 1ps
module recorder_tb;

	reg clock_loop;
	reg clock_beat;
	reg [15:0] keypad_vector;
	reg [15:0] looper_vector;
	reg record_switch;
	reg [6:0] loop_switches;
	wire output_ready;
	wire [6:0] output_bank_number;
	wire [102400:0] output_memory;
	wire [31:0] output_memory_count;
	wire [6:0] output_last_switch;


	recorder UUT(
		.clock_loop(clock_loop),
		.clock_beat(clock_beat),
		.keypad_vector(keypad_vector),
		.looper_vector(looper_vector),
		.record_switch(record_switch),
		.loop_switches(loop_switches),
		.output_ready(output_ready),
		.output_bank_number(output_bank_number),
		.output_memory(output_memory),
		.output_memory_count(output_memory_count),
		.output_last_switch(output_last_switch)
	);

	initial
	begin
		#1
		clock_loop = 0;
		clock_beat = 0;

		keypad_vector = 1;
		looper_vector = 0;
		record_switch = 0;
		loop_switches = 1;
	end
	
	always
	begin
		#1
		clock_loop = ~clock_loop;
	end

	always
	begin
		#100
		clock_beat = ~clock_beat;
	end

	// always
	// begin
	// 	#56
	// 	keypad_vector = keypad_vector + 1;
	// end

	always
	begin
		#56
		loop_switches = loop_switches + 1;
	end

	always
	begin
		#58
		record_switch = 1;
		#1000
		record_switch = 0;
	end
	
	initial
		#8700 $finish; 

endmodule