"""Work out which settings nybbles each Cheep-family sprite already uses.

A Yaz0moto patch that writes a field to an occupied nybble silently overrides the
base game's definition. Before adding anything I need the occupied set per sprite,
counting both `nybble="N-M"` and `bit="A-B"` styles.

Nybble n covers bits 4(n-1) .. 4n-1 of the 96-bit settings block.
"""
import json
import re
import xml.etree.ElementTree as ET

BASE = (r"C:\Users\Saif Khan\Documents\Switch Modding Project"
        r"\Yaz0moto-v67344c6-Windows-x64\miyamotodata\games\NSMBU\spritedata.xml")
MAP = r"C:\Users\Saif Khan\Downloads\main.idb\sprite_map.json"

inv = json.load(open(MAP))

CHEEP = {}
for prof in range(530, 548):
    for s in inv.get(str(prof), []):
        CHEEP[s] = prof

tree = ET.parse(BASE)
root = tree.getroot()
by_id = {int(sp.get("id")): sp for sp in root.findall("sprite")
         if sp.get("id") is not None}

NYB = re.compile(r"^\s*(\d+)\s*(?:-\s*(\d+))?\s*$")
BIT = re.compile(r"^\s*(\d+)\s*(?:-\s*(\d+))?\s*$")


def nybbles_of(elem):
    """Nybble indices (1-based) an element occupies."""
    out = set()
    n = elem.get("nybble")
    if n:
        m = NYB.match(n)
        if m:
            lo, hi = int(m.group(1)), int(m.group(2) or m.group(1))
            out |= set(range(lo, hi + 1))
    b = elem.get("bit")
    if b:
        m = BIT.match(b)
        if m:
            lo, hi = int(m.group(1)), int(m.group(2) or m.group(1))
            for bit in range(lo, hi + 1):
                out.add(bit // 4 + 1)
    return out


print(f"{'spr':>4} {'prof':>5}  {'name':40} used nybbles        free")
print("-" * 105)
report = {}
for s in sorted(CHEEP):
    sp = by_id.get(s)
    if sp is None:
        continue
    used = set()
    for child in sp:
        used |= nybbles_of(child)
    free = [n for n in range(1, 25) if n not in used]
    name = (sp.get("name") or "")[:40]
    report[s] = {"profile": CHEEP[s], "used": sorted(used), "free": free}
    print(f"{s:4} {CHEEP[s]:5}  {name:40} {str(sorted(used)):19} {free}")

print("\n=== is nybble 19-20 (movement type) free everywhere we care? ===")
for s in sorted(report):
    r = report[s]
    ok = 19 in r["free"] and 20 in r["free"]
    print(f"  sprite {s:4} profile {r['profile']:3}  "
          f"{'FREE' if ok else 'OCCUPIED (' + str([n for n in (19,20) if n in r['used']]) + ')'}")

json.dump(report, open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\cheep_nybbles.json", "w"),
          indent=1)
print("\nwrote cheep_nybbles.json")
