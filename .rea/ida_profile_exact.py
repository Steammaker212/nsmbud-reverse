"""Decode the actor Profile registration table precisely.

The previous attempt matched Profile methods too loosely and produced 1,802 junk rows. The exact
constructor is whatever sub_6013B948 calls, and that is discoverable: dump the BL targets inside
sub_6013B948 and take the one whose name is the Profile ctor.

With the exact function known, every static initialiser that calls it is an actor registration,
and the argument in R1 is the actor's constructor while the last stack argument is the profile id.
Decoding all of them gives the full id -> class map in one pass.

This is the table that makes the block-item work precise: getContents yields an item index, the
resolver maps it to an object, and this maps profile ids to constructors.
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


print("=" * 92)
print("BL targets inside sub_6013B948 (the PlayerFireball registration)")
print("=" * 92)
f = ida_funcs.get_func(BASE + 0x0013B948)
ctor = None
for insn in idautils.Heads(f.start_ea, f.end_ea):
    t = arm_bl_target(insn)
    if t is None:
        continue
    nm = ida_name.get_name(BASE + t) or f"sub_{t:X}"
    print(f"  {insn - BASE:#010x}  BL -> {t:#010x}  {nm}")
    if "Profile" in nm:
        ctor = t

if ctor is None:
    print("  no Profile-named target; listing all targets only")
    raise SystemExit()

print()
print(f"using Profile ctor = {ctor:#010x}  {ida_name.get_name(BASE+ctor)}")

print()
print("=" * 92)
print("all call sites of that ctor")
print("=" * 92)
sites = []
for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 4):
    if arm_bl_target(addr) != ctor:
        continue
    fn = ida_funcs.get_func(addr)
    if fn:
        sites.append((fn.start_ea - BASE, addr - BASE))
print(f"  call sites: {len(sites)}")

# For a sample, decompile the initialiser and pull the literal last argument (the profile id)
print()
print("=" * 92)
print("sample registrations with their decoded arguments")
print("=" * 92)
import ida_hexrays
seen = set()
shown = 0
for fn, site in sites:
    if fn in seen:
        continue
    seen.add(fn)
    try:
        cf = ida_hexrays.decompile(BASE + fn)
        txt = str(cf) if cf else ""
    except Exception:
        txt = ""
    line = None
    for ln in txt.splitlines():
        if "Profile::Profile" in ln:
            line = ln.strip()
            break
    nm = ida_name.get_name(BASE + fn) or f"sub_{fn:X}"
    print(f"  {fn:#010x}  {nm}")
    if line:
        print(f"      {line}")
    shown += 1
    if shown >= 45:
        break
