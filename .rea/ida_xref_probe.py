"""IS IDA'S XREF ANALYSIS BROKEN? Test the 21,951 "no caller" functions directly.

62.8% of unnamed functions report no direct code caller. Two possible explanations:

  (a) they genuinely are not called directly (virtual-only, or registered at runtime)
  (b) IDA's xref database is incomplete for this image, so calls exist but are not recorded

This distinguishes them by brute force. Pick unnamed functions that report ZERO xrefs, then
decode every 32-bit word in .text as a potential Thumb BL instruction and see whether any
actually targets them.

ARM Thumb BL encoding (32-bit, two halfwords):
    first  halfword: 11110 S imm10
    second halfword: 11 J1 1 J2 imm11
    target = PC_of_first_halfword + 4 + (sign_extend(S:J1:J2:imm11:0))
This is exactly how the linker reaches a function, so if I find such words, the calls exist and
IDA has simply not recorded them.

If (b) turns out to be true it is a significant correction: xref-based reasoning in this
repository has been operating on incomplete data, and the "66.5% have zero xrefs" figure from
CALL_GRAPH_METHOD.md means "IDA did not record them", NOT "nothing calls them".
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


def named(ea):
    nm = ida_name.get_name(ea) or ""
    return nm if nm and not nm.startswith("sub_") else None


# choose up to 40 unnamed, zero-xref, reasonably-sized functions
sample = []
for ea in idautils.Functions():
    if named(ea):
        continue
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    if not (40 <= f.end_ea - f.start_ea <= 400):
        continue
    if list(idautils.CodeRefsTo(ea, 0)):
        continue
    sample.append(ea)
    if len(sample) >= 40:
        break

print(f"sampled {len(sample)} unnamed zero-xref functions")

targets = {}
for ea in sample:
    targets.setdefault((ea - BASE) & ~1, []).append(ea)


def thumb_bl_target(addr):
    """decode a 32-bit Thumb BL at addr; return target RVA (in-image) or None"""
    try:
        h1 = ida_bytes.get_word(addr)
        h2 = ida_bytes.get_word(addr + 2)
    except Exception:
        return None
    if (h1 & 0xF800) != 0xF000:
        return None
    if (h2 & 0xD000) != 0xD000:
        return None
    s = (h1 >> 10) & 1
    imm10 = h1 & 0x3FF
    j1 = (h2 >> 13) & 1
    j2 = (h2 >> 11) & 1
    imm11 = h2 & 0x7FF
    i1 = 1 - (j1 ^ s)
    i2 = 1 - (j2 ^ s)
    imm = (s << 24) | (i1 << 23) | (i2 << 22) | (imm10 << 12) | (imm11 << 1)
    if imm & (1 << 24):
        imm -= 1 << 25
    pc = addr + 4
    tgt = pc + imm
    if BASE <= tgt < BASE + 0x00CD1000:
        return tgt - BASE
    return None


found = 0
checked = 0
examples = []
for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 2):
    checked += 1
    t = thumb_bl_target(addr)
    if t is None:
        continue
    key = t & ~1
    if key in targets:
        found += 1
        if len(examples) < 12:
            f = ida_funcs.get_func(addr)
            examples.append((targets[key][0] - BASE, addr - BASE,
                             ida_name.get_name(f.start_ea) if f else "?"))

print()
print("=" * 86)
print("RESULT")
print("=" * 86)
print(f"  halfword positions scanned : {checked:,}")
print(f"  BL instructions reaching a sampled 'zero-xref' function : {found}")
print()
for tgt, site, caller in examples:
    print(f"  target {tgt:#010x}  <- BL at {site:#010x} in {caller}")
print()
if found:
    print("  => IDA's xref database IS incomplete. These functions ARE called;")
    print("     the calls were not recorded. Xref-based conclusions need re-derivation.")
else:
    print("  => no BL reaches the sampled functions, so 'zero xrefs' is genuine for them.")
