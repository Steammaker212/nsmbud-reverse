from keystone import Ks, KS_ARCH_ARM, KS_MODE_ARM

ks = Ks(KS_ARCH_ARM, KS_MODE_ARM)
insns = [
    "AND R1, R0, #1",
    "UBFX R1, R0, #4, #1",
    "MOV R0, #10",
    "LDR R0, [R9,#0x14]",
    "MOV R1, R0, LSR #4",
    "AND R1, R1, #1",
    "STR R1, [R9,#0x50]",
    "LDR R1, [R2,R1,LSL#2]",
    "STR R1, [R9,#0xA0]",
    "STRB R1, [R9,#0x54]",
    "STRB R1, [R9,#0x56]",
    "STRB R1, [R9,#0x57]",
    "MOV R1, #19",
    "MOV R1, R0, LSR #8",
    "AND R1, R1, #0xF",
    "PUSH {R4-R9,R11,LR}",
    "SUB SP, SP, #8",
    "MOV R9, R0",
]
for i in insns:
    enc, cnt = ks.asm(i)
    print("%-28s %s  %s" % (i, bytes(enc).hex(' '), hex(int.from_bytes(bytes(enc), 'little'))))
