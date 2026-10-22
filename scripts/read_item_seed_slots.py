"""Read the .rodata slots that seed itemId -> Profile, to identify items definitively.

From the Hex-Rays decompilation of sub_604663F4, the runtime profile table is filled
one slot at a time:

    dword_60C9D3F4 = MEMORY[0xAF3664];
    dword_60C9D3F8 = MEMORY[0xAF3668];
    dword_60C9D3FC = MEMORY[0xAF3A80];
    ...

In this rebased image those MEMORY[0xAFxxxx] literals are .rodata addresses at
0x60000000 + offset (i.e. 0x60AF3664). Each holds a value the game turns into a
Profile*. Reading them gives the itemId -> Profile identity directly, with no
guessing about action codes.

Then: itemId's class is known from HAMMER_POWERUP_REPORT (itemId 1 = Fire Flower,
profile 592; itemId 0 = Mushroom, profile 591; ...). If the slot values match those
profile numbers, the mapping is confirmed; if they are something else, the mismatch
tells us what they really are.
"""
import struct

ELF = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"

# slots from the decompiled fill sequence, in itemId order 0..10
SLOTS = [0xAF3664, 0xAF3668, 0xAF3A80, 0xAF366C, 0xAF3670, 0xAF3674,
         0xAF3678, 0xAF367C, 0xAF3680, 0xAF3684, 0xAF368C]

# From HAMMER_POWERUP_REPORT section 10.2: itemId -> (profile, class, mode)
REPORT = {
    0: (591, "Mushroom", 1),
    1: (592, "Fire Flower", 2),
    2: (854, "LightMask glow", 1),
    3: (593, "Propeller suit", 3),
    4: (594, "Star", 6),
    5: (595, "Penguin suit", 4),
    6: (596, "Mini mushroom", 5),
    7: (597, "1-UP (silent)", 1),
    8: (598, "Ice Flower", 7),
    9: (599, "1-UP (silent)", 1),
    10: (601, "Yoshi egg", 9),
}


def segs(d):
    ph = struct.unpack_from("<I", d, 0x1C)[0]
    e = struct.unpack_from("<H", d, 0x2A)[0]
    n = struct.unpack_from("<H", d, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * e
        if struct.unpack_from("<I", d, b)[0] == 1:
            out.append((struct.unpack_from("<I", d, b + 8)[0],
                        struct.unpack_from("<I", d, b + 16)[0],
                        struct.unpack_from("<I", d, b + 4)[0]))
    return out


d = open(ELF, "rb").read()
S = segs(d)


def rd(va, n=4):
    for v, sz, o in S:
        if v <= va < v + sz:
            return d[o + va - v: o + va - v + n]
    return None


print("=== itemId -> .rodata seed slot -> value ===")
print(f"{'itemId':>6} {'slot':>10} {'value':>10}  {'report profile':>14} "
      f"{'match?':>7}")
print("-" * 60)
vals = {}
for item, off in enumerate(SLOTS):
    va = 0x60000000 + off
    raw = rd(va)
    if raw is None:
        print(f"{item:>6} {va:#010x} {'<unreadable>':>10}")
        continue
    val = struct.unpack_from("<I", raw)[0]
    vals[item] = val
    prof = REPORT[item][0]
    match = "YES" if val == prof else ""
    print(f"{item:>6} {va:#010x} {val:>10}  {prof:>14} {match:>7}")

print("\n=== interpretation ===")
matches = [i for i, v in vals.items() if v == REPORT[i][0]]
print(f"  slots matching the report's profile ids: {len(matches)}/11 {matches}")
if not matches:
    print("  The seed values are NOT profile ids. They are probably object pointers")
    print("  or vtable addresses resolved at runtime, so itemId identity cannot be")
    print("  read from here without tracing the constructor that fills them.")

# what do the values look like -- pointers or small ints?
small = [v for v in vals.values() if v < 0x10000]
print(f"\n  values that look like small integers (<0x10000): {small}")
print(f"  values that look like code/data addresses: "
      f"{[hex(v) for v in vals.values() if v >= 0x60000000][:6]}")

# Print the surrounding .rodata so the shape of the region is visible.
print("\n=== .rodata around the seed slots (0x60AF3650..0x60AF36B0) ===")
raw = rd(0x60AF3650, 0x60)
if raw:
    for i in range(0, len(raw), 4):
        v = struct.unpack_from("<I", raw, i)[0]
        tag = ""
        if 0x60000000 <= v < 0x60D00000:
            tag = "  <- address"
        elif v < 0x1000:
            tag = "  <- small int"
        print(f"  0x{0x60AF3650 + i:08x}: {v:>12}  ({v:#x}){tag}")
