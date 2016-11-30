`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:48:44 11/30/2016 
// Design Name: 
// Module Name:    DispCtrlTB 
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
module DispCtrlTB;

	//input
	reg [3:0] 	DV1;
	reg [3:0] 	DV2;
	reg [3:0]	DV3;
	reg			rec;
	reg			fclk;
	reg			bclk;
	//output
	wire [3:0]	anode;
	wire [6:0]	segOut;
	
	DisplayController UUT (
		.DispVal(DV1),
		.DispVal2(DV2),
		.DispVal3(DV3),
		.isRecord(rec),
		.fclk(fclk),
		.bclk(bclk),
		.anode(anode),
		.segOut(segOut)
	);

	initial
	begin
		DV1 <= 1;
		DV2 <= 0;
		DV3 <= 0;
		rec <= 0;
		fclk <= 0;
		bclk <= 0;
	end
	
	always
	begin
		#50 bclk <= ~bclk;
	end
	
	always
	begin
		#5 fclk <= ~fclk;
	end
	
	always
	begin
		#100
		if (DV3 == 9)
		begin
			DV3 <= 0;
		end
		else
		begin
			DV3 <= DV3 + 1;
		end
	end
	
	always
	begin
		#1000
		if (DV2 == 9)
		begin
			DV2 <= 0;
		end
		else
		begin
			DV2 <= DV2 + 1;
		end
	end
	
	always
	begin
		#5000
		rec <= ~rec;
	end

endmodule
