                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.5.6 # (Aug  1 2016)
                              4 ; This file generated Mon Aug  1 21:43:19 2016
                              5 ;--------------------------------------------------------
                              6 	.module led
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _cylemove_PARM_2
                             13 	.globl _main
                             14 	.globl _delayms
                             15 	.globl _cylemove
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
                            135 ;--------------------------------------------------------
                            136 ; special function registers
                            137 ;--------------------------------------------------------
                            138 	.area RSEG    (DATA)
                    0080    139 _P0	=	0x0080
                    0081    140 _SP	=	0x0081
                    0082    141 _DPL	=	0x0082
                    0083    142 _DPH	=	0x0083
                    0087    143 _PCON	=	0x0087
                    0088    144 _TCON	=	0x0088
                    0089    145 _TMOD	=	0x0089
                    008A    146 _TL0	=	0x008a
                    008B    147 _TL1	=	0x008b
                    008C    148 _TH0	=	0x008c
                    008D    149 _TH1	=	0x008d
                    0090    150 _P1	=	0x0090
                    0098    151 _SCON	=	0x0098
                    0099    152 _SBUF	=	0x0099
                    00A0    153 _P2	=	0x00a0
                    00A8    154 _IE	=	0x00a8
                    00B0    155 _P3	=	0x00b0
                    00B8    156 _IP	=	0x00b8
                    00D0    157 _PSW	=	0x00d0
                    00E0    158 _ACC	=	0x00e0
                    00F0    159 _B	=	0x00f0
                    00C8    160 _T2CON	=	0x00c8
                    00CA    161 _RCAP2L	=	0x00ca
                    00CB    162 _RCAP2H	=	0x00cb
                    00CC    163 _TL2	=	0x00cc
                    00CD    164 _TH2	=	0x00cd
                            165 ;--------------------------------------------------------
                            166 ; special function bits
                            167 ;--------------------------------------------------------
                            168 	.area RSEG    (DATA)
                    0080    169 _P0_0	=	0x0080
                    0081    170 _P0_1	=	0x0081
                    0082    171 _P0_2	=	0x0082
                    0083    172 _P0_3	=	0x0083
                    0084    173 _P0_4	=	0x0084
                    0085    174 _P0_5	=	0x0085
                    0086    175 _P0_6	=	0x0086
                    0087    176 _P0_7	=	0x0087
                    0088    177 _IT0	=	0x0088
                    0089    178 _IE0	=	0x0089
                    008A    179 _IT1	=	0x008a
                    008B    180 _IE1	=	0x008b
                    008C    181 _TR0	=	0x008c
                    008D    182 _TF0	=	0x008d
                    008E    183 _TR1	=	0x008e
                    008F    184 _TF1	=	0x008f
                    0090    185 _P1_0	=	0x0090
                    0091    186 _P1_1	=	0x0091
                    0092    187 _P1_2	=	0x0092
                    0093    188 _P1_3	=	0x0093
                    0094    189 _P1_4	=	0x0094
                    0095    190 _P1_5	=	0x0095
                    0096    191 _P1_6	=	0x0096
                    0097    192 _P1_7	=	0x0097
                    0098    193 _RI	=	0x0098
                    0099    194 _TI	=	0x0099
                    009A    195 _RB8	=	0x009a
                    009B    196 _TB8	=	0x009b
                    009C    197 _REN	=	0x009c
                    009D    198 _SM2	=	0x009d
                    009E    199 _SM1	=	0x009e
                    009F    200 _SM0	=	0x009f
                    00A0    201 _P2_0	=	0x00a0
                    00A1    202 _P2_1	=	0x00a1
                    00A2    203 _P2_2	=	0x00a2
                    00A3    204 _P2_3	=	0x00a3
                    00A4    205 _P2_4	=	0x00a4
                    00A5    206 _P2_5	=	0x00a5
                    00A6    207 _P2_6	=	0x00a6
                    00A7    208 _P2_7	=	0x00a7
                    00A8    209 _EX0	=	0x00a8
                    00A9    210 _ET0	=	0x00a9
                    00AA    211 _EX1	=	0x00aa
                    00AB    212 _ET1	=	0x00ab
                    00AC    213 _ES	=	0x00ac
                    00AF    214 _EA	=	0x00af
                    00B0    215 _P3_0	=	0x00b0
                    00B1    216 _P3_1	=	0x00b1
                    00B2    217 _P3_2	=	0x00b2
                    00B3    218 _P3_3	=	0x00b3
                    00B4    219 _P3_4	=	0x00b4
                    00B5    220 _P3_5	=	0x00b5
                    00B6    221 _P3_6	=	0x00b6
                    00B7    222 _P3_7	=	0x00b7
                    00B0    223 _RXD	=	0x00b0
                    00B1    224 _TXD	=	0x00b1
                    00B2    225 _INT0	=	0x00b2
                    00B3    226 _INT1	=	0x00b3
                    00B4    227 _T0	=	0x00b4
                    00B5    228 _T1	=	0x00b5
                    00B6    229 _WR	=	0x00b6
                    00B7    230 _RD	=	0x00b7
                    00B8    231 _PX0	=	0x00b8
                    00B9    232 _PT0	=	0x00b9
                    00BA    233 _PX1	=	0x00ba
                    00BB    234 _PT1	=	0x00bb
                    00BC    235 _PS	=	0x00bc
                    00D0    236 _P	=	0x00d0
                    00D1    237 _F1	=	0x00d1
                    00D2    238 _OV	=	0x00d2
                    00D3    239 _RS0	=	0x00d3
                    00D4    240 _RS1	=	0x00d4
                    00D5    241 _F0	=	0x00d5
                    00D6    242 _AC	=	0x00d6
                    00D7    243 _CY	=	0x00d7
                    00AD    244 _ET2	=	0x00ad
                    00BD    245 _PT2	=	0x00bd
                    00C8    246 _T2CON_0	=	0x00c8
                    00C9    247 _T2CON_1	=	0x00c9
                    00CA    248 _T2CON_2	=	0x00ca
                    00CB    249 _T2CON_3	=	0x00cb
                    00CC    250 _T2CON_4	=	0x00cc
                    00CD    251 _T2CON_5	=	0x00cd
                    00CE    252 _T2CON_6	=	0x00ce
                    00CF    253 _T2CON_7	=	0x00cf
                    00C8    254 _CP_RL2	=	0x00c8
                    00C9    255 _C_T2	=	0x00c9
                    00CA    256 _TR2	=	0x00ca
                    00CB    257 _EXEN2	=	0x00cb
                    00CC    258 _TCLK	=	0x00cc
                    00CD    259 _RCLK	=	0x00cd
                    00CE    260 _EXF2	=	0x00ce
                    00CF    261 _TF2	=	0x00cf
                            262 ;--------------------------------------------------------
                            263 ; overlayable register banks
                            264 ;--------------------------------------------------------
                            265 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     266 	.ds 8
                            267 ;--------------------------------------------------------
                            268 ; internal ram data
                            269 ;--------------------------------------------------------
                            270 	.area DSEG    (DATA)
                            271 ;--------------------------------------------------------
                            272 ; overlayable items in internal ram 
                            273 ;--------------------------------------------------------
                            274 	.area	OSEG    (OVR,DATA)
   0008                     275 _cylemove_PARM_2::
   0008                     276 	.ds 1
                            277 	.area	OSEG    (OVR,DATA)
                            278 ;--------------------------------------------------------
                            279 ; Stack segment in internal ram 
                            280 ;--------------------------------------------------------
                            281 	.area	SSEG	(DATA)
   0009                     282 __start__stack:
   0009                     283 	.ds	1
                            284 
                            285 ;--------------------------------------------------------
                            286 ; indirectly addressable internal ram data
                            287 ;--------------------------------------------------------
                            288 	.area ISEG    (DATA)
                            289 ;--------------------------------------------------------
                            290 ; bit data
                            291 ;--------------------------------------------------------
                            292 	.area BSEG    (BIT)
                            293 ;--------------------------------------------------------
                            294 ; paged external ram data
                            295 ;--------------------------------------------------------
                            296 	.area PSEG    (PAG,XDATA)
                            297 ;--------------------------------------------------------
                            298 ; external ram data
                            299 ;--------------------------------------------------------
                            300 	.area XSEG    (XDATA)
                            301 ;--------------------------------------------------------
                            302 ; external initialized ram data
                            303 ;--------------------------------------------------------
                            304 	.area XISEG   (XDATA)
                            305 	.area HOME    (CODE)
                            306 	.area GSINIT0 (CODE)
                            307 	.area GSINIT1 (CODE)
                            308 	.area GSINIT2 (CODE)
                            309 	.area GSINIT3 (CODE)
                            310 	.area GSINIT4 (CODE)
                            311 	.area GSINIT5 (CODE)
                            312 	.area GSINIT  (CODE)
                            313 	.area GSFINAL (CODE)
                            314 	.area CSEG    (CODE)
                            315 ;--------------------------------------------------------
                            316 ; interrupt vector 
                            317 ;--------------------------------------------------------
                            318 	.area HOME    (CODE)
   0000                     319 __interrupt_vect:
   0000 02 00 03            320 	ljmp	__sdcc_gsinit_startup
                            321 ;--------------------------------------------------------
                            322 ; global & static initialisations
                            323 ;--------------------------------------------------------
                            324 	.area HOME    (CODE)
                            325 	.area GSINIT  (CODE)
                            326 	.area GSFINAL (CODE)
                            327 	.area GSINIT  (CODE)
                            328 	.globl __sdcc_gsinit_startup
                            329 	.globl __sdcc_program_startup
                            330 	.globl __start__stack
                            331 	.globl __mcs51_genXINIT
                            332 	.globl __mcs51_genXRAMCLEAR
                            333 	.globl __mcs51_genRAMCLEAR
                            334 	.area GSFINAL (CODE)
   005C 02 00 5F            335 	ljmp	__sdcc_program_startup
                            336 ;--------------------------------------------------------
                            337 ; Home
                            338 ;--------------------------------------------------------
                            339 	.area HOME    (CODE)
                            340 	.area CSEG    (CODE)
   005F                     341 __sdcc_program_startup:
   005F 12 00 BB            342 	lcall	_main
                            343 ;	return from main will lock up
   0062 80 FE               344 	sjmp .
                            345 ;--------------------------------------------------------
                            346 ; code
                            347 ;--------------------------------------------------------
                            348 	.area CSEG    (CODE)
                            349 ;------------------------------------------------------------
                            350 ;Allocation info for local variables in function 'cylemove'
                            351 ;------------------------------------------------------------
                            352 ;value                     Allocated with name '_cylemove_PARM_2'
                            353 ;dir                       Allocated to registers r2 r3 
                            354 ;tmp                       Allocated to registers r2 
                            355 ;------------------------------------------------------------
                            356 ;led.c:6: cylemove(int dir,unsigned char value)
                            357 ;	-----------------------------------------
                            358 ;	 function cylemove
                            359 ;	-----------------------------------------
   0064                     360 _cylemove:
                    0002    361 	ar2 = 0x02
                    0003    362 	ar3 = 0x03
                    0004    363 	ar4 = 0x04
                    0005    364 	ar5 = 0x05
                    0006    365 	ar6 = 0x06
                    0007    366 	ar7 = 0x07
                    0000    367 	ar0 = 0x00
                    0001    368 	ar1 = 0x01
                            369 ;     genReceive
   0064 AA 82               370 	mov	r2,dpl
   0066 AB 83               371 	mov	r3,dph
                            372 ;led.c:9: if(dir)
                            373 ;     genIfx
   0068 EA                  374 	mov	a,r2
   0069 4B                  375 	orl	a,r3
                            376 ;     genIfxJump
                            377 ;	Peephole 108.c	removed ljmp by inverse jump logic
   006A 60 16               378 	jz	00102$
                            379 ;	Peephole 300	removed redundant label 00107$
                            380 ;led.c:11: tmp = value & 0x80;
                            381 ;     genAnd
   006C 74 80               382 	mov	a,#0x80
   006E 55 08               383 	anl	a,_cylemove_PARM_2
                            384 ;led.c:12: tmp >>= 7;
                            385 ;     genRightShift
                            386 ;     genRightShiftLiteral
                            387 ;     genrshOne
   0070 FA                  388 	mov	r2,a
                            389 ;	Peephole 105	removed redundant mov
   0071 23                  390 	rl	a
   0072 54 01               391 	anl	a,#0x01
   0074 FA                  392 	mov	r2,a
                            393 ;led.c:13: value <<= 1;
                            394 ;     genLeftShift
                            395 ;     genLeftShiftLiteral
                            396 ;     genlshOne
   0075 E5 08               397 	mov	a,_cylemove_PARM_2
                            398 ;	Peephole 254	optimized left shift
   0077 25 08               399 	add	a,_cylemove_PARM_2
   0079 F5 08               400 	mov	_cylemove_PARM_2,a
                            401 ;led.c:14: value |= tmp;
                            402 ;     genOr
   007B EA                  403 	mov	a,r2
   007C 42 08               404 	orl	_cylemove_PARM_2,a
                            405 ;led.c:15: return  value;
                            406 ;     genRet
   007E 85 08 82            407 	mov	dpl,_cylemove_PARM_2
                            408 ;	Peephole 112.b	changed ljmp to sjmp
                            409 ;	Peephole 251.b	replaced sjmp to ret with ret
   0081 22                  410 	ret
   0082                     411 00102$:
                            412 ;led.c:18: tmp = value & 0x01;
                            413 ;     genAnd
   0082 74 01               414 	mov	a,#0x01
   0084 55 08               415 	anl	a,_cylemove_PARM_2
                            416 ;led.c:19: tmp <<= 7;
                            417 ;     genLeftShift
                            418 ;     genLeftShiftLiteral
                            419 ;     genlshOne
   0086 FA                  420 	mov	r2,a
                            421 ;	Peephole 105	removed redundant mov
   0087 03                  422 	rr	a
   0088 54 80               423 	anl	a,#0x80
   008A FA                  424 	mov	r2,a
                            425 ;led.c:20: value >>= 1;
                            426 ;     genRightShift
                            427 ;     genRightShiftLiteral
                            428 ;     genrshOne
   008B E5 08               429 	mov	a,_cylemove_PARM_2
   008D C3                  430 	clr	c
   008E 13                  431 	rrc	a
   008F F5 08               432 	mov	_cylemove_PARM_2,a
                            433 ;led.c:21: value |= tmp;
                            434 ;     genOr
   0091 EA                  435 	mov	a,r2
   0092 42 08               436 	orl	_cylemove_PARM_2,a
                            437 ;led.c:22: return  value;
                            438 ;     genRet
   0094 85 08 82            439 	mov	dpl,_cylemove_PARM_2
                            440 ;	Peephole 300	removed redundant label 00104$
   0097 22                  441 	ret
                            442 ;------------------------------------------------------------
                            443 ;Allocation info for local variables in function 'delayms'
                            444 ;------------------------------------------------------------
                            445 ;ms                        Allocated to registers r2 r3 
                            446 ;j                         Allocated to registers r4 
                            447 ;i                         Allocated to registers r2 r3 
                            448 ;------------------------------------------------------------
                            449 ;led.c:26: void delayms(unsigned int ms)
                            450 ;	-----------------------------------------
                            451 ;	 function delayms
                            452 ;	-----------------------------------------
   0098                     453 _delayms:
                            454 ;     genReceive
   0098 AA 82               455 	mov	r2,dpl
   009A AB 83               456 	mov	r3,dph
                            457 ;led.c:30: for (i = ms; i > 0; i--)
                            458 ;     genAssign
   009C                     459 00105$:
                            460 ;     genIfx
   009C EA                  461 	mov	a,r2
   009D 4B                  462 	orl	a,r3
                            463 ;     genIfxJump
                            464 ;	Peephole 108.c	removed ljmp by inverse jump logic
   009E 60 04               465 	jz	00111$
                            466 ;	Peephole 300	removed redundant label 00120$
                            467 ;     genAssign
   00A0 7C 01               468 	mov	r4,#0x01
                            469 ;	Peephole 112.b	changed ljmp to sjmp
   00A2 80 02               470 	sjmp	00112$
   00A4                     471 00111$:
                            472 ;     genAssign
   00A4 7C 00               473 	mov	r4,#0x00
   00A6                     474 00112$:
                            475 ;     genIfx
   00A6 EC                  476 	mov	a,r4
                            477 ;     genIfxJump
                            478 ;	Peephole 108.c	removed ljmp by inverse jump logic
   00A7 60 11               479 	jz	00109$
                            480 ;	Peephole 300	removed redundant label 00121$
                            481 ;led.c:31: for (j = 110; j > 0; j--);
                            482 ;     genAssign
   00A9 7C 6E               483 	mov	r4,#0x6E
   00AB                     484 00101$:
                            485 ;     genCmpGt
                            486 ;     genCmp
                            487 ;     genIfxJump
                            488 ;	Peephole 108.a	removed ljmp by inverse jump logic
                            489 ;	Peephole 132.b	optimized genCmpGt by inverse logic (acc differs)
   00AB EC                  490 	mov	a,r4
   00AC 24 FF               491 	add	a,#0xff - 0x00
   00AE 50 03               492 	jnc	00107$
                            493 ;	Peephole 300	removed redundant label 00122$
                            494 ;     genMinus
                            495 ;     genMinusDec
   00B0 1C                  496 	dec	r4
                            497 ;	Peephole 112.b	changed ljmp to sjmp
   00B1 80 F8               498 	sjmp	00101$
   00B3                     499 00107$:
                            500 ;led.c:30: for (i = ms; i > 0; i--)
                            501 ;     genMinus
                            502 ;     genMinusDec
   00B3 1A                  503 	dec	r2
   00B4 BA FF 01            504 	cjne	r2,#0xff,00123$
   00B7 1B                  505 	dec	r3
   00B8                     506 00123$:
                            507 ;	Peephole 112.b	changed ljmp to sjmp
   00B8 80 E2               508 	sjmp	00105$
   00BA                     509 00109$:
   00BA 22                  510 	ret
                            511 ;------------------------------------------------------------
                            512 ;Allocation info for local variables in function 'main'
                            513 ;------------------------------------------------------------
                            514 ;tmp                       Allocated to registers r2 
                            515 ;------------------------------------------------------------
                            516 ;led.c:34: void main()
                            517 ;	-----------------------------------------
                            518 ;	 function main
                            519 ;	-----------------------------------------
   00BB                     520 _main:
                            521 ;led.c:36: unsigned char tmp = 0xaa;
                            522 ;     genAssign
   00BB 7A AA               523 	mov	r2,#0xAA
                            524 ;led.c:37: while (1)
   00BD                     525 00102$:
                            526 ;led.c:39: tmp = cylemove(LEFT, tmp);
                            527 ;     genAssign
   00BD 8A 08               528 	mov	_cylemove_PARM_2,r2
                            529 ;     genCall
                            530 ;	Peephole 182.b	used 16 bit load of dptr
   00BF 90 00 01            531 	mov	dptr,#0x0001
   00C2 12 00 64            532 	lcall	_cylemove
   00C5 AA 82               533 	mov	r2,dpl
                            534 ;led.c:40: P1  = tmp;
                            535 ;     genAssign
   00C7 8A 90               536 	mov	_P1,r2
                            537 ;led.c:41: delayms(499);
                            538 ;     genCall
                            539 ;	Peephole 182.b	used 16 bit load of dptr
   00C9 90 01 F3            540 	mov	dptr,#0x01F3
   00CC C0 02               541 	push	ar2
   00CE 12 00 98            542 	lcall	_delayms
   00D1 D0 02               543 	pop	ar2
                            544 ;	Peephole 112.b	changed ljmp to sjmp
   00D3 80 E8               545 	sjmp	00102$
                            546 ;	Peephole 259.a	removed redundant label 00104$ and ret
                            547 ;
                            548 	.area CSEG    (CODE)
                            549 	.area CONST   (CODE)
                            550 	.area XINIT   (CODE)
