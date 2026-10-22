"""Does our Hammer build add any sprite entries that a Yaz0moto patch could use?

A Yaz0moto patch can only reference sprite ids that the *running game* resolves in
Profile::spriteToProfileList. The SweetDX patch gets away with ids 724-732 because
it ships code that extends that table. If our hammer_b.elf does the same, a Hammer
sprite entry could exist and be worth exposing in a patch.

So: compare the two images and check whether anything in the .bss/.data region
that would host an extended table changed in a way consistent with new entries.

Also re-derive, defensively, whether sprite entries exist for the Hammer/Fireball
profiles at all.
"""
import hashlib
import json
import struct

A = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
B = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"
MAP = r"C:\Users\Saif Khan\Downloads\main.idb\sprite_map.json"


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


a = open(A, "rb").read()
b = open(B, "rb").read()
print(f"A {len(a)} bytes  md5 {hashlib.md5(a).hexdigest()}")
print(f"B {len(b)} bytes  md5 {hashlib.md5(b).hexdigest()}")
print(f"same length: {len(a) == len(b)}")

diffs = [i for i in range(min(len(a), len(b))) if a[i] != b[i]]
print(f"differing bytes: {len(diffs)}")

# group into contiguous regions
regions = []
for i in diffs:
    if regions and i - regions[-1][1] <= 2:
        regions[-1][1] = i
    else:
        regions.append([i, i])
print(f"regions: {len(regions)}")

# Which segment does each region fall in, and what VA?
S = segs(a)
print("\n=== changed regions (file offset -> VA) ===")
for lo, hi in regions:
    va = None
    for v, sz, o in S:
        if o <= lo < o + sz:
            va = v + lo - o
            break
    span = hi - lo + 1
    print(f"  off {lo:#08x}..{hi:#08x} ({span:3} b) -> VA "
          f"{('0x%08x' % va) if va is not None else '(none)'}")

# Does anything write into the .bss range where an extended sprite table would live?
BSS_LO, BSS_HI = 0x60C7B274, 0x60C7B274 + 0x1000
bss_hits = []
for lo, hi in regions:
    for v, sz, o in S:
        if o <= lo < o + sz:
            va = v + lo - o
            if BSS_LO <= va < BSS_HI:
                bss_hits.append(va)
print(f"\nchanges in .bss head region: {bss_hits if bss_hits else 'none'}")

# Sprite availability for the Hammer-family profiles
inv = json.load(open(MAP))
print("\n=== sprite ids for Hammer-related profiles ===")
for prof, name in [(474, "Ice Ball"), (475, "Plant Ice Ball"),
                   (476, "Player Fireball"), (477, "Plant Fireball"),
                   (478, "Yoshi Flame"), (759, "Hammer")]:
    sprites = inv.get(str(prof), [])
    print(f"  profile {prof:3} {name:16} -> "
          f"{sprites if sprites else 'NO SPRITE ID'}")

print("\n=== max sprite id present in the base table ===")
all_sprites = sorted({int(s) for v in inv.values() for s in v})
print(f"  {all_sprites[0]} .. {all_sprites[-1]}  ({len(all_sprites)} sprites)")
