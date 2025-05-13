// ;WAP to swap the value of bit D6 and D2 if they are even, Assume there are 10 data.
	   MVI H,00
	   MVI L,00

START:	   MOV A,M
	   CALL CHECK_BITS
	   INX H
	   DCR B
	   JNZ START
// End of Program
	   HLT


CHECK_BITS:	   MVI C,00
	   MOV B,A
// Check D6 (bit 6)
	
	   MOV D,C
	   MOV C,B
	
	   MOV E,C
// If both bits are zero (even), swap
	   MOV A,D
	
	   MOV M,A
	   RET
