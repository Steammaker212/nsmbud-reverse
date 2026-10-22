"""For every hook in our .hks files: is this address ACTUALLY different in the reference build?

Our hook files claim to be "generated from the verified byte diff". That claim is testable
per hook: if retail[addr] == hammer[addr], the hook did not come from the reference build
and is our own invention.

This is the honest audit that should have existed from the start.
"""
import io
import os
import re
import struct

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"
HOOKS = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\hooks"


def segs(d):
    ph = struct.unpack_from("<I", d, 0x1C)[0]
    e = struct.unpack_from("<H", d, 0x2A)[0]
    n = struct.unpack_from("<H", d, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * e
        if struct.unpack_from("<I", d, b)[0] != 1:
            continue
        off = struct.unpack_from("<I", d, b + 4)[0]
        va = struct.unpack_from("<I", d, b + 8)[0]
        fs = struct.unpack_from("<I", d, b + 16)[0]
        if va >= 0x60000000:
            out.append((va - 0x60000000, fs, off))
    return out


retail = open(RETAIL, "rb").read()
hammer = open(HAMMER, "rb").read()
SR, SH = segs(retail), segs(hammer)


def rd(d, S, rva, n=4):
    for v, sz, o in S:
        if v <= rva < v + sz:
            return d[o + rva - v: o + rva - v + n]
    return None


def parse_hks(path):
    """Yield (name, type, address, payload) for each hook block."""
    text = io.open(path, encoding="utf-8").read()
    blocks = re.split(r"\n(?=\S+\s*:\s*$)", text, flags=re.M)
    out = []
    for b in blocks:
        name = re.match(r"^\s*(\S+?)\s*:\s*$", b, re.M)
        addr = re.search(r"address:\s*0x([0-9A-Fa-f]+)", b)
        typ = re.search(r"type:\s*(\w+)", b)
        instr = re.search(r"instruction:\s*(.+?)\s*$", b, re.M)
        data = re.search(r"data:\s*([0-9A-Fa-f ]+?)\s*$", b, re.M)
        if not (name and addr):
            continue
        out.append((name.group(1), typ.group(1) if typ else "?",
                    int(addr.group(1), 16),
                    instr.group(1) if instr else (data.group(1) if data else "")))
    return out


print(f"{'file':<24} {'hook':<32} {'addr':<11} {'type':<6} {'retail':<10} "
      f"{'hammer':<10} {'differs?':<9} verdict")
print("-" * 132)

totals = {"from_build": 0, "invented": 0, "unmapped": 0}
for fn in sorted(os.listdir(HOOKS)):
    if not fn.endswith(".hks"):
        continue
    for name, typ, addr, payload in parse_hks(os.path.join(HOOKS, fn)):
        rb = rd(retail, SR, addr)
        hb = rd(hammer, SH, addr)
        if rb is None or hb is None:
            v = "UNMAPPED"
            totals["unmapped"] += 1
        elif rb != hb:
            v = "differs -> from build"
            totals["from_build"] += 1
        else:
            v = "IDENTICAL -> our invention"
            totals["invented"] += 1
        print(f"{fn:<24} {name:<32} {addr:#010x} {typ:<6} "
              f"{rb.hex() if rb else '?':<10} {hb.hex() if hb else '?':<10} "
              f"{'yes' if rb != hb else 'NO':<9} {v}")

print(f"\nfrom reference build : {totals['from_build']}")
print(f"our own invention    : {totals['invented']}")
print(f"unmapped             : {totals['unmapped']}")
print("""
A hook whose address is IDENTICAL in both images cannot have come from the diff. Either
it is an invention, or the reference build already has that behaviour and the hook is a
no-op. Both mean it must not be shipped as if it were derived evidence.
""")
