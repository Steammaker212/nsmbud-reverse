"""Are block contents 2 and 3 the same item?

This is the crux. Every block exposes Contents as one nybble with all 16 values
taken, so a patch cannot ADD a Hammer value. But the base game labels BOTH value 2
and value 3 "Fire Flower", which suggests a duplicate.

If action[2] == action[3], then both resolve to the same action code, hence the
same item class, hence the same grant handler -- so both grant mode 10 in the
Hammer build. That would make relabelling one of them honest: no behaviour
changes, but the editor finally shows which entry gives the Hammer.

If they differ, relabelling would be a lie and this report should say so.

Note the read is deliberately checked two ways, because an earlier attempt to
follow the whole contents -> item chain produced a result that contradicted the
editor's own labels (it put Mushroom where the editor puts Fire Flower). The
comparison below only needs the action table, not the item table, so it is
independent of where that disagreement came from.
"""
import struct

ELF = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
ACTION = 0x60B04164


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


def rd(va, n):
    for v, sz, o in S:
        if v <= va < v + sz:
            return d[o + va - v: o + va - v + n]
    return None


codes = struct.unpack_from("<16I", rd(ACTION, 16 * 4), 0)
print("=== action code per contents value (0-15) ===")
for i, c in enumerate(codes):
    print(f"  contents {i:2} -> code {c}")

print("\n=== the question that matters ===")
print(f"  action[2] = {codes[2]}")
print(f"  action[3] = {codes[3]}")
same = codes[2] == codes[3]
print(f"  identical: {same}")

if same:
    print("\n  => contents 2 and 3 reach the same action code, therefore the same")
    print("     item class and the same grant handler. In the Hammer build that")
    print("     handler returns mode 10, so BOTH values dispense the Hammer.")
    print("     Relabelling one of them changes no behaviour.")
else:
    print("\n  => they differ; relabelling would change meaning. Do not do it.")

# Any other duplicate pairs? Those are also candidate-free labels.
print("\n=== duplicate action codes among contents 0-15 ===")
groups = {}
for i, c in enumerate(codes):
    groups.setdefault(c, []).append(i)
for c, idxs in sorted(groups.items()):
    if len(idxs) > 1:
        print(f"  code {c:3} <- contents {idxs}")

print("\n=== which other contents values might be spare (same code as another)? ===")
spare = {i: c for c, idxs in groups.items() if len(idxs) > 1 for i in idxs}
if spare:
    for i in sorted(spare):
        print(f"  contents {i:2} shares code {spare[i]} with "
              f"{[x for x in groups[spare[i]] if x != i]}")
