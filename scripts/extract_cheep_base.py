"""Extract the base-game spritedata entries for every Cheep-family sprite.

We are writing a Yaz0moto patch that documents the Cheep Cheep family. Before
adding fields we need to know exactly what the base game already says, so the
patch adds rather than contradicts, and so we never claim to have discovered a
field the base editor already labelled.

Also reports which sprites the base game marks UNUSED, because our mapping shows
some of them are not unused at all -- they are just unlabelled.
"""
import json
import re
import xml.etree.ElementTree as ET

BASE = (r"C:\Users\Saif Khan\Documents\Switch Modding Project"
        r"\Yaz0moto-v67344c6-Windows-x64\miyamotodata\games\NSMBU\spritedata.xml")
MAP = r"C:\Users\Saif Khan\Downloads\main.idb\sprite_map.json"

inv = json.load(open(MAP))

# profile -> (name we use, sprite ids)
FAMILY = {
    530: "Pukupuku",            # plain
    531: "PukupukuGroup",
    532: "PukupukuMiddle",
    533: "PukupukuGroupMiddle",
    534: "PukupukuSearch",
    535: "PukupukuSearchMiddle",
    536: "PukupukuNige",
    537: "PukupukuNigeMiddle",
    538: "PukupukuMecha",
    539: "PukupukuToge",
    540: "PukupukuTobi",
    541: "PukupukuTobiMecha",
    542: "PukupukuSpawn", # 542..546 spawn variants
    543: "PukupukuSpawn",
    544: "PukupukuSpawn",
    545: "PukupukuSpawn",
    546: "PukupukuSpawn",
    547: "PukupukuFormation",
}

tree = ET.parse(BASE)
root = tree.getroot()
by_id = {}
for sp in root.findall("sprite"):
    if sp.get("id") is not None:
        by_id[int(sp.get("id"))] = sp

print(f"base spritedata: {len(by_id)} sprites, ids {min(by_id)}..{max(by_id)}\n")

rows = []
for prof in sorted(FAMILY):
    sprites = inv.get(str(prof), [])
    for s in sprites:
        sp = by_id.get(s)
        if sp is None:
            continue
        name = sp.get("name") or ""
        notes = (sp.get("notes") or "").replace("\r", " ").replace("\n", " ")
        children = list(sp)
        kinds = {}
        for c in children:
            kinds[c.tag] = kinds.get(c.tag, 0) + 1
        unused = "UNUSED" in name.upper() or "CRASH" in name.upper()
        rows.append((prof, s, name, unused, kinds, notes[:70]))

print(f"{'prof':>5} {'spr':>4}  {'name':52} unused fields")
print("-" * 110)
for prof, s, name, unused, kinds, notes in rows:
    k = " ".join(f"{a}={b}" for a, b in sorted(kinds.items()))
    print(f"{prof:5} {s:4}  {name[:52]:52} {'YES' if unused else '   '}   {k}")

print(f"\n{len(rows)} sprites belong to the Cheep family")
print(f"{sum(1 for r in rows if r[3])} of them are marked UNUSED/CRASH by the base game")

print("\n=== full notes for the UNUSED ones (our chance to correct the record) ===")
for prof, s, name, unused, kinds, notes in rows:
    if unused:
        print(f"\n  sprite {s} (profile {prof}) {name}")
        print(f"    {notes}")
