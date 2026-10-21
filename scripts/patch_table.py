import sys, struct
sys.path.insert(0, r'.rea')
from elfutil import load_elf, va_to_off

d, segs = load_elf(r'convertedmain.rebased.elf')
print('segments:')
for s in segs:
    if s['type'] == 1:
        print('  off=0x%X vaddr=0x%X filesz=0x%X memsz=0x%X flags=0x%X' % (
            s['offset'], s['vaddr'], s['filesz'], s['memsz'], s['flags']))

patches = [
    (0x60C61BE4, bytes.fromhex('04 39 af 00'), 'fire profile pointer cell -> hammer ID cell (RVA 0xAF3904)'),
    (0x60BD3208, bytes.fromhex('13 00 00 00'), 'Hammer ActiveCollider Info #1 subtype = 19'),
    (0x60BD3210, bytes.fromhex('ff ff ff ff'), 'Hammer ActiveCollider Info #1 subtype mask = 0xFFFFFFFF'),
    (0x6013FB38, bytes.fromhex('50 12 e0 e7'), 'hammer init: direction = (param >> 4) & 1 (UBFX R1,R0,#4,#1)'),
    (0x6013FB68, bytes.fromhex('0a 00 a0 e3'), 'hammer init: scale denominator = 10 (MOV R0,#10)'),
    (0x60140744, bytes.fromhex('14 00 94 e5'), 'hammer ctor: LDR R0,[R4,#0x14] (param)'),
    (0x60140748, bytes.fromhex('0f 00 00 e2'), 'hammer ctor: AND R0,R0,#0xF (player index)'),
    (0x6014074c, bytes.fromhex('54 00 c4 e5'), 'hammer ctor: STRB R0,[R4,#0x54] (+84 player index)'),
    (0x60AF6620, bytes.fromhex('00 00 00 00'), 'Hammer ActiveCollider Info #2 mask = 0 (disable player-hit collider)'),
]

print('\n%-12s %-10s %-18s %-18s %s' % ('VA', 'file off', 'original', 'new', 'purpose'))
for va, new, purpose in patches:
    off = va_to_off(segs, va)
    old = d[off:off+len(new)]
    print('0x%08X 0x%08X  %-18s %-18s %s' % (va, off, old.hex(' '), new.hex(' '), purpose))

print('\nOptional Info #2 conversion:')
for va, new, purpose in [
    (0x60AF6618, bytes.fromhex('03 00 00 00'), 'Info #2 type 12 -> 3'),
    (0x60AF661C, bytes.fromhex('13 00 00 00'), 'Info #2 subtype 0 -> 19'),
    (0x60AF6620, bytes.fromhex('4f 82 00 00'), 'Info #2 mask 0x800 -> 0x824F'),
    (0x60AF6624, bytes.fromhex('ff ff ff ff'), 'Info #2 subtype mask 0 -> 0xFFFFFFFF'),
    (0x60AF6628, bytes.fromhex('00 00 00 00'), 'Info #2 flags 2 -> 0'),
]:
    off = va_to_off(segs, va)
    print('0x%08X 0x%08X  %-18s %-18s %s' % (va, off, d[off:off+4].hex(' '), new.hex(' '), purpose))
