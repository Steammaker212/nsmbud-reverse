"""What is the gate's return table, and who calls the gate?

sub_60465E4C returns `dword_60B0267C[a2]` on success and 0 on failure. That means it is a
LOOKUP with a permission precondition -- it does not write the player's mode byte. If that is
right, then the item_grant.hks hook is on a permission query, not on the grant, which would
explain why changing its mask produced no behavioural change for the fire flower.

This checks the two facts that settle it:
  1. the contents of dword_60B0267C, which tell us what a2 indexes
  2. the callers of sub_60465E4C, and whether any of them write +0x528
"""
import idautils
import ida_funcs
import ida_name
import ida_bytes
import ida_xref
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

GATE = 0x00465E4C
TABLE = 0x00B0267C

print("=" * 92)
print(f"TABLE dword_60B0267C at {TABLE:#x}")
print("=" * 92)
for i in range(40):
    v = ida_bytes.get_dword(BASE + TABLE + 4 * i)
    note = ""
    if 0x60000000 <= v < 0x61000000:
        nm = ida_name.get_name(v)
        note = f"  -> {nm}" if nm else ""
    print(f"  [{i:2}] {v:#010x}{note}")

print()
print("=" * 92)
print(f"CALLERS of sub_60465E4C ({GATE:#x})")
print("=" * 92)
callers = []
xb = ida_xref.xrefblk_t()
ok = xb.first_to(BASE + GATE, ida_xref.XREF_ALL)
while ok:
    callers.append((xb.frm, xb.type))
    ok = xb.next_to()
print(f"  {len(callers)} reference(s)")
for frm, t in callers:
    f = ida_funcs.get_func(frm)
    fn = (f.start_ea - BASE) if f else None
    print(f"    from {frm - BASE:#010x}  type {t}  func {fn if fn is None else hex(fn)} "
          f"{ida_name.get_name(f.start_ea) if f else ''}")

# does any caller write +0x528?
print()
print("=" * 92)
print("Do the callers write the mode byte +0x528?")
print("=" * 92)
for frm, t in callers:
    f = ida_funcs.get_func(frm)
    if not f:
        continue
    writes = []
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        m = idc.print_insn_mnem(insn)
        if not m.startswith("STR"):
            continue
        for opn in range(4):
            if idc.get_operand_type(insn, opn) in (idc.o_displ, idc.o_phrase):
                if idc.get_operand_value(insn, opn) == 0x528:
                    writes.append((insn - BASE, idc.GetDisasm(insn)))
    print(f"  caller {f.start_ea - BASE:#010x} {ida_name.get_name(f.start_ea)}: "
          f"{len(writes)} write(s) to +0x528")
    for r, d in writes:
        print(f"      {r:#010x}  {d}")

print()
print("=" * 92)
print("Caller pseudocode")
print("=" * 92)
for frm, t in callers:
    f = ida_funcs.get_func(frm)
    if not f:
        continue
    print(f"--- {f.start_ea - BASE:#010x}  {ida_name.get_name(f.start_ea)} ---")
    try:
        cf = ida_hexrays.decompile(f.start_ea)
        if cf:
            for ln in str(cf).splitlines()[:45]:
                print("  " + ln)
        else:
            print("  declined")
    except Exception as e:
        print(f"  error {e}")
    print()
