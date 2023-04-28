section .data
    msg db "Hello, Holberton\n", 0 ; Null-terminated string

section .text
    global main

extern printf  ; Declare printf as an external symbol

main:
    ; Prepare argument for printf
    mov edi, msg

    ; Call printf
    xor eax, eax    ; Clear EAX to indicate printf return value
    call printf

    ; Exit program
    xor eax, eax    ; Return 0 from main
    ret

; Linking command:
; nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -o 101-hello_holberton 101-hello_holberton.o
