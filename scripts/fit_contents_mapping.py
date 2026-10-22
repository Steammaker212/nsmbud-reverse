"""Reconcile the chain by testing index bases instead of assuming one.

Confirmed facts:
  * itemId -> profile seed slots match HAMMER_POWERUP_REPORT exactly, 11/11
    (0=Mushroom/591, 1=FireFlower/592, 2=LightMask/854, 3=Propeller/593,
     4=Star/594, 5=Penguin/595, 6=Mini/596, 7=1UP/597, 8=IceFlower/598,
     9=1UP/599, 10=YoshiEgg/601).
  * My forward chain (contents -> dword_60B04164 -> dword_60B0267C) agreed with the
    editor on only 1/16 rows, so at least one step or base is wrong.

Rather than keep guessing, search all simple combinations for the one that best
reproduces the editor's 16 labels:
    step order (action first, or item directly)
    base offset (0 or 1, and +/- up to 2)
    whether the tables are indexed by the same or shifted value

If nothing fits well, the honest conclusion is that the editor's list order comes
from data we have not located, and the relabel cannot be justified per-entry.
"""
import itertools
import struct

ELF = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
ACTION_TBL = 0x60B04164
ITEM_TBL = 0x60B0267C

EDITOR = ['Nothing', '1 coin', 'Fire Flower', 'Fire Flower', 'Propeller Mushroom',
          'Penguin Suit', 'Mini mushroom', 'Star', 'Continuous star', 'Yoshi egg',
          '10-Coin', '1-UP', 'Vine', 'Spring', 'Super mushroom (if small)',
          'Ice flower']

# itemId -> class, now CONFIRMED by the 11/11 seed-slot match
CLASS = {0: 'Mushroom', 1: 'Fire Flower', 2: 'LightMask', 3: 'Propeller',
         4: 'Star', 5: 'Penguin', 6: 'Mini', 7: '1UP', 8: 'Ice Flower',
         9: '1UP', 10: 'Yoshi Egg'}

# loose matching so cosmetic differences don't count as failures
ALIASES = {
    'Mushroom': {'nothing', 'supermushroomifsmall', 'mushroom', '1coin'},
    'Fire Flower': {'fireflower'},
    'Propeller': {'propellermushroom', 'propellersuit', 'propeller'},
    'Penguin': {'penguinsuit', 'penguin'},
    'Mini': {'minimushroom', 'mini'},
    'Star': {'star', 'continuousstar'},
    'Ice Flower': {'iceflower'},
    'Yoshi Egg': {'yoshiegg', 'yoshi'},
    '1UP': {'1up'},
    'LightMask': set(),
}


def norm(s):
    return s.lower().replace(' ', '').replace('-', '')


def matches(cls_name, editor_label):
    return norm(editor_label) in ALIASES.get(cls_name, set())


def segs(d):
    ph = struct.unpack_from("<I", d, 0x1C)[0]
    e = struct.unpack_from("<H", d, 0x2A)[0]
    n = struct.unpack_from("<H", d, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * e
        if struct.unpack_from("<I", d, b)[0] == 1:
            out.append((struct.unpack_from("<I", d, b + 8)[0],
                        struct.unpack_from("<I", d, b + 16)[0],
                        struct.unpack_from("<I", d, b + 4)[0]))
    return out


d = open(ELF, "rb").read()
S = segs(d)


def rd(va, n):
    for v, sz, o in S:
        if v <= va < v + sz:
            return d[o + va - v: o + va - v + n]
    return None


actions = struct.unpack_from("<26I", rd(ACTION_TBL, 26 * 4), 0)
items = struct.unpack_from("<16I", rd(ITEM_TBL, 16 * 4), 0)

best = []
for use_action in (True, False):
    for shift in range(-2, 3):
        score = 0
        detail = []
        for c in range(16):
            idx = c + shift
            if idx < 0 or idx >= 16:
                detail.append((c, None, False))
                continue
            v = idx
            if use_action:
                v = actions[idx] if idx < len(actions) else None
            if v is None or v >= len(items):
                detail.append((c, None, False))
                continue
            item = items[v]
            cls = CLASS.get(item)
            ok = cls is not None and matches(cls, EDITOR[c])
            score += 1 if ok else 0
            detail.append((c, cls, ok))
        best.append((score, use_action, shift, detail))

best.sort(key=lambda t: -t[0])
print("=== best fits (score / 16) ===")
for score, use_action, shift, _ in best[:6]:
    print(f"  {'action->item' if use_action else 'item direct':12} shift={shift:+d}"
          f"   {score}/16")

score, use_action, shift, detail = best[0]
print(f"\n=== best: {'action->item' if use_action else 'item direct'}"
      f" shift {shift:+d}, {score}/16 ===")
for c, cls, ok in detail:
    print(f"  contents {c:2}  binary={str(cls):<12} editor={EDITOR[c]:<26} "
          f"{'ok' if ok else ''}")

print("""
=== conclusion ===""")
if score >= 12:
    print(f"  A {score}/16 fit is strong enough to fix the index base, but the")
    print("  remaining mismatches still need explaining before relabelling entries.")
else:
    print(f"  Best fit is only {score}/16. No simple index-base or step-order change")
    print("  reproduces the editor's labels, so the editor's list order is derived")
    print("  from data not yet located.")
    print()
    print("  CONSEQUENCE: the per-entry relabel in HammerQuestionBlock is NOT")
    print("  justified. The patch must not claim values 2/3 give a Hammer when the")
    print("  binary cannot confirm which item those values select.")
