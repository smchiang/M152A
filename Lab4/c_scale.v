`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:31:58 11/27/2016 
// Design Name: 
// Module Name:    c_scale 
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
module c_scale(
	//input
	clk,
	//output
	clk_a,
	clk_b,
	clk_c,
	clk_d,
	clk_e,
	clk_f
    );

	input clk;

	output	clk_a;
	output	clk_b;
	output	clk_c;
	output	clk_d;
	output	clk_e;
	output	clk_f;

	reg [31:0] counter_a;
	reg [31:0] counter_b;
	reg [31:0] counter_c;
	reg [31:0] counter_d;
	reg [31:0] counter_e;
	reg [31:0] counter_f;

	initial 
	begin
	counter_a <= 0;
	counter_b <= 0;
	counter_c <= 0;
	counter_d <= 0;
	counter_e <= 0;
	counter_f <= 0;
	clk_a <= 1;
	clk_b <= 1;
	clk_c <= 1;
	clk_d <= 1;
	clk_e <= 1;
	clk_f <= 1;
	end
	
	always @ (posedge clk)
	begin
		counter_a <= counter_a + 1;
		counter_b <= counter_b + 1;
		counter_c <= counter_c + 1;
		counter_d <= counter_d + 1;
		counter_e <= counter_e + 1;
		counter_f <= counter_f + 1;
		
		if (counter_a == 454545)
		begin
			clk_a <= ~clk_a;
			counter_a <= 0;
		end
		if (counter_b == 404957)
		begin
			clk_b <= ~clk_b;
			counter_b <= 0;
		end
		if (counter_c == 382219)
		begin
			clk_c <= ~clk_c;
			counter_c <= 0;
		end
		if (counter_d == 340530)
		begin
			clk_d <= ~clk_f;
			counter_d <= 0;
		end
		if (counter_e == 303370)
		begin
			clk_e <= ~clk_f;
			counter_e <= 0;
		end
		if (counter_f == 286344)
		begin
			clk_f <= ~clk_f;
			counter_f <= 0;
		end
	end


endmodule
