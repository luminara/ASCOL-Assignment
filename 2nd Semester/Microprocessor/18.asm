.MODEL SMALL
.STACK 100H

.DATA
    STRING DB 'Kiran Chhetri'    ; string to reverse
    LEN    DB 13                 ; length of string

.CODE
MAIN PROC
    MOV AX, @DATA                ; load address of data segment into AX
    MOV DS, AX                   ; copy AX into DS

    LEA SI, STRING                ; SI points to the start of the string
    MOV CL, LEN                   ; load length into CL (byte into byte — correct sizes)
    MOV CH, 0                     ; clear CH so CX = LEN exactly

LOOP1:
    MOV BL, [SI]                  ; get one character
    XOR BH, BH                    ; make BX a clean word
    PUSH BX                       ; push character onto stack
    INC SI                        ; move to next character
    LOOP LOOP1                    ; repeat until CX = 0

    MOV CL, LEN                   ; reload SAME length for the pop loop
    MOV CH, 0

LOOP2:
    POP DX                        ; character -> DL
    MOV AH, 02H                   ; DOS function: display character
    INT 21H
    LOOP LOOP2                    ; repeat until CX = 0

    MOV AH, 4CH                   ; exit program
    INT 21H

MAIN ENDP
END MAIN
