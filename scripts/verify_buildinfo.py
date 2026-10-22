#!/usr/bin/env python3
"""Verify ActorBuildInfo layout by disassembling StageActor's constructor.

StageActor::StageActor(ActorBuildInfo const*) is at VA 0x600002A0. Every field it
reads from r1 tells us the real offset of a build-info field.
"""
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM

ELF = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
CTOR = 0x600002A0


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
    return None


d = open(ELF, "rb").read()
S = segs(d)
md = Cs(CS_ARCH_ARM, CS_MODE_ARM)

o = off(S, CTOR)
print(f"=== StageActor ctor @ {CTOR:#x} (buildInfo arrives in r1) ===\n")
code = d[o:o + 0x90]
seen = []
for ins in md.disasm(code, CTOR):
    txt = f"{ins.mnemonic:8} {ins.op_str}"
    mark = ""
    # r1 is buildInfo; note every offset read from it
    if ", [r1" in ins.op_str or ins.op_str.startswith("ldr") and "[r1" in ins.op_str:
        mark = "   <-- buildInfo read"
        seen.append(ins.op_str)
    print(f"  {ins.address:#010x}  {txt}{mark}")
    if ins.mnemonic == "pop" and "pc" in ins.op_str:
        break

print("\n=== offsets read from buildInfo (r1) ===")
import re
for s in seen:
    m = re.search(r"\[r1(?:,\s*#(0x[0-9a-f]+|\d+))?\]", s)
    if m:
        v = int(m.group(1), 0) if m.group(1) else 0
        print(f"  +0x{v:02X}   ({s})")
