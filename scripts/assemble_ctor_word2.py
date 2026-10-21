from keystone import Ks, KS_ARCH_ARM, KS_MODE_ARM
import sys
sys.path.insert(0, r'.rea')
from elfutil import load_elf, va_to_off
ks = Ks(KS_ARCH_ARM, KS_MODE_ARM)
for insn in ("ORR R0, R0, #0xFF00", "ORR R0, R0, #0x13000000", "STR R0, [R4,#0x54]"):
    enc, _ = ks.asm(insn)
    print('%-28s %s  %s' % (insn, bytes(enc).hex(' '), hex(int.from_bytes(bytes(enc), 'little'))))
d, segs = load_elf(r'convertedmain.rebased.elf')
for va in (0x60140770, 0x60140778):
    off = va_to_off(segs, va)
    print('orig', hex(va), d[off:off+4].hex(' '))
