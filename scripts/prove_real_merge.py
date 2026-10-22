"""Prove the merge semantics using Yaz0moto's REAL SpriteDefinition class.

The emulation in prove_patch_merge_semantics.py is a model of loadFrom, and a model
can be wrong. This imports the actual class from the real checkout and reproduces
the actual two-pass loop from loading.py:

    for each spritedata path, base first then mod:
        sdef = SpriteDefinition()
        sdef.loadFrom(sprite)
        Sprites[spriteid] = sdef

If the second assignment replaces the whole object (it does), then a patch that does
not restate every base field will silently delete the rest.

Run with the venv python that has PyQt5:
    C:\\Users\\Saif Khan\\Yaz0moto\\.venv\\Scripts\\python.exe this_script.py <patch.xml>
"""
import os
import sys
import xml.etree.ElementTree as ET

YAZ = r"C:\Users\Saif Khan\Yaz0moto"
sys.path.insert(0, YAZ)
# The editable checkout has no PyQt5, but the frozen distribution ships it. Append
# (never insert) so the real stdlib still wins; putting it on PYTHONPATH instead
# shadows `encodings` and kills the interpreter at startup.
FROZEN_LIB = (r"C:\Users\Saif Khan\Documents\Switch Modding Project"
              r"\Yaz0moto-v67344c6-Windows-x64\lib")
sys.path.append(FROZEN_LIB)

from miyamoto.misc import SpriteDefinition  # noqa: E402

G = (r"C:\Users\Saif Khan\Documents\Switch Modding Project"
     r"\Yaz0moto-v67344c6-Windows-x64\miyamotodata\games\NSMBU")
BASE = os.path.join(G, "spritedata.xml")


def field_key(f):
    """Identify a field the way the editor does: by its bit range / title."""
    return (f.get("title") or f.get("title1") or "",
            f.get("nybble") or f.get("bit") or "?")


def load_like_the_editor(paths):
    """Replicate loading.py's LoadSpriteData sprite loop exactly."""
    sprites = {}
    for path in paths:
        for sprite in ET.parse(path).getroot():
            if sprite.tag.lower() != "sprite":
                continue
            if "id" not in sprite.attrib:
                continue
            try:
                sid = int(sprite.attrib["id"])
            except ValueError:
                continue
            sdef = SpriteDefinition()
            sdef.name = sprite.attrib.get("name", "")
            sdef.loadFrom(sprite)          # clears fields, rebuilds from this element
            sdef.id = sid
            sprites[sid] = sdef            # replaces any earlier definition
    return sprites


def describe(sdef):
    out = []
    for f in sdef.fields:
        out.append((f.get("title") or f.get("title1") or "", f.get("nybble")))
    return out


patch = sys.argv[1] if len(sys.argv) > 1 else None
if not patch:
    print("usage: <venv python> prove_real_merge.py <patch spritedata.xml>")
    raise SystemExit(2)

print("Real SpriteDefinition:", SpriteDefinition)
print("\n=== loading base, then patch (as Yaz0moto does) ===")
base_only = load_like_the_editor([BASE])
both = load_like_the_editor([BASE, patch])

pids = [int(s.attrib["id"]) for s in ET.parse(patch).getroot()
        if s.tag.lower() == "sprite" and "id" in s.attrib]

problems = 0
for sid in sorted(pids):
    b = base_only.get(sid)
    a = both.get(sid)
    if b is None:
        print(f"\n  sprite {sid}: not in base")
        continue
    bf = [f for f in describe(b)]
    af = [f for f in describe(a)]
    # fields present in base but absent after the patch is applied
    lost = [f for f in bf if f not in af]
    print(f"\n  sprite {sid} {b.name!r}")
    print(f"    base fields : {len(bf)}")
    print(f"    after patch : {len(af)}")
    if lost:
        problems += 1
        print(f"    LOST {len(lost)} field(s): {lost}")
    else:
        print("    nothing lost")

print("\n" + "=" * 60)
if problems:
    print(f"CONCLUSION: patch REPLACES. {problems} sprite(s) lose base fields.")
    print("            A patched sprite must restate every field it wants to keep.")
else:
    print("CONCLUSION: patch MERGES. Base fields survive.")
raise SystemExit(0)
