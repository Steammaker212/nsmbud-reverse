#!/usr/bin/env python3
"""Independent verification of the patched Hammer ELF (Approach B).

Does not trust the report or the other agent's scripts: reads both files and
re-derives every claim from bytes.
"""
import hashlib
import struct
import sys

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

HEIGHT_VA = 0x60B493A8
BODY_VA = 0x60B493D8

PATCHES = [
    (0x6045DDCC, "0220A0E3", "0A20A0E3", "grant mov r2,#10"),
    (0x607AAA88, "020050E3", "0A0050E3", "setFireBallAction cmp #10"),
    (0x607AA9BC, "020051E3", "0A0051E3", "checkSetFireBall cmp #10"),
    (0x607AABB8, "020050E3", "0A0050E3", "createFireBall cmp #10 (a)"),
    (0x607AAC94, "020050E3", "0A0050E3", "createFireBall cmp #10 (b)"),
    (0x607AAFF4, "060051E3", "0A0051E3", "execute cmp #10"),
    (0x607AB000, "6430A0E3", "643400E3", "execute movw #0x464"),
    (0x607AB0E4, "020050E3", "0A0050E3", "execute cmp #10"),
    (0x607A2708, "1EFF2F81", "0130A083", "canChangeTo movhi r3,#1"),
]

LITERALS = [
    (0x60795FF0, 0x00376578, 0x003B3664, "height A"),
    (0x607960F8, 0x003762A4, 0x003B3390, "height B"),
    (0x6078C58C, 0x0037FCF0, 0x003BCE98, "body A"),
    (0x6078E604, 0x0037DC70, 0x003BAE18, "body B"),
    (0x6078E7E8, 0x0037DC00, 0x003BADA8, "body C"),
]

PROFILE_CELL = 0x60C61BE4
PROFILE_OLD, PROFILE_NEW = 0x00AF3498, 0x00AF3904
TALLTYPE_CELL = 0x60B0C328
MUST_STAY = [(0x60B0C2E4, 0.0, "height idx10"), (0x60B0C258, 0xA5, "body idx10")]


def segs(data):
    ph = struct.unpack_from("<I", data, 0x1C)[0]
    ents = struct.unpack_from("<H", data, 0x2A)[0]
    n = struct.unpack_from("<H", data, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * ents
        if struct.unpack_from("<I", data, b)[0] == 1:
            out.append((struct.unpack_from("<I", data, b + 8)[0],
                        struct.unpack_from("<I", data, b + 16)[0],
                        struct.unpack_from("<I", data, b + 4)[0]))
    return out


def main():
    a = open(SRC, "rb").read()
    b = open(OUT, "rb").read()

    print(f"src md5 {hashlib.md5(a).hexdigest()}  size {len(a)}")
    print(f"out md5 {hashlib.md5(b).hexdigest()}  size {len(b)}")
    print(f"out sha256 {hashlib.sha256(b).hexdigest()}")
    print(f"size equal: {len(a) == len(b)}\n")

    SA, SB = segs(a), segs(b)
    ok_segs = SA == SB
    print(f"program headers identical: {ok_segs}")

    def off(segs_, va):
        for v, sz, o in segs_:
            if v <= va < v + sz:
                return o + va - v
        raise ValueError(hex(va))

    fails = 0
    print("\n=== instruction patches ===")
    for va, old, new, what in PATCHES:
        oa, ob = off(SA, va), off(SB, va)
        got_a = a[oa:oa + 4].hex().upper()
        got_b = b[ob:ob + 4].hex().upper()
        good = (got_a == old and got_b == new)
        if not good:
            fails += 1
        print(f"  {va:#010x} {what:30} src={got_a} out={got_b} "
              f"{'OK' if good else 'FAIL'}")

    print("\n=== literal redirects ===")
    for va, oldv, newv, what in LITERALS:
        oa, ob = off(SA, va), off(SB, va)
        ca = struct.unpack_from("<I", a, oa)[0]
        cb = struct.unpack_from("<I", b, ob)[0]
        good = (ca == oldv and cb == newv)
        if not good:
            fails += 1
        print(f"  {va:#010x} {what:10} src=0x{ca:08X} out=0x{cb:08X} "
              f"{'OK' if good else 'FAIL'}")

    print("\n=== profile pointer cell ===")
    oa, ob = off(SA, PROFILE_CELL), off(SB, PROFILE_CELL)
    ca = struct.unpack_from("<I", a, oa)[0]
    cb = struct.unpack_from("<I", b, ob)[0]
    good = (ca == PROFILE_OLD and cb == PROFILE_NEW)
    if not good:
        fails += 1
    print(f"  src=0x{ca:08X} out=0x{cb:08X} {'OK' if good else 'FAIL'}")

    print("\n=== tall type[10] ===")
    ob = off(SB, TALLTYPE_CELL)
    v = struct.unpack_from("<I", b, ob)[0]
    good = v == 2
    if not good:
        fails += 1
    print(f"  0x{TALLTYPE_CELL:08X} = {v} {'OK' if good else 'FAIL'} (expect 2)")

    print("\n=== adjacent tables must be untouched ===")
    for va, expect, what in MUST_STAY:
        oa, ob = off(SA, va), off(SB, va)
        ca = struct.unpack_from("<f", a, oa)[0]
        cb = struct.unpack_from("<f", b, ob)[0]
        if isinstance(expect, float):
            good = ca == expect and cb == expect
            if not good:
                fails += 1
            print(f"  {va:#010x} {what:14} src={ca} out={cb} "
                  f"{'OK' if good else 'FAIL'}")
    ob = off(SB, 0x60B0C258)
    v = b[ob]
    good = v == 0xA5
    if not good:
        fails += 1
    print(f"  0x60b0c258 body idx10   out=0x{v:02X} {'OK' if good else 'FAIL'}")

    print("\n=== new tables in patched file ===")
    ob = off(SB, HEIGHT_VA)
    h = struct.unpack_from("<11f", b, ob)
    print(f"  height @0x{HEIGHT_VA:08X}: {[round(x,1) for x in h]}")
    ob = off(SB, BODY_VA)
    bd = struct.unpack_from("<11I", b, ob)
    print(f"  body   @0x{BODY_VA:08X}: {list(bd)}")

    print("\n=== padding block remainder stays zero ===")
    ob = off(SB, HEIGHT_VA)
    block = b[ob:ob + 0xA0]
    tail = block[88:]
    print(f"  bytes 88..160 nonzero count: {sum(1 for x in tail if x)} "
          f"(expect 0)")

    # full diff accounting
    diffs = [i for i in range(len(a)) if a[i] != b[i]]
    print(f"\n=== total differing bytes: {len(diffs)} ===")
    print(f"FAILS: {fails}")
    return fails


if __name__ == "__main__":
    sys.exit(0 if main() == 0 else 1)
