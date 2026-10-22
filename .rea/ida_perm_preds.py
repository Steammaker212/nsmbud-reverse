"""FIND the player's power-up PERMISSION queries: small functions that read mode and return bool.

The Fire Flower symptom is "it appears and acts like a mushroom", which is a *capability* question,
not a spawn question. The engine almost certainly has small predicate functions of the form

    bool canX(Player *p) { m = p->mode; return (1 << m) & MASK; }

Earlier work established `ItemId_resolveGuardedByPlayerMode` is exactly this shape
(`MOVW R1,#0x1FB; TST R2,R1,LSR R0` with index mode-1). So there is a family of them, and each
encodes which power-ups may do a thing.

This finds every function that:
  * reads [Rx, #0x528]  (mode)
  * is small (<= 400 bytes)
  * has a bitmask-test instruction (TST / AND with a shifted register or immediate)
  * returns a boolean

For each, it decodes the mask and the index base, so the permitted mode set is explicit. That
turns "why can't I shoot" into "which predicate excludes mode 1".

Output: address, size, mask, whether index is mode or mode-1, and the resulting allowed modes.
"""
import re
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000


def imm12(d):
    """extract #0x.. or #decimal immediate from a disassembly string"""
    m = re.search(r"#(-?0x[0-9A-Fa-f]+|-?\d+)", d)
    if not m:
        return None
    return int(m.group(1), 0)


cands = []
for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    size = f.end_ea - f.start_ea
    if not (8 <= size <= 400):
        continue
    heads = list(idautils.Heads(f.start_ea, f.end_ea))
    if not heads:
        continue
    reads_mode = False
    masks = []
    for insn in heads:
        d = idc.GetDisasm(insn)
        if "#0x528]" in d and ("LDR" in d):
            reads_mode = True
        if d.startswith(("TST", "ANDS", "AND ", "BIC")):
            v = imm12(d)
            if v is not None and 0 < v < 0x10000:
                masks.append((insn - BASE, d, v))
    if not reads_mode or not masks:
        continue
    cands.append((ea - BASE, size, masks))

print("=" * 96)
print(f"mode-reading predicates with a bitmask test: {len(cands)}")
print("=" * 96)
for rva, size, masks in sorted(cands, key=lambda x: x[0]):
    nm = ida_name.get_name(BASE + rva) or f"sub_{rva:X}"
    print(f"  {rva:#010x}  {size:>4} b  {nm}")
    for site, d, v in masks[:4]:
        bits = [i for i in range(16) if v & (1 << i)]
        print(f"      {site:#010x}  {d:<34} mask={v:#06x} bits={bits}")
