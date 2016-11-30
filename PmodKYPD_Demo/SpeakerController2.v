`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:52:18 11/29/2016 
// Design Name: 
// Module Name:    NewSpeakerController 
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
module NewSpeakerController(
	//input
	clk,
	keypadInput,		//16-bit selector from data bank
	looperInput,		//16-bit selector from data bank
	//output
	mclk,					//768x lclk = 33.3 MHz
	lclk,					//43.403 kHz
	speakerOut
    );

	input				clk;
	input	[15:0]	keypadInput;
	input	[15:0]	looperInput;
	
	output reg			mclk;
	output reg			lclk;
	output reg [15:0]	speakerOut;
	
	//clock dividers
	
	reg [4:0]		mcount;
	reg [15:0] 		lcount;
	
	initial
	begin
		mcount <= 0;
		lcount <= 0;
		mclk <= 0;
		lclk <= 0;
		speakerOut <= 0;
	end
	
	always @ (posedge clk)
	begin
		mcount <= mcount + 1;
		
		if (mcount == 3)
		begin
			mclk <= ~mclk;
			lcount <= lcount + 1;
			mcount <= 0;
		end
		
		if (lcount == 768)
		begin
			lclk <= ~lclk;
			lcount <= 0;
		end
	end
	
	//combined selectors
	reg [15:0] requestedInput;
	reg [15:0] prevRequestedInput;
	
	//store position in file
	reg [15:0] pos [0:25];
	
	//save sound files
	reg [15:0] soundFile [0:10000000];
	
	//temp output
	reg [20:0] tempOut;
	
	reg i,j;
	initial
	begin
		//set things to 0
		requestedInput <= 0;
		prevRequestedInput <= 0;
		tempOut <= 0;
		//set all positions to 1023 (end)
		for (i = 0; i < 16; i = i + 1)
		begin
			pos[i] <= 8000000;
		end
		
		//read from sound files
		soundFile[0] = $readmemh("sound0.raw");
		soundFile[1] = $readmemh("sound1.raw");
		soundFile[2] = $readmemh("sound2.raw");
		soundFile[3] = $readmemh("sound3.raw");
		soundFile[4] = $readmemh("sound4.raw");
		soundFile[5] = $readmemh("sound5.raw");
		soundFile[6] = $readmemh("sound6.raw");
		soundFile[7] = $readmemh("sound7.raw");
		soundFile[8] = $readmemh("sound8.raw");
		soundFile[9] = $readmemh("sound9.raw");
		soundFile[10] = $readmemh("soundA.raw");
		soundFile[11] = $readmemh("soundB.raw");
		soundFile[12] = $readmemh("soundC.raw");
		soundFile[13] = $readmemh("soundD.raw");
		soundFile[14] = $readmemh("soundE.raw");
		soundFile[15] = $readmemh("soundF.raw");
	end
	
	always @ (posedge clk)
	begin
		prevRequestedInput <= requestedInput;
		requestedInput <= keypadInput | looperInput;
		//requestedInput indicates all sound banks to be played at the current moment
		
		//calculate tempOut
		tempOut <= 0;
		
		//for each index of requestedInput
		for (i = 0; i < 15; i = i + 1)
		begin
			//check if posedge
			if (requestedInput[i] == 1 && prevRequestedInput[i] == 0)
			begin
				//start sound from beginning
				pos[i] <= 0;
				
				//add to tempOut
				for (j = 0; j < 15; j = j + 1)
				begin
					tempOut[j] <= tempOut[j] + soundFile[i][(16*pos[i])+j];
				end
				pos[i] <= pos[i] + 1;
			end
			//check if not at end of buffer
			else if (pos[i] < 8000000)
			begin
				//add to tempOut
				for (j = 0; j < 15; j = j + 1)
				begin
					tempOut[j] <= tempOut[j] + soundFile[i][(16*pos[i])+j];
				end
				pos[i] <= pos[i] + 1;
			end
		end
		
		
		//calculate speakerOut
		if (tempOut > 16'b1111111111111111)
		begin
			speakerOut <= 16'b1111111111111111;
		end
		else
		begin
			speakerOut <= tempOut;
		end
		
	end
	
	
endmodule
