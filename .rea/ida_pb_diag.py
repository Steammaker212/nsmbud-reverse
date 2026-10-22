"""WHY does PlayerBase claim sub-objects at +0x1BE0..+0x2BF0 when its fields end at +0x52C?

sizeof(PlayerBase) went from a validated 0x52C to 0x27C0 as soon as sub-objects were merged. One of
the two results must be wrong, and the store-derived field map is the validated one, so the suspect
is sub-object detection.

The detector accepts:
    MOVW R0,#off ; ADD R0,Rthis,R0 ; BL X::X
but it requires Rthis to be a live `this` ALIAS. PlayerBase's ctor is large; after a call, `this`
lives in a callee-saved register (R4-R8), and my sub-object pass had NO alias tracking at all -- it
just required `ADD Rx, Ry, Rx` with any register. So it is matching constructions on OTHER objects
whose address happens to be computed as `base + const` near a MOVW.

This prints the actual matched sites for PlayerBase so the cause is visible rather than inferred,
and reports whether the base register was provably `this`.
"""
import re
import idautils
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

for ctor_name in ("PlayerBase_ctor", "_ZN10PlayerBaseC2Ev", "_ZN10PlayerBaseC1Ev"):
    ea = None
    for f in idautils.Functions():
        if (ida_name.get_name(f) or "") == ctor_name:
            ea = f
            break
    if ea:
        break

print(f"PlayerBase ctor: {ea - BASE if ea else None:#010x} {ctor_name}")
if not ea:
    raise SystemExit

f = ida_funcs.get_func(ea)
insns = list(idautils.Heads(f.start_ea, f.end_ea))
texts = [idc.GetDisasm(i) for i in insns]
print(f"  {len(texts)} instructions, {f.end_ea - f.start_ea:#x} bytes")

# where is `this` kept? find the first MOV Rx,R0
print()
print("  first 24 instructions (look for how `this` is saved):")
for i in range(min(24, len(texts))):
    print(f"    {insns[i] - BASE:#010x}  {texts[i]}")

print()
print("=" * 90)
print("matched sub-object sites in PlayerBase, with the base register used")
print("=" * 90)
cnt = 0
for k, d in enumerate(texts):
    m = re.match(r"^MOVW\s+R(\d+),\s*#(0x[0-9A-Fa-f]+)$", d)
    if not m:
        continue
    off = int(m.group(2), 16)
    if not (0x1B00 <= off <= 0x2C00):
        continue
    cnt += 1
    if cnt > 10:
        continue
    print(f"  offset {off:#06x} at {insns[k] - BASE:#010x}")
    for j in range(k, min(k + 3, len(texts))):
        print(f"      {insns[j] - BASE:#010x}  {texts[j]}")

# identify which register is this
this_reg = None
for d in texts:
    m = re.match(r"^MOV\s+(R\d+),\s*R0$", d)
    if m:
        this_reg = m.group(1)
        break
print()
print(f"  `this` appears to be kept in: {this_reg}")
