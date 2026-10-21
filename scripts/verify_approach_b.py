import sys, struct
sys.path.insert(0, r'.rea')
from elfutil import load_elf, va_to_off

SRC = r'convertedmain.rebased.elf'
DST = r'convertedmain.hammer_b.elf'
HEIGHT_VA = 0x60B493A8
BODY_VA = 0x60B493D8

d, segs = load_elf(SRC)
d2, segs2 = load_elf(DST)

old_height = struct.unpack('<10f', d[va_to_off(segs, 0x60B0C2BC):va_to_off(segs, 0x60B0C2BC)+40])
old_body = struct.unpack('<10I', d[va_to_off(segs, 0x60B0C230):va_to_off(segs, 0x60B0C230)+40])
height_bytes = struct.pack('<11f', *(list(old_height) + [31.0]))
body_bytes = struct.pack('<11I', *(list(old_body) + [0]))

redirects = [
    (0x60795FF0, 0x60795D44, HEIGHT_VA, 0x00376578, 0x003B3664, 'height sub_60795CDC'),
    (0x607960F8, 0x60796018, HEIGHT_VA, 0x003762A4, 0x003B3390, 'height sub_60796004'),
    (0x6078C58C, 0x6078C540, BODY_VA, 0x0037FCF0, 0x003BCE98, 'body sub_6078C444'),
    (0x6078E604, 0x6078E5C0, BODY_VA, 0x0037DC70, 0x003BAE18, 'body sub_6078E5A8'),
    (0x6078E7E8, 0x6078E630, BODY_VA, 0x0037DC00, 0x003BADA8, 'body sub_6078E608'),
]

patches = [
    (0x6045DDCC, '02 20 A0 E3', '0A 20 A0 E3', 'Fire Flower grant: mov r2,#2 -> #10'),
    (0x607A2708, '1E FF 2F 81', '01 30 A0 83', 'canChangeTo(10): bxhi lr -> movhi r3,#1'),
    (HEIGHT_VA, None, height_bytes.hex(' '), 'new 11-entry height table'),
    (BODY_VA, None, body_bytes.hex(' '), 'new 11-entry body table'),
    *[(va, struct.pack('<I', old).hex(' '), struct.pack('<I', new).hex(' '), desc)
      for va, pc, base, old, new, desc in redirects],
    (0x60B0C328, '00 00 00 00', '02 00 00 00', 'tall type[10] = 2 (Normal)'),
    (0x6078E6A8, '02 00 50 E3', '0A 00 50 E3', 'suit colour: cmp r0,#2 -> #10'),
    (0x607AAA88, '02 00 50 E3', '0A 00 50 E3', 'setFireBallAction: cmp r0,#2 -> #10'),
    (0x607AA9BC, '02 00 51 E3', '0A 00 51 E3', 'checkSetFireBall: cmp r1,#2 -> #10'),
    (0x607AABB8, '02 00 50 E3', '0A 00 50 E3', 'createFireBall A: cmp r0,#2 -> #10'),
    (0x607AAC94, '02 00 50 E3', '0A 00 50 E3', 'createFireBall C: cmp r0,#2 -> #10'),
    (0x607AAFF4, '06 00 51 E3', '0A 00 51 E3', 'fire exec bound: cmp r1,#6 -> #10'),
    (0x607AB000, '64 30 A0 E3', '64 34 00 E3', 'fire exec mask: 0x64 -> movw 0x464'),
    (0x607AB0E4, '02 00 50 E3', '0A 00 50 E3', 'fire exec inner: cmp r0,#2 -> #10'),
    (0x60C61BE4, '98 34 AF 00', '04 39 AF 00', 'profile ptr: 0xAF3498 -> 0xAF3904'),
    (0x60BD3208, '00 00 00 00', '13 00 00 00', 'Hammer Info #1 subtype = 19'),
    (0x60BD3210, '00 82 08 00', '01 00 08 00', 'Hammer Info #1 mask'),
    (0x60AF6620, '00 08 00 00', '00 00 00 00', 'Hammer Info #2 type mask = 0'),
    (0x6013FB38, '01 10 00 E2', '50 12 E0 E7', 'direction = (param>>4)&1'),
    (0x6013FB68, '50 08 E7 E7', '0A 00 A0 E3', 'scale denominator = 10'),
    (0x60140744, '00 50 86 E5', '14 60 94 E5', 'ctor LDR R6,[R4,#0x14]'),
    (0x60140748, '00 50 87 E5', '0F 60 06 E2', 'ctor AND R6,R6,#0xF'),
    (0x6014074C, '00 50 8A E5', '13 64 86 E3', 'ctor ORR R6,#0x13000000'),
    (0x60140770, '00 50 84 E7', 'FF 6C 86 E3', 'ctor ORR R6,#0xFF00'),
    (0x60140778, '00 50 84 E7', '54 60 84 E5', 'ctor STR R6,[R4,#0x54]'),
]

print('Approach B verification')
print('=' * 118)
print('%-10s %-10s %-20s %-20s %-4s %s' % ('VA', 'file off', 'original', 'new', 'ok', 'purpose'))
print('-' * 118)
all_ok = True
for va, old, new, desc in patches:
    off = va_to_off(segs, va)
    nb = bytes.fromhex(new)
    if old is None:
        print('0x%08X 0x%08X %-20s %-20s %-4s %s' % (va, off, '<table>', '<table>', 'OK', desc))
        continue
    ob = bytes.fromhex(old)
    cur = bytes(d[off:off+len(ob)])
    ok = cur == ob
    all_ok &= ok
    print('0x%08X 0x%08X %-20s %-20s %-4s %s' % (va, off, cur.hex(' '), nb.hex(' '), 'OK' if ok else 'BAD', desc))
print('-' * 118)
print('ALL ORIGINAL BYTES MATCH:', all_ok)
print()

# Patched-file checks.
def rdw(va):
    off = va_to_off(segs2, va)
    return struct.unpack_from('<I', d2, off)[0]
print('patched values:')
print('  height table:', struct.unpack('<11f', d2[va_to_off(segs2, HEIGHT_VA):va_to_off(segs2, HEIGHT_VA)+44]))
print('  body table  :', struct.unpack('<11I', d2[va_to_off(segs2, BODY_VA):va_to_off(segs2, BODY_VA)+44]))
print('  tall[10]    :', rdw(0x60B0C328))
print('  old height[10] slot @0x60B0C2E4 (must stay 0.0):', struct.unpack('<f', struct.pack('<I', rdw(0x60B0C2E4)))[0])
print('  old body[10] slot @0x60B0C258 (must stay 0xA5):', hex(rdw(0x60B0C258)))
print()
for lit, pc, base, old, new, name in redirects:
    got = rdw(lit)
    eff = (pc + got) & 0xFFFFFFFF
    print('  %-24s lit 0x%08X = %08X -> effective %08X %s' % (name, lit, got, eff, 'OK' if eff == base else 'BAD'))
print()
print('  grant word      @0x6045DDCC =', hex(rdw(0x6045DDCC)))
print('  canChangeTo     @0x607A2708 =', hex(rdw(0x607A2708)))
print('  fire mask       @0x607AB000 =', hex(rdw(0x607AB000)))
