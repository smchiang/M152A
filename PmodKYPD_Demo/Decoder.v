`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Company: Digilent Inc 2011
// Engineer: Michelle Yu  
//				 Josh Sackos
// Create Date:    07/23/2012 
//
// Module Name:    Decoder
// Project Name:   PmodKYPD_Demo
// Target Devices: Nexys3
// Tool versions:  Xilinx ISE 14.1 
// Description: This file defines a component Decoder for the demo project PmodKYPD. The Decoder scans
//					 each column by asserting a low to the pin corresponding to the column at 1KHz. After a
//					 column is asserted low, each row pin is checked. When a row pin is detected to be low,
//					 the key that was pressed could be determined.
//
// Revision History: 
// 						Revision 0.01 - File Created (Michelle Yu)
//							Revision 0.02 - Converted from VHDL to Verilog (Josh Sackos)
//////////////////////////////////////////////////////////////////////////////////////////////////////////

// ==============================================================================================
// 												Define Module
// ==============================================================================================
module Decoder(
    clk,
    Row,
    Col,
    DecodeOut
    );

// ==============================================================================================
// 											Port Declarations
// ==============================================================================================
    input clk;						// 100MHz onboard clock
    input [3:0] Row;				// Rows on KYPD
    output [3:0] Col;			// Columns on KYPD
    output [15:0] DecodeOut;	// Output data

// ==============================================================================================
// 							  		Parameters, Regsiters, and Wires
// ==============================================================================================
	
	// Output wires and registers
	reg [3:0] Col;
	reg [15:0] DecodeOut;
	
	// Count register
	reg [19:0] sclk;
// ==============================================================================================
// 												C scale module implementation (no longer in use)
// ==============================================================================================
/*
reg	clk_a;
reg	clk_b;
reg	clk_c;
reg	clk_d;
reg	clk_e;
reg	clk_f;
reg	clk_g;

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

*/
// ==============================================================================================
// 												Implementation
// ==============================================================================================
	
	always @(posedge clk) begin
			DecodeOut <= 0;
			
			// 1ms
			if (sclk == 20'b00011000011010100000) begin
				//C1
				Col <= 4'b0111;
				sclk <= sclk + 1'b1;
			end
			
			// check row pins
			else if(sclk == 20'b00011000011010101000) begin
				//R1
				if (Row[3] == 0) begin
					//DecodeOut <= 4'b0001;		//1
					DecodeOut[1] <= 1;
				end
				//R2
				if(Row[2] == 0) begin
					//DecodeOut <= 4'b0100; 		//4
					DecodeOut[4] <= 1;
				end
				//R3
				if(Row[1] == 0) begin
					//DecodeOut <= 4'b0111; 		//7
					DecodeOut[7] <= 1;
				end
				//R4
				if(Row[0] == 0) begin
					//DecodeOut <= 4'b0000; 		//0
					DecodeOut[0] <= 1;
				end
				sclk <= sclk + 1'b1;
			end

			// 2ms
			else if(sclk == 20'b00110000110101000000) begin
				//C2
				Col<= 4'b1011;
				sclk <= sclk + 1'b1;
			end
			
			// check row pins
			else if(sclk == 20'b00110000110101001000) begin
				//R1
				if (Row[3] == 0) begin
					//DecodeOut <= 4'b0010; 		//2
					DecodeOut[2] <= 1;
				end
				//R2
				if(Row[2] == 0) begin
					//DecodeOut <= 4'b0101; 		//5
					DecodeOut[5] <= 1;
				end
				//R3
				if(Row[1] == 0) begin
					//DecodeOut <= 4'b1000; 		//8
					DecodeOut[8] <= 1;
				end
				//R4
				if(Row[1] == 0) begin
					//DecodeOut <= 4'b1111; 		//F
					DecodeOut[15] <= 1;
				end
				sclk <= sclk + 1'b1;
			end

			//3ms
			else if(sclk == 20'b01001001001111100000) begin
				//C3
				Col<= 4'b1101;
				sclk <= sclk + 1'b1;
			end
			
			// check row pins
			else if(sclk == 20'b01001001001111101000) begin
				//R1
				if(Row[3] == 0) begin
					//DecodeOut <= 4'b0011; 		//3	
					DecodeOut[3] <= 1;
				end
				//R2
				if(Row[2] == 0) begin
					//DecodeOut <= 4'b0110; 		//6
					DecodeOut[6] <= 1;
				end
				//R3
				if(Row[1] == 0) begin
					//DecodeOut <= 4'b1001; 		//9
					DecodeOut[9] <= 1;
				end
				//R4
				if(Row[0] == 0) begin
					//DecodeOut <= 4'b1110; 		//E
					DecodeOut[14] <= 1;
				end

				sclk <= sclk + 1'b1;
			end

			//4ms
			else if(sclk == 20'b01100001101010000000) begin
				//C4
				Col<= 4'b1110;
				sclk <= sclk + 1'b1;
			end

			// Check row pins
			else if(sclk == 20'b01100001101010001000) begin
				//R1
				if(Row[3] == 0) begin
					//DecodeOut <= 4'b1010; //A
					DecodeOut[10] <= 1;
				end
				//R2
				if(Row[2] == 0) begin
					//DecodeOut <= 4'b1011; //B
					DecodeOut[11] <= 1;
				end
				//R3
				if(Row[1] == 0) begin
					//DecodeOut <= 4'b1100; //C
					DecodeOut[12] <= 1;
				end
				//R4
				if(Row[0] == 0) begin
					//DecodeOut <= 4'b1101; //D
					DecodeOut[13] <= 1;
				end
				sclk <= 20'b00000000000000000000;
			end

			// Otherwise increment
			else begin
				sclk <= sclk + 1'b1;
			end
			
	end

endmodule
