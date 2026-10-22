"""Do _ZTV (vtable) symbols exist? -- corrected for idautils.Names() returning tuples.

idautils.Names() yields (ea, name) pairs, not bare addresses.

This decides whether vtable naming can be sound. The FireballBase vtable at 0xBD22A0 was reached
because a global at 0x60C658A8 was already named; if the database also carries _ZTV<class> symbols
then vtable starts are authoritative and <Class>_vf<slot> is a true statement. If it does not, then
vtable starts are not recoverable statically and that naming route is closed for good.
"""
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000


def seg_of(rva):
    for s in idautils.Segments():
        if idc.get_segm_start(s) - BASE <= rva < idc.get_segm_end(s) - BASE:
            return idc.get_segm_name(s)
    return "?"


ztv = [(ea - BASE, nm) for ea, nm in idautils.Names() if nm.startswith("_ZTV")]
print("=" * 92)
print(f"_ZTV symbols: {len(ztv)}")
print("=" * 92)
for rva, nm in sorted(ztv)[:40]:
    w = ida_bytes.get_dword(BASE + rva)
    print(f"  {rva:#010x}  [{seg_of(rva)}]  slot0={w:#010x}  {nm}")

print()
print("=" * 92)
print("validation: the already-proven FireballBase vtable 0xBD22A0")
print("=" * 92)
print(f"  name       : {ida_name.get_name(BASE + 0x00BD22A0) or '(none)'}")
print(f"  segment    : {seg_of(0x00BD22A0)}")
print(f"  slot0 target: {ida_bytes.get_dword(BASE + 0x00BD22A0):#010x} "
      f"{ida_name.get_name(BASE + ida_bytes.get_dword(BASE + 0x00BD22A0))}")
for xr in idautils.XrefsTo(BASE + 0x00BD22A0, 0):
    f = ida_funcs.get_func(xr.frm)
    print(f"  xref from {xr.frm - BASE:#010x} in "
          f"{ida_name.get_name(f.start_ea) if f else '?'}")

print()
print("=" * 92)
print("symbols containing 'vtable'")
print("=" * 92)
n = 0
for ea, nm in idautils.Names():
    if "vtable" in nm:
        n += 1
        if n <= 25:
            print(f"  {ea - BASE:#010x}  {nm}")
print(f"  total: {n}")

print()
print("=" * 92)
print("the named global that produced the FireballBase vtable")
print("=" * 92)
for a in (0x00C658A8,):
    print(f"  {a:#010x}: name={ida_name.get_name(BASE + a) or '(none)'} "
          f"value={ida_bytes.get_dword(BASE + a):#x}")
    for xr in idautils.XrefsTo(BASE + a, 0):
        f = ida_funcs.get_func(xr.frm)
        print(f"      ref from {xr.frm - BASE:#010x} in "
              f"{ida_name.get_name(f.start_ea) if f else '?'}")
