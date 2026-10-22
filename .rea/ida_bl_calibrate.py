"""CALIBRATE the ARM BL decoder against ALL of IDA's own recorded xrefs, in bulk.

One control matching and another missing is not enough evidence either way. The right test is
statistical: take every code xref IDA recorded (type 17 = BL call, type 19 = other), decode the
instruction just before/at the reported site with the A32 BL decoder, and measure agreement.

If agreement is high (say >90%), the decoder is correct and the full call graph can be trusted.
If it is low, the decoder is still wrong and no conclusion should be drawn -- the mistake that
has been made twice already in this project.

Reports, for each xref type, how many decoded instructions reproduce the recorded target.
"""
import collections
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000


def arm_bl_target(addr):
    try:
        w = ida_bytes.get_dword(addr)
    except Exception:
        return None
    if (w & 0x0F000000) == 0x0B000000:
        imm = w & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        tgt = (addr + 8) + (imm << 2)
        return (tgt - BASE) if BASE <= tgt < BASE + 0x00CD1000 else None
    if (w & 0xFE000000) == 0xFA000000:
        h = (w >> 23) & 2
        imm = w & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        tgt = (addr + 8) + (imm << 2) + h
        return (tgt - BASE) if BASE <= tgt < BASE + 0x00CD1000 else None
    return None


stats = collections.Counter()
detail = collections.defaultdict(list)

# sample xrefs across the image to keep this fast but representative
n_seen = 0
for ea in idautils.Functions():
    for xref in idautils.CodeRefsTo(ea, 0):
        n_seen += 1
        if n_seen > 20000:
            break
        want = ea - BASE
        got = None
        # IDA may report the xref at the instruction start or at its end; try both
        for cand in (xref, xref - 4, xref + 4):
            g = arm_bl_target(cand)
            if g == want:
                got = g
                stats["match"] += 1
                break
        if got is None:
            stats["miss"] += 1
            if len(detail["miss"]) < 10:
                f = ida_funcs.get_func(xref)
                detail["miss"].append((want, xref - BASE,
                                       idc.GetDisasm(xref),
                                       ida_name.get_name(f.start_ea) if f else "?"))
    if n_seen > 20000:
        break

tot = stats["match"] + stats["miss"]
print("=" * 88)
print("BULK CALIBRATION of the A32 BL decoder vs IDA xrefs")
print("=" * 88)
print(f"  xrefs examined : {tot:,}")
print(f"  decoded match  : {stats['match']:,}")
print(f"  no match       : {stats['miss']:,}")
if tot:
    print(f"  agreement      : {100.0*stats['match']/tot:.1f}%")
print()
print("  sample mismatches (to see what IDA records that the decoder does not):")
for want, site, dis, fn in detail["miss"]:
    print(f"    target {want:#010x}  xref site {site:#010x}  insn={dis!r}  in {fn}")
