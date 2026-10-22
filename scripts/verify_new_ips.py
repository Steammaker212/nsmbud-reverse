"""Verify the newly built IPS contains every critical byte, at the right file offset.

IPS records are (offset24, size16, data). SweetDX writes NSO-relative RVAs, so the file
offset inside `main` is RVA + 0x100 (NSO header). This parses the IPS and checks the
bytes that actually matter, then reports coverage of the reference build's 59 words.

Critical sites:
  mode tables (the 6 PC-relative reader words + 11-entry tables)
  item grant gate (0x465F40, 0x46600C  movw r1,#0x3FB)
  hammer actor (0x13FB38..0x140778)
  projectile (0x7A2708..0x7AB0E4)
"""
import io
import struct

IPS = (r"C:\Users\Saif Khan\Downloads\sweet-dx-main (1)\sweet-dx-main\output\atmosphere"
       r"\exefs_patches\0100EA80032EA000\AEE6DCCC06D9C05B42061E2019123A61.ips")
RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\main"
HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

data = io.open(IPS, "rb").read()
assert data[:5] == b"PATCH", data[:5]
i = 5
records = []
while True:
    if data[i:i + 3] == b"EOF":
        break
    off = (data[i] << 16) | (data[i + 1] << 8) | data[i + 2]
    size = (data[i + 3] << 8) | data[i + 4]
    payload = data[i + 5:i + 5 + size]
    records.append((off, size, payload))
    i += 5 + size

print(f"IPS records: {len(records)}   total patched bytes: {sum(r[1] for r in records)}")
print(f"file size: {len(data)}\n")

patched = {}
for off, size, payload in records:
    for k, b in enumerate(payload):
        patched[off + k] = b


def rva_bytes(rva, n):
    """Bytes the IPS will produce for NSO rva (file offset = rva + 0x100)."""
    return bytes(patched.get(rva + k + 0x100) for k in range(n))


def check(label, rva, want):
    got = rva_bytes(rva, len(want))
    ok = got == want
    print(f"  {'OK  ' if ok else 'FAIL'} {label:<34} {rva:#010x}  "
          f"got {got.hex() if all(x is not None for x in got) else 'MISSING'}"
          f"{'' if ok else '  want ' + want.hex()}")
    return ok


allok = True
print("=== mode-table reader literals (PC-relative DCDs) ===")
allok &= check("body_reader_a", 0x0078C58C, bytes.fromhex("98CE3B00"))
allok &= check("body_reader_b", 0x0078E604, bytes.fromhex("18AE3B00"))
allok &= check("body_reader_c", 0x0078E7E8, bytes.fromhex("A8AD3B00"))
allok &= check("height_reader_a", 0x00795FF0, bytes.fromhex("64363B00"))
allok &= check("height_reader_b", 0x007960F8, bytes.fromhex("90333B00"))
allok &= check("balloon_reader", 0x007982D8, bytes.fromhex("E0113B00"))

print("\n=== relocated 11-entry tables (mode 10 slot) ===")
# recompute from the reference build so we are not comparing to my own constants
h = open(HAMMER, "rb").read()
ph = struct.unpack_from("<I", h, 0x1C)[0]
e = struct.unpack_from("<H", h, 0x2A)[0]
n = struct.unpack_from("<H", h, 0x2C)[0]
SH = []
for j in range(n):
    b = ph + j * e
    if struct.unpack_from("<I", h, b)[0] != 1:
        continue
    off = struct.unpack_from("<I", h, b + 4)[0]
    va = struct.unpack_from("<I", h, b + 8)[0]
    fs = struct.unpack_from("<I", h, b + 16)[0]
    if va >= 0x60000000:
        SH.append((va - 0x60000000, fs, off))


def refbytes(rva, cnt):
    for v, sz, o in SH:
        if v <= rva < v + sz:
            return h[o + rva - v: o + rva - v + cnt]
    return None


for name, base, span in (("height", 0x00B493A8, 0x2C), ("body", 0x00B493D8, 0x2C),
                         ("balloon", 0x00B49404, 0x2C)):
    want = refbytes(base, span)
    allok &= check(f"{name} table", base, want)
    # decode mode 10 = last of the 11 entries
    got = rva_bytes(base, span)
    if all(x is not None for x in got):
        v10 = struct.unpack_from("<I", got, 40)[0]
        f10 = struct.unpack("<f", struct.pack("<I", v10))[0]
        print(f"       mode 10 slot = {v10} (f={f10:.3f})")

print("\n=== tall-actor type (mode 10 slot, extended in place) ===")
allok &= check("tall_actor 0xB0C328 -> 2", 0x00B0C328, bytes.fromhex("02000000"))

print("\n=== item-grant gate: movw r1,#0x3FB ===")
allok &= check("item_gate_mask", 0x00465F40, bytes.fromhex("FB1300E3"))
allok &= check("item_gate_mask_2", 0x0046600C, bytes.fromhex("FB1300E3"))

print("\n=== hammer actor + projectile instr hooks ===")
ACTOR = [(0x0013FB38, "hammer_direction_bit"), (0x0013FB68, "hammer_scale_denom"),
         (0x0140744, "hammer_ctor_read_settings"), (0x0140748, "hammer_ctor_mask"),
         (0x014074C, "hammer_ctor_or_mode"), (0x0140770, "hammer_ctor_or_player"),
         (0x0140778, "hammer_ctor_store")]
PROJ = [(0x007A2708, "can_change_to_hammer"), (0x007AA9BC, "check_set_fireball_mode"),
        (0x007AAA88, "set_fireball_action_mode"), (0x007AABB8, "create_fireball_a_mode"),
        (0x007AAC94, "create_fireball_b_mode"), (0x007AAFF4, "execute_mode_guard"),
        (0x007AB000, "execute_mode_mask"), (0x007AB0E4, "execute_mode_guard2")]
for rva, label in ACTOR + PROJ:
    want = refbytes(rva, 4)
    if want is None:
        print(f"  ?? {label} {rva:#x} not in reference text")
        continue
    allok &= check(label, rva, want)

print("\n=== mode_six_or_ten ===")
allok &= check("cmp r0,#0xa", 0x0078E6A8, bytes.fromhex("0A0050E3"))

print("\n=== quarantined words must NOT be present ===")
for rva, label in ((0x0045DDCC, "grant_hammer_mode"), (0x00AF6620, "actor_info_flags"),
                   (0x00BD3208, "actor_info_subtype"), (0x00BD3210, "actor_info_dist"),
                   (0x00C61BE4, "profile_cell")):
    present = any(rva + 0x100 <= o < rva + 0x100 + 4 for o, _s, _p in records)
    ok = not present
    print(f"  {'OK  ' if ok else 'FAIL'} {label:<24} {rva:#010x} "
          f"{'absent (good)' if ok else 'PRESENT - should not be'}")
    allok &= ok

print(f"\n{'ALL CHECKS PASSED' if allok else 'SOME CHECKS FAILED'}")
