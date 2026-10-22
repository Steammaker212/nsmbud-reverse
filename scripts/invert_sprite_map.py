"""Invert codedx's spriteToProfileList to find which sprite IDs map to our profiles.

Our RE work is in PROFILE ids (530..547 for the Cheep family). Yaz0moto indexes
by SPRITE id. This builds the inverse map so a patch targets the right sprites.

The table has 724 entries (sprite 0..723), which matches the base game's
spritedata.xml exactly -- independent confirmation that the two are the same
numbering.
"""
import json
import re

CPP = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\codedx\src\source\profile.cpp"
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\sprite_map.json"

txt = open(CPP, encoding="utf-8").read()
start = txt.index("spriteToProfileList[]")
body = txt[start:txt.index("};", start)]

pairs = re.findall(r"(\d+),\s*//\s*(\d+)", body)
table = {}
for prof, sprite in pairs:
    table[int(sprite)] = int(prof)

print(f"parsed {len(table)} entries, sprite {min(table)}..{max(table)}")

inv = {}
for sprite, prof in sorted(table.items()):
    inv.setdefault(prof, []).append(sprite)

print("\n=== sprite ids for the profiles this project documented ===")
want = {
    530: "Pukupuku (plain Cheep Cheep)",
    531: "PukupukuGroup",
    532: "PukupukuMiddle",
    533: "PukupukuGroupMiddle",
    534: "PukupukuSearch",
    535: "PukupukuSearchMiddle",
    536: "PukupukuNige (fleeing)",
    537: "PukupukuNigeMiddle",
    538: "PukupukuMecha (Mecha Cheep)",
    539: "PukupukuToge (Spiny Cheep)",
    540: "PukupukuTobi (jumping)",
    541: "PukupukuTobiMecha",
    542: "spawn variant",
    543: "spawn variant",
    544: "spawn variant",
    545: "spawn variant",
    546: "spawn variant",
    547: "PukupukuFormation",
}
for prof in range(530, 548):
    sprites = inv.get(prof, [])
    label = want.get(prof, "")
    if sprites:
        print(f"  profile {prof}  {label:32} <- sprite(s) {sprites}")
    else:
        print(f"  profile {prof}  {label:32} <- (no sprite maps here)")

print("\n=== reverse: sprites 95..135 ===")
for s in range(95, 136):
    if s in table:
        print(f"  sprite {s:4} -> profile {table[s]}")

print("\n=== what our own profiles 467/474/476/759/887 map from ===")
for prof in (467, 474, 476, 759, 887):
    print(f"  profile {prof:4} <- sprite(s) {inv.get(prof, '(none)')}")

json.dump(inv, open(OUT, "w"), indent=1)
print(f"\nwrote {OUT}")
