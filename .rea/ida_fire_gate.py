"""THE FIRE FLOWER QUESTION: trace what an item grant actually does to the mode byte.

The user's report is consistent: the fire flower appears and acts normally, but nothing
catches fire. The HammerQuestionBlock / item-grant hooks changed `cmp r0,#8` to `#9` and
`movw r1,#0x1FB` to `#0x3FB`, which is an additive change to a bitmask test.

That bitmask is the key. 0x1FB = 0b1_1111_1011, i.e. bits 0,1,3,4,5,6,7,8 -- note bit 2 is
CLEAR. 0x3FB = 0b11_1111_1011, which adds bit 9. So the mask is a set of allowed modes, and
bit 2 (Star) is deliberately excluded from whatever this test gates.

This dumps the exact functions containing those two sites so the gate can be read rather than
inferred: what is being tested, what happens when the test passes, and whether passing it
actually writes the mode byte.
"""
import idautils
import ida_funcs
import ida_name
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

SITES = [0x00465F34, 0x00465F40, 0x00466000, 0x0046600C]

seen = set()
for s in SITES:
    ea = BASE + s
    f = ida_funcs.get_func(ea)
    if not f:
        print(f"{s:#x}: no function")
        continue
    if f.start_ea in seen:
        continue
    seen.add(f.start_ea)
    rva = f.start_ea - BASE
    print("=" * 96)
    print(f"site {s:#010x} in {rva:#010x}  {ida_name.get_name(f.start_ea)}  "
          f"size {f.end_ea - f.start_ea:#x}  callers {len(list(idautils.CodeRefsTo(f.start_ea, 0)))}")
    print("=" * 96)
    try:
        cf = ida_hexrays.decompile(f.start_ea)
    except Exception as e:
        print(f"  error {e}")
        continue
    if not cf:
        print("  declined")
        continue
    for ln in str(cf).splitlines()[:110]:
        print("  " + ln)
    print()

print("=" * 96)
print("THE TWO BITMASKS")
print("=" * 96)
for label, v in (("retail", 0x1FB), ("patched", 0x3FB)):
    bits = [i for i in range(16) if (v >> i) & 1]
    clear = [i for i in range(10) if not (v >> i) & 1]
    print(f"  {label:<8} {v:#06x} = 0b{v:011b}")
    print(f"           bits set   : {bits}")
    print(f"           modes 0-9 clear: {clear}")
