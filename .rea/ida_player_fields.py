"""DUMP PlayerBase_ctor and Player_ctor to harvest the verified Player field offsets.

These two constructors initialise the object, so their stores are the authoritative record of
which offsets exist and what size each field is. Combined with the offsets already established
from behaviour (mode byte, previous mode, collision height, body type), this gives a Player
layout header grounded in observed writes rather than guesswork.

Only offsets that a STR/STRB/STRH actually targets are reported, with the store width, because
width is the field size.
"""
import collections
import idautils
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

CTORS = [(0x0075DEFC, "PlayerBase_ctor"), (0x00794EC0, "Player_ctor")]

for rva, label in CTORS:
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    if not f:
        print(f"{rva:#x}: no function")
        continue
    print("=" * 92)
    print(f"{label}  {rva:#010x}  size {f.end_ea - f.start_ea:#x}")
    print("=" * 92)

    fields = collections.defaultdict(set)
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        m = idc.print_insn_mnem(insn)
        if not m.startswith("STR"):
            continue
        width = {"STRB": 1, "STRH": 2, "STR": 4, "STRD": 8}.get(m, 4)
        for opn in range(4):
            t = idc.get_operand_type(insn, opn)
            if t == idc.o_displ:
                off = idc.get_operand_value(insn, opn)
                if 0 < off < 0x8000:
                    fields[off].add(width)

    print(f"  {len(fields)} distinct offsets written")
    for off in sorted(fields):
        widths = "/".join(str(w) for w in sorted(fields[off]))
        print(f"    +{off:#06x} ({off:>5})  width {widths}")
    print()
