	.file	"KiraYoshikage.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.ascii	"Watashi no na wa Kira Yoshikage. Nenr\304\223 sanj\305\253sa"
	.ascii	"n sai. jitaku wa mori\305\215 ch\305\215 hokut\305\215 bu no"
	.ascii	" bess\305\215 chitai ni ari... kekkon wa shiteinai... Shigot"
	.ascii	"o wa KameY\305\253 ch\305\253n den no kaishain de mainichi o"
	.ascii	"suku tomo yoru hachi ji made niwa kitakusuru. tabako wa suwa"
	.ascii	"nai. sake wa tashinamu t\304\223do. yoru j\305\253ichi niwa "
	.ascii	"toko ni tsuki, kanarazu hachi jikan wa suimin o toru y\305\215"
	.ascii	" ni shiteiru... Neru mae"
	.string	" ni atatakai miruku o nomi, nij\305\253 bun hodo no sutorecchi de karada o hogushite kara toko ni tsukuto, hotondo asa made jukusui sai... akanb\305\215 no y\305\215 ni hir\305\215 ya sutoresu o nokosazu ni, asa me o samaserun da... kenk\305\215 shindan demo ij\305\215 na shito iwaretai y\305\215."
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
