from keystone import Ks, KS_ARCH_ARM, KS_MODE_ARM
ks = Ks(KS_ARCH_ARM, KS_MODE_ARM)
for insn in (
    "LDR R0, [R4,#0x14]",
    "AND R0, R0, #0xF",
    "ORR R0, R0, #0x13000000",
    "STR R0, [R4,#0x54]",
    "STRB R0, [R4,#0x57]",
    "MOV R0, #19",
):
    enc, _ = ks.asm(insn)
    print('%-28s %s  %s' % (insn, bytes(enc).hex(' '), hex(int.from_bytes(bytes(enc), 'little'))))
