#!/usr/bin/env python3
"""Verify ALL literal redirects in the final patched ELF and resolve their
effective add-pc targets. Catches redirects the docs don't list."""
import struct
import sys

try:
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
except ImportError:
    print("capstone required")
    sys.exit(2)

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

HEIGHT = 0x60B493A8
BODY = 0x60B493D8

# cells we already know about
KNOWN = {0x60795FF0, 0x607960F8, 0x6078C58C, 0x6078E604, 0x6078E7E8}
NEW = {0x6078E6A8, 0x607982D8}


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


def off(s, va):
    for v, sz, o in s:
        if v <= va < v + sz:
            return o + va - v
    raise ValueError(hex(va))


a = open(SRC, "rb").read()
b = open(OUT, "rb").read()
SA, SB = segs(a), segs(b)
md = Cs(CS_ARCH_ARM, CS_MODE_ARM)


def analyse(va, data, S):
    """Read the literal at va and find the add-pc that consumes it."""
    lit = struct.unpack_from("<I", data, off(S, va))[0]
    # find an ADD Rn, PC, Rm or LDR Rn,=... referencing this cell within 64 insns
    for back in range(4, 0x120, 4):
        cand = va - back
        try:
            w = struct.unpack_from("<I", data, off(S, cand))[0]
        except ValueError:
            continue
        for ins in md.disasm(struct.pack("<I", w), cand):
            if ins.mnemonic == "add" and "pc" in ins.op_str:
                # add rX, pc, #imm  -> imm is the low 8 bits with rotation;
                # or register form. Compute effective address.
                try:
                    ops = [o.strip() for o in ins.op_str.split(",")]
                    imm = 0
                    for o in ops[2:]:
                        if o.startswith("#"):
                            imm = int(o[1:], 0)
                    target = cand + 8 + imm
                    return lit, cand, ins, target
                except Exception:
                    pass
    return lit, None, None, None


print("=== all literal redirect cells that CHANGED ===")
changed = []
for va in sorted(KNOWN | NEW):
    wo = struct.unpack_from("<I", a, off(SA, va))[0]
    wn = struct.unpack_from("<I", b, off(SB, va))[0]
    tag = "NEW" if va in NEW else "known"
    print(f"\n  {va:#010x}  [{tag}]")
    print(f"    src literal 0x{wo:08X} -> out literal 0x{wn:08X}")
    lit, user, ins, target = analyse(va, b, SB)
    if ins:
        print(f"    consumed at {user:#x}: {ins.mnemonic} {ins.op_str}")
        print(f"    effective target = 0x{target:08X}")
        which = ("HEIGHT" if target == HEIGHT else
                 "BODY" if target == BODY else "other")
        print(f"    -> {which}")
    else:
        print("    (could not locate the consuming add-pc)")
    changed.append((va, wo, wn, target))

print("\n=== summary of redirects pointing at new tables ===")
for va, wo, wn, target in changed:
    which = ("HEIGHT" if target == HEIGHT else
             "BODY" if target == BODY else f"0x{target:08X}" if target else "?")
    print(f"  {va:#010x} -> {which}")
