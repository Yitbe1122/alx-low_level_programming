global main

	section .text
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 17
	syscall

	mov eax, 60
	xor rdi, rdi
	syscall

message:
	db "Hello, Holberton", 10 ; 10 is the ASCII code for a new line
