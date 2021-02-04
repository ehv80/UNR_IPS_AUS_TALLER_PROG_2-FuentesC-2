	.file	"qq.c"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	andl	$-16, %esp
	movl	$0, %eax
	subl	%eax, %esp
	movl	$10, (%esp)
	call	malloc
	movl	%eax, -4(%ebp)
	cmpl	$0, -4(%ebp)
	jne	.L2
	movl	$-1, -8(%ebp)
	jmp	.L1
.L2:
	movl	$0, -8(%ebp)
.L1:
	movl	-8(%ebp), %eax
	leave
	ret
	.size	main, .-main
	.section	.note.GNU-stack,"",@progbits
	.ident	"GCC: (GNU) 3.3.5 (Debian 1:3.3.5-13)"
