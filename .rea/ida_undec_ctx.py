"""Context needed to hand-write C for sub_60916CB4 (the one Hex-Rays refuses).

The function calls three subs and reads four global function-pointer slots:
    sub_609200A0(a3)
    sub_609200E0(a3)
    sub_60913708(a2, 7)
    off_60C790DC, off_60C790E4, off_60C78B38, off_60C790D4
    flt_60C5D5B0 / flt_60C5D5B4

Printing the first instructions of the three subs and resolving the four globals to their
initialisers identifies what this function is doing, which determines how to write it honestly in
C rather than transcribing instructions.
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

print("=" * 92)
print("callers of sub_60916CB4")
print("=" * 92)
tgt = BASE + 0x00916CB4
n = 0
for xr in idautils.XrefsTo(tgt, 0):
    f = ida_funcs.get_func(xr.frm)
    nm = ida_name.get_name(f.start_ea) if f else "?"
    print(f"  from {xr.frm - BASE:#010x}  type {xr.type}  in {nm}")
    n += 1
print(f"  total {n}")

for rva, label in ((0x009200A0, "sub_609200A0"), (0x009200E0, "sub_609200E0"),
                   (0x00913708, "sub_60913708")):
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    print()
    print("=" * 92)
    print(f"{label}  {rva:#010x}  {(f.end_ea - f.start_ea) if f else 0:#x} bytes")
    print("=" * 92)
    if f:
        for i, insn in enumerate(idautils.Heads(f.start_ea, min(f.end_ea, f.start_ea + 40))):
            print(f"  {insn - BASE:#010x}  {idc.GetDisasm(insn)}")

print()
print("=" * 92)
print("globals used as indirect call slots")
print("=" * 92)
for rva in (0x00C790DC, 0x00C790E4, 0x00C78B38, 0x00C790D4):
    v = ida_bytes.get_dword(BASE + rva)
    nm = ida_name.get_name(BASE + rva) or "(unnamed)"
    note = ""
    if BASE <= v < BASE + NSO:
        note = f"  -> {ida_name.get_name(v) or 'sub_'+format(v-BASE,'X')}"
    print(f"  {rva:#010x} {nm:<24} = {v:#010x}{note}")
    # xrefs to the slot tell who installs it
    for xr in list(idautils.XrefsTo(BASE + rva, 0))[:3]:
        f = ida_funcs.get_func(xr.frm)
        print(f"      written/read at {xr.frm - BASE:#010x} in "
              f"{(ida_name.get_name(f.start_ea) if f else '?')}")

print()
print("  flt_60C5D5B0 / +4:")
for i in range(4):
    v = ida_bytes.get_dword(BASE + 0x00C5D5B0 + i * 4)
    import struct
    print(f"    [{i}] {v:#010x} = {struct.unpack('<f', struct.pack('<I', v))[0]:.6g}")
