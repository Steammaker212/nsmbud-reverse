"""DO _ZTV (vtable) SYMBOLS EXIST in this database, and where do they point?

This is the question that decides whether vtable-based naming can be done soundly. Previous rounds
failed by GUESSING where a vtable starts. But the binary may already tell us: the global at
0x60C658A8 plus 8 is FireballBase's vtable (0xBD22A0), and that global was NAMED -- which means at
some point vtables were registered with their addresses.

If IDA (or an earlier pass) has `_ZTV<class>` symbols, then:
  * the vtable address is authoritative, not guessed
  * slot indices are exact
  * <Class>_vf<slot> becomes a true statement

This enumerates every name matching _ZTV, prints its address and first few slots, and reports how
many are inside .rodata/.data. It also checks whether the FireballBase vtable address 0xBD22A0 sits
at a _ZTV symbol, which validates the whole idea against a case already proven.
"""
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000

ztv = []
for ea, nm in [(ea, ida_name.get_name(ea) or "") for ea in idautils.Names()]:
    if nm.startswith("_ZTV"):
        ztv.append((ea - BASE, nm))

print("=" * 92)
print(f"_ZTV symbols: {len(ztv)}")
print("=" * 92)
for rva, nm in sorted(ztv)[:40]:
    w = ida_bytes.get_dword(BASE + rva)
    seg = "?"
    for s in idautils.Segments():
        if idc.get_segm_start(s) - BASE <= rva < idc.get_segm_end(s) - BASE:
            seg = idc.get_segm_name(s)
    print(f"  {rva:#010x}  [{seg}]  slot0={w:#010x}  {nm}")

# does 0xBD22A0 have a _ZTV name?
print()
print("=" * 92)
print("validation against the already-proven FireballBase vtable 0xBD22A0")
print("=" * 92)
print(f"  name at 0xBD22A0: {ida_name.get_name(BASE + 0x00BD22A0) or '(none)'}")
for xr in idautils.XrefsTo(BASE + 0x00BD22A0, 0):
    f = ida_funcs.get_func(xr.frm)
    print(f"  xref from {xr.frm - BASE:#010x} in {ida_name.get_name(f.start_ea) if f else '?'}")

# what names exist in the data segments that mention "vtable"?
print()
print("=" * 92)
print("any symbol containing 'vtable' (our own earlier naming)")
print("=" * 92)
n = 0
for ea in idautils.Names():
    nm = ea[1] if isinstance(ea, tuple) else ""
    if "vtable" in nm:
        n += 1
        if n <= 20:
            print(f"  {ea[0] - BASE:#010x}  {nm}")
print(f"  total: {n}")
