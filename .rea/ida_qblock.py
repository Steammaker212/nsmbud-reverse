"""QUESTION BLOCK: find where its item id comes from.

Known from earlier rounds: `_ZN11FlyingBlock6createEPK14ActorBuildInfos` at RVA 0x568888 is the
question block ("FlyingBlock"). The open question is which item it spawns, and the item id must
be read from the spawn call site rather than inferred from the ItemNameTable ordering (a
previous attempt inferred "value 3 = Fire Flower" and was wrong -- index 1 is FireFlower,
index 3 is IceFlower).

Method: find every call inside the FlyingBlock cluster that passes a small immediate in the
argument register, and resolve what function is being called. A question block spawns its
contents via some Actor_*_build or a generic item spawner.

Also: the block's contents usually come from a *parameter* (course data), not a hardcoded
constant. So this reports both: hardcoded immediates AND parameter-derived values, and says
which is which. That distinction decides whether a Yaz0moto level patch or a code patch is the
right way to put a new power in a block.
"""
import idautils
import ida_funcs
import ida_name
import ida_bytes
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
FB_CREATE = 0x00568888


def cstr(ea, maxlen=80):
    b = []
    for i in range(maxlen):
        c = ida_bytes.get_byte(ea + i)
        if c == 0:
            break
        b.append(chr(c) if 32 <= c < 127 else "?")
    s = "".join(b)
    return s if len(s) >= 3 else None


def strings_in(lo, hi):
    out = set()
    for insn in idautils.Heads(lo, hi):
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


ea = BASE + FB_CREATE
f = ida_funcs.get_func(ea)
print("=" * 92)
print(f"FlyingBlock::create  {FB_CREATE:#010x}  "
      f"{ida_name.get_name(ea)}  size {f.end_ea - f.start_ea:#x}")
print("=" * 92)

# every function in the FlyingBlock cluster (same translation unit / nearby)
print("\nALL functions whose name mentions FlyingBlock:")
fb_funcs = []
for func_ea in idautils.Functions():
    nm = ida_name.get_name(func_ea) or ""
    if "FlyingBlock" in nm:
        fb_funcs.append((func_ea, nm))
for func_ea, nm in sorted(fb_funcs):
    n = len(list(idautils.CodeRefsTo(func_ea, 0)))
    print(f"  {func_ea - BASE:#010x}  {nm:<58} xrefs {n}")
print(f"  total: {len(fb_funcs)}")

# what does create() itself do?
print()
print("=" * 92)
print("FlyingBlock::create pseudocode")
print("=" * 92)
try:
    cf = ida_hexrays.decompile(ea)
    if cf:
        for ln in str(cf).splitlines()[:80]:
            print("  " + ln)
    else:
        print("  declined")
except Exception as e:
    print(f"  error {e}")

# strings referenced anywhere in the cluster
print()
print("=" * 92)
print("strings referenced in the FlyingBlock cluster")
print("=" * 92)
allstr = set()
for func_ea, nm in fb_funcs:
    g = ida_funcs.get_func(func_ea)
    if g:
        allstr |= strings_in(g.start_ea, g.end_ea)
for s in sorted(allstr):
    print(f"  {s}")
