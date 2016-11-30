`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:42:41 11/30/2016 
// Design Name: 
// Module Name:    ShawnWasabi 
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
module ShawnWasabi(
	clk,
	btnU,
	btnD,
	sw,
	record,
	JC,
	mclk,
	lclk,
	speakerOut,
	seg,
	an
    );
	
	// 100 MHz clock
	input wire clk;
	// Up and down buton
	input wire btnU;
	input wire btnD;
	// Switch banks
	input wire [6:0] sw;
	// Record switch
	input wire record;
	// Keypad
	input wire [7:0] JC;
	// Seven segment
	input wire [7:0] seg;
	input wire [3:0] an;

	// Speaker controls
	output wire mclk;
	output wire lclk;
	output wire speakerOut;


	// Debounced wires holding input values
	wire buttonUp;
	wire buttonDown;
	wire [6:0] loopBankSwitches;
	wire recordSwitch;

	// Clocks generated from the metronome
	wire fast_clk;
	wire beat_clk;
	wire looper_clk;
	// Store the output BPM for the metronome
	wire [7:0] current_bpm;

	// Debounce inputs (that need it)
	debouncer ButtonUp(
		.in(btnU),
		.clock(fast_clk),
		.out(buttonUp)
	);
	debouncer ButtonDown(
		.in(btnD),
		.clock(fast_clk),
		.out(buttonDown)
	);
	debouncer LoopBankSwitches(
		.in(sw),
		.clock(fast_clk),
		.out(loopBankSwitches)
	);
	debouncer RecordSwitch(
		.in(record),
		.clock(fast_clk),
		.out(recordSwitch)
	);

	// Stores the keypad vector representation of input.
	wire [15:0] keypadVector;
	// Stores the looper vector representation of the same.
	wire [15:0] looperVector;

	// Create the keypad input controller
	Decoder KeypadDecoder(
		.clk(clk),
		.Row(JC[7:4]),
		.Col(JC[3:0]),
		.DecodeOut(keypadVector)
	);

	// Create the metronome
	metronome metronomeModule(
		.clk(clk),
		.btnUp(buttonUp),
		.btnDown(buttonDown),

		.current_bpm(current_bpm),
		.beat_clk(beat_clk),
		.looper_clk(looper_clk),
		.fast_clk(fast_clk)
	);


	// Stores output from the recorder

	wire output_ready;
	wire [6:0] output_bank_number;
	wire [102400:0] output_memory;
	wire [31:0] output_memory_count;
	// Maybe we use this to flash lights, who knows
	wire [6:0] output_last_switch;


	// Create the recorder
	recorder RecorderModule(
		.clock_loop(looper_clk),
		.clock_beat(beat_clk),
		.keypad_vector(keypadVector),
		.looper_vector(looperVector),
		.record_switch(recordSwitch),
		.loop_switches(loopBankSwitches),
		.output_ready(output_ready),
		.output_bank_number(output_bank_number),
		.output_memory(output_memory),
		.output_memory_count(output_memory_count),
		.output_last_switch(output_last_switch)
	);

	// Create the looper
	looper LooperModule(
		.clock_loop(looper_clk),
		.loop_switches(loopBankSwitches),
		.record_ready(output_ready),
		.record_bank_number(output_bank_number),
		.record_data(output_memory),
		.record_data_length(output_memory_count),
		.output_looper_vector(looperVector)
	);

	wire hundreds; 
	assign hundreds = current_bpm / 100;
	wire tens; 
	assign tens = (current_bpm - ((current_bpm / 100) * 100)) / 10;
	wire ones;
	assign ones = current_bpm % 10;

	// Create the module that displays BPM
	DisplayController(
		//input
		.DispVal(hundreds),
		.DispVal2(tens),
		.DispVal3(ones),
		.isRecord(recordSwitch),
		.fclk(fast_clk),
		.bclk(beat_clk),
		//output
		.anode(an),
		.segOut(seg)
    );

	// Create the module that plays sound
	NewSpeakerController SpeakerModule(
		.clk(clk),
		.keypadInput(keypadVector),		//16-bit selector from data bank
		.looperInput(looperVector),		//16-bit selector from data bank
		//output
		.mclk(mclk),					//768x lclk = 33.3 MHz
		.lclk(lclk),					//43.403 kHz
		.speakerOut(speakerOut)
	);
endmodule
