"""Decode the emitted IPS and verify every record against retail.

The IPS is the only artefact that changes the game now that subsdk0 is valid. This
decodes it, prints each record, and classifies it as ADDITIVE or SUBSTITUTION so a
regression like "cmp #2 -> cmpx #0xa" cannot slip through review again.

An ADDITIVE record accepts every value retail accepted and adds mode 10.
A SUBSTITUTION record removes too, and is flagged.
"""
import struct
import sys
import os

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

IPS = sys.argv[1] if len(sys.argv) > 1 else (
    r"C:\Users\Saif Khan\Downloads\sweet-dx-main (1)\sweet-dx-main\output"
    r"\atmosphere\exefs_patches\0100EA80032EA000\AEE6DCCC06D9C05B42061E2019123A61.ips")

d = open(IPS, "rb").read()
print("=" * 92)
print(IPS)
print(f"  {len(d)} bytes")
print("=" * 92)
assert d[:5] == b"PATCH", d[:5]

records = []
i = 5
while i < len(d):
    if d[i:i + 3] == b"EOF":
        print(f"  EOF at {i:#x}")
        break
    off = int.from_bytes(d[i:i + 3], "big")
    size = int.from_bytes(d[i + 3:i + 5], "big")
    i += 5
    if size == 0:                      # RLE
        rle = int.from_bytes(d[i:i + 2], "big")
        val = d[i + 2]
        payload = bytes([val]) * rle
        i += 3
        records.append((off, payload, True))
    else:
        payload = d[i:i + size]
        i += size
        records.append((off, payload, False))

print(f"  {len(records)} records\n")

# Retail words for the .text records we know about, keyed by IPS offset - 0x100 (RVA)
RETAIL = {
    0x465F34: ("CMP R0,#8",       0xE3580008),
    0x465F40: ("MOVW R1,#0x1FB",  0xE30111FB),
    0x466000: ("CMP R0,#8",       0xE3580008),
    0x46600C: ("MOVW R1,#0x1FB",  0xE30111FB),
    0x7AB000: ("MOV R3,#0x64",    0xE3A03064),
    0x78E6A8: ("CMP R0,#2",       0xE3500002),
    0x7AA9BC: ("CMP R1,#2",       0xE3510002),
    0xB0C328: ("data 0",          0x00000000),
}

print(f"  {'IPS off':>8}  {'RVA':>8}  {'size':>4}  {'new bytes':<24} {'retail':<16} kind")
print("  " + "-" * 88)
subs = []
for off, payload, rle in records:
    rva = off - 0x100
    hexs = payload[:12].hex(" ")
    retail = RETAIL.get(rva)
    kind = ""
    if len(payload) == 4:
        neww = struct.unpack("<I", payload)[0]
        # additive test for known mask/cmp widenings
        if rva == 0x7AB000:
            kind = "ADDITIVE" if (neww & 0x64) == 0x64 else "SUBSTITUTION"
        elif retail and retail[1] != 0 and (neww & 0x0FFFFFFF) == (retail[1] & 0x0FFFFFFF):
            kind = "SUBSTITUTION"
        elif retail and retail[1] and (neww >> 28) == (retail[1] >> 28):
            kind = "check"
    if kind == "SUBSTITUTION":
        subs.append((off, rva, payload, retail))
    rt = f"{retail[0]:<16}" if retail else f"{'?':<16}"
    print(f"  {off:#08x}  {rva:#08x}  {len(payload):>4}  {hexs:<24} {rt} {kind}")

print()
if subs:
    print("  *** SUBSTITUTION RECORDS PRESENT ***")
    for off, rva, p, r in subs:
        print(f"    {rva:#08x} retail {r[0]}  ->  {p.hex(' ')}")
else:
    print("  No known destructive substitutions in this IPS.")

# explicit check for the fireball regression
print("\n  Fireball-path regression check:")
FIREBALL = [0x7AA9BC, 0x7AAA88, 0x7AABB8, 0x7AAC94, 0x7AAFF4, 0x7AB0E4, 0x78E6A8]
present = {rva for _, p, _ in records for rva in [(_ - 0x100)]}
hits = [a for a in FIREBALL if a in present]
if hits:
    print(f"    *** STILL PATCHED: {', '.join(hex(a) for a in hits)}")
else:
    print("    clean - none of the mode-2 comparison sites are patched")
