"""FIND where FlyingBlock actually spawns its item -- the hit handlers.

onCreate sets object+7300 from the table {3,4} at 0xAF2188, but that value is only ever
compared to 3 to choose FLOAT positions (-32.0 vs -18.0). So +7300 is a shape/layout selector,
NOT the item id. Good thing to catch before documenting it as the item.

The item is spawned when the block is hit. For a block actor those handlers are the vf1xx
overrides:
    0x568B14 vf184
    0x568B44 vf188
    0x568BD4 vf18C
    0x568C78 vf190

This decompiles each and lists every call with its immediate arguments, resolving callee names,
so an item-spawn call and its id become visible. It also resolves the two functions onCreate
calls (sub_60563C28, sub_605D0024) in case one of them is the spawner.
"""
import idautils
import ida_funcs
import ida_name
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000

TARGETS = [
    (0x00568B14, "FlyingBlock::vf184"),
    (0x00568B44, "FlyingBlock::vf188"),
    (0x00568BD4, "FlyingBlock::vf18C"),
    (0x00568C78, "FlyingBlock::vf190"),
    (0x00563C28, "sub_60563C28 (called by onCreate)"),
    (0x005D0024, "sub_605D0024 (called by onCreate)"),
]

for rva, label in TARGETS:
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    if not f:
        print(f"{label}: no function at {rva:#x}")
        continue
    print("=" * 94)
    print(f"{label}   {rva:#010x}  size {f.end_ea - f.start_ea:#x}")
    print("=" * 94)

    for insn in idautils.Heads(f.start_ea, f.end_ea):
        m = idc.print_insn_mnem(insn)
        if m not in ("BL", "BLX"):
            continue
        tgt = idc.get_operand_value(insn, 0)
        imms = []
        p = insn
        for _ in range(10):
            p = idc.prev_head(p)
            if p == idc.BADADDR or p < f.start_ea:
                break
            if idc.print_insn_mnem(p) in ("MOV", "MOVS", "MOVW"):
                d = idc.print_operand(p, 0).strip().upper()
                if d in ("R0", "R1", "R2", "R3"):
                    try:
                        imm = idc.get_operand_value(p, 1)
                    except Exception:
                        continue
                    if 0 <= imm < 0x200:
                        imms.append((d, imm))
        if BASE <= tgt < BASE + NSO:
            tn = ida_name.get_name(tgt) or f"sub_{tgt - BASE:X}"
            tag = ("   args: " + ", ".join(f"{r}={v}" for r, v in reversed(imms))) if imms else ""
            print(f"  {insn - BASE:#010x}  BL {tn}{tag}")
        else:
            print(f"  {insn - BASE:#010x}  {idc.GetDisasm(insn)}")

    print()
    try:
        cf = ida_hexrays.decompile(ea)
        if cf:
            lines = str(cf).splitlines()
            for ln in lines[:48]:
                print("    " + ln)
            if len(lines) > 48:
                print(f"    ... {len(lines)-48} more")
        else:
            print("    declined")
    except Exception as e:
        print(f"    error {e}")
    print()
