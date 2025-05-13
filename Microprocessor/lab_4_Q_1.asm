	   MVI C,0A
	   LXI H,6000
	   LXI D,7000

UP:	   MOV A,M
	   STAX D
	   INX H
	   INX D
	   DCR C
	   JNZ UP
	   HLT
