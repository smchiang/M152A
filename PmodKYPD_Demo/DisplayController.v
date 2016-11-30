`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Company: Digilent Inc 2011
// Engineer: Michelle Yu  
//				 Josh Sackos
// Create Date:    07/23/2012 
//
// Module Name:    DisplayController
// Project Name:   PmodKYPD_Demo
// Target Devices: Nexys3
// Tool versions:  Xilinx ISE 14.1 
// Description: This file defines a DisplayController that controls the seven segment display that works with 
// 				 the output of the Decoder.
//
// Revision History: 
// 						Revision 0.01 - File Created (Michelle Yu)
//							Revision 0.02 - Converted from VHDL to Verilog (Josh Sackos)
//////////////////////////////////////////////////////////////////////////////////////////////////////////

// ==============================================================================================
// 												Define Module
// ==============================================================================================
module DisplayController(
	//input
    DispVal,
	 DispVal2,
	 DispVal3,
	 isRecord,
	 fclk,
	 bclk,
	 //output
    anode,
    segOut
    );

// ==============================================================================================
// 											Port Declarations
// ==============================================================================================

    input [3:0] DispVal;			// Higher digit output from decimal converter
	 input [3:0] DispVal2;			//	Middle digit output
	 input [3:0] DispVal3;			//	Lower digit output
	 input		 isRecord;			// are we currently recording?
	 input		 fclk;				// Fast clock for anode cycling
	 input		 bclk;				// Beat clock from metronome
	 
    output [3:0] anode;				// Controls the display digits
    output [6:0] segOut;			// Controls which digit to display

// ==============================================================================================
// 							  		Parameters, Regsiters, and Wires
// ==============================================================================================
	
	// Output wires and registers
	reg [3:0] anode;
	reg [6:0] segOut;
	
	//Tracking anode
	reg [3:0] anodeCount;

/*
	//Display constants for numbers and letters
	wire [7:0]	disp0;
	wire [7:0]	disp1;
	wire [7:0]	disp2;
	wire [7:0]	disp3;
	wire [7:0]	disp4;
	wire [7:0]	disp5;
	wire [7:0]	disp6;
	wire [7:0]	disp7;
	wire [7:0]	disp8;
	wire [7:0]	disp9;
	wire [7:0]	dispR;
	wire [7:0]	dispE;
	wire [7:0]	dispC;
	wire [7:0]	dispDef;
	
	assign disp0 = 7'b1000000;
	assign disp1 = 7'b1111001;
	assign disp2 = 7'b0100100;
	assign disp3 = 7'b0110000;
	assign disp4 = 7'b0011001;
	assign disp5 = 7'b0010010;
	assign disp6 = 7'b0000010;
	assign disp7 = 7'b1111000;
	assign disp8 = 7'b0000000;
	assign disp9 = 7'b0010000;
	assign dispR = 7'b0101111;
	assign dispE = 7'b0000110;
	assign dispC = 7'b1110000;
	assign dispDef = 7'b0111111;
	*/

// ==============================================================================================
// 												Implementation
// ==============================================================================================
	
	// only display the rightmost digit
	//assign anode = 4'b1110;
	initial
	begin
		anodeCount = 0;
		anode = 4'b1110;
		//segOut = 7'b0111111;
	end
	
	
	//------------------------------
	//		   Segment Decoder
	// Determines cathode pattern
	//   to display digit on SSD
	//------------------------------
	always @(posedge fclk)
	begin
		//cycle through anodeCount
		if (anodeCount == 3)
		begin
			anodeCount = 0;
		end 
		else 
		begin
			anodeCount = anodeCount + 1;
		end
	
		anode = ~(4'b0001 << anodeCount);
		
		//if beat clock is high, display bpm
		if (bclk == 1)
		begin
			//check anodeCount to display a number
			if (anodeCount == 2) //high number
			begin
				case (DispVal)
					4'h0 : segOut = 7'b1111111;  // 0 - don't display anything
					4'h1 : segOut = 7'b1111001;  // 1
					4'h2 : segOut = 7'b0100100;  // 2
					4'h3 : segOut = 7'b0110000;  // 3
					4'h4 : segOut = 7'b0011001;  // 4
					4'h5 : segOut = 7'b0010010;  // 5
					4'h6 : segOut = 7'b0000010;  // 6
					4'h7 : segOut = 7'b1111000;  // 7
					4'h8 : segOut = 7'b0000000;  // 8
					4'h9 : segOut = 7'b0010000;  // 9
					default : segOut = 7'b0111111;
				endcase
			end //end high number check
			if (anodeCount == 1) //mid number
			begin
				case (DispVal2)
					4'h0 : segOut = 7'b1000000;  // 0
					4'h1 : segOut = 7'b1111001;  // 1
					4'h2 : segOut = 7'b0100100;  // 2
					4'h3 : segOut = 7'b0110000;  // 3
					4'h4 : segOut = 7'b0011001;  // 4
					4'h5 : segOut = 7'b0010010;  // 5
					4'h6 : segOut = 7'b0000010;  // 6
					4'h7 : segOut = 7'b1111000;  // 7
					4'h8 : segOut = 7'b0000000;  // 8
					4'h9 : segOut = 7'b0010000;  // 9
					default : segOut = 7'b0111111;
				endcase
			end //end mid number check
			else if (anodeCount == 0) //low number
			begin
				case (DispVal3)
					4'h0 : segOut = 7'b1000000;  // 0
					4'h1 : segOut = 7'b1111001;  // 1
					4'h2 : segOut = 7'b0100100;  // 2
					4'h3 : segOut = 7'b0110000;  // 3
					4'h4 : segOut = 7'b0011001;  // 4
					4'h5 : segOut = 7'b0010010;  // 5
					4'h6 : segOut = 7'b0000010;  // 6
					4'h7 : segOut = 7'b1111000;  // 7
					4'h8 : segOut = 7'b0000000;  // 8
					4'h9 : segOut = 7'b0010000;  // 9
					default : segOut = 7'b0111111;
				endcase
			end //end low number check
			else //other spot empty	
			begin
				segOut = 7'b1111111;
			end //end other number check
		end //end beat clock high
		else if (isRecord == 1) //is recording, bpm clock is low
		begin
			//if anodeCount = 2, display r
			//if anodeCount = 1, display E
			//if anodeCount = 0, display C
			if (anodeCount == 2)
			begin
				segOut = 7'b0101111;
			end
			else if (anodeCount == 1)
			begin
				segOut = 7'b0000110;
			end
			else if (anodeCount == 0)
			begin
				segOut = 7'b1110000;
			end
			else //other spot empty	
			begin
				segOut = 7'b1111111;
			end
		end // end bpm clock low
		else //not recording, just low bpm clock
		begin
			segOut = 7'b0111111; //display -
		end
	end //end always

endmodule
