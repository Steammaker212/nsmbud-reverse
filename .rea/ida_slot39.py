"""Resolve slot 305/306's callee (vtable+0x9C) and the mode-indexed tables.

From the small-slot dump:

slot 305 (0x7AA41C):
    LDR R2,[R0]          ; vtable
    LDR R1,[R0,#0x528]   ; mode
    LDR R2,[R2,#0x9C]    ; slot 39
    BLX R2               ; call slot39(this, mode)
    LDR R1,=unk_60B0C8F0
    LDR R0,[R1,R0,LSL#2] ; index a table by the RETURN VALUE

So slot 39 is a mode->index mapper, and unk_60B0C8F0 is a table indexed by its result. That is a
classic "power-up -> model/scale/offset row" lookup, and it is exactly the kind of thing that makes
the Fire Flower render like a mushroom if the index is wrong.

This resolves:
  * Player_vtable_a slot 39's target (the mode->index mapper)
  * the contents of unk_60B0C8F0
  * the contents of unk_60B0CE34 and unk_60C253B4 used by slot 260 (the +0x524 path)
"""
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
VT_A = 0x00C24C74

print("=" * 92)
print("Player_vtable_a slot 39 (offset 0x9C)")
print("=" * 92)
slot39 = ida_bytes.get_dword(BASE + VT_A + 0x9C)
print(f"  target {slot39:#010x}  {ida_name.get_name(BASE + slot39) or '(unnamed)'}")
f = ida_funcs.get_func(BASE + slot39)
if f:
    print(f"  size {f.end_ea - f.start_ea} bytes")
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        print(f"    {insn - BASE:#010x}  {idc.GetDisasm(insn)}")
print()

# tables
for tab, label, n in ((0x00B0C8F0, "unk_60B0C8F0", 24),
                      (0x00B0CE34, "unk_60B0CE34", 12),
                      (0x00C253B4, "unk_60C253B4", 4)):
    print("=" * 92)
    print(f"{label} @ {tab:#010x}  (first {n} dwords)")
    print("=" * 92)
    for i in range(n):
        v = ida_bytes.get_dword(BASE + tab + i * 4)
        # try to interpret as code pointer, small int, or float
        note = ""
        if 0x288 <= v < 0x9AD3BC:
            note = f"  -> code {ida_name.get_name(BASE + v) or 'sub_'+format(v,'X')}"
        else:
            import struct
            fl = struct.unpack("<f", struct.pack("<I", v))[0]
            if v < 0x10000:
                note = f"  (int {v})"
            elif abs(fl) > 1e-6 and abs(fl) < 1e6:
                note = f"  (float {fl:.6g})"
        print(f"  [{i:>2}] {v:#010x}{note}")
    print()
