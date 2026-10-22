"""Who actually spawns a player fireball? Follow PlayerFireball_ctor upward.

The base gates both return 1, so creation is not gated in FireballBase. The real question for
"nothing seems to fire" is whether PlayerFireball_ctor is reachable at all from a player in the
fire state.

Plan:
  1. walk every vtable in .rodata looking for one whose slot 62/63 (0xF8/0xFC) is NOT the base
     "return 1" stub -- a derived class overriding the gate
  2. find all writers of the PlayerFireball vtable pointer (i.e. other ctors)
  3. list the direct callers of PlayerFireball_ctor, and their callers one level up
  4. resolve the vtable slot that a player would use to spawn: search the PlayerFireball /
     FireballBase vtable for the spawn entry, and check what the player class calls

This answers the concrete question: is there a code path Player -> PlayerFireball_ctor?
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
TEXT_LO, TEXT_HI = 0x288, 0x9AD3BC
NSO = 0x00CD1000

BASE_VT = 0x00BD22A0
GATE62 = 0x001371B4
GATE63 = 0x001371BC


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


print("=" * 92)
print("1. derived vtables overriding the FireballBase gate slots")
print("=" * 92)
for seg_ea in idautils.Segments():
    nm = idc.get_segm_name(seg_ea)
    if nm not in (".rodata", ".data", ".data.rel.ro"):
        continue
    s, e = idc.get_segm_start(seg_ea), idc.get_segm_end(seg_ea)
    a = s
    while a + 0x110 <= e:
        # a vtable run likely starts here if slot 63 is a code pointer and slot 62 too
        v62 = ida_bytes.get_dword(a + 0xF8)
        v63 = ida_bytes.get_dword(a + 0xFC)
        if (BASE <= BASE + v62 < BASE + NSO) and (BASE <= BASE + v63 < BASE + NSO):
            if v62 != GATE62 or v63 != GATE63:
                # only report if this looks like the FireballBase family: ctor slot 0 ==
                # something whose name mentions Fireball
                v0 = ida_bytes.get_dword(a)
                n0 = ida_name.get_name(BASE + v0) or ""
                if "Fireball" in n0:
                    print(f"  vtable {a - BASE:#010x}  slot0={n0}")
                    print(f"      slot62 -> {v62:#x} {ida_name.get_name(BASE+v62) or 'sub'}")
                    print(f"      slot63 -> {v63:#x} {ida_name.get_name(BASE+v63) or 'sub'}")
        a += 4

print()
print("=" * 92)
print("2. who calls PlayerFireball_ctor (0x13A7A4)?")
print("=" * 92)
callers = collections.defaultdict(set)
for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 4):
    t = arm_bl_target(addr)
    if t is not None:
        f = ida_funcs.get_func(addr)
        if f:
            callers[t].add(f.start_ea - BASE)

for target, label in ((0x0013A7A4, "PlayerFireball_ctor"),
                      (0x002A9B88, "FireBros_createFireball"),
                      (0x00139918, "PlantFireball_ctor")):
    cs = callers.get(target, set())
    print(f"  {label} ({target:#x}): {len(cs)} caller(s)")
    for c in sorted(cs):
        print(f"      {c:#010x}  {ida_name.get_name(BASE + c) or 'sub_'+format(c,'X')}")

print()
print("=" * 92)
print("3. one level up: who calls those callers")
print("=" * 92)
sons = set()
for target in (0x0013A7A4,):
    sons |= callers.get(target, set())
for s in sorted(sons):
    gs = callers.get(s, set())
    print(f"  {s:#010x} {ida_name.get_name(BASE+s) or ''} <- {len(gs)}")
    for g in sorted(gs)[:8]:
        print(f"      {g:#010x}  {ida_name.get_name(BASE + g) or 'sub_'+format(g,'X')}")
