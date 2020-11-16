`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:48:19 11/08/2020 
// Design Name: 
// Module Name:    lab_01 
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
module lab_01(clk, resetn, a, b, c, d, e, f, g);
	input clk, resetn;
	output a, b, c, d, e, f, g;
	
	reg [6:0] DECODE;
	reg [3:0] count;
	
	always @(negedge resetn or posedge clk) begin
		if(~resetn)
			count <= 4'b0000;
		else
			count <= count + 1;
	end
	
	always @(count) begin
		case(count)
			4'b0000 : DECODE = 7'b1111110; //0
			4'b0001 : DECODE = 7'b0110000; //1
			4'b0010 : DECODE = 7'b1101101; //2
			4'b0011 : DECODE = 7'b1111001; //3
			4'b0100 : DECODE = 7'b0110011; //4
			4'b0101 : DECODE = 7'b1011011; //5
			4'b0110 : DECODE = 7'b1011111; //6
			4'b0111 : DECODE = 7'b1110000; //7
			4'b1000 : DECODE = 7'b1111111; //8
			4'b1001 : DECODE = 7'b1111011; //9
			4'b1010 : DECODE = 7'b1110111; //A
			4'b1011 : DECODE = 7'b0011111; //b
			4'b1100 : DECODE = 7'b0001101; //c
			4'b1101 : DECODE = 7'b0111101; //d
			4'b1110 : DECODE = 7'b1001111; //E
			4'b1111 : DECODE = 7'b1000111; //F
		endcase
	end
	
	assign {a, b, c, d, e, f, g} = DECODE;

endmodule
