.MODEL SMALL
.STACK 100H

.DATA
    STR1         DB 'ASCOL CAMPUS'                       ; string to search
    LEN          DB 12                                   ; length of string (hardcoded)
    CHAR_TO_FIND DB 'S'
    MSG_FOUND    DB 0DH,0AH,'Character Found$'
    MSG_NOTFOUND DB 0DH,0AH,'Character Not Found$'

.CODE
MAIN PROC
    MOV AX, @DATA                  ; load address of data segment into AX
    MOV DS, AX                     ; copy AX into DS

    LEA SI, STR1                   ; SI points to start of the string
    MOV CL, LEN                    ; CL = length of string
    MOV CH, 00H                    ; clear CH so CX = LEN exactly
    MOV BL, CHAR_TO_FIND           ; BL holds the character we're searching for ('S')

SEARCH_LOOP:
    MOV AL, [SI]                   ; load current character
    CMP AL, BL                     ; compare with target character 'S'
    JE FOUND                       ; match! exit loop and report found

    INC SI                         ; move to next character
    LOOP SEARCH_LOOP               ; decrement CX, repeat until CX = 0

    JMP NOT_FOUND                  ; CX hit 0 with no match — character not in string

FOUND:
    LEA DX, MSG_FOUND
    JMP PRINT

NOT_FOUND:
    LEA DX, MSG_NOTFOUND

PRINT:
    MOV AH, 09H
    INT 21H                        ; print the result message

    MOV AH, 4CH                    ; exit program
    INT 21H

MAIN ENDP
END MAIN
