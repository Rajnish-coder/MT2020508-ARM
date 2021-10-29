     AREA     queation3, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION	 	
        ; program to print first 10 numbers of fibonacci series
	    MOV  R1, #0x20000000   ; base address of array
		MOV  R2, #0		
		STR  R2, [R1]          ; storing first term at 0x20000000
		MOV  R3, #1
		STR  R3, [R1,#0x1]     ; storing second term at 0x20000001
		MOV  R4, #8            ; initialise the counter 
		MOV  R5, #0x2
		MOV  R6, #0            ; register R6 holds the value of next term
loop    CMP  R4, #1
        MOV  R6, #0
        ADD  R6, R6,R2
		ADD  R6, R6,R3
        STR  R6, [R1,R5]       ; storing the next term in new memory location
		MOV  R2, R3
		MOV  R3, R6
		ADD  R5, #0x1
		SUBGT  R4, #1
		BGT loop
stop    B stop ; stop program
     ENDFUNC
     END 