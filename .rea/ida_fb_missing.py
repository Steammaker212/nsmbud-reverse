"""WHY are 0x17D4, 0x18DC, 0x1924 missing from FireballBase?

Hypothesis: they are not stored fields at all -- they are SUB-OBJECTS passed to a constructor:

    MOVW R0, #0x17D4
    ADD  R0, R4, R0
    BL   LightMask::LightMask        ; construct a LightMask in-place at this+0x17D4

In that case a store extractor correctly does not record them, because there is no store. The
offset is still a real member, just initialised by a sub-constructor call rather than by STR.

This checks the three missing offsets directly: find each MOVW/ADD pair in FireballBase's ctor and
print the instruction that follows the address computation. If it is a BL, the hypothesis holds and
the extractor is right to omit it; the fix is to add a *separate* "sub-object" record, not to treat
it as a store.
"""
import re
import idautils
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

target = None
for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    if nm == "_ZN12FireballBaseC2Ev" or nm == "_ZN12FireballBaseC1Ev" or "FireballBase_ctor" in nm:
        target = ea
        if "C1E" in nm or "_ctor" in nm:
            break
print(f"FireballBase ctor: {target - BASE:#010x} {ida_name.get_name(target) if target else ''}")

if target:
    f = ida_funcs.get_func(target)
    insns = list(idautils.Heads(f.start_ea, f.end_ea))
    texts = [(i, idc.GetDisasm(i)) for i in insns]
    missing = (0x17D4, 0x18DC, 0x1924)
    print()
    for k, (i, d) in enumerate(texts):
        m = re.match(r"^MOVW\s+R\d+,\s*#(0x[0-9A-Fa-f]+)$", d)
        if not m:
            continue
        v = int(m.group(1), 16)
        if v not in missing:
            continue
        print("=" * 88)
        print(f"offset {v:#x} referenced at {i - BASE:#010x}")
        for j in range(k, min(k + 6, len(texts))):
            print(f"    {texts[j][0] - BASE:#010x}  {texts[j][1]}")
        # classify what followed
        for j in range(k + 1, min(k + 6, len(texts))):
            dj = texts[j][1]
            if dj.startswith(("BL ", "BLX")):
                t = idc.get_operand_value(texts[j][0], 0)
                print(f"    -> CALL to {t - BASE:#010x} {ida_name.get_name(t) if t else ''}"
                      f"   => SUB-OBJECT, not a store")
                break
            if dj.startswith(("STR", "STRH", "STRB")):
                print("    -> STORE  => should have been captured; extractor gap")
                break
        print()
