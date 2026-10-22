"""READ BlockBase::getContents -- the definitive answer to "what item is in this block".

_ZN9BlockBase11getContentsEv at RVA 0x563294. This is the method the engine asks when a block is
hit, so whatever it returns IS the item id, and wherever it gets that from IS the source of the
block's contents.

Also reads:
  * BlockBase::spawnItemUp   (0x564BA8)  -- what it does with the id
  * BlockBase::spawnItemDown (0x564BC0)
  * the subclasses that override getContents, if any, since those are the special blocks

This settles the item question from the code, replacing the earlier wrong inference
("value 3 = Fire Flower"; actually index 1 = FireFlower and index 3 = IceFlower).
"""
import idautils
import ida_funcs
import ida_name
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

TARGETS = [
    (0x00563294, "_ZN9BlockBase11getContentsEv"),
    (0x00564BA8, "_ZN9BlockBase11spawnItemUpEv"),
    (0x00564BC0, "_ZN9BlockBase13spawnItemDownEv"),
]

for rva, label in TARGETS:
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    print("=" * 94)
    print(f"{label}   {rva:#010x}  size {(f.end_ea - f.start_ea) if f else 0:#x}")
    print("=" * 94)
    if not f:
        print("  no function")
        continue

    # instructions, full dump: these are small and every one matters
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        print(f"  {insn - BASE:#010x}  {idc.GetDisasm(insn)}")

    print()
    try:
        cf = ida_hexrays.decompile(ea)
        if cf:
            for ln in str(cf).splitlines():
                print("    " + ln)
        else:
            print("    declined")
    except Exception as e:
        print(f"    error {e}")
    print()

# who overrides getContents? look for functions with the same signature shape nearby,
# and for vtable slots pointing at 0x563294
print("=" * 94)
print("vtables containing BlockBase::getContents (slot identification)")
print("=" * 94)
want = 0x00563294
for seg_ea in idautils.Segments():
    nm = idc.get_segm_name(seg_ea)
    if nm == ".text":
        continue
    s = idc.get_segm_start(seg_ea)
    e = idc.get_segm_end(seg_ea)
    a = s
    while a + 4 <= e:
        import ida_bytes as ib
        if ib.get_dword(a) == want:
            print(f"  at {a - BASE:#010x} in {nm}")
        a += 4
