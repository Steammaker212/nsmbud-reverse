"""APPLY OUR SYMBOL NAMES TO THE IDB, then measure the gain.

Everything decompiled so far reads like `sub_60465E4C` because IDA does not know the
names we worked out. Our symbol file already carries 3,170 human names for NSMBU Deluxe
v1.0.0 at RVA addresses. Feeding those into the database is the single highest-value step
before dumping C: every decompilation then refers to functions by name, and calls between
them become readable.

This script:
  1. parses sweetdx/symbols/nsmbudx.sym (name = 0xRVA;)
  2. applies each as a function or data name at BASE + RVA
  3. reports how many were applied, how many were already correct, how many missed
  4. re-measures naming coverage in the player / powerup / item regions

Names are only applied where IDA has not already been given a non-default name, so this
cannot silently overwrite better information.
"""
import re
import idautils
import ida_funcs
import ida_name
import ida_bytes
import ida_auto
import idc
import idaapi

idc.auto_wait()
BASE = 0x60000000
SYM = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\symbols\nsmbudx.sym"
out = []


def log(s=""):
    out.append(s)


PATTERN = re.compile(r"^\s*([A-Za-z_.$][\w.$]*)\s*=\s*(0x[0-9A-Fa-f]+|\d+)\s*;?\s*$")

entries = []
with open(SYM, "r", encoding="utf-8", errors="replace") as f:
    for line in f:
        s = line.split("#", 1)[0].strip()
        if not s:
            continue
        m = PATTERN.match(s)
        if not m:
            continue
        name, val = m.group(1), m.group(2)
        rva = int(val, 16) if val.lower().startswith("0x") else int(val, 10)
        entries.append((name, rva))

log(f"parsed {len(entries):,} symbol definitions from nsmbudx.sym")

applied = 0
already = 0
conflict = 0
missed = []

for name, rva in entries:
    ea = BASE + rva
    cur = ida_name.get_name(ea) or ""
    cur_is_default = cur.startswith("sub_") or cur.startswith("nullsub_") or cur == ""

    if not cur_is_default:
        if cur == name:
            already += 1
        else:
            # keep existing: it may be a demangled name we already curated
            conflict += 1
        continue

    ok = ida_name.set_name(ea, name, ida_name.SN_NOWARN)
    if ok:
        applied += 1
    else:
        missed.append((name, rva))

log()
log("=" * 92)
log("NAME APPLICATION")
log("=" * 92)
log(f"  newly applied        : {applied:,}")
log(f"  already correct      : {already:,}")
log(f"  kept existing (diff) : {conflict:,}")
log(f"  failed to apply      : {len(missed):,}")
if missed:
    for name, rva in missed[:15]:
        log(f"      {rva:#010x}  {name}")

# ------------------------------------------------------------ coverage now
log()
log("=" * 92)
log("COVERAGE AFTER APPLICATION")
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
]
stats = {name: [0, 0] for _, _, name in REGIONS}   # [named, total]
for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    rva = ea - BASE
    nm = ida_name.get_name(ea) or ""
    is_default = nm.startswith("sub_") or nm.startswith("nullsub_") or nm == ""
    for lo, hi, name in REGIONS:
        if lo <= rva < hi:
            stats[name][1] += 1
            if not is_default:
                stats[name][0] += 1
            break

log(f"  {'region':<22} {'named':>7} {'total':>8}  {'pct':>6}")
for _, _, name in REGIONS:
    n, t = stats[name]
    pct = (100.0 * n / t) if t else 0.0
    log(f"  {name:<22} {n:>7,} {t:>8,}  {pct:>5.1f}%")

txt = "\n".join(out)
print(txt)

# Save the database so the names persist for the decompile pass.
idaapi.save_database("", 0)

with open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\out_named.txt", "w",
          encoding="utf-8") as f:
    f.write(txt)
