"""Validate the Cheep Cheep Yaz0moto patch against the recovered ground truth.

Checks, in order of importance:

 1. Every <sprite id> in the patch exists in the base game. A patch that names a
    sprite the base does not have is silently ignored by the editor, which looks
    like the patch "did nothing".
 2. Every sprite id in the patch maps to a profile in the 530..547 Cheep family,
    per the recovered spriteToProfileList. Catches typos like writing 544 when the
    Eep Cheep Spawner is sprite 597.
 3. No field writes to a nybble the base game already occupies. That would
    silently override the base definition.
 4. Every sprite in the family appears exactly once across the category view.
 5. Every <attach sprite> also exists in the base game.
 6. XML is well-formed and every referenced file exists.
 7. Nybble numbers are in range 1..24 and ranges are ascending.
"""
import json
import os
import re
import sys
import xml.etree.ElementTree as ET

PATCH = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\yaz0moto\CheepCheepFamily"
BASE = (r"C:\Users\Saif Khan\Documents\Switch Modding Project"
        r"\Yaz0moto-v67344c6-Windows-x64\miyamotodata\games\NSMBU")
MAP = r"C:\Users\Saif Khan\Downloads\main.idb\sprite_map.json"

results = []


def check(name, ok, detail=""):
    results.append((name, ok, detail))
    print(f"  [{'PASS' if ok else 'FAIL'}] {name}" + (f"  -- {detail}" if detail else ""))
    return ok


# ---------------------------------------------------------------- load truth
inv = json.load(open(MAP))
cheep = {}
for prof in range(530, 548):
    for s in inv.get(str(prof), []):
        cheep[s] = prof

base_root = ET.parse(os.path.join(BASE, "spritedata.xml")).getroot()
base_sprites = {int(sp.get("id")): sp for sp in base_root.findall("sprite")
                if sp.get("id") is not None}

NYB = re.compile(r"^\s*(\d+)\s*(?:-\s*(\d+))?\s*$")


def occupied(sp):
    """Nybble indices (1-based) that the base definition already uses."""
    out = set()
    for c in sp:
        n = c.get("nybble")
        if n:
            m = NYB.match(n)
            if m:
                lo = int(m.group(1))
                hi = int(m.group(2) or lo)
                out |= set(range(lo, hi + 1))
        b = c.get("bit")
        if b:
            m = re.match(r"^\s*(\d+)\s*(?:-\s*(\d+))?\s*$", b)
            if m:
                lo = int(m.group(1))
                hi = int(m.group(2) or lo)
                for bit in range(lo, hi + 1):
                    out.add(bit // 4 + 1)
    return out


print("=== files ===")
need = ["main.xml", "spritedata.xml", "spritecategories.xml"]
missing = [f for f in need if not os.path.isfile(os.path.join(PATCH, f))]
check("all patch files present", not missing, str(missing) if missing else "")

# main.xml must reference only files that exist
main = ET.parse(os.path.join(PATCH, "main.xml")).getroot()
refs = [f.get("path") for f in main.findall("file")]
bad_refs = [r for r in refs if not os.path.isfile(os.path.join(PATCH, r))]
check("main.xml file refs resolve", not bad_refs, str(bad_refs) if bad_refs else "")
check("main.xml declares base game",
      main.get("base") == "New Super Mario Bros. U Deluxe",
      repr(main.get("base")))

# ---------------------------------------------------------------- spritedata
print("\n=== spritedata.xml ===")
sd = ET.parse(os.path.join(PATCH, "spritedata.xml")).getroot()
patched = {}
for sp in sd.findall("sprite"):
    sid = sp.get("id")
    if sid is None:
        check(f"sprite without numeric id", False, sp.get("name", "?"))
        continue
    sid = int(sid)
    if sid in patched:
        check("no duplicate sprite entries", False, f"sprite {sid} twice")
    patched[sid] = sp

unknown = [s for s in patched if s not in base_sprites]
check("every patched sprite exists in base", not unknown,
      f"not in base: {unknown}" if unknown else f"{len(patched)} sprites")

not_family = {s: cheep.get(s) for s in patched if s not in cheep}
check("every patched sprite is in the Cheep family", not not_family,
      str(not_family) if not_family else "")

# nybble collisions against the base definition
collisions = []
for sid, sp in sorted(patched.items()):
    base = base_sprites.get(sid)
    if base is None:
        continue
    used = occupied(base)
    for c in sp:
        n = c.get("nybble")
        if not n:
            continue
        m = NYB.match(n)
        if not m:
            collisions.append(f"sprite {sid}: unparseable nybble {n!r}")
            continue
        lo = int(m.group(1))
        hi = int(m.group(2) or lo)
        if lo < 1 or hi > 24 or hi < lo:
            collisions.append(f"sprite {sid}: bad range {n}")
            continue
        clash = sorted(set(range(lo, hi + 1)) & used)
        if clash:
            collisions.append(f"sprite {sid}: nyb {n} collides with base {clash}")
check("no field overrides a nybble the base uses", not collisions,
      "; ".join(collisions[:4]) if collisions else "")

# the two grouped variants must not claim 21-22 (that is their Group ID)
grouped = [615, 723]
bad_group = []
for sid in grouped:
    sp = patched.get(sid)
    if sp is None:
        bad_group.append(f"{sid} missing")
        continue
    for c in sp:
        n = c.get("nybble") or ""
        m = NYB.match(n)
        if m and int(m.group(1)) >= 21:
            bad_group.append(f"{sid} writes nybble {n} (Group ID lives there)")
check("grouped variants leave 21-22 alone", not bad_group,
      "; ".join(bad_group) if bad_group else "")

# notes must not be touched anywhere (would risk replacing base text)
notes_attrs = [sp.get("id") for sp in sd.findall("sprite") if sp.get("notes")]
check("no sprite overrides base `notes`", not notes_attrs, str(notes_attrs) if notes_attrs else "")

# --------------------------------------------------------- spritecategories
print("\n=== spritecategories.xml ===")
sc = ET.parse(os.path.join(PATCH, "spritecategories.xml")).getroot()
attached = []
for view in sc.findall("view"):
    for cat in view.findall("category"):
        for a in cat.findall("attach"):
            for tok in a.get("sprite", "").split(","):
                tok = tok.strip()
                if tok.isdigit():
                    attached.append(int(tok))

bad_attach = [s for s in attached if s not in base_sprites]
check("every attached sprite exists in base", not bad_attach,
      f"missing: {bad_attach}" if bad_attach else f"{len(attached)} attaches")

dupes = {s for s in attached if attached.count(s) > 1}
check("no sprite attached twice", not dupes, str(sorted(dupes)) if dupes else "")

family_all = set(cheep)
covered = set(attached) & family_all
uncat = sorted(family_all - covered)
check("all 18 family sprites are categorised", not uncat,
      f"missing {uncat}" if uncat else f"{len(covered)}/18")

# the attach list should match the spritedata list for family sprites
sd_family = set(patched) & family_all
unlisted = sorted(sd_family - set(attached))
check("every sprite we patch appears in the view", not unlisted,
      str(unlisted) if unlisted else "")

# ------------------------------------------------------------ report profiles
print("\n=== sprite -> profile (ground truth used) ===")
for s in sorted(cheep):
    mark = "*" if s in patched else " "
    print(f"  {mark} sprite {s:4} -> profile {cheep[s]}")

n_pass = sum(1 for _, ok, _ in results if ok)
print(f"\n=== {n_pass}/{len(results)} checks passed ===")
sys.exit(0 if n_pass == len(results) else 1)
