	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 26, 0	sdk_version 26, 0
	.section	__DATA,__data
	.globl	_x                              ; @x
	.p2align	2, 0x0
_x:
	.long	42                              ; 0x2a

	.globl	_p                              ; @p
	.p2align	3, 0x0
_p:
	.quad	_x

.subsections_via_symbols
