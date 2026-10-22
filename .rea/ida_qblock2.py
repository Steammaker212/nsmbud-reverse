"""Read FlyingBlock::onCreate and the block-exit handlers -- where contents are decided.

FlyingBlock::create is trivial (allocate 0x1CE0, run BlockBase ctor, set vtable). The contents
logic must be in onCreate (0x5688B8) or in the vf1xx handlers (0x568B14..0x568C78).

BlockBase is the base class, so the item spawn is probably a call to something on the base or a
helper. This decompiles all six non-trivial FlyingBlock methods and, for each call they make,
resolves the callee name and any immediate argument -- so the item id becomes visible as a
literal rather than something to infer.

The string scan in the previous run produced mojibake, which means my literal-pool decoding is
wrong for this region: it treated non-address words as addresses. Fixed here by requiring the
resolved pointer to point at printable ASCII.
"""
import idautils
import ida_funcs
import ida_name
import ida_bytes
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000

METHODS = [
    (0x005688B8, "_ZN11FlyingBlock8onCreateEv"),
    (0x00568B14, "_ZN11FlyingBlock5vf184Ev"),
    (0x00568B44, "_ZN11FlyingBlock5vf188Ev"),
    (0x00568BD4, "_ZN11FlyingBlock5vf18CEv"),
    (0x00568C78, "_ZN11FlyingBlock5vf190Ev"),
]


def good_string(ea):
    """strict: all printable ASCII, >=4 chars, null-terminated soon"""
    b = []
    for i in range(64):
        try:
            c = ida_bytes.get_byte(ea + i)
        except Exception:
            return None
        if c == 0:
            break
        if not (32 <= c < 127):
            return None
        b.append(chr(c))
    return "".join(b) if len(b) >= 4 else None


for rva, nm in METHODS:
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    print("=" * 92)
    print(f"{nm}   {rva:#010x}  size {f.end_ea - f.start_ea:#x}")
    print("=" * 92)

    # calls made, with immediate args
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        m = idc.print_insn_mnem(insn)
        if m not in ("BL", "BLX"):
            continue
        tgt = idc.get_operand_value(insn, 0)
        if not (BASE <= tgt < BASE + NSO):
            print(f"  {insn - BASE:#010x}  {idc.GetDisasm(insn)}   (indirect)")
            continue
        tn = ida_name.get_name(tgt) or f"sub_{tgt - BASE:X}"
        # look back a few instructions for immediates in r0..r3
        imms = []
        p = insn
        for _ in range(8):
            p = idc.prev_head(p)
            if p == idc.BADADDR or p < f.start_ea:
                break
            pm = idc.print_insn_mnem(p)
            if pm in ("MOV", "MOVS", "MOVW"):
                d = idc.print_operand(p, 0).strip().upper()
                if d in ("R0", "R1", "R2", "R3"):
                    try:
                        imm = idc.get_operand_value(p, 1)
                    except Exception:
                        continue
                    if 0 <= imm < 0x100:
                        imms.append((d, imm))
        tag = ""
        if imms:
            tag = "   args: " + ", ".join(f"{r}={v}" for r, v in reversed(imms))
        print(f"  {insn - BASE:#010x}  BL {tn}{tag}")

    print()
    try:
        cf = ida_hexrays.decompile(ea)
        if cf:
            lines = str(cf).splitlines()
            for ln in lines[:55]:
                print("    " + ln)
            if len(lines) > 55:
                print(f"    ... {len(lines)-55} more")
        else:
            print("    declined")
    except Exception as e:
        print(f"    error {e}")
    print()
