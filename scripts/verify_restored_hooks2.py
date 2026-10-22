"""Verify the restored mode_tables.hks payloads are EXACTLY right.

Line-based parser (the earlier regex split silently returned zero hooks).

For each table, concatenate the hook payloads that fall in its span, then:
  * compare byte-for-byte against the reference build's own relocated tables
  * decode the 11 entries and compare against the intended values
Also re-derive the six reader literals as `table - pc` and check them.
"""
import io
import os
import struct

HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"
HOOKS = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\hooks\mode_tables.hks"


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


hammer = open(HAMMER, "rb").read()
SH = segs(hammer)


def rd(rva, n):
    for v, sz, o in SH:
        if v <= rva < v + sz:
            return hammer[o + rva - v: o + rva - v + n]
    return None


# ---- line-based hook parser ------------------------------------------------
hooks = []
cur = None
for raw in io.open(HOOKS, encoding="utf-8").read().splitlines():
    s = raw.strip()
    if not s or s.startswith("@"):
        continue
    if not raw[0].isspace() and s.endswith(":") and ": " not in s:
        if cur and cur.get("address") is not None:
            hooks.append(cur)
        cur = {"name": s[:-1]}
        continue
    if cur is None:
        continue
    if s.startswith("address:"):
        cur["address"] = int(s.split(":", 1)[1].strip(), 16)
    elif s.startswith("data:"):
        val = s.split(":", 1)[1].strip()
        cur["data"] = bytes.fromhex("".join(val.split()))
    elif s.startswith("type:"):
        cur["type"] = s.split(":", 1)[1].strip()
if cur and cur.get("address") is not None:
    hooks.append(cur)

dat = [h for h in hooks if "data" in h]
print(f"hooks parsed: {len(hooks)}   with data: {len(dat)}\n")

EXPECT = {
    0x00B493A8: ("height", [16.0, 31, 31, 6.0, 31, 31, 31, 31, 31, 31, 31], "f", 0x2C),
    0x00B493D8: ("body", [1, 0, 0, 1, 2, 3, 0, 4, 4, 5, 0], "i", 0x2C),
    0x00B49404: ("balloon", [0.0, -4, -4, 4.0, -5, -2, -4, -4, -4, 0.0, -4.0], "f", 0x2C),
}

fail = 0
print("=== table payloads vs reference build ===")
for base, (name, exp, kind, span) in EXPECT.items():
    mine = bytearray(span)
    covered = bytearray(span)
    for h in dat:
        ad = h["address"]
        if base <= ad < base + span:
            i = ad - base
            mine[i:i + len(h["data"])] = h["data"]
            covered[i:i + len(h["data"])] = b"\x01" * len(h["data"])
    mine = bytes(mine)
    ref = rd(base, span)
    same = mine == ref
    print(f"\n  {name} @ {base:#010x}   covered {sum(covered)}/{span} bytes")
    print(f"    mine: {mine.hex()}")
    print(f"    ref : {ref.hex() if ref else 'None'}")
    print(f"    bytes: {'MATCH' if same else 'DIFFERS'}")
    if not same:
        fail += 1
        if ref:
            for i in range(min(len(mine), len(ref))):
                if mine[i] != ref[i]:
                    print(f"      byte {i} ({base+i:#x}): mine {mine[i]:02x} ref {ref[i]:02x}")
    # decode 11 entries
    if kind == "f":
        got = [round(struct.unpack_from("<f", mine, i * 4)[0], 4) for i in range(11)]
    else:
        got = [struct.unpack_from("<I", mine, i * 4)[0] for i in range(11)]
    ok = all(abs(got[i] - exp[i]) < 1e-4 for i in range(11))
    print(f"    got  : {got}")
    print(f"    want : {exp}")
    print(f"    {'VALUES OK  mode10=' + str(got[10]) if ok else 'VALUE MISMATCH'}")
    if not ok:
        fail += 1

print("\n=== reader literals: stored + pc must equal target ===")
PC = {0x0078C58C: 0x0078C540, 0x0078E604: 0x0078E5C0, 0x0078E7E8: 0x0078E630,
      0x00795FF0: 0x00795D44, 0x007960F8: 0x00796018, 0x007982D8: 0x00798224}
WANT = {0x0078C58C: 0x00B493D8, 0x0078E604: 0x00B493D8, 0x0078E7E8: 0x00B493D8,
        0x00795FF0: 0x00B493A8, 0x007960F8: 0x00B493A8, 0x007982D8: 0x00B49404}
for h in dat:
    ad = h["address"]
    if ad in PC:
        stored = struct.unpack("<I", h["data"])[0]
        res = (stored + PC[ad]) & 0xFFFFFFFF
        ok = res == WANT[ad]
        if not ok:
            fail += 1
        print(f"  {h['name']:<20} {ad:#010x} {stored:#010x} + {PC[ad]:#010x} "
              f"= {res:#010x}  want {WANT[ad]:#010x}  {'OK' if ok else 'WRONG'}")

# tall actor
for h in dat:
    if h["address"] == 0x00B0C328:
        v = struct.unpack("<I", h["data"])[0]
        ok = v == 2
        if not ok:
            fail += 1
        print(f"  {h['name']:<20} 0x00b0c328 = {v}  {'OK' if ok else 'WRONG (want 2)'}")

print(f"\n{'ALL CHECKS PASSED' if fail == 0 else 'FAILURES: %d' % fail}")
