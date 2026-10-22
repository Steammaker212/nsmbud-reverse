"""FIND THE INVOKER of vtable slot 37 the correct way: follow the vtable pointer.

The wrong way (already tried) was to search for `LDR Rt,#0x94`, which matches any struct with a
field at that offset. The right way is to find the *dispatch sequence*:

    LDR  Rt, [Robj]            ; load vtable pointer from the object
    LDR  Rt, [Rt, #0x94]       ; load slot 37
    BLX  Rt                    ; call

So: for every function in .text, look for a `LDR Rv,[Rn]` where Rn held an object, followed
within a few instructions by `LDR Rv2,[Rv,#0x94]` and then an indirect call. That triple is the
signature.

Rather than model registers fully, this does a linear scan for the exact idiom: an LDR with
offset 0x94 whose base register was loaded from memory in the preceding few instructions, and
whose result is BLX'd / BL'd or moved then called. It reports every candidate with the full
instruction window so the result can be judged by eye, which is the only reliable way here.
"""
import idautils
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
TEXT_LO, TEXT_HI = 0x288, 0x9AD3BC

SLOT_OFF = 0x94


def reg_of(text):
    """extract the destination register from an operand string like 'R3'"""
    t = text.strip().upper()
    return t if t.startswith("R") and t[1:].isdigit() else None


candidates = []
for insn in idautils.Heads(BASE + TEXT_LO, BASE + TEXT_HI):
    if idc.print_insn_mnem(insn) != "LDR":
        continue
    # destination
    dst = reg_of(idc.print_operand(insn, 0))
    if not dst:
        continue
    # must be [Rn,#0x94] with no writeback
    if idc.get_operand_type(insn, 1) not in (idc.o_displ, idc.o_phrase):
        continue
    off = idc.get_operand_value(insn, 1)
    if off != SLOT_OFF:
        continue
    base_reg = idc.print_operand(insn, 1).split("[")[1].split(",")[0].strip().upper()
    if not base_reg.startswith("R"):
        continue

    # walk back: was base_reg loaded from memory recently? (vtable pointer load)
    vtable_load = None
    p = insn
    for _ in range(12):
        p = idc.prev_head(p)
        if p == idc.BADADDR:
            break
        if idc.print_insn_mnem(p) == "LDR":
            if reg_of(idc.print_operand(p, 0)) == base_reg:
                vtable_load = p
                break
        # if base_reg is overwritten, give up
        if reg_of(idc.print_operand(p, 0)) == base_reg and \
                not idc.print_insn_mnem(p).startswith("LDR"):
            break

    # walk forward: is dst called indirectly?
    called = None
    q = insn
    for _ in range(10):
        q = idc.next_head(q)
        if q == idc.BADADDR:
            break
        m = idc.print_insn_mnem(q)
        if m in ("BLX", "BL", "BX") and idc.print_operand(q, 0).strip().upper() == dst:
            called = q
            break
        if m == "MOV" and reg_of(idc.print_operand(q, 1)) == dst:
            dst = reg_of(idc.print_operand(q, 0)) or dst

    if vtable_load is not None and called is not None:
        f = ida_funcs.get_func(insn)
        candidates.append((f.start_ea if f else 0, insn, vtable_load, called))

print("=" * 96)
print(f"DISPATCH SEQUENCES for vtable slot 37 ([Rt,#{SLOT_OFF:#x}] then indirect call)")
print("=" * 96)
print(f"  {len(candidates)} candidate(s)")

by_func = {}
for fstart, insn, vload, call in candidates:
    by_func.setdefault(fstart, []).append((insn, vload, call))

for fstart in sorted(by_func):
    f = ida_funcs.get_func(fstart)
    if f is None:
        print()
        print(f"  {fstart - BASE:#010x}  (no function bounds; skipped)")
        continue
    print()
    print(f"  {fstart - BASE:#010x}  {ida_name.get_name(fstart) or '':<44} "
          f"size {f.end_ea - f.start_ea:#x}")
    for insn, vload, call in by_func[fstart]:
        print(f"    vtable load {vload - BASE:#010x}  slot load {insn - BASE:#010x}  "
              f"call {call - BASE:#010x}")
        for x in idautils.Heads(max(fstart, vload - 4), min(f.end_ea, call + 4)):
            mark = ""
            if x == vload:
                mark = "   <-- vtable"
            elif x == insn:
                mark = "   <-- slot 37"
            elif x == call:
                mark = "   <-- CALL"
            print(f"        {x - BASE:#010x}  {idc.GetDisasm(x)}{mark}")

out = []
for line in []:
    out.append(line)
