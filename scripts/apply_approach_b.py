import sys, hashlib, struct
sys.path.insert(0, r'.rea')
from elfutil import load_elf, va_to_off

SRC = r'convertedmain.rebased.elf'
DST = r'convertedmain.hammer_b.elf'

d, segs = load_elf(SRC)

# ---------------------------------------------------------------- new tables
HEIGHT_VA = 0x60B493A8          # 11 floats, unreferenced 0xA0 zero-padding block in .rodata
BODY_VA   = 0x60B493D8          # 11 dwords, same block (0x60B493A8..0x60B49448)

old_height = struct.unpack('<10f', d[va_to_off(segs, 0x60B0C2BC):va_to_off(segs, 0x60B0C2BC)+40])
old_body   = struct.unpack('<10I', d[va_to_off(segs, 0x60B0C230):va_to_off(segs, 0x60B0C230)+40])
height_vals = list(old_height) + [31.0]
body_vals   = list(old_body) + [0]
height_bytes = struct.pack('<11f', *height_vals)
body_bytes   = struct.pack('<11I', *body_vals)

# Literal-pool redirects.  Each literal is a constant relative offset consumed by
# `add pc, rX`, so it must be patched to `new_base - (pc_of_add)`.
# (literal_va, pc_of_add, new_base, old_value, name)
redirects = [
    (0x60795FF0, 0x60795D44, HEIGHT_VA, 0x00376578, 'height  sub_60795CDC'),
    (0x607960F8, 0x60796018, HEIGHT_VA, 0x003762A4, 'height  sub_60796004'),
    (0x6078C58C, 0x6078C540, BODY_VA,   0x0037FCF0, 'body    sub_6078C444'),
    (0x6078E604, 0x6078E5C0, BODY_VA,   0x0037DC70, 'body    sub_6078E5A8'),
    (0x6078E7E8, 0x6078E630, BODY_VA,   0x0037DC00, 'body    sub_6078E608'),
]
redirect_patches = []
for lit, pc, base, old, name in redirects:
    new = (base - pc) & 0xFFFFFFFF
    redirect_patches.append((lit, struct.pack('<I', old), struct.pack('<I', new), name))

# ---------------------------------------------------------------- patch list
# (VA, original bytes or None, new bytes, description)
patches = [
    # --- grant / mode recognition ---
    (0x6045DDCC, '02 20 A0 E3', '0A 20 A0 E3', 'Fire Flower grant: mov r2,#2 -> #10'),
    (0x607A2708, '1E FF 2F 81', '01 30 A0 83', 'canChangeTo(10): bxhi lr -> movhi r3,#1'),

    # --- mode-indexed tables (relocated, see below) ---
    (HEIGHT_VA, None, height_bytes.hex(' '), 'new 11-entry height table (index 10 = 31.0)'),
    (BODY_VA,   None, body_bytes.hex(' '),   'new 11-entry body-ID table (index 10 = 0 Normal)'),
    *[(va, ob.hex(' '), nb.hex(' '), desc) for va, ob, nb, desc in redirect_patches],
    (0x60B0C328, '00 00 00 00', '02 00 00 00', 'tall type[10] 0 (Mini) -> 2 (Normal)'),

    # --- cosmetics ---
    (0x6078E6A8, '02 00 50 E3', '0A 00 50 E3', 'suit colour: cmp r0,#2 -> #10 (Fire colour)'),

    # --- fire-action gates ---
    (0x607AAA88, '02 00 50 E3', '0A 00 50 E3', 'setFireBallAction: cmp r0,#2 -> #10'),
    (0x607AA9BC, '02 00 51 E3', '0A 00 51 E3', 'checkSetFireBall: cmp r1,#2 -> #10'),
    (0x607AABB8, '02 00 50 E3', '0A 00 50 E3', 'createFireBall gate A: cmp r0,#2 -> #10'),
    (0x607AAC94, '02 00 50 E3', '0A 00 50 E3', 'createFireBall gate C: cmp r0,#2 -> #10'),
    (0x607AAFF4, '06 00 51 E3', '0A 00 51 E3', 'fire state exec bound: cmp r1,#6 -> #10'),
    (0x607AB000, '64 30 A0 E3', '64 34 00 E3', 'fire state exec mask: 0x64 -> movw 0x464'),
    (0x607AB0E4, '02 00 50 E3', '0A 00 50 E3', 'fire state exec inner: cmp r0,#2 -> #10'),

    # --- Approach A hammer actor/projectile patches ---
    (0x60C61BE4, '98 34 AF 00', '04 39 AF 00', 'batch profile ptr: 0xAF3498 (476) -> 0xAF3904 (759)'),
    (0x60BD3208, '00 00 00 00', '13 00 00 00', 'Hammer Info #1 subtype = 19'),
    (0x60BD3210, '00 82 08 00', '01 00 08 00', 'Hammer Info #1 subtype mask = 0x00080001'),
    (0x60AF6620, '00 08 00 00', '00 00 00 00', 'Hammer Info #2 type mask = 0'),
    (0x6013FB38, '01 10 00 E2', '50 12 E0 E7', 'direction = (param>>4)&1'),
    (0x6013FB68, '50 08 E7 E7', '0A 00 A0 E3', 'scale denominator = 10'),
    (0x60140744, '00 50 86 E5', '14 60 94 E5', 'ctor: LDR R6,[R4,#0x14]'),
    (0x60140748, '00 50 87 E5', '0F 60 06 E2', 'ctor: AND R6,R6,#0xF'),
    (0x6014074C, '00 50 8A E5', '13 64 86 E3', 'ctor: ORR R6,R6,#0x13000000'),
    (0x60140770, '00 50 84 E7', 'FF 6C 86 E3', 'ctor: ORR R6,R6,#0xFF00'),
    (0x60140778, '00 50 84 E7', '54 60 84 E5', 'ctor: STR R6,[R4,#0x54]'),
]

buf = bytearray(d)
changed = {}
for va, old, new, desc in patches:
    off = va_to_off(segs, va)
    if off is None:
        raise SystemExit('0x%08X not mapped' % va)
    nb = bytes.fromhex(new)
    ob = bytes.fromhex(old) if old is not None else bytes(d[off:off+len(nb)])
    cur = bytes(d[off:off+len(ob)])
    if old is not None and cur != ob:
        raise SystemExit('MISMATCH at 0x%08X: expected %s got %s' % (va, ob.hex(' '), cur.hex(' ')))
    for i, (a, b) in enumerate(zip(ob, nb)):
        if a != b:
            changed[off+i] = (a, b, desc)
    buf[off:off+len(nb)] = nb

open(DST, 'wb').write(buf)

# ---------------------------------------------------------------- verify
print('source :', SRC, hashlib.md5(d).hexdigest(), len(d), 'bytes')
print('patched:', DST, hashlib.md5(bytes(buf)).hexdigest(), len(buf), 'bytes')
diff = [i for i in range(len(d)) if d[i] != buf[i]]
print('differing bytes:', len(diff))
print('unexpected diffs:', [hex(i) for i in diff if i not in changed])
print('missing diffs   :', [hex(i) for i in changed if i not in diff])

# reload the patched file and confirm the tables / literals
d2, segs2 = load_elf(DST)
print()
print('new height table @0x%08X: %s' % (HEIGHT_VA, struct.unpack('<11f', d2[va_to_off(segs2, HEIGHT_VA):va_to_off(segs2, HEIGHT_VA)+44])))
print('new body   table @0x%08X: %s' % (BODY_VA, struct.unpack('<11I', d2[va_to_off(segs2, BODY_VA):va_to_off(segs2, BODY_VA)+44])))
print('tall[10] =', struct.unpack('<I', d2[va_to_off(segs2, 0x60B0C328):va_to_off(segs2, 0x60B0C328)+4])[0])
print()
for lit, pc, base, old, name in redirects:
    new = struct.unpack('<I', d2[va_to_off(segs2, lit):va_to_off(segs2, lit)+4])[0]
    print('%-24s lit 0x%08X -> 0x%08X  effective 0x%08X  %s' % (
        name, lit, new, (pc + new) & 0xFFFFFFFF, 'OK' if (pc + new) & 0xFFFFFFFF == base else 'BAD'))
print()
print('patch table:')
for va, old, new, desc in patches:
    print('  0x%08X  %-48s  %s' % (va, (old or '<table>')[:47], desc))
