"""FOLLOW THE GOT SLOT to the real spawn site, and find who uses the P_FireFlower anims.

Two concrete leads from the previous run:

  1. PlayerFireball_ctor is referenced ONLY from .got at 0x00C659B0. So the spawn does not
     take the address directly -- it loads the GOT slot. Finding every instruction that loads
     the literal address 0x00C659B0 leads straight to the spawn site. This is exactly the
     "two hops" pattern already established for string references in this binary.

  2. The strings "P_FireFlower_00" (0xACDE20) and "P_FireFlower_01" (0xACDEB0) exist. Those are
     the player's fire-flower animations. Whoever references them is driving the fire-flower
     player state.

This finds both and reports the containing function of each reference, with its callers.
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

GOT_FIREBALL = 0x00C659B0
STRINGS = {0x00ACD8B2: "FireFlower", 0x00ACDE20: "P_FireFlower_00", 0x00ACDEB0: "P_FireFlower_01"}


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


# build caller map once (calibrated decoder)
callers = collections.defaultdict(set)
for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 4):
    t = arm_bl_target(addr)
    if t is not None:
        f = ida_funcs.get_func(addr)
        if f:
            callers[t].add(f.start_ea - BASE)


def who_loads(addr_value, label):
    """find literal-pool words equal to addr_value (RVA or VA), then the code reading them"""
    hits = []
    for seg_ea in idautils.Segments():
        nm = idc.get_segm_name(seg_ea)
        if nm != ".text":
            continue
        s, e = idc.get_segm_start(seg_ea), idc.get_segm_end(seg_ea)
        a = s
        while a + 4 <= e:
            v = ida_bytes.get_dword(a)
            if v == addr_value or v == BASE + addr_value:
                # find code referencing this literal address
                for xr in idautils.DataRefsTo(a):
                    f = ida_funcs.get_func(xr)
                    hits.append((a - BASE, xr - BASE,
                                 f.start_ea - BASE if f else None))
            a += 4
    print(f"  {label}: {len(hits)} literal reference(s)")
    seen_fn = set()
    for lit, site, fn in hits[:20]:
        nm = ida_name.get_name(BASE + fn) if fn else "?"
        print(f"      literal {lit:#010x} used at {site:#010x}  in {nm}")
        if fn is not None:
            seen_fn.add(fn)
    return seen_fn


print("=" * 92)
print("1. who loads the PlayerFireball_ctor GOT slot 0x00C659B0")
print("=" * 92)
fns = who_loads(GOT_FIREBALL, "GOT 0xC659B0")

print()
print("=" * 92)
print("2. who references the P_FireFlower animation strings")
print("=" * 92)
for rva, label in STRINGS.items():
    print(f"--- \"{label}\" at {rva:#010x} ---")
    who_loads(rva, label)
    print()

print("=" * 92)
print("3. callers of every function found above")
print("=" * 92)
for fn in sorted(fns):
    cs = callers.get(fn, set())
    nm = ida_name.get_name(BASE + fn) or f"sub_{fn:X}"
    f = ida_funcs.get_func(BASE + fn)
    sz = (f.end_ea - f.start_ea) if f else 0
    print(f"  {fn:#010x}  {sz:>6,} b  {nm}   <- {len(cs)} caller(s)")
    for c in sorted(cs)[:8]:
        print(f"        {c:#010x}  {ida_name.get_name(BASE + c) or 'sub_'+format(c,'X')}")
