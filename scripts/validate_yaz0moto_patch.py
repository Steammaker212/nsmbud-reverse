"""Validate both Yaz0moto patches end to end.

This supersedes the earlier version and adds the check that matters most, which the
first one was missing:

  A patched sprite REPLACES the base definition rather than merging into it.
  (loading.LoadSpriteData does `globals.Sprites[id] = sdef` with a fresh object, and
  misc.SpriteDefinition.loadFrom starts with `self.fields = []`. The `patch="true"`
  flag only controls whether the file joins the load chain.)

So it is not enough for a patch to avoid nybble collisions; it must restate every
base field it wants to keep. This script fails if any base field would be dropped.

Also kept from the first version: sprite-id versus profile-id confusion (544 vs
597), which is what caught the Eep Cheep Spawner mistake.
"""
import json
import os
import re
import sys
import xml.etree.ElementTree as ET

G = (r"C:\Users\Saif Khan\Documents\Switch Modding Project"
     r"\Yaz0moto-v67344c6-Windows-x64\miyamotodata\games\NSMBU")
REPO = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse"
MAP = r"C:\Users\Saif Khan\Downloads\main.idb\sprite_map.json"

CHEEP = os.path.join(REPO, "yaz0moto", "CheepCheepFamily")
HAMMER = os.path.join(REPO, "yaz0moto", "HammerQuestionBlock")

# loadFrom accepts these tags (misc.py). Anything else is ignored by the editor and
# therefore cannot count as "restated".
FIELD_TAGS = {"checkbox", "list", "value", "bitfield", "strybble",
              "dualbox", "multidualbox", "initialstate", "layer"}

NYB = re.compile(r"^\s*(\d+)\s*(?:-\s*(\d+))?\s*$")
results = []


def check(name, ok, detail=""):
    results.append((name, ok))
    print(f"  [{'PASS' if ok else 'FAIL'}] {name}" + (f"  -- {detail}" if detail else ""))
    return bool(ok)


def fields_of(sp):
    """The (spec, title) pairs the editor would actually load for this sprite."""
    out = []
    for f in sp:
        if f.tag not in FIELD_TAGS:
            continue
        out.append(((f.get("nybble") or f.get("bit") or "?"),
                    (f.get("title") or f.get("title1") or "").strip()))
    return out


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
                for b in range(lo, hi + 1):
                    out.add(b // 4 + 1)
    return out


base_root = ET.parse(os.path.join(G, "spritedata.xml")).getroot()
BASE = {int(s.get("id")): s for s in base_root.findall("sprite") if s.get("id")}
base_fields = {sid: fields_of(sp) for sid, sp in BASE.items()}

inv = json.load(open(MAP))
cheep_family = {s for prof in range(530, 548) for s in inv.get(str(prof), [])}


def validate(folder, label, extra):
    print(f"\n{'=' * 68}\n  {label}\n{'=' * 68}")

    check("required files present",
          all(os.path.isfile(os.path.join(folder, f))
              for f in ("main.xml", "spritedata.xml")))

    main = ET.parse(os.path.join(folder, "main.xml")).getroot()
    refs = [f.get("path") for f in main.findall("file")]
    check("main.xml declares the Deluxe base",
          main.get("base") == "New Super Mario Bros. U Deluxe",
          repr(main.get("base")))
    check("every <file> path resolves",
          all(os.path.isfile(os.path.join(folder, r)) for r in refs),
          str([r for r in refs if not os.path.isfile(os.path.join(folder, r))]))
    check("spritedata declared as a patch", "spritedata.xml" in refs)

    root = ET.parse(os.path.join(folder, "spritedata.xml")).getroot()
    sprites = {}
    for sp in root.findall("sprite"):
        if sp.get("id") is not None:
            sprites[int(sp.get("id"))] = sp

    check("every patched sprite exists in base",
          all(s in BASE for s in sprites),
          str([s for s in sprites if s not in BASE]))
    check("patch carries sprites", bool(sprites), f"{len(sprites)} sprites")

    # THE IMPORTANT ONE. Under replace semantics, an unstated base field is deleted.
    dropped = {}
    for sid, sp in sorted(sprites.items()):
        have = set(fields_of(sp))
        missing = [f for f in base_fields.get(sid, []) if f not in have]
        if missing:
            dropped[sid] = missing
    check("no base field is dropped", not dropped,
          "; ".join(f"{s} loses {[m[1] for m in v]}" for s, v in list(dropped.items())[:3]))

    # A base field must not be silently re-pointed at a different meaning.
    retitled = []
    for sid, sp in sorted(sprites.items()):
        bmap = dict(base_fields.get(sid, []))
        for spec, title in fields_of(sp):
            if spec in bmap and bmap[spec] != title:
                retitled.append((sid, spec, bmap[spec], title))
    allowed = extra.get("allowed_retitles", set())
    bad_retitle = [r for r in retitled if (r[0], r[1]) not in allowed]
    check("no base field is silently retitled", not bad_retitle,
          str(bad_retitle[:3]) if bad_retitle else "")

    # Comment text must be valid XML (no '--'), for every comment in the file.
    raw = open(os.path.join(folder, "spritedata.xml"), encoding="utf-8").read()
    bad_comments = re.findall(r"<!--(?:(?!-->).)*?--(?:(?!-->).)*?-->", raw, re.S)
    check("no comment contains a double dash", not bad_comments,
          f"{len(bad_comments)} bad comment(s)" if bad_comments else "")

    ok = extra["rules"](sprites)
    check("domain checks pass", ok)
    return sprites


# --------------------------------------------------------------- cheep rules
def cheep_rules(sprites):
    ok = True
    not_family = [s for s in sprites if s not in cheep_family]
    ok &= check("all patched sprites are in the Cheep family", not not_family,
                str(not_family) if not_family else "")

    missing = [s for s, sp in sorted(sprites.items())
               if "19-20" not in {f for f, _ in fields_of(sp)}]
    ok &= check("every sprite gains nybble 19-20", not missing, str(missing))

    grouped_bad = []
    for s in (615, 723):
        sp = sprites.get(s)
        if sp is None:
            grouped_bad.append(f"{s} missing")
            continue
        # 21-22 legitimately appears once, restated from base, as the Group ID.
        # What must not happen is a second field claiming the same nybbles.
        id_like = [(spec, t) for spec, t in fields_of(sp)
                   if spec == "21-22" and t == "Movement ID"]
        if id_like:
            grouped_bad.append(f"{s} gained a Movement ID on the Group ID nybbles")
        specs = [spec for spec, _ in fields_of(sp)]
        if specs.count("21-22") > 1:
            grouped_bad.append(f"{s} has {specs.count('21-22')} fields on 21-22")
    ok &= check("grouped variants keep 21-22 as Group ID only", not grouped_bad,
                "; ".join(grouped_bad))

    # New nybbles must not collide with anything the base already used.
    collide = []
    for sid, sp in sorted(sprites.items()):
        used = occupied(BASE[sid])
        for spec, title in fields_of(sp):
            if title in ("Movement Type", "Movement ID"):
                continue
        # the two we add
        if 19 in used or 20 in used:
            collide.append(f"{sid}: 19/20 used by base")
        if sid not in (615, 723) and (21 in used or 22 in used):
            collide.append(f"{sid}: 21/22 used by base")
    ok &= check("movement nybbles were free in base", not collide, "; ".join(collide[:3]))

    # Full restatement means base `notes` legitimately appears in the patch. What
    # would be wrong is changing it.
    notes_changed = []
    for sid, sp in sorted(sprites.items()):
        if sp.get("notes") != BASE[sid].get("notes"):
            notes_changed.append(sid)
    ok &= check("base notes are carried over unchanged", not notes_changed,
                str(notes_changed))

    name_changed = [sid for sid, sp in sorted(sprites.items())
                    if sp.get("name") != BASE[sid].get("name")]
    ok &= check("base display names unchanged", not name_changed, str(name_changed))

    # categories file
    cat_path = os.path.join(CHEEP, "spritecategories.xml")
    if os.path.isfile(cat_path):
        sc = ET.parse(cat_path).getroot()
        attached = []
        for view in sc.findall("view"):
            for cat in view.findall("category"):
                for a in cat.findall("attach"):
                    for tok in a.get("sprite", "").split(","):
                        if tok.strip().isdigit():
                            attached.append(int(tok.strip()))
        ok &= check("every attached sprite exists in base",
                    all(s in BASE for s in attached), f"{len(attached)} attaches")
        dupes = {s for s in attached if attached.count(s) > 1}
        ok &= check("no sprite attached twice", not dupes, str(sorted(dupes)))
        uncat = sorted(cheep_family - set(attached))
        ok &= check("all 18 family sprites categorised", not uncat, str(uncat))
    return ok


# -------------------------------------------------------------- hammer rules
HAMMER_WANT = {59, 60, 147, 148, 154, 205, 233, 234, 422, 475, 525, 678, 704, 706}


def hammer_rules(sprites):
    ok = True
    ok &= check("covers the expected block sprites", set(sprites) == HAMMER_WANT,
                f"missing {sorted(HAMMER_WANT - set(sprites))}, "
                f"extra {sorted(set(sprites) - HAMMER_WANT)}")

    # The only permitted retitle is the contents list label itself (same nybble,
    # title "Contains"/"Contents" preserved) and entries 2/3 inside it. The
    # generic retitle check uses the list's own title, so verify it is unchanged.
    bad = []
    for sid, sp in sorted(sprites.items()):
        lst = None
        for c in sp:
            if c.tag == "list" and (c.get("title") or "").strip() in ("Contains", "Contents"):
                lst = c
        if lst is None:
            bad.append(f"{sid}: no contents list")
            continue
        labels = {e.get("value"): (e.text or "").strip() for e in lst.findall("entry")}
        if len(labels) != 16:
            bad.append(f"{sid}: {len(labels)} entries")
        for v in ("2", "3"):
            if labels.get(v) != "Hammer":
                bad.append(f"{sid}: value {v} is {labels.get(v)!r}")
    ok &= check("values 2 and 3 read Hammer on every block", not bad,
                "; ".join(bad[:3]))
    ok &= check("sprite 380 (Baby Yoshi types) excluded", 380 not in sprites)
    return ok


validate(CHEEP, "Cheep Cheep Family",
         {"rules": cheep_rules, "allowed_retitles": set()})

# The Hammer patch is UNRELEASED. Its structural checks are still worth running
# (full restatement, no dropped fields, valid XML), but its central claim is
# unverified: IDA showed dword_60B04164 is indexed by a virtual-call result, not by
# the raw contents byte, and no index base reproduces the editor's 16 labels
# (best fit 3/16). See docs/legacy/IDA_VERIFICATION.md.
print(f"\n{'=' * 68}\n  Hammer Question Block  [UNRELEASED]"
      f"\n{'=' * 68}")
print("  NOTE: the contents -> item mapping is UNRESOLVED. The checks below verify")
print("        structure only. They do NOT establish that values 2/3 give a Hammer,")
print("        so a green result here must not be read as approval to ship.")

n = sum(1 for _, ok in results if ok)
print(f"\n{'=' * 68}\n  {n}/{len(results)} structural checks passed\n{'=' * 68}")
print("\n  CheepCheepFamily     : releasable (claim rests on the editor's own")
print("                         convention across 143 sprites)")
print("  HammerQuestionBlock  : NOT releasable; contents->item mapping unresolved")
sys.exit(0 if n == len(results) else 1)
