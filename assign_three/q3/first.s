     AREA     queation3, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION	 	
        ; program to count even numbers
	    MOV  R1, #0x20000000   ; base address of array
		MOV  R2, #10          ; size of array is 10
		MOV  R3, #0x0
		MOV  R4, #0
loop    CMP  R2, #1
        STR  R4, [R1,R3]       ; array values are 0,1,2,3,4....so on
		ADD  R3, #0x4
		ADD  R4, #1
		SUBGT  R2, #1
		BGT loop
		
		;-----------------
		MOV  R3, #0x0
        MOV  R2, #10
		MOV  R0, #0

loop1   LDR  R4, [R1,R3]
		ADD  R3, #0x4
		AND  R4, R4, #1       
		CMP  R4, #1             ; check whether even or odd
		IT   LT
		ADDLT  R0, #1           ; if even then increment the count of R0 by 1
		SUB  R2, #1
		CMP  R2, #0
		IT  NE
		BNE  loop1
		;-----------------
		BL printMsg               ; count of even numbers is stored in R0
stop    B stop ; stop program
     ENDFUNC
     END 