"""Emulate Yaz0moto's sprite loading to prove how patch merging really behaves.

The ExamplePatch docs say a patch on an existing numeric id is "merged: the existing
fields from the base game are kept and these new ones are appended". The source says
something different:

    for sprite in root:                 # base spritedata.xml first
        sdef = SpriteDefinition()
        sdef.loadFrom(sprite)           # <-- clears self.fields = []
        globals.Sprites[spriteid] = sdef
    ...
    for sprite in root:                 # then the mod's spritedata.xml
        sdef = SpriteDefinition()
        sdef.loadFrom(sprite)
        globals.Sprites[spriteid] = sdef  # <-- REPLACES the object

So the second assignment replaces the whole definition. Any base field the patch does
not restate is gone.

This harness reproduces exactly that logic (the field-counting part of loadFrom, with
the same tag filter) and reports, for a patched sprite, how many base fields survive.

Run against a patch to see whether it is safe.
"""
import os
import sys
import xml.etree.ElementTree as ET

G = (r"C:\Users\Saif Khan\Documents\Switch Modding Project"
     r"\Yaz0moto-v67344c6-Windows-x64\miyamotodata\games\NSMBU")
BASE = os.path.join(G, "spritedata.xml")

# Field tags loadFrom actually accepts (from misc.py).
FIELD_TAGS = {"checkbox", "list", "value", "bitfield", "strybble",
              "dualbox", "multidualbox", "initialstate", "layer"}


def fields_of(sprite_elem):
    """The fields loadFrom would produce for this <sprite>, as (nybble, title)."""
    out = []
    for f in sprite_elem:
        if f.tag not in FIELD_TAGS:
            continue
        spec = f.get("nybble") or f.get("bit") or "?"
        out.append((spec, (f.get("title") or f.get("title1") or "").strip()))
    return out


def emulate(patch_path, base_path=BASE):
    """Return {sprite_id: (surviving_base_fields, patch_fields, base_fields)}."""
    # --- pass 1+2: base game
    loaded = {}
    for sp in ET.parse(base_path).getroot():
        if sp.tag.lower() != "sprite" or "id" not in sp.attrib:
            continue
        try:
            sid = int(sp.attrib["id"])
        except ValueError:
            continue
        loaded[sid] = {"name": sp.get("name"), "fields": fields_of(sp)}

    base_snapshot = {k: dict(v) for k, v in loaded.items()}

    # --- pass 3: mod overwrites (this is the behaviour under test)
    for sp in ET.parse(patch_path).getroot():
        if sp.tag.lower() != "sprite" or "id" not in sp.attrib:
            continue
        try:
            sid = int(sp.attrib["id"])
        except ValueError:
            continue
        loaded[sid] = {"name": sp.get("name"), "fields": fields_of(sp)}

    return loaded, base_snapshot


def report(patch_path, label):
    print(f"\n{'=' * 70}")
    print(f"  {label}")
    print(f"  {patch_path}")
    print("=" * 70)

    if not os.path.isfile(patch_path):
        print("  (missing)")
        return 1

    loaded, base = emulate(patch_path)

    problems = 0
    for sid in sorted(loaded):
        if sid not in base:
            continue
        b = base[sid]["fields"]
        a = loaded[sid]["fields"]
        lost = [f for f in b if f not in a]
        if lost:
            problems += 1
            print(f"\n  sprite {sid} ({base[sid]['name']!r})")
            print(f"    base fields:  {len(b)}")
            print(f"    after patch:  {len(a)}")
            print(f"    LOST ({len(lost)}):")
            for spec, title in lost:
                print(f"      nybble {spec:8} {title!r}")

    if problems == 0:
        print("\n  No base fields lost: every patched sprite restates its base fields.")
    else:
        print(f"\n  !! {problems} sprite(s) would LOSE base fields when the patch loads.")
    return problems


if __name__ == "__main__":
    total = 0
    for arg in sys.argv[1:]:
        total += report(arg, os.path.basename(os.path.dirname(arg)) or arg)
    if not sys.argv[1:]:
        print("usage: python prove_patch_merge_semantics.py <spritedata.xml> [...]")
    sys.exit(1 if total else 0)
