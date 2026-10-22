"""Validate ANY subsdk0's NSO header and MOD0 entry points.

Usage: python verify_subsdk0.py <path> [<path> ...]

Checks that matter for a loadable module:
  * three segments, each inside the file
  * MOD0-relative offsets resolve inside declared segments
  * DT_INIT / DT_FINI land inside .text  (a pointer outside .text means the dynamic
    loader will branch into nothing)
"""
import struct
import sys
import os

DT = {0: "NULL", 1: "NEEDED", 2: "PLTRELSZ", 3: "PLTGOT", 4: "HASH", 5: "STRTAB",
      6: "SYMTAB", 7: "RELA", 8: "RELSZ", 10: "STRSZ", 11: "SYMENT", 12: "INIT",
      13: "FINI", 17: "REL", 19: "RELENT", 20: "PLTREL", 23: "JMPREL",
      25: "INIT_ARRAY", 26: "FINI_ARRAY", 27: "INIT_ARRAYSZ", 28: "FINI_ARRAYSZ",
      30: "FLAGS", 0x6FFFFFFA: "RELCOUNT", 0x6FFFFFFB: "FLAGS_1"}


def verify(path):
    d = open(path, "rb").read()
    n = len(d)
    print("=" * 92)
    print(f"{path}")
    print(f"  {n:,} bytes")
    print("=" * 92)
    if d[:4] != b"NSO0":
        print("  NOT an NSO0\n")
        return
    g = lambda o: struct.unpack_from("<I", d, o)[0]
    t_fo, t_mo, t_sz = g(0x10), g(0x14), g(0x18)
    r_fo, r_mo, r_sz = g(0x20), g(0x24), g(0x28)
    a_fo, a_mo, a_sz = g(0x30), g(0x34), g(0x38)
    bss = g(0x3C)
    SEGS = {"text": (t_mo, t_sz, t_fo), "rodata": (r_mo, r_sz, r_fo),
            "data": (a_mo, a_sz, a_fo)}

    print(f"  .text   mem {t_mo:#07x} size {t_sz:#07x}  file {t_fo:#07x}")
    print(f"  .rodata mem {r_mo:#07x} size {r_sz:#07x}  file {r_fo:#07x}")
    print(f"  .data   mem {a_mo:#07x} size {a_sz:#07x}  file {a_fo:#07x}")
    print(f"  .bss    size {bss:#07x}")

    # segment extent
    ok_ext = (t_fo + t_sz <= n) and (r_fo + r_sz <= n) and (a_fo + a_sz <= n)
    print(f"  segments within file: {'yes' if ok_ext else 'NO'}")

    mp = d.find(b"MOD0", t_fo, t_fo + max(t_sz, 4))
    if mp < 0:
        print("  no MOD0 in .text\n")
        return
    mod0 = mp - t_fo
    vals = struct.unpack_from("<7I", d, mp)

    def where(o):
        for nm, (mo, sz, fo) in SEGS.items():
            if mo <= o < mo + sz:
                return f".{nm}+{o-mo:#x}"
        if a_mo + a_sz <= o < a_mo + a_sz + bss:
            return ".bss"
        return "OUTSIDE"

    def read_mem(off, cnt):
        for nm, (mo, sz, fo) in SEGS.items():
            if mo <= off and off + cnt <= mo + sz:
                return d[fo + (off - mo):fo + (off - mo) + cnt]
        return None

    print(f"  MOD0 at module offset {mod0:#x}")
    dyn = mod0 + vals[1]
    print(f"  .dynamic at {dyn:#x} ({where(dyn)})")

    off, tagval, order = dyn, {}, []
    while True:
        raw = read_mem(off, 8)
        if raw is None:
            print(f"    unreadable at {off:#x}")
            break
        tag, val = struct.unpack("<iI", raw)
        if tag == 0 and val == 0:
            break
        tagval[tag] = val
        order.append((tag, val))
        off += 8

    bad = []
    for tag, val in order:
        nm = DT.get(tag, hex(tag))
        note = ""
        if tag in (12, 13):
            w = where(val)
            good = w.startswith(".text")
            note = f"  -> {w}" + ("" if good else "   *** NOT IN .text ***")
            if not good:
                bad.append(nm)
        elif tag in (3, 4, 5, 6, 7, 17, 23, 25, 26):
            w = where(val)
            note = f"  -> {w}"
            if w == "OUTSIDE":
                bad.append(nm)
        print(f"    {nm:<12} {val:#010x}{note}")

    print()
    if bad:
        print(f"  RESULT: INVALID ({', '.join(bad)} outside segments)")
    else:
        print("  RESULT: OK - all dynamic pointers resolve inside declared segments")
    print()


for p in (sys.argv[1:] or [
    r"C:\Users\Saif Khan\Downloads\sweet-dx-main (1)\sweet-dx-main\output"
    r"\atmosphere\contents\0100EA80032EA000\exefs\subsdk0"
]):
    if os.path.exists(p):
        verify(p)
    else:
        print(f"MISSING: {p}\n")
