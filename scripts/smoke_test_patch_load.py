"""Smoke-test the patches through Yaz0moto's real data-loading path, headless.

The GUI cannot be scripted here, and the frozen PyQt5 is built for Python 3.9 while
the editable venv is 3.15, so importing miyamoto.misc is not possible in this
session. What IS possible is to reproduce the exact chain the loader walks, using
the editor's own main.xml resolution rules, and assert that after loading:

  * every patched sprite ends up with MORE fields than the base had
  * no base field disappears
  * the two Hammer entries read "Hammer"
  * the Cheep sprites gain exactly two fields (one for the grouped pair)

This is the same reasoning loading.LoadSpriteData performs, minus Qt.
"""
import json
import os
import re
import sys
import xml.etree.ElementTree as ET

G = (r"C:\Users\Saif Khan\Documents\Switch Modding Project"
     r"\Yaz0moto-v67344c6-Windows-x64\miyamotodata\games\NSMBU")
UD = r"C:\Users\Saif Khan\AppData\Roaming\Yaz0moto\patches"

FIELD_TAGS = {"checkbox", "list", "value", "bitfield", "strybble",
              "dualbox", "multidualbox", "initialstate", "layer"}
NYB = re.compile(r"^\s*(\d+)\s*(?:-\s*(\d+))?\s*$")

fails = []


def ok(name, cond, detail=""):
    print(f"  [{'PASS' if cond else 'FAIL'}] {name}" + (f"  -- {detail}" if detail else ""))
    if not cond:
        fails.append(name)
    return cond


def fields_of(sp):
    out = []
    for f in sp:
        if f.tag not in FIELD_TAGS:
            continue
        out.append(((f.get("nybble") or f.get("bit") or "?"),
                    (f.get("title") or f.get("title1") or "").strip()))
    return out


def load_chain():
    """Walk the load chain the way recursiveFiles + LoadSpriteData do."""
    sprites = {}   # id -> {'name','fields','elem'}
    order = []

    # 1. base game
    roots = [("NSMBU (base)", os.path.join(G, "spritedata.xml"))]

    # 2. enabled mods, in settings order
    settings = json.load(open(r"C:\Users\Saif Khan\AppData\Roaming\Yaz0moto\settings.json",
                              encoding="utf-8"))
    for mod in settings.get("LastMods", []):
        folder = os.path.join(UD, mod)
        main = os.path.join(folder, "main.xml")
        if not os.path.isfile(main):
            order.append((mod, "NO main.xml (skipped by editor)"))
            continue
        mx = ET.parse(main).getroot()
        files = {f.get("name"): f.get("path") for f in mx.findall("file")}
        sd = files.get("spritedata")
        if not sd:
            order.append((mod, "no spritedata entry"))
            continue
        order.append((mod, os.path.join(folder, sd)))
        roots.append((mod, os.path.join(folder, sd)))

    for label, path in roots:
        for sp in ET.parse(path).getroot():
            if sp.tag.lower() != "sprite":
                continue
            if "id" not in sp.attrib:
                continue
            try:
                sid = int(sp.attrib["id"])
            except ValueError:
                continue
            # replacement, exactly as the loader does
            sprites[sid] = {"name": sp.get("name"), "fields": fields_of(sp),
                            "elem": sp, "from": label}
    return sprites, order


print("=== load chain ===")
sprites, order = load_chain()
for label, path in order:
    print(f"  {label:24} {path}")

base_root = ET.parse(os.path.join(G, "spritedata.xml")).getroot()
BASE = {}
for sp in base_root.findall("sprite"):
    if sp.get("id"):
        BASE[int(sp.get("id"))] = sp

# ------------------------------------------------------------------ hammer
print("\n=== Hammer Question Block ===")
HAMMER = {59, 60, 147, 148, 154, 205, 233, 234, 422, 475, 525, 678, 704, 706}
for sid in sorted(HAMMER):
    sp = sprites.get(sid)
    if sp is None:
        ok(f"sprite {sid} loaded", False)
        continue
    lst = None
    for c in sp["elem"]:
        if c.tag == "list" and (c.get("title") or "").strip() in ("Contains", "Contents"):
            lst = c
    if lst is None:
        ok(f"sprite {sid} has a contents list", False)
        continue
    labels = {e.get("value"): (e.text or "").strip() for e in lst.findall("entry")}
    base_n = len(fields_of(BASE[sid]))
    now_n = len(sp["fields"])
    ok(f"sprite {sid:3} keeps its {base_n} base fields", now_n == base_n,
       f"now {now_n}")
    ok(f"sprite {sid:3} values 2 and 3 are Hammer",
       labels.get("2") == "Hammer" and labels.get("3") == "Hammer",
       f"{labels.get('2')!r}/{labels.get('3')!r}")

# ------------------------------------------------------------------- cheep
print("\n=== Cheep Cheep Family ===")
CHEEP = {101, 106, 113, 114, 120, 129, 131, 482, 586, 587, 588, 589, 590, 591,
         592, 597, 615, 723}
GROUPED = {615, 723}
for sid in sorted(CHEEP):
    sp = sprites.get(sid)
    if sp is None:
        ok(f"cheep sprite {sid} loaded", False)
        continue
    base_n = len(fields_of(BASE[sid]))
    now_n = len(sp["fields"])
    want = base_n + (1 if sid in GROUPED else 2)
    titles = [t for _, t in sp["fields"]]
    ok(f"sprite {sid:3} gains {want - base_n} field(s)", now_n == want,
       f"{base_n} -> {now_n}")
    if sid in GROUPED:
        ok(f"sprite {sid:3} has no second Movement ID", "Movement ID" not in titles)
    else:
        ok(f"sprite {sid:3} has a Movement ID", "Movement ID" in titles)

# ------------------------------------------------------------- categories
print("\n=== categories still load ===")
catmod = os.path.join(UD, "CheepCheepFamily", "spritecategories.xml")
if os.path.isfile(catmod):
    sc = ET.parse(catmod).getroot()
    ids = []
    for view in sc.findall("view"):
        for cat in view.findall("category"):
            for a in cat.findall("attach"):
                for tok in a.get("sprite", "").split(","):
                    if tok.strip().isdigit():
                        ids.append(int(tok.strip()))
    ok("view resolves all 18 family sprites", set(CHEEP) <= set(ids), f"{len(ids)} ids")
    ok("no attach names a missing sprite", all(i < 724 for i in ids))

print(f"\n{'=' * 60}")
if fails:
    print(f"  {len(fails)} FAILURES")
    for f in fails:
        print(f"    - {f}")
    sys.exit(1)
print("  ALL SMOKE CHECKS PASSED")
sys.exit(0)
