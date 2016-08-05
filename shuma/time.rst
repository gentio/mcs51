                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.5.6 # (Aug  1 2016)
                              4 ; This file generated Thu Aug  4 16:16:51 2016
                              5 ;--------------------------------------------------------
                              6 	.module time
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _DIG_CODE
                             13 	.globl _DIG_PLACE
                             14 	.globl _timer0
                             15 	.globl _main
                             16 	.globl _TF2
                             17 	.globl _EXF2
                             18 	.globl _RCLK
                             19 	.globl _TCLK
                             20 	.globl _EXEN2
                             21 	.globl _TR2
                             22 	.globl _C_T2
                             23 	.globl _CP_RL2
                             24 	.globl _T2CON_7
                             25 	.globl _T2CON_6
                             26 	.globl _T2CON_5
                             27 	.globl _T2CON_4
                             28 	.globl _T2CON_3
                             29 	.globl _T2CON_2
                             30 	.globl _T2CON_1
                             31 	.globl _T2CON_0
                             32 	.globl _PT2
                             33 	.globl _ET2
                             34 	.globl _CY
                             35 	.globl _AC
                             36 	.globl _F0
                             37 	.globl _RS1
                             38 	.globl _RS0
                             39 	.globl _OV
                             40 	.globl _F1
                             41 	.globl _P
                             42 	.globl _PS
                             43 	.globl _PT1
                             44 	.globl _PX1
                             45 	.globl _PT0
                             46 	.globl _PX0
                             47 	.globl _RD
                             48 	.globl _WR
                             49 	.globl _T1
                             50 	.globl _T0
                             51 	.globl _INT1
                             52 	.globl _INT0
                             53 	.globl _TXD
                             54 	.globl _RXD
                             55 	.globl _P3_7
                             56 	.globl _P3_6
                             57 	.globl _P3_5
                             58 	.globl _P3_4
                             59 	.globl _P3_3
                             60 	.globl _P3_2
                             61 	.globl _P3_1
                             62 	.globl _P3_0
                             63 	.globl _EA
                             64 	.globl _ES
                             65 	.globl _ET1
                             66 	.globl _EX1
                             67 	.globl _ET0
                             68 	.globl _EX0
                             69 	.globl _P2_7
                             70 	.globl _P2_6
                             71 	.globl _P2_5
                             72 	.globl _P2_4
                             73 	.globl _P2_3
                             74 	.globl _P2_2
                             75 	.globl _P2_1
                             76 	.globl _P2_0
                             77 	.globl _SM0
                             78 	.globl _SM1
                             79 	.globl _SM2
                             80 	.globl _REN
                             81 	.globl _TB8
                             82 	.globl _RB8
                             83 	.globl _TI
                             84 	.globl _RI
                             85 	.globl _P1_7
                             86 	.globl _P1_6
                             87 	.globl _P1_5
                             88 	.globl _P1_4
                             89 	.globl _P1_3
                             90 	.globl _P1_2
                             91 	.globl _P1_1
                             92 	.globl _P1_0
                             93 	.globl _TF1
                             94 	.globl _TR1
                             95 	.globl _TF0
                             96 	.globl _TR0
                             97 	.globl _IE1
                             98 	.globl _IT1
                             99 	.globl _IE0
                            100 	.globl _IT0
                            101 	.globl _P0_7
                            102 	.globl _P0_6
                            103 	.globl _P0_5
                            104 	.globl _P0_4
                            105 	.globl _P0_3
                            106 	.globl _P0_2
                            107 	.globl _P0_1
                            108 	.globl _P0_0
                            109 	.globl _TH2
                            110 	.globl _TL2
                            111 	.globl _RCAP2H
                            112 	.globl _RCAP2L
                            113 	.globl _T2CON
                            114 	.globl _B
                            115 	.globl _ACC
                            116 	.globl _PSW
                            117 	.globl _IP
                            118 	.globl _P3
                            119 	.globl _IE
                            120 	.globl _P2
                            121 	.globl _SBUF
                            122 	.globl _SCON
                            123 	.globl _P1
                            124 	.globl _TH1
                            125 	.globl _TH0
                            126 	.globl _TL1
                            127 	.globl _TL0
                            128 	.globl _TMOD
                            129 	.globl _TCON
                            130 	.globl _PCON
                            131 	.globl _DPH
                            132 	.globl _DPL
                            133 	.globl _SP
                            134 	.globl _P0
                            135 	.globl _display_PARM_2
                            136 	.globl _num2
                            137 	.globl _num
                            138 	.globl _ge
                            139 	.globl _shi
                            140 	.globl _delayms
                            141 	.globl _display
                            142 ;--------------------------------------------------------
                            143 ; special function registers
                            144 ;--------------------------------------------------------
                            145 	.area RSEG    (DATA)
                    0080    146 _P0	=	0x0080
                    0081    147 _SP	=	0x0081
                    0082    148 _DPL	=	0x0082
                    0083    149 _DPH	=	0x0083
                    0087    150 _PCON	=	0x0087
                    0088    151 _TCON	=	0x0088
                    0089    152 _TMOD	=	0x0089
                    008A    153 _TL0	=	0x008a
                    008B    154 _TL1	=	0x008b
                    008C    155 _TH0	=	0x008c
                    008D    156 _TH1	=	0x008d
                    0090    157 _P1	=	0x0090
                    0098    158 _SCON	=	0x0098
                    0099    159 _SBUF	=	0x0099
                    00A0    160 _P2	=	0x00a0
                    00A8    161 _IE	=	0x00a8
                    00B0    162 _P3	=	0x00b0
                    00B8    163 _IP	=	0x00b8
                    00D0    164 _PSW	=	0x00d0
                    00E0    165 _ACC	=	0x00e0
                    00F0    166 _B	=	0x00f0
                    00C8    167 _T2CON	=	0x00c8
                    00CA    168 _RCAP2L	=	0x00ca
                    00CB    169 _RCAP2H	=	0x00cb
                    00CC    170 _TL2	=	0x00cc
                    00CD    171 _TH2	=	0x00cd
                            172 ;--------------------------------------------------------
                            173 ; special function bits
                            174 ;--------------------------------------------------------
                            175 	.area RSEG    (DATA)
                    0080    176 _P0_0	=	0x0080
                    0081    177 _P0_1	=	0x0081
                    0082    178 _P0_2	=	0x0082
                    0083    179 _P0_3	=	0x0083
                    0084    180 _P0_4	=	0x0084
                    0085    181 _P0_5	=	0x0085
                    0086    182 _P0_6	=	0x0086
                    0087    183 _P0_7	=	0x0087
                    0088    184 _IT0	=	0x0088
                    0089    185 _IE0	=	0x0089
                    008A    186 _IT1	=	0x008a
                    008B    187 _IE1	=	0x008b
                    008C    188 _TR0	=	0x008c
                    008D    189 _TF0	=	0x008d
                    008E    190 _TR1	=	0x008e
                    008F    191 _TF1	=	0x008f
                    0090    192 _P1_0	=	0x0090
                    0091    193 _P1_1	=	0x0091
                    0092    194 _P1_2	=	0x0092
                    0093    195 _P1_3	=	0x0093
                    0094    196 _P1_4	=	0x0094
                    0095    197 _P1_5	=	0x0095
                    0096    198 _P1_6	=	0x0096
                    0097    199 _P1_7	=	0x0097
                    0098    200 _RI	=	0x0098
                    0099    201 _TI	=	0x0099
                    009A    202 _RB8	=	0x009a
                    009B    203 _TB8	=	0x009b
                    009C    204 _REN	=	0x009c
                    009D    205 _SM2	=	0x009d
                    009E    206 _SM1	=	0x009e
                    009F    207 _SM0	=	0x009f
                    00A0    208 _P2_0	=	0x00a0
                    00A1    209 _P2_1	=	0x00a1
                    00A2    210 _P2_2	=	0x00a2
                    00A3    211 _P2_3	=	0x00a3
                    00A4    212 _P2_4	=	0x00a4
                    00A5    213 _P2_5	=	0x00a5
                    00A6    214 _P2_6	=	0x00a6
                    00A7    215 _P2_7	=	0x00a7
                    00A8    216 _EX0	=	0x00a8
                    00A9    217 _ET0	=	0x00a9
                    00AA    218 _EX1	=	0x00aa
                    00AB    219 _ET1	=	0x00ab
                    00AC    220 _ES	=	0x00ac
                    00AF    221 _EA	=	0x00af
                    00B0    222 _P3_0	=	0x00b0
                    00B1    223 _P3_1	=	0x00b1
                    00B2    224 _P3_2	=	0x00b2
                    00B3    225 _P3_3	=	0x00b3
                    00B4    226 _P3_4	=	0x00b4
                    00B5    227 _P3_5	=	0x00b5
                    00B6    228 _P3_6	=	0x00b6
                    00B7    229 _P3_7	=	0x00b7
                    00B0    230 _RXD	=	0x00b0
                    00B1    231 _TXD	=	0x00b1
                    00B2    232 _INT0	=	0x00b2
                    00B3    233 _INT1	=	0x00b3
                    00B4    234 _T0	=	0x00b4
                    00B5    235 _T1	=	0x00b5
                    00B6    236 _WR	=	0x00b6
                    00B7    237 _RD	=	0x00b7
                    00B8    238 _PX0	=	0x00b8
                    00B9    239 _PT0	=	0x00b9
                    00BA    240 _PX1	=	0x00ba
                    00BB    241 _PT1	=	0x00bb
                    00BC    242 _PS	=	0x00bc
                    00D0    243 _P	=	0x00d0
                    00D1    244 _F1	=	0x00d1
                    00D2    245 _OV	=	0x00d2
                    00D3    246 _RS0	=	0x00d3
                    00D4    247 _RS1	=	0x00d4
                    00D5    248 _F0	=	0x00d5
                    00D6    249 _AC	=	0x00d6
                    00D7    250 _CY	=	0x00d7
                    00AD    251 _ET2	=	0x00ad
                    00BD    252 _PT2	=	0x00bd
                    00C8    253 _T2CON_0	=	0x00c8
                    00C9    254 _T2CON_1	=	0x00c9
                    00CA    255 _T2CON_2	=	0x00ca
                    00CB    256 _T2CON_3	=	0x00cb
                    00CC    257 _T2CON_4	=	0x00cc
                    00CD    258 _T2CON_5	=	0x00cd
                    00CE    259 _T2CON_6	=	0x00ce
                    00CF    260 _T2CON_7	=	0x00cf
                    00C8    261 _CP_RL2	=	0x00c8
                    00C9    262 _C_T2	=	0x00c9
                    00CA    263 _TR2	=	0x00ca
                    00CB    264 _EXEN2	=	0x00cb
                    00CC    265 _TCLK	=	0x00cc
                    00CD    266 _RCLK	=	0x00cd
                    00CE    267 _EXF2	=	0x00ce
                    00CF    268 _TF2	=	0x00cf
                            269 ;--------------------------------------------------------
                            270 ; overlayable register banks
                            271 ;--------------------------------------------------------
                            272 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     273 	.ds 8
                            274 ;--------------------------------------------------------
                            275 ; internal ram data
                            276 ;--------------------------------------------------------
                            277 	.area DSEG    (DATA)
   0008                     278 _shi::
   0008                     279 	.ds 1
   0009                     280 _ge::
   0009                     281 	.ds 1
   000A                     282 _num::
   000A                     283 	.ds 1
   000B                     284 _num2::
   000B                     285 	.ds 1
   000C                     286 _display_PARM_2:
   000C                     287 	.ds 1
                            288 ;--------------------------------------------------------
                            289 ; overlayable items in internal ram 
                            290 ;--------------------------------------------------------
                            291 	.area	OSEG    (OVR,DATA)
                            292 ;--------------------------------------------------------
                            293 ; Stack segment in internal ram 
                            294 ;--------------------------------------------------------
                            295 	.area	SSEG	(DATA)
   000D                     296 __start__stack:
   000D                     297 	.ds	1
                            298 
                            299 ;--------------------------------------------------------
                            300 ; indirectly addressable internal ram data
                            301 ;--------------------------------------------------------
                            302 	.area ISEG    (DATA)
                            303 ;--------------------------------------------------------
                            304 ; bit data
                            305 ;--------------------------------------------------------
                            306 	.area BSEG    (BIT)
                            307 ;--------------------------------------------------------
                            308 ; paged external ram data
                            309 ;--------------------------------------------------------
                            310 	.area PSEG    (PAG,XDATA)
                            311 ;--------------------------------------------------------
                            312 ; external ram data
                            313 ;--------------------------------------------------------
                            314 	.area XSEG    (XDATA)
                            315 ;--------------------------------------------------------
                            316 ; external initialized ram data
                            317 ;--------------------------------------------------------
                            318 	.area XISEG   (XDATA)
                            319 	.area HOME    (CODE)
                            320 	.area GSINIT0 (CODE)
                            321 	.area GSINIT1 (CODE)
                            322 	.area GSINIT2 (CODE)
                            323 	.area GSINIT3 (CODE)
                            324 	.area GSINIT4 (CODE)
                            325 	.area GSINIT5 (CODE)
                            326 	.area GSINIT  (CODE)
                            327 	.area GSFINAL (CODE)
                            328 	.area CSEG    (CODE)
                            329 ;--------------------------------------------------------
                            330 ; interrupt vector 
                            331 ;--------------------------------------------------------
                            332 	.area HOME    (CODE)
   0000                     333 __interrupt_vect:
   0000 02 00 0E            334 	ljmp	__sdcc_gsinit_startup
   0003 32                  335 	reti
   0004                     336 	.ds	7
   000B 02 00 FC            337 	ljmp	_timer0
                            338 ;--------------------------------------------------------
                            339 ; global & static initialisations
                            340 ;--------------------------------------------------------
                            341 	.area HOME    (CODE)
                            342 	.area GSINIT  (CODE)
                            343 	.area GSFINAL (CODE)
                            344 	.area GSINIT  (CODE)
                            345 	.globl __sdcc_gsinit_startup
                            346 	.globl __sdcc_program_startup
                            347 	.globl __start__stack
                            348 	.globl __mcs51_genXINIT
                            349 	.globl __mcs51_genXRAMCLEAR
                            350 	.globl __mcs51_genRAMCLEAR
                            351 ;time.c:9: unsigned char shi = 0, ge = 0;
                            352 ;     genAssign
   0067 75 08 00            353 	mov	_shi,#0x00
                            354 ;time.c:9: }
                            355 
                            356 ;     genAssign
   006A 75 09 00            357 	mov	_ge,#0x00
                            358 ;time.c:10: unsigned char num = 0, num2 = 0;
                            359 ;     genAssign
   006D 75 0A 00            360 	mov	_num,#0x00
                            361 ;time.c:10: }
                            362 
                            363 ;     genAssign
   0070 75 0B 00            364 	mov	_num2,#0x00
                            365 	.area GSFINAL (CODE)
   0073 02 00 76            366 	ljmp	__sdcc_program_startup
                            367 ;--------------------------------------------------------
                            368 ; Home
                            369 ;--------------------------------------------------------
                            370 	.area HOME    (CODE)
                            371 	.area CSEG    (CODE)
   0076                     372 __sdcc_program_startup:
   0076 12 00 7B            373 	lcall	_main
                            374 ;	return from main will lock up
   0079 80 FE               375 	sjmp .
                            376 ;--------------------------------------------------------
                            377 ; code
                            378 ;--------------------------------------------------------
                            379 	.area CSEG    (CODE)
                            380 ;------------------------------------------------------------
                            381 ;Allocation info for local variables in function 'main'
                            382 ;------------------------------------------------------------
                            383 ;------------------------------------------------------------
                            384 ;time.c:16: void main()
                            385 ;	-----------------------------------------
                            386 ;	 function main
                            387 ;	-----------------------------------------
   007B                     388 _main:
                    0002    389 	ar2 = 0x02
                    0003    390 	ar3 = 0x03
                    0004    391 	ar4 = 0x04
                    0005    392 	ar5 = 0x05
                    0006    393 	ar6 = 0x06
                    0007    394 	ar7 = 0x07
                    0000    395 	ar0 = 0x00
                    0001    396 	ar1 = 0x01
                            397 ;time.c:18: TMOD = 0x01;
                            398 ;     genAssign
   007B 75 89 01            399 	mov	_TMOD,#0x01
                            400 ;time.c:20: TH0 = (65536 - 45872) / 256;
                            401 ;     genAssign
   007E 75 8C 4C            402 	mov	_TH0,#0x4C
                            403 ;time.c:21: TL0 = (65536 - 45872) % 256;
                            404 ;     genAssign
   0081 75 8A D0            405 	mov	_TL0,#0xD0
                            406 ;time.c:22: EA  = 1;
                            407 ;     genAssign
   0084 D2 AF               408 	setb	_EA
                            409 ;time.c:23: ET0 = 1;
                            410 ;     genAssign
   0086 D2 A9               411 	setb	_ET0
                            412 ;time.c:24: TR0 = 1;
                            413 ;     genAssign
   0088 D2 8C               414 	setb	_TR0
                            415 ;time.c:26: while(1){
   008A                     416 00102$:
                            417 ;time.c:29: display(shi, ge);
                            418 ;     genAssign
   008A 85 09 0C            419 	mov	_display_PARM_2,_ge
                            420 ;     genCall
   008D 85 08 82            421 	mov	dpl,_shi
   0090 12 00 B8            422 	lcall	_display
                            423 ;	Peephole 112.b	changed ljmp to sjmp
   0093 80 F5               424 	sjmp	00102$
                            425 ;	Peephole 259.a	removed redundant label 00104$ and ret
                            426 ;
                            427 ;------------------------------------------------------------
                            428 ;Allocation info for local variables in function 'delayms'
                            429 ;------------------------------------------------------------
                            430 ;i                         Allocated to registers r2 r3 
                            431 ;j                         Allocated to registers r4 
                            432 ;------------------------------------------------------------
                            433 ;time.c:34: void delayms(unsigned int i)
                            434 ;	-----------------------------------------
                            435 ;	 function delayms
                            436 ;	-----------------------------------------
   0095                     437 _delayms:
                            438 ;     genReceive
   0095 AA 82               439 	mov	r2,dpl
   0097 AB 83               440 	mov	r3,dph
                            441 ;     genAssign
   0099                     442 00105$:
                            443 ;time.c:37: for (; i > 0; i--)
                            444 ;     genIfx
   0099 EA                  445 	mov	a,r2
   009A 4B                  446 	orl	a,r3
                            447 ;     genIfxJump
                            448 ;	Peephole 108.c	removed ljmp by inverse jump logic
   009B 60 04               449 	jz	00111$
                            450 ;	Peephole 300	removed redundant label 00120$
                            451 ;     genAssign
   009D 7C 01               452 	mov	r4,#0x01
                            453 ;	Peephole 112.b	changed ljmp to sjmp
   009F 80 02               454 	sjmp	00112$
   00A1                     455 00111$:
                            456 ;     genAssign
   00A1 7C 00               457 	mov	r4,#0x00
   00A3                     458 00112$:
                            459 ;     genIfx
   00A3 EC                  460 	mov	a,r4
                            461 ;     genIfxJump
                            462 ;	Peephole 108.c	removed ljmp by inverse jump logic
   00A4 60 11               463 	jz	00109$
                            464 ;	Peephole 300	removed redundant label 00121$
                            465 ;time.c:38: for (j = 110; j > 0; j--);
                            466 ;     genAssign
   00A6 7C 6E               467 	mov	r4,#0x6E
   00A8                     468 00101$:
                            469 ;     genCmpGt
                            470 ;     genCmp
                            471 ;     genIfxJump
                            472 ;	Peephole 108.a	removed ljmp by inverse jump logic
                            473 ;	Peephole 132.b	optimized genCmpGt by inverse logic (acc differs)
   00A8 EC                  474 	mov	a,r4
   00A9 24 FF               475 	add	a,#0xff - 0x00
   00AB 50 03               476 	jnc	00107$
                            477 ;	Peephole 300	removed redundant label 00122$
                            478 ;     genMinus
                            479 ;     genMinusDec
   00AD 1C                  480 	dec	r4
                            481 ;	Peephole 112.b	changed ljmp to sjmp
   00AE 80 F8               482 	sjmp	00101$
   00B0                     483 00107$:
                            484 ;time.c:37: for (; i > 0; i--)
                            485 ;     genMinus
                            486 ;     genMinusDec
   00B0 1A                  487 	dec	r2
   00B1 BA FF 01            488 	cjne	r2,#0xff,00123$
   00B4 1B                  489 	dec	r3
   00B5                     490 00123$:
                            491 ;	Peephole 112.b	changed ljmp to sjmp
   00B5 80 E2               492 	sjmp	00105$
   00B7                     493 00109$:
   00B7 22                  494 	ret
                            495 ;------------------------------------------------------------
                            496 ;Allocation info for local variables in function 'display'
                            497 ;------------------------------------------------------------
                            498 ;ge                        Allocated with name '_display_PARM_2'
                            499 ;shi                       Allocated to registers r2 
                            500 ;------------------------------------------------------------
                            501 ;time.c:40: void display(unsigned char shi, unsigned char ge)
                            502 ;	-----------------------------------------
                            503 ;	 function display
                            504 ;	-----------------------------------------
   00B8                     505 _display:
                            506 ;     genReceive
   00B8 AA 82               507 	mov	r2,dpl
                            508 ;time.c:42: P1 = DIG_PLACE[0];
                            509 ;     genPointerGet
                            510 ;     genCodePointerGet
   00BA 90 01 3B            511 	mov	dptr,#_DIG_PLACE
                            512 ;	Peephole 181	changed mov to clr
   00BD E4                  513 	clr	a
   00BE 93                  514 	movc	a,@a+dptr
   00BF F5 90               515 	mov	_P1,a
                            516 ;time.c:43: P0 = DIG_CODE[ge];
                            517 ;     genPlus
   00C1 E5 0C               518 	mov	a,_display_PARM_2
   00C3 24 43               519 	add	a,#_DIG_CODE
   00C5 F5 82               520 	mov	dpl,a
                            521 ;	Peephole 181	changed mov to clr
   00C7 E4                  522 	clr	a
   00C8 34 01               523 	addc	a,#(_DIG_CODE >> 8)
   00CA F5 83               524 	mov	dph,a
                            525 ;     genPointerGet
                            526 ;     genCodePointerGet
                            527 ;	Peephole 181	changed mov to clr
   00CC E4                  528 	clr	a
   00CD 93                  529 	movc	a,@a+dptr
   00CE F5 80               530 	mov	_P0,a
                            531 ;time.c:44: delayms(2);
                            532 ;     genCall
                            533 ;	Peephole 182.b	used 16 bit load of dptr
   00D0 90 00 02            534 	mov	dptr,#0x0002
   00D3 C0 02               535 	push	ar2
   00D5 12 00 95            536 	lcall	_delayms
   00D8 D0 02               537 	pop	ar2
                            538 ;time.c:45: P0 = 0x0;
                            539 ;     genAssign
   00DA 75 80 00            540 	mov	_P0,#0x00
                            541 ;time.c:47: P1 = DIG_PLACE[1];
                            542 ;     genPointerGet
                            543 ;     genCodePointerGet
   00DD 90 01 3C            544 	mov	dptr,#(_DIG_PLACE + 0x0001)
                            545 ;	Peephole 181	changed mov to clr
   00E0 E4                  546 	clr	a
   00E1 93                  547 	movc	a,@a+dptr
   00E2 F5 90               548 	mov	_P1,a
                            549 ;time.c:48: P0 = DIG_CODE[shi];
                            550 ;     genPlus
                            551 ;	Peephole 236.g	used r2 instead of ar2
   00E4 EA                  552 	mov	a,r2
   00E5 24 43               553 	add	a,#_DIG_CODE
   00E7 F5 82               554 	mov	dpl,a
                            555 ;	Peephole 181	changed mov to clr
   00E9 E4                  556 	clr	a
   00EA 34 01               557 	addc	a,#(_DIG_CODE >> 8)
   00EC F5 83               558 	mov	dph,a
                            559 ;     genPointerGet
                            560 ;     genCodePointerGet
                            561 ;	Peephole 181	changed mov to clr
   00EE E4                  562 	clr	a
   00EF 93                  563 	movc	a,@a+dptr
   00F0 F5 80               564 	mov	_P0,a
                            565 ;time.c:49: delayms(2);
                            566 ;     genCall
                            567 ;	Peephole 182.b	used 16 bit load of dptr
   00F2 90 00 02            568 	mov	dptr,#0x0002
   00F5 12 00 95            569 	lcall	_delayms
                            570 ;time.c:50: P0 = 0x0;
                            571 ;     genAssign
   00F8 75 80 00            572 	mov	_P0,#0x00
                            573 ;	Peephole 300	removed redundant label 00101$
   00FB 22                  574 	ret
                            575 ;------------------------------------------------------------
                            576 ;Allocation info for local variables in function 'timer0'
                            577 ;------------------------------------------------------------
                            578 ;------------------------------------------------------------
                            579 ;time.c:53: void timer0(void) __interrupt 1
                            580 ;	-----------------------------------------
                            581 ;	 function timer0
                            582 ;	-----------------------------------------
   00FC                     583 _timer0:
   00FC C0 E0               584 	push	acc
   00FE C0 F0               585 	push	b
   0100 C0 D0               586 	push	psw
   0102 75 D0 00            587 	mov	psw,#0x00
                            588 ;time.c:55: TH0 = (65536 - 45872) / 256;
                            589 ;     genAssign
   0105 75 8C 4C            590 	mov	_TH0,#0x4C
                            591 ;time.c:57: TL0 = (65536 - 45872) % 256;
                            592 ;     genAssign
   0108 75 8A D0            593 	mov	_TL0,#0xD0
                            594 ;time.c:59: num2++;
                            595 ;     genPlus
                            596 ;     genPlusIncr
   010B 05 0B               597 	inc	_num2
                            598 ;time.c:60: if (num2 == 20){
                            599 ;     genCmpEq
   010D E5 0B               600 	mov	a,_num2
                            601 ;	Peephole 112.b	changed ljmp to sjmp
                            602 ;	Peephole 198.b	optimized misc jump sequence
   010F B4 14 1E            603 	cjne	a,#0x14,00105$
                            604 ;	Peephole 200.b	removed redundant sjmp
                            605 ;	Peephole 300	removed redundant label 00109$
                            606 ;	Peephole 300	removed redundant label 00110$
                            607 ;time.c:61: num2 = 0;
                            608 ;     genAssign
   0112 75 0B 00            609 	mov	_num2,#0x00
                            610 ;time.c:62: num++;
                            611 ;     genPlus
                            612 ;     genPlusIncr
   0115 05 0A               613 	inc	_num
                            614 ;time.c:63: if (num == 60)
                            615 ;     genCmpEq
   0117 E5 0A               616 	mov	a,_num
                            617 ;	Peephole 112.b	changed ljmp to sjmp
                            618 ;	Peephole 198.b	optimized misc jump sequence
   0119 B4 3C 03            619 	cjne	a,#0x3C,00102$
                            620 ;	Peephole 200.b	removed redundant sjmp
                            621 ;	Peephole 300	removed redundant label 00111$
                            622 ;	Peephole 300	removed redundant label 00112$
                            623 ;time.c:64: num = 0;
                            624 ;     genAssign
   011C 75 0A 00            625 	mov	_num,#0x00
   011F                     626 00102$:
                            627 ;time.c:65: shi = num / 10;
                            628 ;     genDiv
                            629 ;     genDivOneByte
   011F 75 F0 0A            630 	mov	b,#0x0A
   0122 E5 0A               631 	mov	a,_num
   0124 84                  632 	div	ab
   0125 F5 08               633 	mov	_shi,a
                            634 ;time.c:66: ge  = num % 10;
                            635 ;     genMod
                            636 ;     genModOneByte
   0127 75 F0 0A            637 	mov	b,#0x0A
   012A E5 0A               638 	mov	a,_num
   012C 84                  639 	div	ab
   012D 85 F0 09            640 	mov	_ge,b
   0130                     641 00105$:
   0130 D0 D0               642 	pop	psw
   0132 D0 F0               643 	pop	b
   0134 D0 E0               644 	pop	acc
   0136 32                  645 	reti
                            646 ;	eliminated unneeded push/pop dpl
                            647 ;	eliminated unneeded push/pop dph
                            648 	.area CSEG    (CODE)
                            649 	.area CONST   (CODE)
   013B                     650 _DIG_PLACE:
   013B FE                  651 	.db #0xFE
   013C FD                  652 	.db #0xFD
   013D FB                  653 	.db #0xFB
   013E F7                  654 	.db #0xF7
   013F EF                  655 	.db #0xEF
   0140 DF                  656 	.db #0xDF
   0141 BF                  657 	.db #0xBF
   0142 7F                  658 	.db #0x7F
   0143                     659 _DIG_CODE:
   0143 3F                  660 	.db #0x3F
   0144 06                  661 	.db #0x06
   0145 5B                  662 	.db #0x5B
   0146 4F                  663 	.db #0x4F
   0147 66                  664 	.db #0x66
   0148 6D                  665 	.db #0x6D
   0149 7D                  666 	.db #0x7D
   014A 07                  667 	.db #0x07
   014B 7F                  668 	.db #0x7F
   014C 6F                  669 	.db #0x6F
   014D 77                  670 	.db #0x77
   014E 7C                  671 	.db #0x7C
   014F 39                  672 	.db #0x39
   0150 5E                  673 	.db #0x5E
   0151 79                  674 	.db #0x79
   0152 71                  675 	.db #0x71
   0153 00                  676 	.db 0x00
                            677 	.area XINIT   (CODE)
