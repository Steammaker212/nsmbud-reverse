"""INVENTORY: what do we actually have to decompile?

Before writing C, measure the target. This reports:

  * total functions vs. functions we have a human name for
  * how many have xrefs (live code) vs. zero (dead / unreferenced)
  * size distribution, so "important" can be defined by something other than vibes
  * which named functions live in which address range, to group into subsystems

The point is to decide what "all functions we know of and are important" means
concretely, and to find the gaps where a function is live but still called sub_XXXX.
"""
import idautils, ida_funcs, ida_name, ida_xref, ida_bytes, idc, ida_auto, idaapi

idc.auto_wait()

BASE = 0x60000000
out = []


def log(s=""):
    out.append(s)


funcs = list(idautils.Functions())
log(f"TOTAL FUNCTIONS: {len(funcs):,}")
log()

named = 0
default = 0
with_xrefs = 0
no_xrefs = 0
size_buckets = {"<0x40": 0, "0x40-0x100": 0, "0x100-0x400": 0,
                "0x400-0x1000": 0, ">0x1000": 0}
live_unnamed = []
named_list = []

for ea in funcs:
    f = ida_funcs.get_func(ea)
    if f is None:
        continue
    size = f.end_ea - f.start_ea
    nm = ida_name.get_name(ea) or ""
    is_default = nm.startswith("sub_") or nm.startswith("nullsub_") or nm == ""
    if is_default:
        default += 1
    else:
        named += 1
        named_list.append((ea - BASE, nm, size))

    # count xrefs to entry
    n = 0
    xb = ida_xref.xrefblk_t()
    ok = xb.first_to(ea, ida_xref.XREF_ALL)
    while ok:
        n += 1
        ok = xb.next_to()

    if n:
        with_xrefs += 1
    else:
        no_xrefs += 1
        if not is_default:
            pass

    if is_default and n > 0:
        live_unnamed.append((ea - BASE, n, size))

    if size < 0x40:
        size_buckets["<0x40"] += 1
    elif size < 0x100:
        size_buckets["0x40-0x100"] += 1
    elif size < 0x400:
        size_buckets["0x100-0x400"] += 1
    elif size < 0x1000:
        size_buckets["0x400-0x1000"] += 1
    else:
        size_buckets[">0x1000"] += 1

log("=" * 92)
log("NAMING COVERAGE")
log("=" * 92)
log(f"  named (human)        : {named:,}")
log(f"  default sub_XXXX     : {default:,}")
log(f"  with incoming xrefs  : {with_xrefs:,}")
log(f"  no incoming xrefs    : {no_xrefs:,}")
log(f"  LIVE but unnamed     : {len(live_unnamed):,}   <- these are the gaps worth naming")
log()

log("=" * 92)
log("SIZE DISTRIBUTION")
log("=" * 92)
for k, v in size_buckets.items():
    log(f"  {k:<12} {v:,}")
log()

log("=" * 92)
log("LARGEST LIVE UNNAMED FUNCTIONS (top 60) -- naming candidates")
log("=" * 92)
live_unnamed.sort(key=lambda x: -x[2])
log(f"  {'RVA':>10}  {'xrefs':>6}  {'size':>7}")
for rva, n, size in live_unnamed[:60]:
    log(f"  {rva:#010x}  {n:>6}  {size:>7x}")
log()

log("=" * 92)
log("NAMED FUNCTIONS BY REGION (subsystem grouping)")
log("=" * 92)
REGIONS = [
    (0x000000, 0x0F0000, "core / engine"),
    (0x0F0000, 0x200000, "actor construction"),
    (0x200000, 0x300000, "actors A"),
    (0x300000, 0x450000, "actors B"),
    (0x450000, 0x480000, "powerup / item"),
    (0x480000, 0x600000, "game systems"),
    (0x600000, 0x780000, "states / misc"),
    (0x780000, 0x7C0000, "player"),
    (0x7C0000, 0x800000, "player states"),
    (0x800000, 0x9A0000, "sead / libs"),
    (0x9A0000, 0x9B0000, "std / runtime"),
    (0x9B0000, 0xBE0000, "data-adjacent"),
]
buckets = {name: [] for _, _, name in REGIONS}
for rva, nm, size in named_list:
    for lo, hi, name in REGIONS:
        if lo <= rva < hi:
            buckets[name].append((rva, nm, size))
            break

for _, _, name in REGIONS:
    lst = buckets[name]
    log(f"  {name:<22} {len(lst):>5} named")

log()
log("=" * 92)
log("POWERUP / ITEM REGION IN DETAIL (0x450000-0x480000)")
log("=" * 92)
for rva, nm, size in sorted(buckets["powerup / item"]):
    log(f"  {rva:#010x}  {size:>6x}  {nm}")

log()
log("=" * 92)
log("PLAYER REGIONS IN DETAIL")
log("=" * 92)
for region in ("player", "player states"):
    log(f"\n  --- {region} ---")
    for rva, nm, size in sorted(buckets[region])[:80]:
        log(f"  {rva:#010x}  {size:>6x}  {nm}")

txt = "\n".join(out)
print(txt)
with open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\out_inventory.txt", "w",
          encoding="utf-8") as f:
    f.write(txt)
