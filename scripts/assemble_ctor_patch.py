from keystone import Ks, KS_ARCH_ARM, KS_MODE_ARM
import sys
sys.path.insert(0, r'.rea')
from elfutil import load_elf, va_to_off

ks = Ks(KS_ARCH_ARM, KS_MODE_ARM)
d, segs = load_elf(r'convertedmain.rebased.elf')

def rb(va, n):
    off = va_to_off(segs, va)
    return d[off:off+n]

for va in (0x60140744, 0x60140748, 0x6014074c):
    print('orig', hex(va), rb(va, 4).hex(' '))

for insn in ("LDR R0, [R4,#0x14]", "AND R0, R0, #0xF", "STRB R0, [R4,#0x54]"):
    enc, _ = ks.asm(insn)
    print('%-24s %s  %s' % (insn, bytes(enc).hex(' '), hex(int.from_bytes(bytes(enc), 'little'))))

print('--- info/scale/direction bytes ---')
for va, n in ((0x6013FB38, 4), (0x6013FB68, 4), (0x60BD3208, 4), (0x60BD3210, 4)):
    print(hex(va), rb(va, n).hex(' '))
