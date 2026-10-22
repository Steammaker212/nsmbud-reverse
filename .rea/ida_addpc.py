"""Find the two functions where Hex-Rays emits `__asm { ADD PC, R0, R1 }` and read the real code.

A computed jump `ADD PC,R0,R1` is an indirect branch that Hex-Rays could not fold into a switch. It
appears in the decompiled output as a literal __asm block, which violates the "no arm asm" goal.

Before replacing it I need to know what the jump actually does, because guessing a switch target set
would be inventing behaviour. The two candidate explanations are very different:

  (a) a genuine indirect branch whose targets are computed at runtime -- expressible in C only as a
      function-pointer call, and I would need to know the table; or
  (b) a Hex-Rays artefact: it failed to recognise a jump table it CAN see, and emitted both the raw
      jump and a correct `switch` over the same variable immediately afterwards.

The second would make the __asm line redundant. The switch right after it in actor_construction.c is
strong evidence for (b), but I should confirm against the disassembly rather than assume.

This locates the containing functions, prints their disassembly around the computed jump, and reports
whether a jump table is identifiable.
"""
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

hits = []
for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        d = idc.GetDisasm(insn)
        if d.startswith("ADD") and "PC" in d.split(",")[0] + d:
            # matches ADD PC, ...
            if d.replace(" ", "").startswith("ADD") and d.split()[1].startswith("PC"):
                hits.append((ea, insn, d))

print(f"functions with an ADD-to-PC: {len(hits)}")
for ea, insn, d in hits:
    print()
    print("=" * 92)
    print(f"{ida_name.get_name(ea)}  func {ea - BASE:#010x}  jump at {insn - BASE:#010x}  {d}")
    print("=" * 92)
    f = ida_funcs.get_func(ea)
    lo = max(f.start_ea, insn - 0x50)
    hi = min(f.end_ea, insn + 0x60)
    for x in idautils.Heads(lo, hi):
        mark = "  <<<" if x == insn else ""
        print(f"  {x - BASE:#010x}  {idc.GetDisasm(x)}{mark}")
    # what does the jump read?
    print()
    print("  nearby data references (possible jump table):")
    for x in idautils.Heads(f.start_ea, f.end_ea):
        d2 = idc.GetDisasm(x)
        if "=" in d2 and ("off_" in d2 or "jpt_" in d2 or "dword_" in d2):
            print(f"    {x - BASE:#010x}  {d2}")
