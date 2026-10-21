from keystone import Ks, KS_ARCH_ARM, KS_MODE_ARM
ks = Ks(KS_ARCH_ARM, KS_MODE_ARM)
for insn in (
    "LDR R6, [R4,#0x14]",
    "AND R6, R6, #0xF",
    "ORR R6, R6, #0x13000000",
    "ORR R6, R6, #0xFF00",
    "STR R6, [R4,#0x54]",
):
    enc, _ = ks.asm(insn)
    print('%-28s %s  %s' % (insn, bytes(enc).hex(' '), hex(int.from_bytes(bytes(enc), 'little'))))
