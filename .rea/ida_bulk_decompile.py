"""BULK DECOMPILER: emit readable C for every live, sizeable function, in subsystems.

This is the corpus builder. Scope rules, chosen from the measured inventory:

    include a function only if
        it has at least one incoming code xref (live -- 32,897 of 49,470 have none)
        and is at least MIN_SIZE bytes (small thunks are noise)

That leaves roughly 16k candidate functions, but a full Hex-Rays pass over all of them is
slow and produces a lot of unreadable padding. So this splits work by subsystem so the
result is navigable, and skips the areas already covered or not useful:

    skips  std/runtime templates, pure jumptables (j__ZdlPv_*), trampolines

Output: one .c file per region under .rea/decompiled_full/, naming already applied, so
cross-calls read by name. A manifest records exactly what ran and what was skipped, so the
corpus can be regenerated rather than trusted blindly.
"""
import os
import time
import idautils
import ida_funcs
import ida_name
import ida_xref
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
OUTDIR = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\decompiled_full"
os.makedirs(OUTDIR, exist_ok=True)

MIN_SIZE = 0x30          # 48 bytes
MAX_LINES = 400          # per function, keeps files readable
TIME_BUDGET = 1500       # seconds; stop and report rather than run forever

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

SKIP_PREFIX = ("j_", "j__", "nullsub_", "thunk_")


def xrefs_to(ea):
    n = 0
    xb = ida_xref.xrefblk_t()
    ok = xb.first_to(ea, ida_xref.XREF_CODE)
    while ok:
        n += 1
        ok = xb.next_to()
    return n


def region_of(rva):
    for lo, hi, name in REGIONS:
        if lo <= rva < hi:
            return name
    return None


start_time = time.time()
buckets = {}
stats = {"candidates": 0, "decompiled": 0, "skipped_small": 0,
         "skipped_dead": 0, "skipped_name": 0, "failed": 0, "budget_hit": False}

for ea in idautils.Functions():
    if time.time() - start_time > TIME_BUDGET:
        stats["budget_hit"] = True
        break

    f = ida_funcs.get_func(ea)
    if not f:
        continue
    rva = ea - BASE
    reg = region_of(rva)
    if reg is None:
        continue

    nm = ida_name.get_name(ea) or ""
    if any(nm.startswith(p) for p in SKIP_PREFIX):
        stats["skipped_name"] += 1
        continue

    size = f.end_ea - f.start_ea
    if size < MIN_SIZE:
        stats["skipped_small"] += 1
        continue
    if xrefs_to(ea) == 0:
        stats["skipped_dead"] += 1
        continue

    stats["candidates"] += 1
    try:
        cf = ida_hexrays.decompile(ea)
        body = str(cf).splitlines()[:MAX_LINES] if cf else ["// (no pseudocode)"]
        stats["decompiled"] += 1
    except Exception as e:
        body = [f"// decompile failed: {e}"]
        stats["failed"] += 1

    hdr = [
        "/* " + "=" * 76,
        f" * {nm or f'sub_{ea:08X}'}",
        f" * RVA {rva:#010x}   size {size:#x}   xrefs {xrefs_to(ea)}",
        " * " + "=" * 76 + " */",
        "",
    ]
    buckets.setdefault(reg, []).append(
        "\n".join(hdr) + "\n".join("  " + ln for ln in body) + "\n\n")

manifest = []
for reg, chunks in sorted(buckets.items()):
    path = os.path.join(OUTDIR, f"{reg}.c")
    with open(path, "w", encoding="utf-8") as fh:
        fh.write(
            f"/* NSMBU Deluxe (Switch) v1.0.0 -- {reg} subsystem\n"
            f" * Bulk Hex-Rays output. RVAs are image-relative (VA - 0x{BASE:X}).\n"
            f" * Types and field offsets are inferred; names marked sub_XXXX are unnamed.\n"
            f" * Only live functions (>=1 incoming code xref) of {MIN_SIZE:#x}+ bytes are included.\n"
            f" */\n\n")
        fh.writelines(chunks)
    mb = os.path.getsize(path) / 1e6
    manifest.append(f"  {reg:<22} {len(chunks):>6} functions  {mb:>6.1f} MB  {path}")

print("BULK DECOMPILE")
print("=" * 92)
for k, v in stats.items():
    print(f"  {k:<16} {v:,}")
print()
print("OUTPUT:")
print("\n".join(manifest))

with open(os.path.join(OUTDIR, "MANIFEST.txt"), "w", encoding="utf-8") as fh:
    fh.write("BULK DECOMPILE MANIFEST\n" + "=" * 80 + "\n")
    for k, v in stats.items():
        fh.write(f"{k} = {v}\n")
    fh.write("\n")
    fh.write("\n".join(manifest) + "\n")
