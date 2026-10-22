"""Check whether the Hammer build patched the mode bitset that gates item grants.

The chain IDA revealed:

    sub_60466328  ->  sub_60465E4C(a1, code, flag15, instant)  ->  sub_604663F4(itemId,...)
                      sub_604663F4 does Profile::get(profile_table[itemId+1])

sub_60465E4C is the gate. Its logic (Hex-Rays, retail):

    if (a4 == 1)                      return dword_60B0267C[a2];
    if (a3 == 15)                     return 0;
    if (a2 > 0x19 || ((1 << a2) & 0x24004E0) == 0)
                                      return dword_60B0267C[a2];   // unconditional
    ... else require player mode bit:
    if ((0x1FB >> (mode - 1)) & 1)     return dword_60B0267C[a2];
    else                               return 0;                    // NO ITEM

0x1FB covers modes 1..8 (bits 0..8 set: 0x1FB = 0b1_1111_1011 -> bits 0,1,3,4,5,6,7,8).
Mode 10 needs bit 9. If the build left 0x1FB, then any gated content (codes in the
0x24004E0 set) grants NOTHING while the player is in mode 10 -- including the normal
Fire Flower pickup path.

So this reads the actual MOVW immediates from both images and decodes them.
"""
import struct
from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

# Both immediates the retail image uses inside sub_60465E4C.
SITES = [0x60465F40, 0x6046600C]

# MOVW Rd, #imm16 encoding: cond 0011 0000 imm4 Rd imm12
def decode_movw(word):
    if (word & 0xFFF00000) != 0xE3000000:
        return None
    imm4 = (word >> 16) & 0xF
    imm12 = word & 0xFFF
    return (imm4 << 12) | imm12


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


def va2off(S, va):
    for v, sz, o in S:
        if v <= va < v + sz:
            return o + va - v
    return None


md = Cs(CS_ARCH_ARM, CS_MODE_ARM)

print("=== the mode bitset gate, retail vs hammer build ===")
results = {}
for label, path in (("retail", RETAIL), ("hammer", HAMMER)):
    d = open(path, "rb").read()
    S = segs(d)
    print(f"\n--- {label} ---")
    vals = {}
    for va in SITES:
        off = va2off(S, va)
        word = struct.unpack_from("<I", d, off)[0]
        imm = decode_movw(word)
        ins = next(iter(md.disasm(d[off:off + 4], va)), None)
        txt = f"{ins.mnemonic} {ins.op_str}" if ins else "?"
        vals[va] = imm
        print(f"  {va:#010x} off {off:#08x}  {word:08x}  {txt}"
              f"   imm = {('0x%X' % imm) if imm is not None else '?'}")
    results[label] = vals

print("\n=== interpretation ===")
for label, vals in results.items():
    for va, imm in vals.items():
        if imm is None:
            continue
        covered = [b for b in range(16) if imm >> b & 1]
        modes_ok = sorted(b + 1 for b in covered)
        permits_10 = 9 in covered
        print(f"  {label:6} {va:#x} 0x{imm:X} -> permits modes {modes_ok}"
              f"  mode10={'YES' if permits_10 else 'NO'}")

print("\n=== verdict ===")
r = results["retail"]
h = results["hammer"]
if all((h.get(v) is not None) for v in SITES):
    h_set = {h[v] for v in SITES}
    r_set = {r[v] for v in SITES}
    if h_set != r_set:
        print(f"  The build DID change the bitset: retail {[hex(x) for x in r_set]}"
              f" -> hammer {[hex(x) for x in h_set]}")
        for v in SITES:
            if h[v] is not None and (9 in [b for b in range(16) if h[v] >> b & 1]):
                print(f"  {v:#x} now permits mode 10 (bit 9 set).")
    else:
        print(f"  The build did NOT change the bitset (still {[hex(x) for x in r_set]}).")
        print("  => while the player is in mode 10, gated contents grant nothing.")
