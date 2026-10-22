"""AUDIT the _helper_ names: are they unique, truthful, and non-nested?

Naming rule was: a function with exactly ONE direct ARM caller whose name is strong gets
<Caller>_helper_<addr>. The audit checks:

  1. how many such names exist
  2. whether any are nested (helper of a helper) -- those arise because renaming happens in one
     pass but a later function's caller was itself renamed in the same pass. They are still TRUE
     (the caller really is that function) but read badly, so count them.
  3. spot-check three randomly, by re-deriving their caller set with the calibrated decoder
"""
import random
import idautils
import ida_bytes
import ida_funcs
import ida_name
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


helpers = []
for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    if "_helper_" in nm:
        helpers.append((ea - BASE, nm))

print(f"total _helper_ names: {len(helpers)}")

nested = [h for h in helpers if "helper_" in h[1].split("_helper_")[0]]
print(f"nested (helper of a helper): {len(nested)}")
for rva, nm in nested[:8]:
    print(f"  {rva:#010x}  {nm}")

# rebuild callers to verify a sample
callers = {}
want = {rva for rva, _ in helpers}
for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 4):
    t = arm_bl_target(addr)
    if t is None:
        continue
    k = t & ~1
    if k in want:
        f = ida_funcs.get_func(addr)
        if f:
            callers.setdefault(k, set()).add(f.start_ea - BASE)

print()
print("verification: each helper must have exactly 1 direct ARM caller")
bad = 0
for rva, nm in helpers:
    cs = callers.get(rva, set())
    if len(cs) != 1:
        bad += 1
        if bad <= 8:
            print(f"  {rva:#010x}  {nm}  has {len(cs)} caller(s)")
print(f"  helpers failing the 1-caller check: {bad} of {len(helpers)}")
