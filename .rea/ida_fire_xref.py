"""Use IDA's own xref API for the fireball lead, instead of hand-scanning .text.

The previous scan looked for literal-pool words only inside .text and found nothing, so it was
looking in the wrong place again. idautils.XrefsTo resolves the actual references IDA recorded,
whatever segment they live in, for both the string addresses and the GOT slot.

For each referenced site this prints the containing function, that function's size, and its
callers -- so the fire-shower becomes a concrete function rather than a hypothesis.
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

QUERIES = {
    0x00C659B0: "PlayerFireball_ctor GOT slot",
    0x00C65980: "PlantFireball_ctor GOT slot",
    0x00ACD8B2: '"FireFlower"',
    0x00ACDE20: '"P_FireFlower_00"',
    0x00ACDEB0: '"P_FireFlower_01"',
    0x0013A7A4: "PlayerFireball_ctor",
}

allfn = set()
for addr, label in QUERIES.items():
    print("=" * 92)
    print(f"{label}  @ {addr:#010x}")
    print("=" * 92)
    n = 0
    for xr in idautils.XrefsTo(BASE + addr, 0):
        n += 1
        f = ida_funcs.get_func(xr.frm)
        fn = (f.start_ea - BASE) if f else None
        nm = (ida_name.get_name(f.start_ea) if f else "?") or "?"
        print(f"  from {xr.frm - BASE:#010x}  type={xr.type}  in {nm}")
        if fn is not None:
            allfn.add(fn)
    # also try the bare RVA form, in case the reference is stored as an RVA
    for xr in idautils.XrefsTo(addr, 0):
        pass
    if n == 0:
        print("  (no xrefs)")
    print()

print("=" * 92)
print("callers of the functions that touch the fireball lead")
print("=" * 92)
for fn in sorted(allfn):
    cs = callers.get(fn, set())
    nm = ida_name.get_name(BASE + fn) or f"sub_{fn:X}"
    f = ida_funcs.get_func(BASE + fn)
    sz = (f.end_ea - f.start_ea) if f else 0
    print(f"  {fn:#010x}  {sz:>6,} b  {nm}   <- {len(cs)} caller(s)")
    for c in sorted(cs)[:8]:
        print(f"        {c:#010x}  {ida_name.get_name(BASE + c) or 'sub_'+format(c,'X')}")
