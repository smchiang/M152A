`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:26:59 11/30/2016 
// Design Name: 
// Module Name:    SpkrCtrlTB 
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
module SpkctrlTB;

	//input
	reg			clk;
	reg [15:0]	keypadIn;
	reg [15:0]	loopIn;
	//output
	wire			mclk;
	wire			lclk;
	wire [15:0] spkOut;
	
	NewSpeakerController UUT (
		.clk(clk),
		.keypadInput(keypadIn),
		.looperInput(loopIn),
		.mclk(mclk),
		.lclk(lclk),
		.speakerOut(spkOut)
	);
	
	reg [3:0] kCount;
	
	initial
	begin
		clk = 0;
		keypadIn = 0;
		loopIn = 0;
		kCount = 0;
	end
	
	always
	begin
		clk = ~clk;
	end
	
	
	always
	begin
		#50
		if (kCount == 15)
		begin
			kCount = 0;
		end
		
		keypadIn = 16'b0000000000000001 << kCount;
	end
	
	always
	begin
		#100
		loopIn = 16'b0000000011111111;
		#100
		loopIn = 16'b1111111100000000;
		#100
		loopIn = 0;
	end
	
	
endmodule
