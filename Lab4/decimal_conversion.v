`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:53:07 11/30/2016 
// Design Name: 
// Module Name:    decimal_conversion 
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
module decimal_conversion(
	//Input (max value of 99)
	number,
	//Output
	lowerDigit,
	upperDigit
	);
	
	input [7:0] number;
	
	output wire [3:0] lowerDigit;
	output wire [3:0] upperDigit;
	
	assign lowerDigit = number % 10;
	assign upperDigit = number / 10;

endmodule

