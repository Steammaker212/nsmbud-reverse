"""DUMP the question block's item table and read the rest of onCreate.

From FlyingBlock::onCreate:

    *(a1 + 7300) = *(_DWORD *)((char *)&unk_60AF2188 + ((*(a1 + 24) >> 2) & 4));
    *(a1 + 7304) = *(unsigned __int8 *)(a1 + 28);
    ...
    if ( *(a1 + 7300) == 3 )

So the block's item id lives at object+7300 and is selected by bit 2 of the 32-bit course
parameter at object+24, indexing a 2-entry dword table at 0x60AF2188. That table is the answer
to "which item does the block hold" -- read it, and compare against the ItemNameTable ordering
(Kinoko=0, FireFlower=1, Star=2, IceFlower=3, ...).

This dumps:
  * the table at 0xAF2188, several entries either side
  * the remainder of onCreate so the `== 3` branch is visible
  * the byte at object+28 usage (the second parameter)
"""
import idautils
import ida_funcs
import ida_name
import ida_bytes
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

TABLE = 0x00AF2188
print("=" * 92)
print(f"TABLE unk_60AF2188 at {TABLE:#x}  (only index 0 and 1 are reachable: (p>>2)&4)")
print("=" * 92)
for i in range(-4, 12):
    a = BASE + TABLE + 4 * i
    v = ida_bytes.get_dword(a)
    reach = "  <== reachable via 0" if i == 0 else ("  <== reachable via 1" if i == 1 else "")
    print(f"  [{i:3}] {TABLE + 4*i:#010x}  {v:#010x} ({v:>3}){reach}")

print()
print("=" * 92)
print("FlyingBlock::onCreate FULL pseudocode")
print("=" * 92)
cf = ida_hexrays.decompile(BASE + 0x005688B8)
if cf:
    lines = str(cf).splitlines()
    for ln in lines:
        print("  " + ln)
    print(f"\n  ({len(lines)} lines total)")
else:
    print("  declined")

print()
print("=" * 92)
print("callers of FlyingBlock::onCreate -- to see who constructs a block")
print("=" * 92)
for c in list(idautils.CodeRefsTo(BASE + 0x005688B8, 0))[:10]:
    f = ida_funcs.get_func(c)
    print(f"  from {c - BASE:#010x}  {ida_name.get_name(f.start_ea) if f else '?'}")
