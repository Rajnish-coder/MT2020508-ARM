     AREA     queation2, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION	 	
        ; find largest among 3 numbers
	    MOV  R1, #0x20000000   ; base address of array
		MOV  R2, #5           ;  first number is 5
		STR  R2, [R1]
		MOV  R2, #6
		STR  R2, [R1,#0x4]    ;  second number is 6
		MOV  R2, #7
		STR  R2, [R1,#0x8]     ; third number is 8
		LDR  R2, [R1]
		LDR  R3, [R1,#0x4]
		LDR  R4, [R1,#0x8]
		CMP  R2, R3
		ITE  LT
		MOVLT  R0, R3
		MOVGE  R0, R2
		CMP  R0, R4
		IT  LT
		MOVLT  R0, R4
		;-----------------
		BL printMsg               ; largest value present in register R0
stop    B stop ; stop program
     ENDFUNC
     END 