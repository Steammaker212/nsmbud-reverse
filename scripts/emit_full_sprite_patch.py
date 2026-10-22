"""Emit Yaz0moto patches that restate full sprite definitions.

WHY THIS EXISTS
===============
Yaz0moto's `patch="true"` is widely described (including in its own ExamplePatch
docs) as an additive merge where "the existing fields from the base game are kept
and these new ones are appended". The loader does not do that.

gamedefs.recursiveFiles() only decides whether the file is *appended to the load
chain* or replaces it. Then loading.LoadSpriteData() does, per sprite:

    sdef = SpriteDefinition()
    sdef.loadFrom(sprite)      # misc.py: self.fields = [] then rebuild
    globals.Sprites[spriteid] = sdef   # replaces the earlier object outright

So the last file to define a sprite wins ENTIRELY. Any base field a patch does not
restate is dropped. A patch that adds one checkbox to the Question Block deletes
the other twelve fields.

The fix is to emit the complete definition: deep-copy the base <sprite> element,
then modify it. This script does that, so the patch is additive in effect even
though the loader replaces.

Usage:
    python emit_full_sprite_patch.py <mode>
      mode = cheep   -> yaz0moto/CheepCheepFamily/spritedata.xml
      mode = hammer  -> yaz0moto/HammerQuestionBlock/spritedata.xml
"""
import copy
import json
import os
import sys
import xml.etree.ElementTree as ET

G = (r"C:\Users\Saif Khan\Documents\Switch Modding Project"
     r"\Yaz0moto-v67344c6-Windows-x64\miyamotodata\games\NSMBU")
BASE_XML = os.path.join(G, "spritedata.xml")
REPO = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse"

# Cheep family: sprite id -> profile id, from the inverted spriteToProfileList.
CHEEP = {101: 530, 106: 542, 113: 532, 114: 547, 120: 539, 129: 540,
         131: 545, 482: 538, 586: 546, 587: 541, 588: 534, 589: 535,
         590: 536, 591: 537, 592: 543, 597: 544, 615: 531, 723: 533}

# These already use nybble 21-22 for a Group ID, so they get only 19-20.
GROUPED = {615, 723}

# Block sprites whose Contains/Contents list should say Hammer at values 2 and 3.
HAMMER_BLOCKS = [59, 60, 147, 148, 154, 205, 233, 234, 422, 475, 525, 678,
                 704, 706]

NYB = r"^\s*(\d+)\s*(?:-\s*(\d+))?\s*$"


def safe(text):
    """XML comments must not contain '--'."""
    return (text or "").replace("--", ":")


def occupied_nybbles(sprite):
    """1-based nybble indices the sprite already defines."""
    import re
    pat = re.compile(NYB)
    out = set()
    for c in sprite:
        for attr in ("nybble", "bit"):
            v = c.get(attr)
            if not v:
                continue
            m = pat.match(v)
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


def indent(elem, level=0):
    pad = "\n" + "    " * level
    if len(elem):
        if not elem.text or not elem.text.strip():
            elem.text = pad + "    "
        for child in elem:
            indent(child, level + 1)
        if not child.tail or not child.tail.strip():
            child.tail = pad
    if level and (not elem.tail or not elem.tail.strip()):
        elem.tail = pad


def write_patch(path, root_comment, sprites):
    """Serialise a <sprites> document with a leading comment."""
    os.makedirs(os.path.dirname(path), exist_ok=True)
    body = []
    for sp in sprites:
        indent(sp, 1)
        body.append(ET.tostring(sp, encoding="unicode"))
    assert "--" not in root_comment, "comment would be invalid XML"
    text = '<?xml version="1.0"?>\n<!--\n' + root_comment + '\n-->\n<sprites>\n'
    text += "".join(body)
    text += "\n</sprites>\n"
    open(path, "w", encoding="utf-8", newline="\n").write(text)
    # Fail loudly here rather than silently in the editor.
    ET.parse(path)
    return path


# --------------------------------------------------------------------- cheep
def build_cheep():
    base = ET.parse(BASE_XML).getroot()
    byid = {int(s.get("id")): s for s in base.findall("sprite") if s.get("id")}

    comment = safe(
        "Cheep Cheep Family: movement binding for all 18 Pukupuku sprites.\n\n"
        "Each sprite below is emitted IN FULL, restating every base field, because\n"
        "Yaz0moto's loader replaces a patched sprite's definition outright rather\n"
        "than merging into it (see scripts/emit_full_sprite_patch.py). Emitting only\n"
        "the new fields would delete everything else on that sprite.\n\n"
        "The two added fields are nybbles 19-20 (movement type) and 21-22 (movement\n"
        "id). The retail code binds them in the Cheep Cheep onCreate:\n\n"
        "    movementHandler.link(position,\n"
        "        getMaskForMovementType(settings2 & 0xFF), movementId);\n\n"
        "settings2 spans nybbles 13-20 with nybble 20 holding bits 0-3, so its low\n"
        "byte is nybbles 19-20; movementId is Actor+0x1C at nybbles 21-22. The base\n"
        "game already labels those ranges that way on 143 other sprites.\n\n"
        "Sprites 615 and 723 get only 19-20: 21-22 is their Group ID.\n"
        "Not verified in-game. No base field is modified.")

    out = []
    problems = []
    for sid in sorted(CHEEP):
        if sid not in byid:
            problems.append(f"sprite {sid} missing from base")
            continue
        sp = copy.deepcopy(byid[sid])
        used = occupied_nybbles(sp)

        if 19 in used or 20 in used:
            problems.append(f"sprite {sid}: nybble 19/20 already used")
            continue
        v1 = ET.SubElement(sp, "value")
        v1.set("nybble", "19-20")
        v1.set("title", "Movement Type")
        v1.set("category", "movement")
        v1.set("comment", safe(
            "Shared movement system. 0 leaves the fish swimming on its own."))

        if sid in GROUPED:
            v1.set("comment", safe(
                "Shared movement system. Nybbles 21-22 are this sprite's Group ID, "
                "so a movement ID is not available here."))
        else:
            if 21 in used or 22 in used:
                problems.append(f"sprite {sid}: nybble 21/22 already used")
                continue
            v2 = ET.SubElement(sp, "value")
            v2.set("nybble", "21-22")
            v2.set("title", "Movement ID")
            v2.set("id_type", "movement")
            v2.set("category", "movement")
            v2.set("comment", safe(
                "Attach to a movement controller, rotation controller or path."))
        out.append(sp)

    path = os.path.join(REPO, "yaz0moto", "CheepCheepFamily", "spritedata.xml")
    write_patch(path, comment, out)
    return path, problems, len(out)


# -------------------------------------------------------------------- hammer
def build_hammer():
    base = ET.parse(BASE_XML).getroot()
    byid = {int(s.get("id")): s for s in base.findall("sprite") if s.get("id")}

    comment = safe(
        "Hammer Question Block: relabel the block contents that already dispense it.\n\n"
        "READ THIS BEFORE EXPECTING A NEW ITEM\n"
        "======================================\n"
        "A Yaz0moto patch cannot add a power-up. A block's contents field is ONE\n"
        "nybble (nybble 20) and all 16 values are already assigned, so there is no\n"
        "free value to put a Hammer in.\n\n"
        "What this patch does instead is correct the labels. In the retail binary,\n"
        "contents 2 and 3 both resolve to action code 0: they are the same item,\n"
        "which is why the base data already labels both 'Fire Flower'. The Hammer\n"
        "build changes that one shared grant handler to return mode 10, so both\n"
        "values now dispense the Hammer.\n\n"
        "So with the Hammer build installed, setting a block to value 2 or 3 has\n"
        "always given the Hammer; it just said 'Fire Flower' in the editor. This\n"
        "patch makes it say Hammer, so you can find it.\n\n"
        "It changes NO behaviour. Without the Hammer build, value 2 is an ordinary\n"
        "Fire Flower and these labels are wrong.\n\n"
        "Each sprite is emitted IN FULL, restating every base field, because\n"
        "Yaz0moto's loader replaces a patched sprite outright rather than merging\n"
        "(see scripts/emit_full_sprite_patch.py). Emitting only the relabelled list\n"
        "would delete the other fields, e.g. all twelve of the Question Block's\n"
        "movement and ID settings.")

    out = []
    problems = []
    for sid in HAMMER_BLOCKS:
        if sid not in byid:
            problems.append(f"sprite {sid} missing from base")
            continue
        sp = copy.deepcopy(byid[sid])

        target = None
        for c in sp:
            title = (c.get("title") or "").strip()
            if c.tag == "list" and title in ("Contains", "Contents"):
                target = c
                break
        if target is None:
            problems.append(f"sprite {sid}: no Contains/Contents list")
            continue

        entries = target.findall("entry")
        if len(entries) != 16:
            problems.append(f"sprite {sid}: {len(entries)} entries, expected 16")
            continue

        labels = {e.get("value"): (e.text or "").strip() for e in entries}
        # Premise check: both 2 and 3 must already describe a fire flower.
        if "fire" not in labels.get("2", "").lower() or \
           "fire" not in labels.get("3", "").lower():
            problems.append(
                f"sprite {sid}: values 2/3 are {labels.get('2')!r}/{labels.get('3')!r}, "
                "not a fire flower; skipping")
            continue

        # The only edit: say what these entries actually do in the patched build.
        for e in entries:
            if e.get("value") in ("2", "3"):
                e.text = "Hammer"
        target.set("comment", safe(
            "Values 2 and 3 are the same item: both resolve to action code 0 in the "
            "retail binary. In the Hammer build that shared item grants power-up "
            "mode 10, so this block dispenses the Hammer. Relabelled from 'Fire "
            "Flower' to match the build."))
        out.append(sp)

    path = os.path.join(REPO, "yaz0moto", "HammerQuestionBlock", "spritedata.xml")
    write_patch(path, comment, out)
    return path, problems, len(out)


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("usage: emit_full_sprite_patch.py <cheep|hammer>")
        raise SystemExit(2)
    mode = sys.argv[1].lower()
    if mode == "cheep":
        path, problems, n = build_cheep()
    elif mode == "hammer":
        path, problems, n = build_hammer()
    else:
        print(f"unknown mode {mode!r}")
        raise SystemExit(2)

    print(f"wrote {path}")
    print(f"  {n} sprites, each restating its full base definition")
    if problems:
        print(f"  {len(problems)} problem(s):")
        for p in problems:
            print(f"    - {p}")
        raise SystemExit(1)
    print("  no problems")
