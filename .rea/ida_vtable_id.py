"""Identify the Player vtable containing Player_setPowerupMode, and its slot index.

Two hits: 0xC24D08 and 0xC25468. Both sit in .data runs of code RVAs, i.e. vtables. The runs
share a prefix (_ZN10StageActor14splashLavaWave, splashPoison, isOffScreen) which is the
inherited StageActor head, then diverge -- consistent with two different Player-derived classes.

A vtable is dispatched as `LDR Rt,[obj]; LDR Rt,[Rt,#slot*4]; BLX Rt`, so if I find the slot
offset used to call this function I know exactly which virtual method it is. This:
  1. walks backwards from each hit to find the run's start (first non-code-RVA going back)
  2. reports the slot index within that run
  3. searches the code for that slot offset being loaded from a vtable
  4. checks the two dwords at run[-2], run[-1] which are the RTTI / offset-to-top fields
"""
import idautils
import ida_funcs
import ida_bytes
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
TEXT_LO, TEXT_HI = 0x288, 0x9AD3BC
HITS = [0x00C24D08, 0x00C25468]


def is_code_rva(v):
    return TEXT_LO <= v < TEXT_HI


def run_start(addr):
    a = addr
    while a - 4 >= 0:
        if is_code_rva(ida_bytes.get_dword(a - 4)):
            a -= 4
        else:
            break
    return a


def run_end(addr):
    a = addr
    while True:
        if is_code_rva(ida_bytes.get_dword(a + 4)):
            a += 4
        else:
            return a


for hit in HITS:
    ea = BASE + hit
    rs = run_start(ea)
    re = run_end(ea)
    slot = (ea - rs) // 4
    count = (re - rs) // 4 + 1
    print("=" * 92)
    print(f"vtable containing {hit:#010x}")
    print(f"  run {rs - BASE:#010x} .. {re - BASE:#010x}   {count} slots")
    print(f"  slot index of target: {slot}")
    print(f"  slot byte offset    : {slot * 4:#x}")
    print("  two dwords before run (RTTI / offset-to-top):")
    for d in (-8, -4):
        v = ida_bytes.get_dword(rs + d)
        print(f"    {rs + d - BASE:#010x}  {v:#010x}  {ida_name.get_name(BASE + v) or ''}")
    print("  first 6 slots:")
    for i in range(min(6, count)):
        v = ida_bytes.get_dword(rs + 4 * i)
        print(f"    [{i:3}] {v:#010x}  {ida_name.get_name(BASE + v) or ''}")
    print("  neighbouring slots around the target:")
    for i in range(max(0, slot - 3), min(count, slot + 4)):
        v = ida_bytes.get_dword(rs + 4 * i)
        mark = "  <== target" if 4 * i == ea - rs else ""
        print(f"    [{i:3}] {v:#010x}  {ida_name.get_name(BASE + v) or '':<40}{mark}")

    # find code loading this slot offset
    print(f"  code that loads [Rt,#{slot*4:#x}] (candidate virtual call sites):")
    n = 0
    for insn in idautils.Heads(BASE + TEXT_LO, BASE + TEXT_HI):
        if idc.print_insn_mnem(insn) != "LDR":
            continue
        for opn in range(3):
            if idc.get_operand_type(insn, opn) == idc.o_displ:
                if idc.get_operand_value(insn, opn) == slot * 4:
                    f = ida_funcs.get_func(insn)
                    print(f"    {insn - BASE:#010x}  {idc.GetDisasm(insn)}"
                          f"   in {ida_name.get_name(f.start_ea) if f else '?'}")
                    n += 1
                    break
        if n > 12:
            print("    ...")
            break
    if n == 0:
        print("    (none)")
    print()
