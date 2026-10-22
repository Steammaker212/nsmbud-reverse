"""FIND the setter through its THUMB pointer, and name the item gate truthfully.

Two things.

1. Player_setPowerupMode (0x795CDC) has zero code xrefs and its literal address appears nowhere
   in data. That is suspicious, and the likely explanation is the obvious one I missed: **ARM
   Thumb function pointers have bit 0 set**. A vtable slot holding this function contains
   0x60795CDD, not 0x60795CDC, so searching for the even address could never find it.

   This searches data for BASE+rva+1 as well, and reports where it lives. If it sits inside a
   vtable, the neighbouring slots identify the class and the slot index identifies the virtual
   method -- which gives the real caller for free.

2. Naming. The gate sub_60465E4C returns dword_60B0267C[a2] -- a table of small ints
   [0]=0 [1]=3 [2]=7 [3]=0 [4]=1 [5]=4 [6]=6 [7]=5 [8]=2 [9]=2 [10]=8 [11]=9 -- conditioned on
   the mode of player `a3` (a3>=4 is forced to 0, so a3 is a 4-player slot index; a3==15 means
   no player). What the table's values *mean* is not established, so the name must not claim
   it. `ItemId_resolveGuardedByPlayerMode` states only what the code does.
"""
import idautils
import ida_funcs
import ida_bytes
import ida_name
import ida_xref
import idc
import ida_auto
import idaapi

idc.auto_wait()
BASE = 0x60000000

# ---------- part 1: thumb-bit pointer search ----------
print("=" * 92)
print("searching data for Thumb pointers to interesting functions")
print("=" * 92)

TARGETS = [
    (0x00795CDC, "Player_setPowerupMode"),
    (0x004F2044, "ItemNameTable_build"),
    (0x00465E4C, "gate"),
]

for rva, label in TARGETS:
    for thumb in (1, 0):
        want = BASE + rva + thumb
        hits = []
        for seg_ea in idautils.Segments():
            s = idc.get_segm_start(seg_ea)
            e = idc.get_segm_end(seg_ea)
            segname = idc.get_segm_name(seg_ea)
            a = s
            while a + 4 <= e:
                if ida_bytes.get_dword(a) == want:
                    hits.append((a, segname))
                a += 4
        tag = "thumb" if thumb else "even "
        print(f"  {label:<24} {tag} {want:#010x}  -> {len(hits)} hit(s)")
        for a, segname in hits[:6]:
            print(f"        at {a - BASE:#010x} in {segname}")

# ---------- part 2: naming ----------
print()
print("=" * 92)
print("naming")
print("=" * 92)

APPLY = [
    (0x00465E4C, "ItemId_resolveGuardedByPlayerMode"),
]
for rva, name in APPLY:
    ea = BASE + rva
    cur = ida_name.get_name(ea) or ""
    ok = ida_name.set_name(ea, name, ida_name.SN_NOWARN)
    print(f"  {rva:#010x}  {cur or '(none)'} -> {name}  ok={ok}")

# confirm the gate field width one more time, directly
print()
print("  gate reads the mode as:")
for insn in idautils.Heads(BASE + 0x00465F2C, BASE + 0x00465F50):
    print(f"    {insn - BASE:#010x}  {idc.GetDisasm(insn)}")

idaapi.save_database("", 0)
print("saved")
