#!/usr/bin/env python3
"""Final complete accounting of every byte diff in the patched ELF.

Classifies each diff region against the known patch inventory and reports
anything unaccounted for.
"""
import struct
import sys

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

HEIGHT = 0x60B493A8
BLOCK_END = 0x60B49448


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


def off2va(S, o):
    for v, sz, so in S:
        if so <= o < so + sz:
            return v + (o - so)
    return None


a = open(SRC, "rb").read()
b = open(OUT, "rb").read()
SA, SB = segs(a), segs(b)

INVENTORY = {
    # --- Approach A: 11 actor patches
    0x60C61BE4: "A  profile ptr 476->759",
    0x60BD3208: "A  Hammer Info#1 subtype=19",
    0x60BD3210: "A  Hammer Info#1 mask",
    0x60AF6620: "A  Hammer Info#2 mask=0",
    0x6013FB38: "A  direction=(param>>4)&1",
    0x6013FB68: "A  scale denom=10",
    0x60140744: "A  ctor LDR R6,[R4,#0x14]",
    0x60140748: "A  ctor AND R6,#0xF",
    0x6014074C: "A  ctor ORR #0x13000000",
    0x60140770: "A  ctor ORR #0xFF00",
    0x60140778: "A  ctor STR [R4,#0x54]",
    # --- Approach B gates
    0x6045DDCC: "B  grant mov r2,#10",
    0x607A2708: "B  canChangeTo movhi r3,#1",
    0x607AAA88: "B  setFireBallAction cmp #10",
    0x607AA9BC: "B  checkSetFireBall cmp #10",
    0x607AABB8: "B  createFireBall cmp #10 (a)",
    0x607AAC94: "B  createFireBall cmp #10 (b)",
    0x607AAFF4: "B  execute cmp #10",
    0x607AB000: "B  execute movw #0x464",
    0x607AB0E4: "B  execute cmp #10",
    0x60B0C328: "B  tall type[10]=2",
    # --- item gate (new this session)
    0x60465F34: "C  item gate cmp r0,#9",
    0x60465F40: "C  item gate mask 0x3FB",
    0x60466000: "C  item gate cmp r0,#9 (2)",
    0x6046600C: "C  item gate mask 0x3FB (2)",
    # --- literal redirects
    0x60795FF0: "D  redirect height A",
    0x607960F8: "D  redirect height B",
    0x6078C58C: "D  redirect body A",
    0x6078E604: "D  redirect body B",
    0x6078E7E8: "D  redirect body C",
    0x607982D8: "D  redirect balloon",
    # --- undisclosed extra gate
    0x6078E6A8: "E  EXTRA gate cmp #6/#10",
}


def near(va):
    for k in INVENTORY:
        if k <= va < k + 4:
            return k
    return None


diffs = [i for i in range(min(len(a), len(b))) if a[i] != b[i]]
groups, cur = [], [diffs[0]] if diffs else []
for i in diffs[1:]:
    if i == cur[-1] + 1:
        cur.append(i)
    else:
        groups.append(cur)
        cur = [i]
if cur:
    groups.append(cur)

print(f"total differing bytes: {len(diffs)}")
print(f"diff regions: {len(groups)}\n")

counts = {}
unknown = []
for g in groups:
    va = off2va(SA, g[0])
    key = near(va) if va else None
    label = INVENTORY.get(key, "UNKNOWN")
    if key is None:
        if va and HEIGHT <= va < BLOCK_END:
            label = "T  relocation block"
        else:
            unknown.append((va, len(g)))
    counts[label.split("  ")[0]] = counts.get(label.split("  ")[0], 0) + len(g)
    tag = "" if "UNKNOWN" not in label else "   <<<< UNACCOUNTED"
    print(f"  {len(g):3d} B  VA {va:#010x}  {label}{tag}")

print("\n=== byte totals per category ===")
for k in sorted(counts):
    print(f"  {k}: {counts[k]} bytes")

print(f"\nunaccounted regions: {len(unknown)}")
for va, n in unknown:
    print(f"  VA {va:#x}  {n} bytes")
