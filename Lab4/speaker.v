`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:48:48 11/16/2016 
// Design Name: 
// Module Name:    speaker 
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
module speaker(
	clk,
	JC
   );
	
	input clk;
	output reg [7:0]	JC;
	
	reg [31:0] counter;
	
	initial 
	begin
	counter <= 0;
	JC <= 8'b11111111;
	end
	
	always @ (posedge clk)
	begin
		counter <= counter + 1;
		if (counter == 214517)
		begin
			JC <= ~JC;
			counter <= 0;
		end
	end


endmodule
