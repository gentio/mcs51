                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.5.6 # (Aug  1 2016)
                              4 ; This file generated Thu Aug  4 15:16:23 2016
                              5 ;--------------------------------------------------------
                              6 	.module shuma
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _DIG_CODE
                             13 	.globl _DIG_PLACE
                             14 	.globl _main
                             15 	.globl _TF2
                             16 	.globl _EXF2
                             17 	.globl _RCLK
                             18 	.globl _TCLK
                             19 	.globl _EXEN2
                             20 	.globl _TR2
                             21 	.globl _C_T2
                             22 	.globl _CP_RL2
                             23 	.globl _T2CON_7
                             24 	.globl _T2CON_6
                             25 	.globl _T2CON_5
                             26 	.globl _T2CON_4
                             27 	.globl _T2CON_3
                             28 	.globl _T2CON_2
                             29 	.globl _T2CON_1
                             30 	.globl _T2CON_0
                             31 	.globl _PT2
                             32 	.globl _ET2
                             33 	.globl _CY
                             34 	.globl _AC
                             35 	.globl _F0
                             36 	.globl _RS1
                             37 	.globl _RS0
                             38 	.globl _OV
                             39 	.globl _F1
                             40 	.globl _P
                             41 	.globl _PS
                             42 	.globl _PT1
                             43 	.globl _PX1
                             44 	.globl _PT0
                             45 	.globl _PX0
                             46 	.globl _RD
                             47 	.globl _WR
                             48 	.globl _T1
                             49 	.globl _T0
                             50 	.globl _INT1
                             51 	.globl _INT0
                             52 	.globl _TXD
                             53 	.globl _RXD
                             54 	.globl _P3_7
                             55 	.globl _P3_6
                             56 	.globl _P3_5
                             57 	.globl _P3_4
                             58 	.globl _P3_3
                             59 	.globl _P3_2
                             60 	.globl _P3_1
                             61 	.globl _P3_0
                             62 	.globl _EA
                             63 	.globl _ES
                             64 	.globl _ET1
                             65 	.globl _EX1
                             66 	.globl _ET0
                             67 	.globl _EX0
                             68 	.globl _P2_7
                             69 	.globl _P2_6
                             70 	.globl _P2_5
                             71 	.globl _P2_4
                             72 	.globl _P2_3
                             73 	.globl _P2_2
                             74 	.globl _P2_1
                             75 	.globl _P2_0
                             76 	.globl _SM0
                             77 	.globl _SM1
                             78 	.globl _SM2
                             79 	.globl _REN
                             80 	.globl _TB8
                             81 	.globl _RB8
                             82 	.globl _TI
                             83 	.globl _RI
                             84 	.globl _P1_7
                             85 	.globl _P1_6
                             86 	.globl _P1_5
                             87 	.globl _P1_4
                             88 	.globl _P1_3
                             89 	.globl _P1_2
                             90 	.globl _P1_1
                             91 	.globl _P1_0
                             92 	.globl _TF1
                             93 	.globl _TR1
                             94 	.globl _TF0
                             95 	.globl _TR0
                             96 	.globl _IE1
                             97 	.globl _IT1
                             98 	.globl _IE0
                             99 	.globl _IT0
                            100 	.globl _P0_7
                            101 	.globl _P0_6
                            102 	.globl _P0_5
                            103 	.globl _P0_4
                            104 	.globl _P0_3
                            105 	.globl _P0_2
                            106 	.globl _P0_1
                            107 	.globl _P0_0
                            108 	.globl _TH2
                            109 	.globl _TL2
                            110 	.globl _RCAP2H
                            111 	.globl _RCAP2L
                            112 	.globl _T2CON
                            113 	.globl _B
                            114 	.globl _ACC
                            115 	.globl _PSW
                            116 	.globl _IP
                            117 	.globl _P3
                            118 	.globl _IE
                            119 	.globl _P2
                            120 	.globl _SBUF
                            121 	.globl _SCON
                            122 	.globl _P1
                            123 	.globl _TH1
                            124 	.globl _TH0
                            125 	.globl _TL1
                            126 	.globl _TL0
                            127 	.globl _TMOD
                            128 	.globl _TCON
                            129 	.globl _PCON
                            130 	.globl _DPH
                            131 	.globl _DPL
                            132 	.globl _SP
                            133 	.globl _P0
                            134 	.globl _delayms
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
                            275 ;--------------------------------------------------------
                            276 ; Stack segment in internal ram 
                            277 ;--------------------------------------------------------
                            278 	.area	SSEG	(DATA)
   0008                     279 __start__stack:
   0008                     280 	.ds	1
                            281 
                            282 ;--------------------------------------------------------
                            283 ; indirectly addressable internal ram data
                            284 ;--------------------------------------------------------
                            285 	.area ISEG    (DATA)
                            286 ;--------------------------------------------------------
                            287 ; bit data
                            288 ;--------------------------------------------------------
                            289 	.area BSEG    (BIT)
                            290 ;--------------------------------------------------------
                            291 ; paged external ram data
                            292 ;--------------------------------------------------------
                            293 	.area PSEG    (PAG,XDATA)
                            294 ;--------------------------------------------------------
                            295 ; external ram data
                            296 ;--------------------------------------------------------
                            297 	.area XSEG    (XDATA)
                            298 ;--------------------------------------------------------
                            299 ; external initialized ram data
                            300 ;--------------------------------------------------------
                            301 	.area XISEG   (XDATA)
                            302 	.area HOME    (CODE)
                            303 	.area GSINIT0 (CODE)
                            304 	.area GSINIT1 (CODE)
                            305 	.area GSINIT2 (CODE)
                            306 	.area GSINIT3 (CODE)
                            307 	.area GSINIT4 (CODE)
                            308 	.area GSINIT5 (CODE)
                            309 	.area GSINIT  (CODE)
                            310 	.area GSFINAL (CODE)
                            311 	.area CSEG    (CODE)
                            312 ;--------------------------------------------------------
                            313 ; interrupt vector 
                            314 ;--------------------------------------------------------
                            315 	.area HOME    (CODE)
   0000                     316 __interrupt_vect:
   0000 02 00 03            317 	ljmp	__sdcc_gsinit_startup
                            318 ;--------------------------------------------------------
                            319 ; global & static initialisations
                            320 ;--------------------------------------------------------
                            321 	.area HOME    (CODE)
                            322 	.area GSINIT  (CODE)
                            323 	.area GSFINAL (CODE)
                            324 	.area GSINIT  (CODE)
                            325 	.globl __sdcc_gsinit_startup
                            326 	.globl __sdcc_program_startup
                            327 	.globl __start__stack
                            328 	.globl __mcs51_genXINIT
                            329 	.globl __mcs51_genXRAMCLEAR
                            330 	.globl __mcs51_genRAMCLEAR
                            331 	.area GSFINAL (CODE)
   005C 02 00 5F            332 	ljmp	__sdcc_program_startup
                            333 ;--------------------------------------------------------
                            334 ; Home
                            335 ;--------------------------------------------------------
                            336 	.area HOME    (CODE)
                            337 	.area CSEG    (CODE)
   005F                     338 __sdcc_program_startup:
   005F 12 00 64            339 	lcall	_main
                            340 ;	return from main will lock up
   0062 80 FE               341 	sjmp .
                            342 ;--------------------------------------------------------
                            343 ; code
                            344 ;--------------------------------------------------------
                            345 	.area CSEG    (CODE)
                            346 ;------------------------------------------------------------
                            347 ;Allocation info for local variables in function 'main'
                            348 ;------------------------------------------------------------
                            349 ;i                         Allocated to registers r2 
                            350 ;------------------------------------------------------------
                            351 ;shuma.c:10: void main()
                            352 ;	-----------------------------------------
                            353 ;	 function main
                            354 ;	-----------------------------------------
   0064                     355 _main:
                    0002    356 	ar2 = 0x02
                    0003    357 	ar3 = 0x03
                    0004    358 	ar4 = 0x04
                    0005    359 	ar5 = 0x05
                    0006    360 	ar6 = 0x06
                    0007    361 	ar7 = 0x07
                    0000    362 	ar0 = 0x00
                    0001    363 	ar1 = 0x01
                            364 ;shuma.c:15: for (i = 0; i < 8; i++){
   0064                     365 00112$:
                            366 ;     genAssign
   0064 7A 00               367 	mov	r2,#0x00
   0066                     368 00104$:
                            369 ;     genCmpLt
                            370 ;     genCmp
   0066 BA 08 00            371 	cjne	r2,#0x08,00113$
   0069                     372 00113$:
                            373 ;     genIfxJump
                            374 ;	Peephole 108.a	removed ljmp by inverse jump logic
   0069 50 F9               375 	jnc	00112$
                            376 ;	Peephole 300	removed redundant label 00114$
                            377 ;shuma.c:16: P0 = DIG_CODE[i];
                            378 ;     genPlus
                            379 ;	Peephole 236.g	used r2 instead of ar2
   006B EA                  380 	mov	a,r2
   006C 24 C6               381 	add	a,#_DIG_CODE
   006E F5 82               382 	mov	dpl,a
                            383 ;	Peephole 181	changed mov to clr
   0070 E4                  384 	clr	a
   0071 34 00               385 	addc	a,#(_DIG_CODE >> 8)
   0073 F5 83               386 	mov	dph,a
                            387 ;     genPointerGet
                            388 ;     genCodePointerGet
                            389 ;	Peephole 181	changed mov to clr
   0075 E4                  390 	clr	a
   0076 93                  391 	movc	a,@a+dptr
   0077 F5 80               392 	mov	_P0,a
                            393 ;shuma.c:17: P1 = DIG_PLACE[i];
                            394 ;     genPlus
                            395 ;	Peephole 236.g	used r2 instead of ar2
   0079 EA                  396 	mov	a,r2
   007A 24 BE               397 	add	a,#_DIG_PLACE
   007C F5 82               398 	mov	dpl,a
                            399 ;	Peephole 181	changed mov to clr
   007E E4                  400 	clr	a
   007F 34 00               401 	addc	a,#(_DIG_PLACE >> 8)
   0081 F5 83               402 	mov	dph,a
                            403 ;     genPointerGet
                            404 ;     genCodePointerGet
                            405 ;	Peephole 181	changed mov to clr
   0083 E4                  406 	clr	a
   0084 93                  407 	movc	a,@a+dptr
   0085 F5 90               408 	mov	_P1,a
                            409 ;shuma.c:18: delayms(2);
                            410 ;     genCall
                            411 ;	Peephole 182.b	used 16 bit load of dptr
   0087 90 00 02            412 	mov	dptr,#0x0002
   008A C0 02               413 	push	ar2
   008C 12 00 97            414 	lcall	_delayms
   008F D0 02               415 	pop	ar2
                            416 ;shuma.c:19: P1 = 0x0;
                            417 ;     genAssign
   0091 75 90 00            418 	mov	_P1,#0x00
                            419 ;shuma.c:15: for (i = 0; i < 8; i++){
                            420 ;     genPlus
                            421 ;     genPlusIncr
   0094 0A                  422 	inc	r2
                            423 ;	Peephole 112.b	changed ljmp to sjmp
   0095 80 CF               424 	sjmp	00104$
                            425 ;	Peephole 259.a	removed redundant label 00108$ and ret
                            426 ;
                            427 ;------------------------------------------------------------
                            428 ;Allocation info for local variables in function 'delayms'
                            429 ;------------------------------------------------------------
                            430 ;i                         Allocated to registers r2 r3 
                            431 ;j                         Allocated to registers r4 
                            432 ;------------------------------------------------------------
                            433 ;shuma.c:26: void delayms(unsigned int i)
                            434 ;	-----------------------------------------
                            435 ;	 function delayms
                            436 ;	-----------------------------------------
   0097                     437 _delayms:
                            438 ;     genReceive
   0097 AA 82               439 	mov	r2,dpl
   0099 AB 83               440 	mov	r3,dph
                            441 ;     genAssign
   009B                     442 00105$:
                            443 ;shuma.c:29: for (; i > 0; i--)
                            444 ;     genIfx
   009B EA                  445 	mov	a,r2
   009C 4B                  446 	orl	a,r3
                            447 ;     genIfxJump
                            448 ;	Peephole 108.c	removed ljmp by inverse jump logic
   009D 60 04               449 	jz	00111$
                            450 ;	Peephole 300	removed redundant label 00120$
                            451 ;     genAssign
   009F 7C 01               452 	mov	r4,#0x01
                            453 ;	Peephole 112.b	changed ljmp to sjmp
   00A1 80 02               454 	sjmp	00112$
   00A3                     455 00111$:
                            456 ;     genAssign
   00A3 7C 00               457 	mov	r4,#0x00
   00A5                     458 00112$:
                            459 ;     genIfx
   00A5 EC                  460 	mov	a,r4
                            461 ;     genIfxJump
                            462 ;	Peephole 108.c	removed ljmp by inverse jump logic
   00A6 60 11               463 	jz	00109$
                            464 ;	Peephole 300	removed redundant label 00121$
                            465 ;shuma.c:30: for (j = 110; j > 0; j--);
                            466 ;     genAssign
   00A8 7C 6E               467 	mov	r4,#0x6E
   00AA                     468 00101$:
                            469 ;     genCmpGt
                            470 ;     genCmp
                            471 ;     genIfxJump
                            472 ;	Peephole 108.a	removed ljmp by inverse jump logic
                            473 ;	Peephole 132.b	optimized genCmpGt by inverse logic (acc differs)
   00AA EC                  474 	mov	a,r4
   00AB 24 FF               475 	add	a,#0xff - 0x00
   00AD 50 03               476 	jnc	00107$
                            477 ;	Peephole 300	removed redundant label 00122$
                            478 ;     genMinus
                            479 ;     genMinusDec
   00AF 1C                  480 	dec	r4
                            481 ;	Peephole 112.b	changed ljmp to sjmp
   00B0 80 F8               482 	sjmp	00101$
   00B2                     483 00107$:
                            484 ;shuma.c:29: for (; i > 0; i--)
                            485 ;     genMinus
                            486 ;     genMinusDec
   00B2 1A                  487 	dec	r2
   00B3 BA FF 01            488 	cjne	r2,#0xff,00123$
   00B6 1B                  489 	dec	r3
   00B7                     490 00123$:
                            491 ;	Peephole 112.b	changed ljmp to sjmp
   00B7 80 E2               492 	sjmp	00105$
   00B9                     493 00109$:
   00B9 22                  494 	ret
                            495 	.area CSEG    (CODE)
                            496 	.area CONST   (CODE)
   00BE                     497 _DIG_PLACE:
   00BE FE                  498 	.db #0xFE
   00BF FD                  499 	.db #0xFD
   00C0 FB                  500 	.db #0xFB
   00C1 F7                  501 	.db #0xF7
   00C2 EF                  502 	.db #0xEF
   00C3 DF                  503 	.db #0xDF
   00C4 BF                  504 	.db #0xBF
   00C5 7F                  505 	.db #0x7F
   00C6                     506 _DIG_CODE:
   00C6 3F                  507 	.db #0x3F
   00C7 06                  508 	.db #0x06
   00C8 5B                  509 	.db #0x5B
   00C9 4F                  510 	.db #0x4F
   00CA 66                  511 	.db #0x66
   00CB 6D                  512 	.db #0x6D
   00CC 7D                  513 	.db #0x7D
   00CD 07                  514 	.db #0x07
   00CE 7F                  515 	.db #0x7F
   00CF 6F                  516 	.db #0x6F
   00D0 77                  517 	.db #0x77
   00D1 7C                  518 	.db #0x7C
   00D2 39                  519 	.db #0x39
   00D3 5E                  520 	.db #0x5E
   00D4 79                  521 	.db #0x79
   00D5 71                  522 	.db #0x71
   00D6 00                  523 	.db 0x00
                            524 	.area XINIT   (CODE)
