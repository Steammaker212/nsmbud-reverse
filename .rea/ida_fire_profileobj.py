"""FIND the fireball spawn by referencing its PROFILE OBJECT, not its id immediate.

Decoded from sub_6013B948: the PlayerFireball profile is written to static storage at
0xC87B48 (Profile::Profile returns that address; the function returns 13138760 = 0xC87B48).
PlantFireball's is at 0xC87A6C.

Code that spawns a fireball either
  (a) references 0xC87B48 directly, or
  (b) calls Profile::get(130) and passes the result to ActorMgr::create.

Both are searched here with IDA's xref API. For every hit the containing function is reported
with its callers, and if the containing function is player code the whole spawn path is named.
"""
import collections
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000
TEXT_LO, TEXT_HI = 0x288, 0x9AD3BC

PROFILE_OBJS = {
    0x00C87B48: "PlayerFireball profile object",
    0x00C87A6C: "PlantFireball profile object",
}


def arm_bl_target(addr):
    try:
        w = ida_bytes.get_dword(addr)
    except Exception:
        return None
    if (w & 0x0F000000) == 0x0B000000:
        imm = w & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        tgt = (addr + 8) + (imm << 2)
        return (tgt - BASE) if BASE <= tgt < BASE + NSO else None
    return None


callers = collections.defaultdict(set)
for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 4):
    t = arm_bl_target(addr)
    if t is not None:
        f = ida_funcs.get_func(addr)
        if f:
            callers[t].add(f.start_ea - BASE)

for addr, label in PROFILE_OBJS.items():
    print("=" * 92)
    print(f"{label}  @ {addr:#010x}")
    print("=" * 92)
    n = 0
    for xr in idautils.XrefsTo(BASE + addr, 0):
        n += 1
        f = ida_funcs.get_func(xr.frm)
        fn = (f.start_ea - BASE) if f else None
        nm = ida_name.get_name(f.start_ea) if f else "?"
        print(f"  from {xr.frm - BASE:#010x} t={xr.type}  in {nm or '?'}")
        if fn is not None:
            cs = callers.get(fn, set())
            print(f"      that function size={((ida_funcs.get_func(BASE+fn).end_ea - BASE) - fn) if ida_funcs.get_func(BASE+fn) else 0}"
                  f"  callers={len(cs)}")
            for c in sorted(cs)[:6]:
                print(f"          <- {c:#010x}  {ida_name.get_name(BASE + c) or 'sub_'+format(c,'X')}")
    if n == 0:
        print("  (no xrefs)")
    print()

# Profile::get(130) -- look for a function calling Profile::get and see callers
print("=" * 92)
print("who calls Profile::get, and with what id (immediate scan)")
print("=" * 92)
pget = None
for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    if nm == "_ZN7Profile3getEj":
        pget = ea - BASE
        break
print(f"  Profile::get at {pget:#x}" if pget else "  Profile::get not found by name")

if pget is not None:
    hits = collections.defaultdict(list)
    for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 4):
        if arm_bl_target(addr) != pget:
            continue
        f = ida_funcs.get_func(addr)
        if not f:
            continue
        # immediate loaded into R0 just before the call
        for back in range(4, 40, 4):
            d = idc.GetDisasm(addr - back)
            if d.startswith("MOV") and "R0" in d and "#" in d:
                try:
                    val = int(d.split("#")[1].split(";")[0].strip(), 16)
                except Exception:
                    continue
                hits[f.start_ea - BASE].append((addr - BASE, val))
                break
    print(f"  functions calling Profile::get with an immediate id: {len(hits)}")
    for fn, lst in sorted(hits.items()):
        ids = sorted({v for _, v in lst})
        if 130 in ids or 162 in ids:
            nm = ida_name.get_name(BASE + fn) or f"sub_{fn:X}"
            print(f"  *** {fn:#010x}  {nm}  ids={ids}")
    # show a compact sample of what ids get requested
    allids = collections.Counter()
    for fn, lst in hits.items():
        for _, v in lst:
            allids[v] += 1
    print(f"  most common profile ids requested: {allids.most_common(14)}")
