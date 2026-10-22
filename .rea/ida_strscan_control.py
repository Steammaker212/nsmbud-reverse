"""POSITIVE CONTROL for the string scanner, which just reported zero.

sub_604F9090 is KNOWN to reference "P_Kinoko_00", "P_FireFlower_00" and 18 more, and it lives at
0x4F9090, inside the "powerup" range the focus scan used. So a scan of that range that reports
ZERO string-referencing functions is wrong, and the failure is in the scanner, not in the data.

This runs the same scan logic on that one function and prints the raw instruction/operand values so
the bug is visible. Likely cause: `idc.get_operand_value(insn, 1)` is the wrong operand for the
`LDR Rx, =literal` form, or the literal-pool displacement resolves differently than assumed.
"""
import idautils
import ida_bytes
import ida_funcs
import ida_name
import ida_bytes as ib
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000

ea = BASE + 0x004F9090
f = ida_funcs.get_func(ea)
print(f"sub_604F9090 at {ea - BASE:#010x}, {f.end_ea - f.start_ea:#x} bytes")
print()

print("first 16 instructions with ALL operand values:")
for i, insn in enumerate(idautils.Heads(f.start_ea, min(f.end_ea, f.start_ea + 16))):
    op0 = idc.get_operand_value(insn, 0)
    op1 = idc.get_operand_value(insn, 1)
    print(f"  {insn - BASE:#010x}  {idc.GetDisasm(insn):<46} op0={op0:#x} op1={op1:#x}")

print()
print("direct string xrefs to the P_FireFlower_00 bytes:")
s_ea = BASE + 0x00ACDE20
for xr in list(idautils.XrefsTo(s_ea, 0))[:6]:
    fn = ida_funcs.get_func(xr.frm)
    print(f"  from {xr.frm - BASE:#010x} type={xr.type} in "
          f"{(ida_name.get_name(fn.start_ea) if fn else '?')}")

print()
print("does the focus-scan predicate match any instruction here?")
hit = 0
for insn in idautils.Heads(f.start_ea, f.end_ea):
    op1 = idc.get_operand_value(insn, 1)
    if op1 and BASE <= op1 < BASE + NSO:
        w = ida_bytes.get_dword(op1)
        if BASE <= w < BASE + NSO:
            hit += 1
print(f"  instructions whose operand1 is an in-image pointer: {hit}")

print()
print("alternative: scan for the literal via the disassembly text ('=...'):")
n = 0
for insn in idautils.Heads(f.start_ea, f.end_ea):
    d = idc.GetDisasm(insn)
    if "=" in d:
        n += 1
        disp = int(d.split("=")[1].split(";")[0].strip().lstrip("#"), 16)
        w = ib.get_dword(disp)
        print(f"  {insn - BASE:#010x}  {d}   -> dword at disp = {w:#x}")
print(f"  '=' instructions: {n}")
