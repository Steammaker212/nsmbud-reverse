"""WHERE are the unnamed functions, by subsystem?

33,343 functions are unnamed (67.4%). The objective says "every known and IMPORTANT function", so
the useful question is not the global percentage but which of the named subsystems still contain
unnamed code -- and specifically, which unnamed functions are BIG (a large unnamed function is much
more likely to be important than a 48-byte thunk).

Uses the same REGIONS table the corpus generator uses, so the counts line up with the published
files.
"""
import collections
import idautils
import ida_funcs
import ida_name
import ida_bytes
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

REGIONS = [
    (0x000000, 0x0F0000, "core"),
    (0x0F0000, 0x200000, "actor_construction"),
    (0x200000, 0x300000, "actors_a"),
    (0x300000, 0x450000, "actors_b"),
    (0x450000, 0x480000, "powerup"),
    (0x480000, 0x600000, "systems"),
    (0x600000, 0x780000, "states"),
    (0x780000, 0x7C0000, "player"),
    (0x7C0000, 0x800000, "player_states"),
    (0x800000, 0x9A0000, "libs"),
]


def region_of(rva):
    for lo, hi, nm in REGIONS:
        if lo <= rva < hi:
            return nm
    return "other"


def is_named(ea, nm):
    if not nm or nm.startswith("sub_"):
        return False
    if nm.startswith(("nullsub_", "j_", "thunk_")):
        return False
    return True


tot = collections.Counter()
unn = collections.Counter()
big_unn = collections.defaultdict(list)

for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    rva = ea - BASE
    reg = region_of(rva)
    tot[reg] += 1
    nm = ida_name.get_name(ea) or ""
    if is_named(ea, nm):
        continue
    unn[reg] += 1
    size = f.end_ea - f.start_ea
    if size >= 0x200:                     # >= 512 bytes: worth attention
        big_unn[reg].append((size, rva, nm))

print("=" * 88)
print(f"{'region':<20}{'total':>8}{'unnamed':>9}{'%unnamed':>10}{'>512b unnam':>13}")
print("=" * 88)
for _, _, reg in REGIONS:
    if tot[reg]:
        print(f"{reg:<20}{tot[reg]:>8,}{unn[reg]:>9,}"
              f"{100.0*unn[reg]/tot[reg]:>9.1f}%{len(big_unn[reg]):>13}")

print()
print("=" * 88)
print("LARGEST unnamed functions overall (candidates for real naming)")
print("=" * 88)
allbig = []
for reg, lst in big_unn.items():
    for size, rva, nm in lst:
        allbig.append((size, rva, reg))
allbig.sort(reverse=True)
for size, rva, reg in allbig[:40]:
    print(f"  {size:>6,} b  {rva:#010x}  {reg}")
print()
print(f"  unnamed functions >= 512 bytes: {len(allbig)}")
print(f"  of those >= 1024 bytes        : {sum(1 for s,_,_ in allbig if s >= 1024)}")
print(f"  of those >= 2048 bytes        : {sum(1 for s,_,_ in allbig if s >= 2048)}")
