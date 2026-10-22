/* sub_60916CB4 -- the one function Hex-Rays cannot decompile
 *
 * Restored to the correct bounds (0x916cb4..0x916e24, 92 instructions) and still
 * declined: Hex-Rays 9.3 returns None even with the LDREX/STREX atomic pair
 * neutralised, so this is a decompiler limitation rather than missing analysis.
 * The exact retail instructions are recorded below so the gap is documented.
 *
 * This is 1 function of 13,472 in the corpus.
 */

#if 0
    0x00916cb4  f0 4b 2d e9   PUSH            {R4-R9,R11,LR}
    0x00916cb8  02 8b 2d ed   VPUSH           {D8}
    0x00916cbc  08 d0 4d e2   SUB             SP, SP, #8
    0x00916cc0  02 40 a0 e1   MOV             R4, R2
    0x00916cc4  01 80 a0 e1   MOV             R8, R1
    0x00916cc8  bc 1d d0 e1   LDRH            R1, [R0,#0xDC]
    0x00916ccc  d4 30 90 e5   LDR             R3, [R0,#0xD4]
    0x00916cd0  d8 70 90 e5   LDR             R7, [R0,#0xD8]
    0x00916cd4  00 21 94 e5   LDR             R2, [R4,#0x100]
    0x00916cd8  01 10 42 e0   SUB             R1, R2, R1
    0x00916cdc  81 20 81 e0   ADD             R2, R1, R1,LSL#1
    0x00916ce0  01 00 53 e1   CMP             R3, R1
    0x00916ce4  02 71 87 80   ADDHI           R7, R7, R2,LSL#2
    0x00916ce8  08 10 87 e2   ADD             R1, R7, #8
    0x00916cec  00 00 a0 e1   NOP
    0x00916cf0  02 30 a0 e1   MOV             R3, R2
    0x00916cf4  1f 30 c0 e7   BFC             R3, #0, #1
    0x00916cf8  00 00 a0 e1   NOP
    0x00916cfc  00 00 57 e3   CMP             R7, #0
    0x00916d00  f9 ff ff 1a   BNE             loc_60916CEC
    0x00916d04  01 00 12 e3   TST             R2, #1
    0x00916d08  28 00 90 15   LDRNE           R0, [R0,#0x28]
    0x00916d0c  01 06 10 12   ANDSNE          R0, R0, #0x100000
    0x00916d10  02 00 00 1a   BNE             loc_60916D20
    0x00916d14  08 d0 8d e2   ADD             SP, SP, #8
    0x00916d18  02 8b bd ec   VPOP            {D8}
    0x00916d1c  f0 8b bd e8   POP             {R4-R9,R11,PC}
    0x00916d20  fc 10 9f e5   LDR             R1, =(flt_60C5D5B0 - 0x60916D38)
    0x00916d24  bc 03 d4 e1   LDRH            R0, [R4,#0x3C]
    0x00916d28  b8 61 d4 e1   LDRH            R6, [R4,#0x18]
    0x00916d2c  3b 00 50 e3   CMP             R0, #0x3B ; ';'
    0x00916d30  01 10 8f e0   ADD             R1, PC, R1; flt_60C5D5B0
    0x00916d34  04 00 a0 e1   MOV             R0, R4
    0x00916d38  04 10 81 12   ADDNE           R1, R1, #(flt_60C5D5B4 - 0x60C5D5B0)
    0x00916d3c  00 8a 91 ed   VLDR            S16, [R1]
    0x00916d40  d6 24 00 eb   BL              sub_609200A0
    0x00916d44  ba 51 d4 e1   LDRH            R5, [R4,#0x1A]
    0x00916d48  00 70 a0 e1   MOV             R7, R0
    0x00916d4c  08 00 a0 e1   MOV             R0, R8
    0x00916d50  07 10 a0 e3   MOV             R1, #7
    0x00916d54  6b f2 ff eb   BL              sub_60913708
    0x00916d58  c8 00 9f e5   LDR             R0, =(off_60C790DC - 0x60916D88)
    0x00916d5c  05 00 57 e1   CMP             R7, R5
    0x00916d60  01 10 a0 e3   MOV             R1, #1
    0x00916d64  00 20 a0 e3   MOV             R2, #0
    0x00916d68  00 90 a0 e3   MOV             R9, #0
    0x00916d6c  07 50 a0 c1   MOVGT           R5, R7
    0x00916d70  01 00 56 e3   CMP             R6, #1
    0x00916d74  01 60 a0 91   MOVLS           R6, R1
    0x00916d78  00 10 a0 e3   MOV             R1, #0
    0x00916d7c  06 30 a0 e1   MOV             R3, R6
    0x00916d80  00 00 9f e7   LDR             R0, [PC,R0]; off_60C790DC
    0x00916d84  00 70 90 e5   LDR             R7, [R0]
    0x00916d88  c0 00 98 e5   LDR             R0, [R8,#0xC0]
    0x00916d8c  00 50 8d e5   STR             R5, [SP,#8+var_8]
    0x00916d90  37 ff 2f e1   BLX             R7
    0x00916d94  90 00 9f e5   LDR             R0, =(off_60C790E4 - 0x60916DAC)
    0x00916d98  00 10 a0 e3   MOV             R1, #0
    0x00916d9c  00 20 a0 e3   MOV             R2, #0
    0x00916da0  06 30 a0 e1   MOV             R3, R6
    0x00916da4  00 00 9f e7   LDR             R0, [PC,R0]; off_60C790E4
    0x00916da8  00 70 90 e5   LDR             R7, [R0]
    0x00916dac  c0 00 98 e5   LDR             R0, [R8,#0xC0]
    0x00916db0  00 50 8d e5   STR             R5, [SP,#8+var_8]
    0x00916db4  37 ff 2f e1   BLX             R7
    0x00916db8  70 00 9f e5   LDR             R0, =(off_60C78B38 - 0x60916DD0)
    0x00916dbc  40 10 84 e2   ADD             R1, R4, #0x40 ; '@'
    0x00916dc0  00 20 a0 e3   MOV             R2, #0
    0x00916dc4  00 30 a0 e3   MOV             R3, #0
    0x00916dc8  00 00 9f e7   LDR             R0, [PC,R0]; off_60C78B38
    0x00916dcc  00 70 90 e5   LDR             R7, [R0]
    0x00916dd0  c0 00 98 e5   LDR             R0, [R8,#0xC0]
    0x00916dd4  02 02 8d e8   STMEA           SP, {R1,R9}
    0x00916dd8  00 10 a0 e3   MOV             R1, #0
    0x00916ddc  37 ff 2f e1   BLX             R7
    0x00916de0  c0 50 98 e5   LDR             R5, [R8,#0xC0]
    0x00916de4  04 00 a0 e1   MOV             R0, R4
    0x00916de8  bc 24 00 eb   BL              sub_609200E0
    0x00916dec  00 30 a0 e1   MOV             R3, R0
    0x00916df0  3c 00 9f e5   LDR             R0, =(off_60C790D4 - 0x60916E10)
    0x00916df4  48 0a b0 ee   VMOV.F32        S0, S16
    0x00916df8  01 10 a0 e3   MOV             R1, #1
    0x00916dfc  00 20 a0 e3   MOV             R2, #0
    0x00916e00  00 00 53 e3   CMP             R3, #0
    0x00916e04  ff 30 00 13   MOVWNE          R3, #0xFF
    0x00916e08  00 00 9f e7   LDR             R0, [PC,R0]; off_60C790D4
    0x00916e0c  00 c0 90 e5   LDR             R12, [R0]
    0x00916e10  05 00 a0 e1   MOV             R0, R5
    0x00916e14  08 d0 8d e2   ADD             SP, SP, #8
    0x00916e18  02 8b bd ec   VPOP            {D8}
    0x00916e1c  f0 4b bd e8   POP             {R4-R9,R11,LR}
    0x00916e20  1c ff 2f e1   BX              R12
#endif
