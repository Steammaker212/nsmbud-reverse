"""THE SCAN THAT SHOULD HAVE BEEN FIRST: vtables hold RVAs, not absolute addresses.

Every previous data scan looked for `BASE + rva` (0x60795CDD). But the vtables in this binary
store **relative** values:

    _ZTV10StageActor   first4 = 0x260c, 0x270c, 0x500, 0x568
    _ZTV5Actor         first4 = 0x2f74, 0x2ff8, 0x2d98, 0x2e5c

Those are RVAs, not 0x60260C-style absolute pointers. So the correct search is for the bare RVA,
with the Thumb bit set for functions. Every scan I ran before this was looking for the wrong
number.

This scans all non-.text data for the RVA of each target, both parities, and reports where each
lands. If a target appears inside a run of other code RVAs, that run is a vtable and the slot
index identifies the virtual method.
"""
import idautils
import ida_funcs
import ida_bytes
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

TARGETS = [
    (0x00795CDC, "Player_setPowerupMode"),
    (0x004F2044, "ItemNameTable_build"),
    (0x00465E4C, "ItemId_resolveGuardedByPlayerMode"),
    (0x00794EC0, "Player_ctor"),
]


def seg_of(ea):
    for s in idautils.Segments():
        if idc.get_segm_start(s) <= ea < idc.get_segm_end(s):
            return idc.get_segm_name(s)
    return "?"


def context_run(addr, limit=12):
    """Show the surrounding dwords that look like code RVAs, to reveal the table."""
    lo = addr - 8 * 4
    vals = []
    for i in range(limit):
        a = lo + i * 4
        v = ida_bytes.get_dword(a)
        mark = " <== TARGET" if a == addr else ""
        is_code_rva = 0x288 <= v < 0x9AD3BC
        nm = ""
        if is_code_rva:
            nm = ida_name.get_name(BASE + v) or ida_name.get_name(BASE + (v & ~1)) or ""
        vals.append(f"      {a - BASE:#010x}  {v:#010x}  {seg_of(a):<8}"
                    f"{'code' if is_code_rva else '??  ':>5} {nm}{mark}")
    return vals


print("=" * 92)
print("RVA-PARITY SCAN (the correct one)")
print("=" * 92)
for rva, label in TARGETS:
    hits = []
    for want, tag in ((rva, "even"), (rva + 1, "thumb")):
        for seg_ea in idautils.Segments():
            s = idc.get_segm_start(seg_ea)
            e = idc.get_segm_end(seg_ea)
            nm = idc.get_segm_name(seg_ea)
            if nm in (".text",):
                continue
            a = s
            while a + 4 <= e:
                if ida_bytes.get_dword(a) == want:
                    hits.append((a, nm, tag))
                a += 4
    print()
    print(f"  {label}  rva {rva:#010x}  -> {len(hits)} hit(s)")
    for a, nm, tag in hits[:4]:
        print(f"    at {a - BASE:#010x} in {nm}  ({tag})")
        for ln in context_run(a):
            print(ln)

# how many distinct vtable-ish runs exist? count dwords pointing into .text
print()
print("=" * 92)
print("sanity: how many data dwords point into .text as RVAs?")
print("=" * 92)
n = 0
for seg_ea in idautils.Segments():
    nm = idc.get_segm_name(seg_ea)
    if nm in (".text",):
        continue
    s = idc.get_segm_start(seg_ea)
    e = idc.get_segm_end(seg_ea)
    a = s
    while a + 4 <= e:
        v = ida_bytes.get_dword(a)
        if 0x288 <= v < 0x9AD3BC:
            n += 1
        a += 4
print(f"  {n:,} dwords in data look like code RVAs")
