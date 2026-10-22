"""Can a Hammer item be reached through block contents at all?

Our HAMMER_POWERUP_REPORT section 10 documents the chain:

    tile contents (actor+0x18, 5 bits)
      -> action code = dword_60B04164[contents]   (26 entries, codes 0..25)
      -> itemId      = dword_60B0267C[code]       (11 entries)
      -> Profile     = dword_60C9D3F4[4*(itemId+1)]

The editor exposes `Contents` as a single 4-bit nybble (values 0..15). But the
actor's contents field is described as FIVE bits, and the action-code table has 26
entries. If contents really is 5 bits, values 16..25 exist in the game and the
editor simply cannot express them -- which would be the only way a level-data
patch could touch anything Hammer-adjacent.

This reads both tables out of the image and prints the full 26-entry chain, so the
question is answered from data rather than from the 4-bit assumption.
"""
import struct

ELF = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
BASE = 0x60000000

ACTION = 0x60B04164     # dword_60B04164[contents] -> action code
ITEMID = 0x60B0267C     # dword_60B0267C[code]     -> item id


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


def rd(va, n):
    for v, sz, o in S:
        if v <= va < v + sz:
            return d[o + va - v: o + va - v + n]
    return None


print("=== dword_60B04164[contents] -> action code (26 entries) ===")
raw = rd(ACTION, 4 * 32)
if raw is None:
    print("  address not in a loaded segment")
else:
    codes = struct.unpack_from("<" + "I" * 32, raw, 0)
    for i, c in enumerate(codes):
        note = ""
        if i >= 16:
            note = "   <-- beyond the editor's 4-bit nybble"
        print(f"  contents {i:2} -> code {c:3}{note}")

print("\n=== dword_60B0267C[code] -> itemId (11 entries) ===")
raw = rd(ITEMID, 4 * 16)
if raw is None:
    print("  address not in a loaded segment")
else:
    items = struct.unpack_from("<" + "I" * 16, raw, 0)
    for i, it in enumerate(items):
        note = "" if i < 11 else "   <-- past the documented 11 entries"
        print(f"  code {i:2} -> itemId {it:3}{note}")

# Item -> power-up mode, from the report's verified table.
MODE = {0: 1, 1: 2, 2: 1, 3: 3, 4: 6, 5: 4, 6: 5, 7: 1, 8: 7, 9: 1, 10: 9}
IDENT = {0: "Mushroom", 1: "Fire Flower", 2: "LightMask (silent)", 3: "Propeller",
         4: "Star", 5: "Penguin", 6: "Mini Mushroom", 7: "1-UP (silent)",
         8: "Ice Flower", 9: "1-UP (silent)", 10: "Yoshi Egg"}

print("\n=== does any contents value reach power-up mode 10 (Hammer)? ===")
found = False
if raw is not None:
    codes = struct.unpack_from("<" + "I" * 32, rd(ACTION, 4 * 32), 0)
    items = struct.unpack_from("<" + "I" * 16, rd(ITEMID, 4 * 16), 0)
    for contents in range(32):
        code = codes[contents]
        if code >= len(items):
            continue
        item = items[code]
        mode = MODE.get(item)
        if mode == 10:
            print(f"  contents {contents} -> code {code} -> item {item} -> MODE 10  <<< HAMMER")
            found = True
if not found:
    print("  NO contents value reaches mode 10.")

print("\n=== the full contents table, deduplicated ===")
if raw is not None:
    seen = {}
    for contents in range(32):
        code = codes[contents]
        if code >= len(items):
            continue
        item = items[code]
        seen.setdefault((code, item, MODE.get(item)), []).append(contents)
    for (code, item, mode), cs in sorted(seen.items()):
        label = IDENT.get(item, "?")
        val = f"0-15 only" if max(cs) < 16 else f"values {cs}"
        print(f"  code {code:2} item {item:2} mode {mode} "
              f"{label:20} contents {val}")
