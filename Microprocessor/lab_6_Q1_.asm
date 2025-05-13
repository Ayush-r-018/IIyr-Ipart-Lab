// ; Write ASM Bagan to count number of Inputs and Optputs in 8 bit stored in location 3000
	   LXI H,3000
	   MOV A,M
	   MVI C,08
	   MVI B,00

COUNT_BITS:	   RLC
	   JC INCREMENT
	   DCR C
	   JNZ COUNT_BITS
	   JMP FINISH

INCREMENT:	   INR B
	   DCR C
	   JNZ COUNT_BITS

FINISH:	   MOV A,B
	   STA 3001
	   MVI A,08
	   SUB B
	   STA 3002
	   HLT
