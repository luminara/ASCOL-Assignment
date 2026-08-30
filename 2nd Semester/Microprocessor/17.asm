.MODEL SMALL
.STACK 100H

.DATA
    MSG   DB 'Enter the letter in lowercase: $'
    MSG1  DB 0DH, 0AH, '[Kiran Chhetri] Letter in uppercase is: $'   ; 0DH,0AH = carriage return + line feed (new line)
    TEMP  DB ?                                          ; storage for the character being converted

.CODE
MAIN PROC
    MOV AX, @DATA             ; load address of data segment into AX
    MOV DS, AX                 ; copy AX into DS (DS can't be loaded directly with a constant)

    LEA DX, MSG                 ; point DX to the prompt message
    MOV AH, 09H                  ; function 09H = display string (terminated by '$')
    INT 21H                       ; display the prompt

    ; Read a character
    MOV AH, 01H                    ; function 01H = read a single character from keyboard
    INT 21H                         ; character typed is returned in AL (also echoed to screen)
    MOV TEMP, AL                     ; store the character for later use

    ; Display second message
    LEA DX, MSG1                      ; point DX to the second message
    MOV AH, 09H
    INT 21H                             ; display "Letter in uppercase is: "

    ; Convert lowercase to uppercase
    SUB TEMP, 20H                        ; ASCII trick: lowercase letters are exactly 20H (32 decimal) higher than uppercase
                                           ; e.g. 'a' = 61H, 'A' = 41H → 61H - 20H = 41H

    ; Display uppercase character
    MOV DL, TEMP                           ; INT 21H/02H expects the character to print in DL
    MOV AH, 02H                             ; function 02H = display single character
    INT 21H                                  ; print the converted uppercase character

    ; Exit program
    MOV AH, 4CH                               ; function 4CH = terminate program
    INT 21H                                     ; return control to DOS/OS

MAIN ENDP
END MAIN
