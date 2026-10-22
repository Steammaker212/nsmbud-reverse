"""VERIFY THE MODE-TABLE REPOINTS AGAINST RETAIL MEMORY.

This is the highest-risk change left in the build, and the one most likely to explain
"the Fire Flower acts like a normal mushroom".

The hooks relocate three mode tables to 0xB493A8 / 0xB493D8 / 0xB49404 and repoint six
PC-relative readers at the copies. The readers use the ARM literal-pool idiom:

    LDR Rn, =(table - pc)
    LDR Rn, [PC, Rn]        ; stored + pc == table

If any stored literal is wrong, the engine reads a table of garbage, so every power-up
looks like whatever the garbage says -- which would make Fire look like Big Mario while
models still render.

This script, running inside IDA:

 1. reads the RETAIL literal at each of the six reader sites
 2. computes stored + pc exactly as the game does, and reports the target
 3. confirms the target is the real body/height/balloon table
 4. computes what the NEW literal should be for the relocated table
 5. compares that with the bytes in mode_tables.hks
 6. dumps the real retail tables and the retail word following them
 7. checks the relocation targets are zero-filled in retail and inside .rodata
"""
import struct
import idautils
import ida_bytes
import ida_funcs
import ida_auto
import idc

idc.auto_wait()
BASE = 0x60000000
out = []


def log(s=""):
    out.append(s)


def rd32(rva):
    return ida_bytes.get_dword(BASE + rva)


def rd_bytes(rva, n):
    return ida_bytes.get_bytes(BASE + rva, n)


# site RVA, pc used by the reader, claimed new target, the hks file's stored value
SITES = [
    ("body_reader_a",    0x0078C58C, 0x0078C540, 0x00B493D8, 0x003BCE98),
    ("body_reader_b",    0x0078E604, 0x0078E5C0, 0x00B493D8, 0x003BAE18),
    ("body_reader_c",    0x0078E7E8, 0x0078E630, 0x00B493D8, 0x003BADA8),
    ("height_reader_a",  0x00795FF0, 0x00795D44, 0x00B493A8, 0x003B3664),
    ("height_reader_b",  0x007960F8, 0x00796018, 0x00B493A8, 0x003B3390),
    ("balloon_reader",   0x007982D8, 0x00798224, 0x00B49404, 0x003B11E0),
]

log("=" * 100)
log("READER LITERAL VERIFICATION")
log("=" * 100)
log(f"  {'site':<18} {'RVA':>10} {'retail':>10} {'pc':>10} {'retail+pc':>10}  verdict")
log()

REAL = {0x00B0C230: "body table", 0x00B0C2BC: "height table",
        0x00B0C34C: "balloon table"}

fails = []
for name, site, pc, claimed_new, stored_hks in SITES:
    retail = rd32(site)
    tgt = (retail + pc) & 0xFFFFFFFF
    label = REAL.get(tgt, "??? NOT a known table")
    ok = tgt in REAL
    if not ok:
        fails.append((name, "retail literal does not resolve to a known table"))
    # what the new literal must be
    need = (claimed_new - pc) & 0xFFFFFFFF
    match = (need == stored_hks)
    if not match:
        fails.append((name, f"hks stores {stored_hks:#x}, needs {need:#x}"))
    log(f"  {name:<18} {site:#010x} {retail:#010x} {pc:#010x} {tgt:#010x}  "
        f"{label}{'' if ok else '  *** WRONG ***'}")
    log(f"  {'':18} {'':10} new literal should be {need:#010x}, "
        f"hks has {stored_hks:#010x}  {'OK' if match else '*** MISMATCH ***'}")

log()
log("=" * 100)
log("RETAIL TABLES (44 bytes each, 11 words)")
log("=" * 100)
TABLES = [("height", 0x00B0C2BC), ("body", 0x00B0C230), ("balloon", 0x00B0C34C)]
for name, rva in TABLES:
    raw = rd_bytes(rva, 44)
    if not raw:
        log(f"  {name}: unreadable")
        continue
    words = struct.unpack("<11I", raw)
    floats = struct.unpack("<11f", raw)
    log(f"\n  {name} @ {rva:#x}")
    log(f"    raw    {raw.hex(' ')}")
    log(f"    words  {[hex(w) for w in words]}")
    log(f"    float  {[round(v, 3) for v in floats]}")

log()
log("=" * 100)
log("RELOCATION TARGETS: are they zero-filled retail space?")
log("=" * 100)
for name, rva in (("height copy", 0x00B493A8), ("body copy", 0x00B493D8),
                  ("balloon copy", 0x00B49404), ("tall mode10", 0x00B0C328)):
    raw = rd_bytes(rva, 44)
    if raw is None:
        log(f"  {name} @ {rva:#x}: unreadable")
        continue
    nonzero = sum(1 for b in raw if b)
    log(f"  {name:<12} @ {rva:#x}: {nonzero} non-zero bytes in 44  "
        f"{'zero-filled OK' if nonzero == 0 else ''}")
    log(f"      {raw.hex(' ')}")

log()
log("=" * 100)
log("SECTION CHECK")
log("=" * 100)
import ida_segment
for rva in (0x00B493A8, 0x00B493D8, 0x00B49404, 0x00B0C328, 0x00B0C230):
    seg = ida_segment.getseg(BASE + rva)
    nm = ida_segment.get_segm_name(seg) if seg else "?"
    log(f"  {rva:#010x}  in segment {nm!r}")

log()
log("=" * 100)
log("RESULT")
log("=" * 100)
if fails:
    log("  PROBLEMS FOUND:")
    for n, why in fails:
        log(f"    {n}: {why}")
else:
    log("  All six reader literals are consistent: each new literal equals")
    log("  (relocated target - pc), and each retail literal resolves to the real table.")

txt = "\n".join(out)
print(txt)
with open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\out_table_verify.txt", "w",
          encoding="utf-8") as f:
    f.write(txt)
