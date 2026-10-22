"""Disassemble the function StageActor's ctor calls at 0x60002C54 (Actor::Actor)
and look for byte copies from the build info, which pin movementId/linkId.
"""
import struct
from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM

ELF = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"


def segs(d):
    ph = struct.unpack_from("<I", d, 0x1C)[0]
    e = struct.unpack_from("<H", d, 0x2A)[0]
    n = struct.unpack_from("<H", d, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * e
        if struct.unpack_from("<I", d, b)[0] == 1:
            out.append((struct.unpack_from("<I", d, b + 8)[0],
                        struct.unpack_from("<I", d, b + 16)[0],
                        struct.unpack_from("<I", d, b + 4)[0]))
    return out


d = open(ELF, "rb").read()
S = segs(d)
md = Cs(CS_ARCH_ARM, CS_MODE_ARM)


def read(va, n):
    for v, sz, o in S:
        if v <= va < v + sz:
            return d[o + va - v: o + va - v + n]
    return None


for target, label in ((0x60002C54, "Actor::Actor (called from StageActor ctor)"),):
    code = read(target, 0x100)
    print(f"=== {label} @ {target:#x} ===\n")
    for ins in md.disasm(code, target):
        op = ins.op_str
        flag = ""
        if ins.mnemonic in ("ldrb", "strb"):
            flag = "   <- byte copy"
        print(f"  {ins.address:#010x}  {ins.mnemonic:8} {op}{flag}")
        if ins.mnemonic == "bx" and ins.op_str == "lr":
            break
        if ins.mnemonic == "pop" and "pc" in ins.op_str:
            break

print("\n=== byte-sized accesses anywhere in the first 0x100 bytes ===")
code = read(0x60002C54, 0x100)
for ins in md.disasm(code, 0x60002C54):
    if ins.mnemonic in ("ldrb", "strb", "ldrsb"):
        print(f"  {ins.address:#010x}  {ins.mnemonic:8} {ins.op_str}")
