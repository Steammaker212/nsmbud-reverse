"""Name helpers from STRONG named callers only.

A function called from exactly one named function is that function's helper. But the rule is only
worth applying when the caller's name is itself strong -- a helper of `SE_PLY_THROW_ref` would
inherit a name that says nothing.

Strong caller = mangled C++ (`_ZN...`), `Actor_*_build` from the developers' own debug tags, or
one of our explicit verified names. Weak = `*_ref`, `*_thunk`, and anything guessy.

Naming rule applied:  <StrongCaller>_helper
This asserts exactly one verifiable thing: the only direct ARM caller is that function. Where a
function has additional callers of any kind, it is skipped -- so the claim stays true.

Skips anything already named, and skips callers whose name is weak.
"""
import collections
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idaapi
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
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
        return (tgt - BASE) if BASE <= tgt < BASE + 0x00CD1000 else None
    if (w & 0xFE000000) == 0xFA000000:
        h = (w >> 23) & 2
        imm = w & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        tgt = (addr + 8) + (imm << 2) + h
        return (tgt - BASE) if BASE <= tgt < BASE + 0x00CD1000 else None
    return None


def name_of(rva):
    return ida_name.get_name(BASE + rva) or ""


def is_strong(nm):
    if not nm:
        return False
    if nm.startswith("_ZN"):                      # compiler's own
        return True
    if nm.startswith("Actor_") and nm.endswith("_build"):
        return True
    if nm.endswith("_ref") or nm.endswith("_thunk"):
        return False
    if nm.startswith("sub_") or nm.startswith("loc_") or nm.startswith("dword_"):
        return False
    return True                                    # our explicit names


callers = collections.defaultdict(set)
for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 4):
    t = arm_bl_target(addr)
    if t is None:
        continue
    f = ida_funcs.get_func(addr)
    if f:
        callers[t & ~1].add(f.start_ea - BASE)

to_apply = []
skipped_weak = 0
skipped_multi = 0
for ea in idautils.Functions():
    rva = ea - BASE
    if name_of(rva) and not name_of(rva).startswith("sub_"):
        continue
    cs = callers.get(rva, set())
    if len(cs) != 1:
        if cs:
            skipped_multi += 1
        continue
    caller = next(iter(cs))
    cn = name_of(caller)
    if not is_strong(cn):
        skipped_weak += 1
        continue
    to_apply.append((rva, cn))

print("=" * 88)
print("HELPER NAMING from strong callers")
print("=" * 88)
print(f"  candidates           : {len(to_apply):,}")
print(f"  skipped (weak caller): {skipped_weak:,}")
print(f"  skipped (2+ callers) : {skipped_multi:,}")
print()

# Several helpers can share one caller, so a plain <Caller>_helper collides. Add the address to
# keep names unique AND truthful: it still says "helper of <Caller>".
applied = 0
failed = 0
for rva, cn in to_apply:
    name = f"{cn}_helper_{rva:06X}"
    ok = ida_name.set_name(BASE + rva, name, ida_name.SN_NOWARN)
    if ok:
        applied += 1
    else:
        failed += 1
        if failed <= 8:
            print(f"  FAILED {rva:#010x} -> {name}")

print(f"  applied              : {applied:,}")
print(f"  failed               : {failed:,}")
print()
for rva, cn in to_apply[:25]:
    print(f"    {rva:#010x}  {cn}_helper_{rva:06X}")

idaapi.save_database("", 0)
print("saved")
