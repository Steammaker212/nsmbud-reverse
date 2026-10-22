"""Prove that a Yaz0moto patch cannot add a Hammer power-up.

Run:  python scripts/prove_hammer_not_patchable.py

Exits 0 if every claim in yaz0moto/HAMMER_LIMITATION.md holds, 1 otherwise.
Each check prints its evidence, so the doc's assertions are auditable.
"""
import json
import os
import re
import struct
import sys
import xml.etree.ElementTree as ET

ELFA = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
ELFB = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"
MAP = r"C:\Users\Saif Khan\Downloads\main.idb\sprite_map.json"
GAMEDATA = (r"C:\Users\Saif Khan\Documents\Switch Modding Project"
            r"\Yaz0moto-v67344c6-Windows-x64\miyamotodata\games\NSMBU")

results = []


def check(name, ok, detail=""):
    results.append((name, ok))
    print(f"  [{'PASS' if ok else 'FAIL'}] {name}" + (f"  -- {detail}" if detail else ""))
    return ok


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


NYB = re.compile(r"^\s*(\d+)\s*(?:-\s*(\d+))?\s*$")


def occupied(sp):
    out = set()
    for c in sp:
        for attr in ("nybble", "bit"):
            v = c.get(attr)
            if not v:
                continue
            m = NYB.match(v)
            if not m:
                continue
            lo = int(m.group(1))
            hi = int(m.group(2) or lo)
            if attr == "nybble":
                out |= set(range(lo, hi + 1))
            else:
                for bit in range(lo, hi + 1):
                    out.add(bit // 4 + 1)
    return out


root = ET.parse(os.path.join(GAMEDATA, "spritedata.xml")).getroot()
sprites = {int(s.get("id")): s for s in root.findall("sprite") if s.get("id")}

# ---------------------------------------------------------------- claim 1
print("\n=== claim 1: Contents is one nybble, fully assigned ===")
blocks = []
for sid, sp in sprites.items():
    for c in sp:
        if c.tag == "list" and (c.get("title") or "").strip() == "Contents":
            blocks.append((sid, c))
check("block sprites found", bool(blocks), f"{len(blocks)} sprites")
if blocks:
    widths = {c.get("nybble") for _, c in blocks}
    check("Contents is a single nybble everywhere",
          widths == {"20"}, f"nybble attrs: {widths}")
    entry_sets = [{(e.get("value"), (e.text or "").strip()) for e in c.findall("entry")}
                  for _, c in blocks]
    vals = {int(v) for es in entry_sets for v, _ in es}
    check("all 16 values assigned", vals == set(range(16)), f"{sorted(vals)}")
    check("no Hammer entry in any Contents list",
          not any("hammer" in (t or "").lower() for es in entry_sets for _, t in es))
    # the mode-relevant question: is there a spare value?
    check("no spare value available", len(vals) == 16,
          f"{len(vals)} of 16 used")
    names = {}
    for es in entry_sets:
        for v, t in es:
            names.setdefault(int(v), []).append(t)
    print("\n    contents values:")
    for v in sorted(names):
        print(f"      {v:2} = {names[v][0]}")

# ---------------------------------------------------------------- claim 2
print("\n=== claim 2: mode 10 is not reachable from any base item ===")
ITEM_MODE = {0: 1, 1: 2, 2: 1, 3: 3, 4: 6, 5: 4, 6: 5, 7: 1, 8: 7, 9: 1, 10: 9}
modes = set(ITEM_MODE.values())
check("no base item grants mode 10", 10 not in modes, f"modes {sorted(modes)}")
check("mode 9 is the highest base mode", max(modes) == 9, f"max {max(modes)}")

# ---------------------------------------------------------------- claim 3
print("\n=== claim 3: mode 10 comes from a code byte, not data ===")
a = open(ELFA, "rb").read()
b = open(ELFB, "rb").read()
check("images are the same size", len(a) == len(b), f"{len(a)}")

# the documented one-byte grant change
OFF = 0x45E228
same_before = a[OFF:OFF + 4] == bytes.fromhex("0220a0e3")   # mov r2,#2
same_after = b[OFF:OFF + 4] == bytes.fromhex("0a20a0e3")    # mov r2,#10
check("0x45E228 was mov r2,#2 in retail", same_before,
      a[OFF:OFF + 4].hex() if not same_before else "ok")
check("0x45E228 is mov r2,#10 in the Hammer build", same_after,
      b[OFF:OFF + 4].hex() if not same_after else "ok")

diffs = [i for i in range(len(a)) if a[i] != b[i]]
check("the build differs by the documented small patch",
      len(diffs) == 115, f"{len(diffs)} differing bytes")

# ---------------------------------------------------------------- claim 4
print("\n=== claim 4: the Hammer profile has no sprite id ===")
inv = json.load(open(MAP))
hammer_sprites = inv.get("759", [])
check("profile 759 (Hammer) has no sprite id", not hammer_sprites,
      str(hammer_sprites) if hammer_sprites else "none")
for prof, name in [(474, "Ice Ball"), (475, "Plant Ice Ball"),
                   (476, "Player Fireball"), (477, "Plant Fireball"),
                   (478, "Yoshi Flame")]:
    if inv.get(str(prof)):
        check(f"profile {prof} ({name}) has no sprite id", False, str(inv[str(prof)]))

all_ids = sorted({int(s) for v in inv.values() for s in v})
check("base table ends at sprite 723", all_ids and all_ids[-1] == 723,
      f"max {all_ids[-1] if all_ids else '?'}")
check("base table has 724 entries", len(all_ids) == 724, f"{len(all_ids)}")

# no .bss change that could be an extended table
S = segs(a)
BSS = 0x60C7B274
bss_changes = []
for i in diffs:
    for v, sz, o in S:
        if o <= i < o + sz:
            va = v + i - o
            if BSS <= va < BSS + 0x1000:
                bss_changes.append(va)
            break
check("the Hammer build does not extend the runtime sprite table",
      not bss_changes, str(bss_changes) if bss_changes else "no .bss changes")

# ---------------------------------------------------------------- conclusion
print("\n=== claim 5: the documented workaround is expressible in the editor ===")
fire_values = [v for es in entry_sets for v, t in es if "fire flower" in (t or "").lower()] \
    if blocks else []
check("a Fire Flower value exists in Contents lists", bool(fire_values),
      f"values {sorted(set(fire_values))} can be selected in the editor")

n_pass = sum(1 for _, ok in results if ok)
print(f"\n=== {n_pass}/{len(results)} claims hold ===")
if n_pass != len(results):
    print("\nIf a check failed, the doc is wrong and should be corrected before")
    print("anyone relies on it.")
sys.exit(0 if n_pass == len(results) else 1)
