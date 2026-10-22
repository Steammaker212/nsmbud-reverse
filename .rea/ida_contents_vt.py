"""Confirm the block-param layout and that getContents is a vtable method.

getContents decodes:

        HIBYTE(param) & 0x10 | param & 0xF

HIBYTE is bits 24..31, so `& 0x10` selects **bit 28**, and the result is
    item_id = (param & 0xF) + (bit28 ? 16 : 0)      -> 0..31

onCreate independently uses the same word:
    *(a1+7304) = *(_BYTE *)(a1 + 28)                 ; the whole high byte
    movement   = table[(param >> 2) & 4]             ; bit 4

so the param word at object+24 has at least:
    bits 0..3   block contents item id
    bit  4      movement variant (indexes the {3,4} table)
    bit 28      item id +16

This script does three checks:
  1. getContents appears in at least one vtable (as RVA, both parities) -- proving it is the
     virtual "what is in this block" hook rather than a helper nobody calls
  2. every caller of spawnItemUp / getContents, so the hit path is visible
  3. print the vtable slot number, which documents the interface position
"""
import idautils
import ida_funcs
import ida_name
import ida_bytes
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
TEXT_LO, TEXT_HI = 0x288, 0x9AD3BC

TARGETS = [
    (0x00563294, "BlockBase::getContents"),
    (0x00564BA8, "BlockBase::spawnItemUp"),
    (0x00564BC0, "BlockBase::spawnItemDown"),
]


def is_code_rva(v):
    return TEXT_LO <= v < TEXT_HI


for rva, label in TARGETS:
    hits = []
    for want, tag in ((rva, "even"), (rva | 1, "thumb")):
        for seg_ea in idautils.Segments():
            nm = idc.get_segm_name(seg_ea)
            if nm == ".text":
                continue
            s = idc.get_segm_start(seg_ea)
            e = idc.get_segm_end(seg_ea)
            a = s
            while a + 4 <= e:
                if ida_bytes.get_dword(a) == want:
                    hits.append((a, nm, tag))
                a += 4
    print("=" * 88)
    print(f"{label}  {rva:#010x}  -> {len(hits)} table hit(s)")
    print("=" * 88)
    for a, nm, tag in hits:
        # find run start to compute the slot
        rs = a
        while rs - 4 > 0 and is_code_rva(ida_bytes.get_dword(rs - 4)):
            rs -= 4
        slot = (a - rs) // 4
        print(f"  at {a - BASE:#010x} in {nm}  ({tag})  run start {rs - BASE:#010x}  slot {slot}")
    if not hits:
        print("  (no table reference -- may be inlined or only called directly)")
    print()

    # direct callers
    callers = list(idautils.CodeRefsTo(BASE + rva, 0))
    print(f"  direct code callers: {len(callers)}")
    for c in callers[:10]:
        f = ida_funcs.get_func(c)
        print(f"    from {c - BASE:#010x}  {ida_name.get_name(f.start_ea) if f else '?'}")
    print()
