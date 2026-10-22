"""Can the editor express a block-contents value above 15?

The editor exposes `Contents` as nybble 20 alone: 16 values, all occupied by
existing items (Nothing, coin, Fire Flower, Propeller, Penguin, Mini, Star,
Yoshi egg, Ice Flower, ...).

The one way a data-only patch could reach a Hammer would be if the contents field
were wider than one nybble AND the neighbouring nybble 19 happened to be free, so
that nybble pair 19-20 could be offered instead. So this checks, for every block
sprite that has a Contents list, what else occupies nybble 19.

It also re-derives the set of power-up modes the game's grant handlers can
actually produce, from the verified item table in HAMMER_POWERUP_REPORT.md, rather
than from the disputed contents->action table.
"""
import xml.etree.ElementTree as ET

SPRITEDATA = (r"C:\Users\Saif Khan\Documents\Switch Modding Project"
              r"\Yaz0moto-v67344c6-Windows-x64\miyamotodata\games\NSMBU\spritedata.xml")
root = ET.parse(SPRITEDATA).getroot()

# Block sprites that expose a Contents list, from the previous check.
BLOCKS = [148, 154, 678, 704, 706]

print("=== what else occupies nybble 19 on each block sprite? ===")
for sp in root.findall("sprite"):
    if sp.get("id") is None or int(sp.get("id")) not in BLOCKS:
        continue
    sid = int(sp.get("id"))
    print(f"\n  sprite {sid} ({sp.get('name')})")
    for c in sp:
        n = (c.get("nybble") or "").strip()
        b = (c.get("bit") or "").strip()
        if n == "19" or n.startswith("19-") or n.endswith("-20") or n == "19-20":
            print(f"    ** nybble {n}: {c.get('title')!r}")
        elif b:
            print(f"    bit {b}: {c.get('title')!r}")
        elif n in ("20", "18", "21-22"):
            print(f"    nybble {n}: {c.get('title')!r}")

print("\n=== free nybbles (1..24) on each block sprite ===")
NYB = None
import re
pat = re.compile(r"^\s*(\d+)\s*(?:-\s*(\d+))?\s*$")


def occupied(sp):
    out = set()
    for c in sp:
        n = c.get("nybble")
        if n:
            m = pat.match(n)
            if m:
                lo = int(m.group(1))
                hi = int(m.group(2) or lo)
                out |= set(range(lo, hi + 1))
        b = c.get("bit")
        if b:
            m = pat.match(b)
            if m:
                lo = int(m.group(1))
                hi = int(m.group(2) or lo)
                for bit in range(lo, hi + 1):
                    out.add(bit // 4 + 1)
    return out


for sp in root.findall("sprite"):
    if sp.get("id") is None or int(sp.get("id")) not in BLOCKS:
        continue
    sid = int(sp.get("id"))
    used = occupied(sp)
    free = sorted(set(range(1, 25)) - used)
    print(f"  sprite {sid:4}: free {free}")

# ---- What power-up modes can the game's own grant handlers produce?
print("\n=== power-up modes reachable from the game's item classes ===")
# From HAMMER_POWERUP_REPORT 10.2, behaviourally verified: itemId -> mode
ITEM_MODE = {0: 1, 1: 2, 2: 1, 3: 3, 4: 6, 5: 4, 6: 5, 7: 1, 8: 7, 9: 1, 10: 9}
IDENT = {0: "Mushroom", 1: "Fire Flower", 2: "LightMask", 3: "Propeller",
         4: "Star", 5: "Penguin", 6: "Mini", 7: "1-UP", 8: "Ice Flower",
         9: "1-UP", 10: "Yoshi Egg"}
modes = {}
for item, mode in sorted(ITEM_MODE.items()):
    modes.setdefault(mode, []).append(IDENT[item])
for mode in sorted(modes):
    print(f"  mode {mode:2}: {', '.join(modes[mode])}")

print(f"\n  modes present: {sorted(modes)}")
print(f"  mode 10 (Hammer) reachable from any base item: "
      f"{10 in modes}")
print("\n  The report states only our patched Fire Flower grants mode 10, via the")
print("  one-byte change at 0x6045DDCC (mov r2,#2 -> mov r2,#10). No data value")
print("  selects it, so no editor list entry can select it either.")
