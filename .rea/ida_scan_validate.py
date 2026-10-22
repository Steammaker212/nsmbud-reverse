"""Validate the data-pointer scan against a function that IDA DOES see referenced.

The baseline just showed 66.5% of all functions have zero xrefs, including ItemNameTable_build
and Player_animSet_load which are certainly called. So "zero xrefs" is not evidence of anything
in this database, and my earlier conclusion that Player_setPowerupMode "cannot be shown to be
called at all" was overstated.

Before trusting any data scan, this validates the method on Player_ctor, which HAS 2 xrefs:
  * what are those 2 xref types?
  * does scanning .data/.rodata for its address (even and Thumb) find where it is registered?

If the scan finds Player_ctor's registration then the method works and the zeros for other
functions are real absences. If it does not, the scan is unreliable and I must stop drawing
conclusions from it.
"""
import idautils
import ida_funcs
import ida_bytes
import ida_name
import ida_xref
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

for rva, label in ((0x00794EC0, "Player_ctor"), (0x0075DEFC, "PlayerBase_ctor")):
    ea = BASE + rva
    print("=" * 84)
    print(f"{label} ({rva:#010x})")
    print("=" * 84)
    xb = ida_xref.xrefblk_t()
    ok = xb.first_to(ea, ida_xref.XREF_ALL)
    while ok:
        f = ida_funcs.get_func(xb.frm)
        print(f"  xref from {xb.frm - BASE:#010x}  type {xb.type}  code={xb.iscode}  "
              f"in {ida_name.get_name(f.start_ea) if f else '(data)'}")
        ok = xb.next_to()

    # data scan, both parities
    for parity, tag in ((0, "even"), (1, "thumb")):
        want = BASE + rva + parity
        hits = []
        for seg_ea in idautils.Segments():
            s = idc.get_segm_start(seg_ea)
            e = idc.get_segm_end(seg_ea)
            nm = idc.get_segm_name(seg_ea)
            if nm == ".text":
                continue
            a = s
            while a + 4 <= e:
                if ida_bytes.get_dword(a) == want:
                    hits.append((a, nm))
                a += 4
        print(f"  data scan {tag:<6} {want:#010x} -> {len(hits)} hit(s)")
        for a, nm in hits[:5]:
            print(f"      {a - BASE:#010x} in {nm}")

print()
print("=" * 84)
print("So: is the .data / vtable region even enumerated? sample some vtables")
print("=" * 84)
# look at the known profile/sprite table and a couple of _ZTV symbols
for rva in (0x00C7C304, 0x00014724):
    print(f"  {rva:#010x}  {ida_name.get_name(BASE + rva)}")
n_ztv = 0
for ea in idautils.Names():
    if ea[1].startswith("_ZTV"):
        n_ztv += 1
print(f"  _ZTV* symbols in database: {n_ztv}")
