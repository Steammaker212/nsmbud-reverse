"""Name the power-up setter and confirm how it uses the mode tables.

sub_60795CDC is the general power-up transition:

    *(a1 + 11384) = *(a1 + 1320);   // +0x2C78 = previous mode
    *(a1 + 1320)  = a2;             // +0x528   = new mode
    sub_6078E608(*(a1 + 11368));    // reset something
    v5 = *(a1 + 1320);
    v6 = flt_60B0C2BC[v5];          // height table, indexed by MODE directly
    *(float *)(a1 + 1244) = v6;

That last line is the important one for the project: it indexes the height table with the
mode byte, using the mode as a *direct* 0-based index into a dword table. So mode 10 reads
entry 10, which is past the ten retail entries. This confirms from the cleanest possible
source -- the setter itself -- that a Hammer mode needs an 11th table entry, and that the
readers do not clamp.

Names applied here:
  sub_60795CDC -> Player_setPowerupMode       (saves old mode, writes new, applies height)
  sub_6078E608 -> (called on mode change; left unnamed, purpose not yet established)
"""
import idautils
import ida_funcs
import ida_name
import idc
import ida_auto
import idaapi

idc.auto_wait()
BASE = 0x60000000

APPLY = [
    (0x00795CDC, "Player_setPowerupMode"),
]
for rva, name in APPLY:
    ea = BASE + rva
    cur = ida_name.get_name(ea) or ""
    ok = ida_name.set_name(ea, name, ida_name.SN_NOWARN)
    print(f"  {rva:#010x}  {cur or '(none)'} -> {name}  ok={ok}")

# confirm the direct index claim
print()
print("verify the height-table indexing in the setter:")
for insn in idautils.Heads(BASE + 0x00795CDC, BASE + 0x00795CDC + 0x40):
    print(f"  {insn - BASE:#010x}  {idc.GetDisasm(insn)}")

idaapi.save_database("", 0)
print("saved")
