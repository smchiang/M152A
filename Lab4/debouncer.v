`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:26:31 11/02/2016 
// Design Name: 
// Module Name:    debouncer 
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

//Take your input, output that as output upon clock. It's a flip flop.
module debouncer(
	//input
	in,
	clock,
	//output
	out
	);
	
	input [10:0] in;
	input clock;
	output reg [10:0] out;
	
	always @ (posedge clock)
		out <= in;


endmodule
