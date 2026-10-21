import struct, sys
sys.path.insert(0, r'.rea')
from elfutil import load_elf, va_to_off

d, segs = load_elf(r'convertedmain.rebased.elf')
text_va = 0x60000000
text_off = va_to_off(segs, text_va)
text_size = 0x9AE990
data = d[text_off:text_off+text_size]
target = 0x60795CDC
hits = []
for i in range(0, len(data) - 4, 4):
    w = struct.unpack_from('<I', data, i)[0]
    if (w & 0xFF000000) == 0xEB000000:
        off = w & 0xFFFFFF
        if off & 0x800000:
            off -= 0x1000000
        t = text_va + i + 8 + off * 4
        if t == target:
            hits.append(text_va + i)
print('direct BL callers of 0x%X:' % target)
for h in hits:
    print(hex(h))
print('count', len(hits))
