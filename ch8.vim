" Vim syntax file
" Language:	CHIP8
" Maintainer:	Lee Hammerton (Savoury SnaX) savoury.snax@googlemail.com
" Last Change:	2012 July 10

" Quit when a (custom) syntax file was already loaded
if exists("b:current_syntax")
  finish
endif

syntax match	ch8Comment	";.*"

syntax case ignore
syn keyword	ch8Reserved	CLS CALL SNE SE JP LD RET DRW SKP SKNP ADD AND OR XOR RND SUB SUBN SHL SHR SCD SCR SCL EXIT LOW HIGH MEGAON MEGAOFF CCOL SPRH SPRW NOP LDHI LDPAL DIGSND STOPSND SCU FADE BMODE
syn keyword	ch8Directives	DS DB DW INCLUDE INCBIN EQU = , ALIGN OPTION BINARY SCHIP11 ON OFF DA
syn keyword	ch8Registers	F HF B I K R DT ST V0 V1 V2 V3 V4 V5 V6 V7 V8 V9 VA VB VC VD VE VF
syntax case match

syntax match	ch8Identifier	"[a-zA-Z_][a-zA-Z_0-9]*"

syntax match	ch8String	"'.\{-}'"
syntax match	ch8HexNumber	"#[0-9a-fA-F]\+"
syntax match	ch8BinNumber	"$[0-1]\+"
syntax match	ch8DecNumber	"\d\+"

hi def link ch8Reserved 	Statement
hi def link ch8Directives 	Statement
hi def link ch8Registers 	Statement
hi def link ch8Comment		Comment
hi def link ch8HexNumber	Number
hi def link ch8DecNumber	Number
hi def link ch8BinNumber	Number
hi def link ch8String		String

let b:current_syntax = "src"

" vim: ts=8
