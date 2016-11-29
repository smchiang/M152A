`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Company: Digilent Inc 2011
// Engineer: Michelle Yu  
//				 Josh Sackos
// Create Date:    17:05:39 08/23/2011 
//
// Module Name:    PmodKYPD
// Project Name:   PmodKYPD_Demo
// Target Devices: Nexys3
// Tool versions:  Xilinx ISE 14.1 
// Description: This file defines a project that outputs the key pressed on the PmodKYPD to the 
//					 seven segment display.
//
// Revision History: 
// 						Revision 0.01 - File Created (Michelle Yu)
//							Revision 0.01 - Converted from VHDL to Verilog (Josh Sackos)
//////////////////////////////////////////////////////////////////////////////////////////////////////////

// ==============================================================================================
// 												Define Module
// ==============================================================================================
module PmodKYPD(
    clk,
    JC,
	 JA,
    an,
    seg
    );
	 
	 
// ==============================================================================================
// 											Port Declarations
// ==============================================================================================
	input clk;					// 100Mhz onboard clock
	inout [7:0] JC;			// Port JA on Nexys3, JA[3:0] is Columns, JA[10:7] is rows
	output [7:0] JA;			// speaker
	output [3:0] an;			// Anodes on seven segment display
	output [6:0] seg;			// Cathodes on seven segment display

// ==============================================================================================
// 							  		Parameters, Regsiters, and Wires
// ==============================================================================================
	
	// Output wires
	wire [3:0] an;
	wire [6:0] seg;
	
	wire [3:0] Decode;

// ==============================================================================================
// 												Implementation
// ==============================================================================================

	//-----------------------------------------------
	//  						Decoder
	//-----------------------------------------------
	Decoder C0(
			.clk(clk),
			.Row(JC[7:4]),
			.Col(JC[3:0]),
			.DecodeOut(Decode)
	);

	//-----------------------------------------------
	//  		Seven Segment Display Controller
	//-----------------------------------------------
	DisplayController C1(
			.DispVal(Decode),
			.anode(an),
			.segOut(seg)
	);
	
	//-----------------------------------------------
	//  		C scale clock divider
	//-----------------------------------------------
	wire	clk_a;
	wire	clk_b;
	wire	clk_c;
	wire	clk_d;
	wire	clk_e;
	wire	clk_f;
	wire	clk_g;

	c_scale CS (
		.clk(clk),
		.clk_a(clk_a),
		.clk_b(clk_b),
		.clk_c(clk_c),
		.clk_d(clk_d),
		.clk_e(clk_e),
		.clk_f(clk_f),
		.clk_g(clk_g)
	);
	//-----------------------------------------------
	//  		Speaker
	//-----------------------------------------------
	
	
	
	SpeakerController spkctrl (
		.numCode(Decode),
		.clk_a(clk_a),
		.clk_b(clk_b),
		.clk_c(clk_c),
		.clk_d(clk_d),
		.clk_e(clk_e),
		.clk_f(clk_f),
		.clk_g(clk_g),
		.spk(JA)
	);
endmodule
