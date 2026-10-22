"""The setter has NO direct callers -- so it is reached through a function pointer.

A power-up transition that nothing calls directly must be invoked virtually (a vtable slot) or
dispatched from a table. This looks for the function's address appearing as DATA anywhere in
the image, which is how it would be registered.

If the address appears in a vtable, then whatever calls that vtable slot is the grant path. If
it appears in a plain pointer table, the table index is the mode or item id.
"""
import idautils
import ida_funcs
import ida_name
import ida_bytes
import ida_xref
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
SETTER = 0x00795CDC

print("=" * 92)
print(f"is {SETTER:#x} even a function, and what references it?")
print("=" * 92)
ea = BASE + SETTER
f = ida_funcs.get_func(ea)
print(f"  func head: {f.start_ea == ea if f else 'none'}   size {f.end_ea - f.start_ea:#x}" if f else "  no func")

# all xref kinds
xb = ida_xref.xrefblk_t()
ok = xb.first_to(ea, ida_xref.XREF_ALL)
n = 0
print("  xrefs to the address:")
while ok:
    print(f"    from {xb.frm - BASE:#010x}  type {xb.type}  "
          f"is_code={xb.iscode}")
    n += 1
    ok = xb.next_to()
if n == 0:
    print("    (none)")

# search the whole image for the literal address value
print()
print("=" * 92)
print("searching all data for the literal value of the setter address")
print("=" * 92)
hits = []
for seg_ea in idautils.Segments():
    seg = idc.get_segm_name(seg_ea)
    s = idc.get_segm_start(seg_ea)
    e = idc.get_segm_end(seg_ea)
    if not (s <= BASE + SETTER < e or True):
        continue
    a = s
    # only scan data-ish segments; scanning 8MB of .text for a 4-byte pattern is fine too
    while a < e:
        v = ida_bytes.get_dword(a)
        if v == BASE + SETTER:
            hits.append((a, seg))
        a += 4
for a, seg in hits:
    print(f"    found at {a - BASE:#010x}  in {seg}")
if not hits:
    print("    not found -- the address may be computed rather than stored")

# ---- alternative: the mode transition may be a virtual call whose slot we can find by
# looking for functions that write +0x528 at all, and checking how THEY are reached
print()
print("=" * 92)
print("all functions with a byte store to +0x528, and their xref status")
print("=" * 92)
for insn in idautils.Heads():
    m = idc.print_insn_mnem(insn)
    if not m.startswith("STR"):
        continue
    found = False
    for opn in range(4):
        if idc.get_operand_type(insn, opn) in (idc.o_displ, idc.o_phrase):
            if idc.get_operand_value(insn, opn) == 0x528:
                found = True
                break
    if not found:
        continue
    f = ida_funcs.get_func(insn)
    if not f:
        continue
    nx = 0
    xb2 = ida_xref.xrefblk_t()
    ok2 = xb2.first_to(f.start_ea, ida_xref.XREF_ALL)
    while ok2:
        nx += 1
        ok2 = xb2.next_to()
    print(f"    {f.start_ea - BASE:#010x}  {m:<6} site {insn - BASE:#010x}  "
          f"xrefs {nx}  {ida_name.get_name(f.start_ea)}")
