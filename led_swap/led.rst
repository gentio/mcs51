                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.5.6 # (Aug  1 2016)
                              4 ; This file generated Mon Aug  1 21:36:45 2016
                              5 ;--------------------------------------------------------
                              6 	.module led
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _main
                             13 	.globl _delayms
                             14 	.globl _TF2
                             15 	.globl _EXF2
                             16 	.globl _RCLK
                             17 	.globl _TCLK
                             18 	.globl _EXEN2
                             19 	.globl _TR2
                             20 	.globl _C_T2
                             21 	.globl _CP_RL2
                             22 	.globl _T2CON_7
                             23 	.globl _T2CON_6
                             24 	.globl _T2CON_5
                             25 	.globl _T2CON_4
                             26 	.globl _T2CON_3
                             27 	.globl _T2CON_2
                             28 	.globl _T2CON_1
                             29 	.globl _T2CON_0
                             30 	.globl _PT2
                             31 	.globl _ET2
                             32 	.globl _CY
                             33 	.globl _AC
                             34 	.globl _F0
                             35 	.globl _RS1
                             36 	.globl _RS0
                             37 	.globl _OV
                             38 	.globl _F1
                             39 	.globl _P
                             40 	.globl _PS
                             41 	.globl _PT1
                             42 	.globl _PX1
                             43 	.globl _PT0
                             44 	.globl _PX0
                             45 	.globl _RD
                             46 	.globl _WR
                             47 	.globl _T1
                             48 	.globl _T0
                             49 	.globl _INT1
                             50 	.globl _INT0
                             51 	.globl _TXD
                             52 	.globl _RXD
                             53 	.globl _P3_7
                             54 	.globl _P3_6
                             55 	.globl _P3_5
                             56 	.globl _P3_4
                             57 	.globl _P3_3
                             58 	.globl _P3_2
                             59 	.globl _P3_1
                             60 	.globl _P3_0
                             61 	.globl _EA
                             62 	.globl _ES
                             63 	.globl _ET1
                             64 	.globl _EX1
                             65 	.globl _ET0
                             66 	.globl _EX0
                             67 	.globl _P2_7
                             68 	.globl _P2_6
                             69 	.globl _P2_5
                             70 	.globl _P2_4
                             71 	.globl _P2_3
                             72 	.globl _P2_2
                             73 	.globl _P2_1
                             74 	.globl _P2_0
                             75 	.globl _SM0
                             76 	.globl _SM1
                             77 	.globl _SM2
                             78 	.globl _REN
                             79 	.globl _TB8
                             80 	.globl _RB8
                             81 	.globl _TI
                             82 	.globl _RI
                             83 	.globl _P1_7
                             84 	.globl _P1_6
                             85 	.globl _P1_5
                             86 	.globl _P1_4
                             87 	.globl _P1_3
                             88 	.globl _P1_2
                             89 	.globl _P1_1
                             90 	.globl _P1_0
                             91 	.globl _TF1
                             92 	.globl _TR1
                             93 	.globl _TF0
                             94 	.globl _TR0
                             95 	.globl _IE1
                             96 	.globl _IT1
                             97 	.globl _IE0
                             98 	.globl _IT0
                             99 	.globl _P0_7
                            100 	.globl _P0_6
                            101 	.globl _P0_5
                            102 	.globl _P0_4
                            103 	.globl _P0_3
                            104 	.globl _P0_2
                            105 	.globl _P0_1
                            106 	.globl _P0_0
                            107 	.globl _TH2
                            108 	.globl _TL2
                            109 	.globl _RCAP2H
                            110 	.globl _RCAP2L
                            111 	.globl _T2CON
                            112 	.globl _B
                            113 	.globl _ACC
                            114 	.globl _PSW
                            115 	.globl _IP
                            116 	.globl _P3
                            117 	.globl _IE
                            118 	.globl _P2
                            119 	.globl _SBUF
                            120 	.globl _SCON
                            121 	.globl _P1
                            122 	.globl _TH1
                            123 	.globl _TH0
                            124 	.globl _TL1
                            125 	.globl _TL0
                            126 	.globl _TMOD
                            127 	.globl _TCON
                            128 	.globl _PCON
                            129 	.globl _DPH
                            130 	.globl _DPL
                            131 	.globl _SP
                            132 	.globl _P0
                            133 ;--------------------------------------------------------
                            134 ; special function registers
                            135 ;--------------------------------------------------------
                            136 	.area RSEG    (DATA)
                    0080    137 _P0	=	0x0080
                    0081    138 _SP	=	0x0081
                    0082    139 _DPL	=	0x0082
                    0083    140 _DPH	=	0x0083
                    0087    141 _PCON	=	0x0087
                    0088    142 _TCON	=	0x0088
                    0089    143 _TMOD	=	0x0089
                    008A    144 _TL0	=	0x008a
                    008B    145 _TL1	=	0x008b
                    008C    146 _TH0	=	0x008c
                    008D    147 _TH1	=	0x008d
                    0090    148 _P1	=	0x0090
                    0098    149 _SCON	=	0x0098
                    0099    150 _SBUF	=	0x0099
                    00A0    151 _P2	=	0x00a0
                    00A8    152 _IE	=	0x00a8
                    00B0    153 _P3	=	0x00b0
                    00B8    154 _IP	=	0x00b8
                    00D0    155 _PSW	=	0x00d0
                    00E0    156 _ACC	=	0x00e0
                    00F0    157 _B	=	0x00f0
                    00C8    158 _T2CON	=	0x00c8
                    00CA    159 _RCAP2L	=	0x00ca
                    00CB    160 _RCAP2H	=	0x00cb
                    00CC    161 _TL2	=	0x00cc
                    00CD    162 _TH2	=	0x00cd
                            163 ;--------------------------------------------------------
                            164 ; special function bits
                            165 ;--------------------------------------------------------
                            166 	.area RSEG    (DATA)
                    0080    167 _P0_0	=	0x0080
                    0081    168 _P0_1	=	0x0081
                    0082    169 _P0_2	=	0x0082
                    0083    170 _P0_3	=	0x0083
                    0084    171 _P0_4	=	0x0084
                    0085    172 _P0_5	=	0x0085
                    0086    173 _P0_6	=	0x0086
                    0087    174 _P0_7	=	0x0087
                    0088    175 _IT0	=	0x0088
                    0089    176 _IE0	=	0x0089
                    008A    177 _IT1	=	0x008a
                    008B    178 _IE1	=	0x008b
                    008C    179 _TR0	=	0x008c
                    008D    180 _TF0	=	0x008d
                    008E    181 _TR1	=	0x008e
                    008F    182 _TF1	=	0x008f
                    0090    183 _P1_0	=	0x0090
                    0091    184 _P1_1	=	0x0091
                    0092    185 _P1_2	=	0x0092
                    0093    186 _P1_3	=	0x0093
                    0094    187 _P1_4	=	0x0094
                    0095    188 _P1_5	=	0x0095
                    0096    189 _P1_6	=	0x0096
                    0097    190 _P1_7	=	0x0097
                    0098    191 _RI	=	0x0098
                    0099    192 _TI	=	0x0099
                    009A    193 _RB8	=	0x009a
                    009B    194 _TB8	=	0x009b
                    009C    195 _REN	=	0x009c
                    009D    196 _SM2	=	0x009d
                    009E    197 _SM1	=	0x009e
                    009F    198 _SM0	=	0x009f
                    00A0    199 _P2_0	=	0x00a0
                    00A1    200 _P2_1	=	0x00a1
                    00A2    201 _P2_2	=	0x00a2
                    00A3    202 _P2_3	=	0x00a3
                    00A4    203 _P2_4	=	0x00a4
                    00A5    204 _P2_5	=	0x00a5
                    00A6    205 _P2_6	=	0x00a6
                    00A7    206 _P2_7	=	0x00a7
                    00A8    207 _EX0	=	0x00a8
                    00A9    208 _ET0	=	0x00a9
                    00AA    209 _EX1	=	0x00aa
                    00AB    210 _ET1	=	0x00ab
                    00AC    211 _ES	=	0x00ac
                    00AF    212 _EA	=	0x00af
                    00B0    213 _P3_0	=	0x00b0
                    00B1    214 _P3_1	=	0x00b1
                    00B2    215 _P3_2	=	0x00b2
                    00B3    216 _P3_3	=	0x00b3
                    00B4    217 _P3_4	=	0x00b4
                    00B5    218 _P3_5	=	0x00b5
                    00B6    219 _P3_6	=	0x00b6
                    00B7    220 _P3_7	=	0x00b7
                    00B0    221 _RXD	=	0x00b0
                    00B1    222 _TXD	=	0x00b1
                    00B2    223 _INT0	=	0x00b2
                    00B3    224 _INT1	=	0x00b3
                    00B4    225 _T0	=	0x00b4
                    00B5    226 _T1	=	0x00b5
                    00B6    227 _WR	=	0x00b6
                    00B7    228 _RD	=	0x00b7
                    00B8    229 _PX0	=	0x00b8
                    00B9    230 _PT0	=	0x00b9
                    00BA    231 _PX1	=	0x00ba
                    00BB    232 _PT1	=	0x00bb
                    00BC    233 _PS	=	0x00bc
                    00D0    234 _P	=	0x00d0
                    00D1    235 _F1	=	0x00d1
                    00D2    236 _OV	=	0x00d2
                    00D3    237 _RS0	=	0x00d3
                    00D4    238 _RS1	=	0x00d4
                    00D5    239 _F0	=	0x00d5
                    00D6    240 _AC	=	0x00d6
                    00D7    241 _CY	=	0x00d7
                    00AD    242 _ET2	=	0x00ad
                    00BD    243 _PT2	=	0x00bd
                    00C8    244 _T2CON_0	=	0x00c8
                    00C9    245 _T2CON_1	=	0x00c9
                    00CA    246 _T2CON_2	=	0x00ca
                    00CB    247 _T2CON_3	=	0x00cb
                    00CC    248 _T2CON_4	=	0x00cc
                    00CD    249 _T2CON_5	=	0x00cd
                    00CE    250 _T2CON_6	=	0x00ce
                    00CF    251 _T2CON_7	=	0x00cf
                    00C8    252 _CP_RL2	=	0x00c8
                    00C9    253 _C_T2	=	0x00c9
                    00CA    254 _TR2	=	0x00ca
                    00CB    255 _EXEN2	=	0x00cb
                    00CC    256 _TCLK	=	0x00cc
                    00CD    257 _RCLK	=	0x00cd
                    00CE    258 _EXF2	=	0x00ce
                    00CF    259 _TF2	=	0x00cf
                            260 ;--------------------------------------------------------
                            261 ; overlayable register banks
                            262 ;--------------------------------------------------------
                            263 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     264 	.ds 8
                            265 ;--------------------------------------------------------
                            266 ; internal ram data
                            267 ;--------------------------------------------------------
                            268 	.area DSEG    (DATA)
                            269 ;--------------------------------------------------------
                            270 ; overlayable items in internal ram 
                            271 ;--------------------------------------------------------
                            272 	.area	OSEG    (OVR,DATA)
                            273 ;--------------------------------------------------------
                            274 ; Stack segment in internal ram 
                            275 ;--------------------------------------------------------
                            276 	.area	SSEG	(DATA)
   0008                     277 __start__stack:
   0008                     278 	.ds	1
                            279 
                            280 ;--------------------------------------------------------
                            281 ; indirectly addressable internal ram data
                            282 ;--------------------------------------------------------
                            283 	.area ISEG    (DATA)
                            284 ;--------------------------------------------------------
                            285 ; bit data
                            286 ;--------------------------------------------------------
                            287 	.area BSEG    (BIT)
                            288 ;--------------------------------------------------------
                            289 ; paged external ram data
                            290 ;--------------------------------------------------------
                            291 	.area PSEG    (PAG,XDATA)
                            292 ;--------------------------------------------------------
                            293 ; external ram data
                            294 ;--------------------------------------------------------
                            295 	.area XSEG    (XDATA)
                            296 ;--------------------------------------------------------
                            297 ; external initialized ram data
                            298 ;--------------------------------------------------------
                            299 	.area XISEG   (XDATA)
                            300 	.area HOME    (CODE)
                            301 	.area GSINIT0 (CODE)
                            302 	.area GSINIT1 (CODE)
                            303 	.area GSINIT2 (CODE)
                            304 	.area GSINIT3 (CODE)
                            305 	.area GSINIT4 (CODE)
                            306 	.area GSINIT5 (CODE)
                            307 	.area GSINIT  (CODE)
                            308 	.area GSFINAL (CODE)
                            309 	.area CSEG    (CODE)
                            310 ;--------------------------------------------------------
                            311 ; interrupt vector 
                            312 ;--------------------------------------------------------
                            313 	.area HOME    (CODE)
   0000                     314 __interrupt_vect:
   0000 02 00 03            315 	ljmp	__sdcc_gsinit_startup
                            316 ;--------------------------------------------------------
                            317 ; global & static initialisations
                            318 ;--------------------------------------------------------
                            319 	.area HOME    (CODE)
                            320 	.area GSINIT  (CODE)
                            321 	.area GSFINAL (CODE)
                            322 	.area GSINIT  (CODE)
                            323 	.globl __sdcc_gsinit_startup
                            324 	.globl __sdcc_program_startup
                            325 	.globl __start__stack
                            326 	.globl __mcs51_genXINIT
                            327 	.globl __mcs51_genXRAMCLEAR
                            328 	.globl __mcs51_genRAMCLEAR
                            329 	.area GSFINAL (CODE)
   005C 02 00 5F            330 	ljmp	__sdcc_program_startup
                            331 ;--------------------------------------------------------
                            332 ; Home
                            333 ;--------------------------------------------------------
                            334 	.area HOME    (CODE)
                            335 	.area CSEG    (CODE)
   005F                     336 __sdcc_program_startup:
   005F 12 00 87            337 	lcall	_main
                            338 ;	return from main will lock up
   0062 80 FE               339 	sjmp .
                            340 ;--------------------------------------------------------
                            341 ; code
                            342 ;--------------------------------------------------------
                            343 	.area CSEG    (CODE)
                            344 ;------------------------------------------------------------
                            345 ;Allocation info for local variables in function 'delayms'
                            346 ;------------------------------------------------------------
                            347 ;ms                        Allocated to registers r2 r3 
                            348 ;j                         Allocated to registers r4 
                            349 ;i                         Allocated to registers r2 r3 
                            350 ;------------------------------------------------------------
                            351 ;led.c:2: void delayms(unsigned int ms)
                            352 ;	-----------------------------------------
                            353 ;	 function delayms
                            354 ;	-----------------------------------------
   0064                     355 _delayms:
                    0002    356 	ar2 = 0x02
                    0003    357 	ar3 = 0x03
                    0004    358 	ar4 = 0x04
                    0005    359 	ar5 = 0x05
                    0006    360 	ar6 = 0x06
                    0007    361 	ar7 = 0x07
                    0000    362 	ar0 = 0x00
                    0001    363 	ar1 = 0x01
                            364 ;     genReceive
   0064 AA 82               365 	mov	r2,dpl
   0066 AB 83               366 	mov	r3,dph
                            367 ;led.c:6: for (i = ms; i > 0; i--)
                            368 ;     genAssign
   0068                     369 00105$:
                            370 ;     genIfx
   0068 EA                  371 	mov	a,r2
   0069 4B                  372 	orl	a,r3
                            373 ;     genIfxJump
                            374 ;	Peephole 108.c	removed ljmp by inverse jump logic
   006A 60 04               375 	jz	00111$
                            376 ;	Peephole 300	removed redundant label 00120$
                            377 ;     genAssign
   006C 7C 01               378 	mov	r4,#0x01
                            379 ;	Peephole 112.b	changed ljmp to sjmp
   006E 80 02               380 	sjmp	00112$
   0070                     381 00111$:
                            382 ;     genAssign
   0070 7C 00               383 	mov	r4,#0x00
   0072                     384 00112$:
                            385 ;     genIfx
   0072 EC                  386 	mov	a,r4
                            387 ;     genIfxJump
                            388 ;	Peephole 108.c	removed ljmp by inverse jump logic
   0073 60 11               389 	jz	00109$
                            390 ;	Peephole 300	removed redundant label 00121$
                            391 ;led.c:7: for (j = 110; j > 0; j--);
                            392 ;     genAssign
   0075 7C 6E               393 	mov	r4,#0x6E
   0077                     394 00101$:
                            395 ;     genCmpGt
                            396 ;     genCmp
                            397 ;     genIfxJump
                            398 ;	Peephole 108.a	removed ljmp by inverse jump logic
                            399 ;	Peephole 132.b	optimized genCmpGt by inverse logic (acc differs)
   0077 EC                  400 	mov	a,r4
   0078 24 FF               401 	add	a,#0xff - 0x00
   007A 50 03               402 	jnc	00107$
                            403 ;	Peephole 300	removed redundant label 00122$
                            404 ;     genMinus
                            405 ;     genMinusDec
   007C 1C                  406 	dec	r4
                            407 ;	Peephole 112.b	changed ljmp to sjmp
   007D 80 F8               408 	sjmp	00101$
   007F                     409 00107$:
                            410 ;led.c:6: for (i = ms; i > 0; i--)
                            411 ;     genMinus
                            412 ;     genMinusDec
   007F 1A                  413 	dec	r2
   0080 BA FF 01            414 	cjne	r2,#0xff,00123$
   0083 1B                  415 	dec	r3
   0084                     416 00123$:
                            417 ;	Peephole 112.b	changed ljmp to sjmp
   0084 80 E2               418 	sjmp	00105$
   0086                     419 00109$:
   0086 22                  420 	ret
                            421 ;------------------------------------------------------------
                            422 ;Allocation info for local variables in function 'main'
                            423 ;------------------------------------------------------------
                            424 ;------------------------------------------------------------
                            425 ;led.c:9: void main()
                            426 ;	-----------------------------------------
                            427 ;	 function main
                            428 ;	-----------------------------------------
   0087                     429 _main:
                            430 ;led.c:11: while(1){
   0087                     431 00102$:
                            432 ;led.c:12: P2 = 0xff;
                            433 ;     genAssign
   0087 75 A0 FF            434 	mov	_P2,#0xFF
                            435 ;led.c:13: delayms(499);
                            436 ;     genCall
                            437 ;	Peephole 182.b	used 16 bit load of dptr
   008A 90 01 F3            438 	mov	dptr,#0x01F3
   008D 12 00 64            439 	lcall	_delayms
                            440 ;led.c:14: P2 = 0x0;
                            441 ;     genAssign
   0090 75 A0 00            442 	mov	_P2,#0x00
                            443 ;led.c:15: delayms(499);
                            444 ;     genCall
                            445 ;	Peephole 182.b	used 16 bit load of dptr
   0093 90 01 F3            446 	mov	dptr,#0x01F3
   0096 12 00 64            447 	lcall	_delayms
                            448 ;	Peephole 112.b	changed ljmp to sjmp
   0099 80 EC               449 	sjmp	00102$
                            450 ;	Peephole 259.a	removed redundant label 00104$ and ret
                            451 ;
                            452 	.area CSEG    (CODE)
                            453 	.area CONST   (CODE)
                            454 	.area XINIT   (CODE)
