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
	reg [15:0] pos [0:15];
	
	//store loop number - go to 5000
	reg [14:0] loopCount [0:15];
	
	//save sound files
	
	/*
	reg [100:0] soundFile0 [0:100];
	reg [100:0] soundFile1 [0:100];
	reg [100:0] soundFile2 [0:100];
	reg [100:0] soundFile3 [0:100];
	reg [100:0] soundFile4 [0:100];
	reg [100:0] soundFile5 [0:100];
	reg [100:0] soundFile6 [0:100];
	reg [100:0] soundFile7 [0:100];
	reg [100:0] soundFile8 [0:100];
	reg [100:0] soundFile9 [0:100];
	reg [100:0] soundFileA [0:100];
	reg [100:0] soundFileB [0:100];
	reg [100:0] soundFileC [0:100];
	reg [100:0] soundFileD [0:100];
	reg [100:0] soundFileE [0:100];
	reg [100:0] soundFileF [0:100];
	*/
	reg [100:0] soundFile [0:100] [0:15];
	
	//temp sound
	//reg [100:0] tempSF [0:100];
	
	//temp output
	reg [20:0] tempOut;
	
	reg i,j;
	initial
	begin
		//set things to 0
		requestedInput <= 0;
		prevRequestedInput <= 0;
		tempOut <= 0;
		tempSF <= 0;
		//set all positions and loopCount to end value
		for (i = 0; i < 16; i = i + 1)
		begin
			pos[i] <= 8000;
			loopCount[i] <= 5000;
		end
		
		//read from sound files
		//setup:
		/*
		123A	-->	ABCD
		456B  -->	EFGAb
		789C	-->	ABCD
		0FED	-->	EFGAb
		*/
		$readmemh("soundE.raw", soundFile[0]);
		$readmemh("soundA.raw", soundFile[1]);
		$readmemh("soundB.raw", soundFile[2]);
		$readmemh("soundC.raw", soundFile[3]);
		$readmemh("soundE.raw", soundFile[4]);
		$readmemh("soundF.raw", soundFile[5]);
		$readmemh("soundG.raw", soundFile[6]);
		$readmemh("soundA.raw", soundFile[7]);
		$readmemh("soundB.raw", soundFile[8]);
		$readmemh("soundC.raw", soundFile[9]);
		$readmemh("soundD.raw", soundFile[10]);	//A
		$readmemh("soundAb.raw", soundFile[11]);	//B
		$readmemh("soundD.raw", soundFile[12]);	//C
		$readmemh("soundAb.raw", soundFile[13]);	//D
		$readmemh("soundG.raw", soundFile[14]);	//E
		$readmemh("soundF.raw", soundFile[15]);	//F
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
		/*
			case(i)
				0: tempSF <= soundFile0;
				1: tempSF <= soundFile1;
				2: tempSF <= soundFile2;
				3: tempSF <= soundFile3;
				4: tempSF <= soundFile4;
				5: tempSF <= soundFile5;
				6: tempSF <= soundFile6;
				7: tempSF <= soundFile7;
				8: tempSF <= soundFile8;
				9: tempSF <= soundFile9;
				10: tempSF <= soundFileA;
				11: tempSF <= soundFileB;
				12: tempSF <= soundFileC;
				13: tempSF <= soundFileD;
				14: tempSF <= soundFileE;
				15: tempSF <= soundFileF;
				default: tempSF <= 0;
			endcase
			*/
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
			else if (pos[i] < 8000)
			begin
				//add to tempOut
				for (j = 0; j < 15; j = j + 1)
				begin
					tempOut[j] <= tempOut[j] + soundFile[i][(16*pos[i])+j];
				end
				pos[i] <= pos[i] + 1;
			end
			//check if need to reloop sound
			else if (loopCount[i] < 5000)
			begin
				//add to tempOut
				for (j = 0; j < 15; j = j + 1)
				begin
					tempOut[j] <= tempOut[j] + soundFile[i][(16*pos[i])+j];
				end
				//reset position
				pos[i] <= 0;
				//increment loopcount
				loopCount[i] <= loopCount[i] + 1;
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
