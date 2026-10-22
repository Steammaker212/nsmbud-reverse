"""Revert the 14 "_uses1" names: they are string-table artifacts, not real names.

The dominant-string rule produced names like

    0x00002bc0  ngTimeEv_uses1
    0x0002e24c  gl_VertexID_uses1
    0x0012a6d8  ail9WaveSoundE_uses1
    0x001aa9b8  ayTypeEPvjPNS0_10SubMixTypeENS_8TimeSpanEi_uses1

Those are not strings the game uses as identifiers. They are literal-pool words in .rodata holding
vertex data, mangled C++ type name fragments, or floating point that happens to decode as printable
ASCII. Naming a function after them is worse than leaving it `sub_*`.

This confirms the string-derived route is exhausted for this binary: the earlier 2,450 wrong SE_*
names, the 78 bogus Actor_*_build names, and now these 14 are three independent failures of the
same idea. The remaining 1,354 `*_ref` names stay as they are -- honest, if uninformative.

Reverts anything ending in `_uses1` back to sub_.
"""
import re
import idautils
import ida_name
import idaapi
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

reverted = []
for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    if not nm.endswith("_uses1"):
        continue
    old = nm
    if ida_name.set_name(ea, f"sub_{ea - BASE:X}", ida_name.SN_NOWARN):
        reverted.append((ea - BASE, old))

print(f"reverted {len(reverted)}:")
for rva, old in reverted:
    print(f"  {rva:#010x}  {old}")

idaapi.save_database("", 0)
print("saved")
