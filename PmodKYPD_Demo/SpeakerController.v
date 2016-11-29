`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:39:16 11/28/2016 
// Design Name: 
// Module Name:    SpeakerController 
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
module SpeakerController(
	//input
	numCode,
	clk_a,
	clk_b,
	clk_c,
	clk_d,
	clk_e,
	clk_f,
	clk_g,
	//output
	spk
 );

	input [3:0]		numCode;
	input				clk_a;
	input				clk_b;
	input				clk_c;
	input				clk_d;
	input				clk_e;
	input				clk_f;
	input				clk_g;
	
	output reg [7:0]	spk;
	
	reg				curClock;

	always @ (numCode or clk_a or clk_b or clk_c or clk_d or clk_e or clk_f or clk_g)
	begin
		case (numCode)
			4'b0000: curClock <= curClock ^ clk_g;
			4'b0001: curClock <= 0;
			4'b0010: curClock <= 0;
			4'b0011: curClock <= 0;
			4'b0100: curClock <= 0;
			4'b0101: curClock <= 0;
			4'b0110: curClock <= 0;
			4'b0111: curClock <= 0;
			4'b1000: curClock <= 0;
			4'b1001: curClock <= 0;
			4'b1010: curClock <= curClock ^ clk_a;
			4'b1011: curClock <= curClock ^ clk_b;
			4'b1100: curClock <= curClock ^ clk_c;
			4'b1101: curClock <= curClock ^ clk_d;
			4'b1110: curClock <= curClock ^ clk_e;
			4'b1111: curClock <= curClock ^ clk_f;
			default: curClock <= 0;
		endcase
		
		spk[0] <= curClock;
		spk[1] <= curClock;
		spk[2] <= curClock;
		spk[3] <= curClock;
		spk[4] <= curClock;
		spk[5] <= curClock;
		spk[6] <= curClock;
		spk[7] <= curClock;
		
		
	end


endmodule
