extern printf

section .text
global main

main:
 push rbp

mov rdi,fmt
mov rsi,msg
mov rax,a
call printf

pop rbp

mov rax, a
ret

section .data
msg: db "Hello, Holberton", a
fmt: db "%s", 10, 0
