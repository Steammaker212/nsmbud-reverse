"""Confirm WHY static xref analysis fails here: the dispatch tables are in .bss.

Player_ctor is definitely called (2 code xrefs) yet its address appears in NO data segment, at
either parity. PlayerBase_ctor the same. Meanwhile Profiles -- the 914-entry profile table the
whole actor system indexes -- is at 0xC7C304, which falls inside .bss (0xC7B274..0xCD1000).

A table in .bss has no initialised contents in the file: it is zero-filled at load and populated
by running code. So anything registered through it -- every actor profile, every vtable built by
a constructor -- has no static data reference to find. That is not a gap in my scanning; it is
the actual structure of the program.

This verifies it by:
  1. confirming Profiles' segment really is .bss
  2. checking whether the .bss region is even populated in the DB (all zeros?)
  3. looking at an _ZTV that DOES exist statically, to see what a real static vtable looks like
  4. counting how many Actor_*_build / _ZN*build functions have zero xrefs (they are registered
     at runtime, so this is expected to be nearly all of them)
"""
import idautils
import ida_funcs
import ida_name
import ida_bytes
import ida_xref
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000


def seg_of(ea):
    for s in idautils.Segments():
        if idc.get_segm_start(s) <= ea < idc.get_segm_end(s):
            return idc.get_segm_name(s)
    return "?"


print("=" * 84)
print("1. segment of the profile table")
print("=" * 84)
for rva in (0x00C7C304, 0x00B0C230, 0x00B0C2BC, 0x00B0C34C):
    ea = BASE + rva
    print(f"  {rva:#010x}  {ida_name.get_name(ea) or '(unnamed)':<28} seg {seg_of(ea)}")

print()
print("=" * 84)
print("2. is .bss actually zero in the database?")
print("=" * 84)
nz = 0
checked = 0
for off in range(0, 0x4000, 4):
    v = ida_bytes.get_dword(BASE + 0x00C7C304 + off)
    checked += 1
    if v:
        nz += 1
print(f"  first {checked} dwords of Profiles: {nz} non-zero")
print("  -> zero means the table is populated at runtime, not from the file" if nz == 0
      else "  -> has contents; rethink")

print()
print("=" * 84)
print("3. what a real static _ZTV looks like")
print("=" * 84)
shown = 0
for ea, nm in idautils.Names():
    if not nm.startswith("_ZTV"):
        continue
    seg = seg_of(ea)
    vals = [ida_bytes.get_dword(ea + 4 * i) for i in range(4)]
    refs = sum(1 for v in vals if v)
    print(f"  {nm:<52} {ea - BASE:#010x} seg {seg:<8} first4 {[hex(v) for v in vals]}")
    shown += 1
    if shown >= 5:
        break

print()
print("=" * 84)
print("4. xref status of runtime-registered actor builders")
print("=" * 84)
tot = zero = 0
for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    if not (nm.startswith("Actor_") or nm.endswith("_build") or "buildEPK14ActorBuildInfo" in nm):
        continue
    tot += 1
    n = 0
    xb = ida_xref.xrefblk_t()
    ok = xb.first_to(ea, ida_xref.XREF_ALL)
    while ok:
        n += 1
        ok = xb.next_to()
    if n == 0:
        zero += 1
print(f"  actor builder functions : {tot}")
print(f"  with zero xrefs         : {zero}"
      f"  ({100.0*zero/tot:.1f}%)" if tot else "  none found")
