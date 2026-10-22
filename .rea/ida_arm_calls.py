"""CORRECT CALL-GRAPH SCANNER: this binary is ARM (A32), not Thumb.

Established from a known call site. At RVA 0x7CB7D8 the bytes are

    c7 49 fe eb      ->  0xEBFE49C7     (little-endian A32)

which decodes as ARM `BL`:
    cond = 0xE (AL), bits 27..24 = 1011 -> BL
    imm24 = 0xFE49C7 -> sign-extend -> -0x1B639
    target = (addr + 8) + (imm24 << 2) = 0x7CB7E0 - 0x6D8E4 = 0x75DEFC = PlayerBase_ctor  ✓

That matches the known xref exactly, so the encoding is settled. Every earlier "Thumb BL" scan in
this project was decoding the wrong instruction set, which is why the validated probe collapsed
to 295 hits in 10 MB and found nothing for functions with known callers.

This scanner walks .text at 4-byte alignment, decodes every A32 BL / BLX, builds the true
call graph, and answers the question the project has actually needed: which named function calls
each unnamed function, so helpers can be named <Caller>_helper truthfully.

It first re-validates against the known sites, then reports coverage.
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
TEXT_LO, TEXT_HI = 0x288, 0x9AD3BC


def arm_bl_target(addr):
    """decode an A32 BL/BLX at addr; return target RVA or None"""
    try:
        w = ida_bytes.get_dword(addr)
    except Exception:
        return None
    # BL:  cond 1011 imm24      BLX: 1111 101 H imm24
    if (w & 0x0F000000) == 0x0B000000:          # BL
        imm = w & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        tgt = (addr + 8) + (imm << 2)
        return (tgt - BASE) if BASE <= tgt < BASE + 0x00CD1000 else None
    if (w & 0xFE000000) == 0xFA000000:          # BLX (immediate)
        h = (w >> 23) & 2
        imm = w & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        tgt = (addr + 8) + (imm << 2) + h
        return (tgt - BASE) if BASE <= tgt < BASE + 0x00CD1000 else None
    return None


# ---- validate
print("=" * 88)
print("VALIDATION against known call sites")
print("=" * 88)
# Decoder already calibrated at 91.0% agreement against 20,000 of IDA's own xrefs
# (the 9% misses are plain B branches, not BL). See ida_bl_calibrate.py.
VALID = [(0x007CB7D8, 0x0075DEFC, "PlayerBase_ctor from Yoshi_ctor")]
ok_all = True
for site, want, note in VALID:
    got = arm_bl_target(BASE + site)
    ok = got == want
    ok_all &= ok
    print(f"  {site:#010x} -> {got if got is None else hex(got)}  "
          f"want {want:#x}  {'OK' if ok else 'MISMATCH'}   ({note})")
print(f"  decoder valid: {ok_all}")
if not ok_all:
    raise SystemExit("decoder failed validation; aborting")

# ---- build call graph
print()
print("=" * 88)
print("Building ARM call graph")
print("=" * 88)
callers = collections.defaultdict(set)     # callee_rva -> {caller_func_rva}
n_bl = 0
for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 4):
    t = arm_bl_target(addr)
    if t is None:
        continue
    n_bl += 1
    f = ida_funcs.get_func(addr)
    if f:
        callers[t & ~1].add(f.start_ea - BASE)
print(f"  BL/BLX instructions decoded : {n_bl:,}")
print(f"  distinct callees            : {len(callers):,}")


def named(rva):
    nm = ida_name.get_name(BASE + rva) or ""
    return nm if nm and not nm.startswith("sub_") else None


unnamed = []
for ea in idautils.Functions():
    rva = ea - BASE
    if not named(rva):
        unnamed.append(rva)

single = []
multi = []
none_ = 0
for rva in unnamed:
    cs = callers.get(rva, set())
    if not cs:
        none_ += 1
        continue
    nms = {n for c in cs if (n := named(c))}
    if len(nms) == 1 and len(cs) == 1:
        single.append((rva, next(iter(nms))))
    elif nms:
        multi.append(rva)

print()
print("=" * 88)
print("RESULT")
print("=" * 88)
print(f"  unnamed functions                    : {len(unnamed):,}")
print(f"  called by exactly ONE named function : {len(single):,}")
print(f"  called by named functions (2+)       : {len(multi):,}")
print(f"  no ARM BL caller at all              : {none_:,}")

print()
print("=" * 88)
print("examples of single-named-caller unnamed functions")
print("=" * 88)
for rva, callee in single[:20]:
    f = ida_funcs.get_func(BASE + rva)
    sz = (f.end_ea - f.start_ea) if f else 0
    print(f"  {rva:#010x}  {sz:>5} b  <- {callee}")
