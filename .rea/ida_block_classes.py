"""FIND THE REAL QUESTION BLOCK CLASS.

Correction to an earlier assumption: FlyingBlock is not the item block. Its +7300 field (from
the {3,4} table) is passed to MovementHandler::getMaskForMovementType, so it is a MOVEMENT type,
and +7304 is a movement parameter. "FlyingBlock" is the block that *moves* -- typically the one
that slides or travels along a path. The block's contents are not in this class at all.

So the item-bearing question block is elsewhere, almost certainly a BlockBase subclass. This
enumerates every class in the binary whose mangled name contains "Block", groups by class, and
shows the method set and the constructor size. A question block needs an item id and a spawn, so
the class list plus a look at which ones reference item-related strings will identify it.

It also lists BlockBase's own methods, since contents logic may live in the base.
"""
import collections
import re
import idautils
import ida_funcs
import ida_name
import ida_bytes
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

# _ZN13SomeClass9someMethEv  ->  class = SomeClass
CLASS_RE = re.compile(r"^_ZN(\d+)([A-Za-z_][A-Za-z0-9_]*)")


def cstr(ea, maxlen=72):
    b = []
    for i in range(maxlen):
        c = ida_bytes.get_byte(ea + i)
        if c == 0:
            break
        if not (32 <= c < 127):
            return None
        b.append(chr(c))
    return "".join(b) if len(b) >= 4 else None


def strings_in(f):
    out = set()
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        if "=" not in idc.print_operand(insn, 1):
            continue
        disp = idc.get_operand_value(insn, 1)
        if not disp or not (BASE <= disp < BASE + 0xCD1000):
            continue
        w = ida_bytes.get_dword(disp)
        for cand in (w, w + BASE):
            if BASE <= cand < BASE + 0xCD1000:
                s = cstr(cand)
                if s:
                    out.add(s)
    return out


groups = collections.defaultdict(list)
for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    m = CLASS_RE.match(nm)
    if not m:
        continue
    cls = m.group(2)
    if "Block" not in cls:
        continue
    groups[cls].append((ea, nm))

print("=" * 92)
print(f"classes containing 'Block' that have methods: {len(groups)}")
print("=" * 92)
for cls in sorted(groups):
    meths = sorted(groups[cls])
    print(f"\n  {cls}   ({len(meths)} method(s))")
    for ea, nm in meths[:14]:
        print(f"      {ea - BASE:#010x}  {nm}")
    if len(meths) > 14:
        print(f"      ... {len(meths)-14} more")

# which block classes mention item-ish strings?
print()
print("=" * 92)
print("block classes referencing item / power-up strings")
print("=" * 92)
KEYS = ("kinoko", "flower", "item", "power", "mushroom", "star", "penguin",
        "propeller", "hammer", "ice", "coin", "1up", "oneup")
for cls in sorted(groups):
    hits = set()
    for ea, nm in groups[cls]:
        f = ida_funcs.get_func(ea)
        if not f:
            continue
        for s in strings_in(f):
            if any(k in s.lower() for k in KEYS):
                hits.add(s)
    if hits:
        print(f"  {cls}")
        for s in sorted(hits)[:10]:
            print(f"      {s}")
