"""Verify the second build variant: step-2 bisection (Hammer enabled, unproven extras off).

This variant adds exactly one hook to the default build:

    0x0045DDCC  mov r2,#2 -> mov r2,#0xa

so the Hammer becomes obtainable, while the profile-cell substitution and the three
ActorInfo writes stay out. If the game crashes with this build, the fault is in mode 10
itself. If it renders cleanly and the Hammer works, the remaining doubt is closed.

Checks:
  * the grant word is present and correct
  * every previously-verified site is still present and correct
  * the four quarantined words are still absent
"""
import io
import struct

IPS = (r"C:\Users\Saif Khan\Downloads\sweet-dx-main (1)\sweet-dx-main\output\atmosphere"
       r"\exefs_patches\0100EA80032EA000\AEE6DCCC06D9C05B42061E2019123A61.ips")
HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

data = io.open(IPS, "rb").read()
assert data[:5] == b"PATCH"
i, records = 5, []
while data[i:i + 3] != b"EOF":
    off = (data[i] << 16) | (data[i + 1] << 8) | data[i + 2]
    size = (data[i + 3] << 8) | data[i + 4]
    records.append((off, size, data[i + 5:i + 5 + size]))
    i += 5 + size

patched = {}
for off, size, payload in records:
    for k, b in enumerate(payload):
        patched[off + k] = b

print(f"IPS: {len(records)} records, {sum(r[1] for r in records)} patched bytes, "
      f"{len(data)} bytes total\n")


def get(rva, n):
    return bytes(patched.get(rva + k + 0x100) for k in range(n))


h = io.open(HAMMER, "rb").read()
ph = struct.unpack_from("<I", h, 0x1C)[0]
e = struct.unpack_from("<H", h, 0x2A)[0]
n = struct.unpack_from("<H", h, 0x2C)[0]
SH = []
for j in range(n):
    b = ph + j * e
    if struct.unpack_from("<I", h, b)[0] != 1:
        continue
    off, va, fs = (struct.unpack_from("<I", h, b + 4)[0],
                   struct.unpack_from("<I", h, b + 8)[0],
                   struct.unpack_from("<I", h, b + 16)[0])
    if va >= 0x60000000:
        SH.append((va - 0x60000000, fs, off))


def ref(rva, cnt):
    for v, sz, o in SH:
        if v <= rva < v + sz:
            return h[o + rva - v: o + rva - v + cnt]
    return None


ok = True


def check(label, rva, want):
    global ok
    got = get(rva, len(want))
    good = got == want
    ok &= good
    print(f"  {'OK  ' if good else 'FAIL'} {label:<32} {rva:#010x}")


print("=== the new hook: grant_hammer_mode ===")
check("mov r2,#0xa", 0x0045DDCC, bytes.fromhex("0A20A0E3"))

print("\n=== every other verified site still correct ===")
SITES = [
    ("body_reader_a", 0x0078C58C, bytes.fromhex("98CE3B00")),
    ("body_reader_b", 0x0078E604, bytes.fromhex("18AE3B00")),
    ("body_reader_c", 0x0078E7E8, bytes.fromhex("A8AD3B00")),
    ("height_reader_a", 0x00795FF0, bytes.fromhex("64363B00")),
    ("height_reader_b", 0x007960F8, bytes.fromhex("90333B00")),
    ("balloon_reader", 0x007982D8, bytes.fromhex("E0113B00")),
    ("tall_actor", 0x00B0C328, bytes.fromhex("02000000")),
    ("item_gate_mask", 0x00465F40, bytes.fromhex("FB1300E3")),
    ("item_gate_mask_2", 0x0046600C, bytes.fromhex("FB1300E3")),
    ("mode_six_or_ten", 0x0078E6A8, bytes.fromhex("0A0050E3")),
]
for label, rva, want in SITES:
    check(label, rva, want)

print("\n=== relocated tables (byte-compare to reference) ===")
for name, base in (("height", 0x00B493A8), ("body", 0x00B493D8), ("balloon", 0x00B49404)):
    w = ref(base, 0x2C)
    check(f"{name} table", base, w)

print("\n=== actor + projectile hooks (byte-compare to reference) ===")
FOR = [(0x0013FB38, "direction_bit"), (0x0013FB68, "scale_denom"),
       (0x00140744, "ctor_read"), (0x00140748, "ctor_mask"), (0x0014074C, "ctor_or_mode"),
       (0x00140770, "ctor_or_player"), (0x00140778, "ctor_store"),
       (0x007A2708, "can_change"), (0x007AA9BC, "check_set_fb"), (0x007AAA88, "set_fb_action"),
       (0x007AABB8, "create_fb_a"), (0x007AAC94, "create_fb_b"),
       (0x007AAFF4, "exec_guard"), (0x007AB000, "exec_mask"), (0x007AB0E4, "exec_guard2")]
for rva, label in FOR:
    w = ref(rva, 4)
    if w:
        check(label, rva, w)

print("\n=== quarantined words must still be ABSENT ===")
for rva, label in ((0x00AF6620, "actor_info_flags"), (0x00BD3208, "actor_info_subtype"),
                   (0x00BD3210, "actor_info_dist"), (0x00C61BE4, "profile_cell")):
    present = any(rva + 0x100 <= o < rva + 0x100 + 4 for o, _s, _p in records)
    good = not present
    ok &= good
    print(f"  {'OK  ' if good else 'FAIL'} {label:<24} {rva:#010x} "
          f"{'absent' if good else 'PRESENT'}")

print(f"\n{'VARIANT B VERIFIED' if ok else 'VARIANT B HAS FAILURES'}")
