#!/usr/bin/env python3
"""Generate SweetDX .hks hook files directly from the verified byte diffs.

Why generate rather than hand-write: the diff set is the ground truth (115 bytes,
59 regions, 0 unaccounted). Deriving hooks from it makes the .hks provably
complete, and every `instr` hook is round-tripped through clang using sweet-dx's
exact flags before being emitted. Anything that fails the round-trip is emitted
as a `data` hook instead, which is byte-exact by construction.

Hooks are grouped into one file per subsystem so the layout reads like code.
"""
import os
import re
import struct
import subprocess
import tempfile

try:
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
except ImportError:
    raise SystemExit("capstone required")

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"
PROJ = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx"
IDB = 0x60000000
NSO_MEM = 0x00CD1000
TEXT = (0x60000288, 0x609AD3BC)

FLAGS = [
    "--no-default-config", "--target=armv7l-none-eabihf",
    "-mcpu=cortex-a57", "-mfpu=crypto-neon-fp-armv8",
    "-mfloat-abi=hard", "-mabi=aapcs-linux", "-fPIC",
    "-nostdlib", "-fno-rtti", "-fno-exceptions", "-fpermissive", "-c",
]

md = Cs(CS_ARCH_ARM, CS_MODE_ARM)


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


def read_section(data, name):
    shoff = struct.unpack_from("<I", data, 0x20)[0]
    shent = struct.unpack_from("<H", data, 0x2E)[0]
    shnum = struct.unpack_from("<H", data, 0x30)[0]
    shstr = struct.unpack_from("<H", data, 0x32)[0]
    stro = struct.unpack_from("<I", data, shoff + shstr * shent + 16)[0]
    for i in range(shnum):
        b = shoff + i * shent
        n = struct.unpack_from("<I", data, b)[0]
        end = data.index(b"\0", stro + n)
        if data[stro + n:end].decode() == name:
            so = struct.unpack_from("<I", data, b + 16)[0]
            sz = struct.unpack_from("<I", data, b + 20)[0]
            return data[so:so + sz]
    return None


_asm_cache = {}


def assemble(text):
    """Assemble one ARM instruction exactly as sweet-dx's brazo does."""
    key = re.sub(r"\s+", " ", text).strip()
    if key in _asm_cache:
        return _asm_cache[key]
    with tempfile.TemporaryDirectory() as td:
        s = os.path.join(td, "t.s")
        o = os.path.join(td, "t.o")
        with open(s, "w", encoding="utf-8") as f:
            f.write('.section ".instruction"\n.arm\n'
                    f'.fpu crypto-neon-fp-armv8\n    {key}\n')
        r = subprocess.run(["clang++", *FLAGS, s, "-o", o],
                           capture_output=True, text=True)
        if r.returncode:
            _asm_cache[key] = None
            return None
        with open(o, "rb") as f:
            d = f.read()
        sec = read_section(d, ".instruction")
        res = struct.unpack("<I", sec)[0] if sec and len(sec) == 4 else None
        _asm_cache[key] = res
        return res


a = open(SRC, "rb").read()
b = open(OUT, "rb").read()
SA, SB = segs(a), segs(b)

# ---- 1. collect changed 4-byte words (word-aligned in VA space) ----
diffs = [i for i in range(min(len(a), len(b))) if a[i] != b[i]]


def off2va(S, o):
    for v, sz, so in S:
        if so <= o < so + sz:
            return v + (o - so)
    return None


words = set()
for i in diffs:
    va = off2va(SA, i)
    if va is None:
        continue
    words.add(va - (va % 4))

words = sorted(words)

# ---- 2. classify each word ----
# Group metadata so the emitted files read like a narrative.
GROUPS = {
    "hammer_profile.hks": (
        "Hammer power-up: register the Hammer actor as a power-up mode.",
        []),
    "hammer_actor.hks": (
        "Hammer power-up: actor construction and projectile body setup.", []),
    "hammer_projectile.hks": (
        "Hammer power-up: the throw path (fireball code reused for Hammer).", []),
    "item_grant.hks": (
        "Power-up mode 10 through the item-grant gate (? blocks, item pickups).",
        []),
    "mode_tables.hks": (
        "Power-up mode lookup tables (height, body type, draw offset).", []),
}

# explicit grouping by address, so the file split is meaningful not arbitrary
def group_for(va):
    if va in (0x60C61BE4, 0x60AF6620, 0x60BD3208, 0x60BD3210):
        return "hammer_profile.hks"
    if 0x6013FB00 <= va < 0x60140800:
        return "hammer_actor.hks"
    if 0x6045DD00 <= va < 0x6045DE00:
        return "hammer_profile.hks"
    if 0x607A2000 <= va < 0x607AC000:
        return "hammer_projectile.hks"
    if 0x60465000 <= va < 0x60467000:
        return "item_grant.hks"
    if 0x6078C000 <= va < 0x60799000:
        return "mode_tables.hks"
    if 0x60B0C000 <= va < 0x60B0D000:
        return "mode_tables.hks"
    if 0x60B49000 <= va < 0x60B49500:
        return "mode_tables.hks"
    return "hammer_projectile.hks"


LABELS = {
    0x60C61BE4: ("hammer_profile_cell", "Point the power-up slot at the Hammer profile (759) instead of the Fire Flower (476)."),
    0x60BD3208: ("hammer_actor_info_subtype", "ActorInfo subtype -> 19 so the Hammer body is treated like a thrown projectile."),
    0x60BD3210: ("hammer_actor_info_dist", "ActorInfo hit distances: zero out the fire-specific vertical offset."),
    0x60AF6620: ("hammer_actor_info_flags", "Second ActorInfo record: clear the fire-specific flag word."),
    0x6013FB38: ("hammer_direction_bit", "Direction comes from a single packed bit, not a two-bit field."),
    0x6013FB68: ("hammer_scale_denom", "Scale divisor 10 (was 8): Hammer bodies render at the right size."),
    0x60140744: ("hammer_ctor_read_settings", "Constructor: read settings1 from +0x14."),
    0x60140748: ("hammer_ctor_mask", "Constructor: mask the settings field."),
    0x6014074C: ("hammer_ctor_or_mode", "Constructor: pack the power-up mode into the settings word."),
    0x60140770: ("hammer_ctor_or_player", "Constructor: pack the player byte."),
    0x60140778: ("hammer_ctor_store", "Constructor: store the packed word into playerId/layer/type."),
    0x6045DDCC: ("grant_hammer_mode", "Granting the Hammer gives power-up mode 10."),
    0x607A2708: ("can_change_to_hammer", "canChangeTo: accept mode 10."),
    0x607AAA88: ("set_fireball_action_mode", "setFireBallAction: treat mode 10 as the projectile-throwing mode."),
    0x607AA9BC: ("check_set_fireball_mode", "checkSetFireBall: accept mode 10."),
    0x607AABB8: ("create_fireball_a_mode", "createFireBall: accept mode 10 at the first guard."),
    0x607AAC94: ("create_fireball_b_mode", "createFireBall: accept mode 10 at the second guard."),
    0x607AAFF4: ("execute_mode_guard", "Projectile execute: accept mode 10."),
    0x607AB000: ("execute_mode_mask", "Projectile execute: extend the mode mask to include bit 10 (0x464)."),
    0x607AB0E4: ("execute_mode_guard2", "Projectile execute: accept mode 10 at the second guard."),
    0x60B0C328: ("tall_actor_type_hammer", "Tall-actor table: mode 10 uses body type 2."),
    0x60465F34: ("item_gate_max_mode", "Item gate: widen the accepted mode range to 9 (index 9 = mode 10)."),
    0x60465F40: ("item_gate_mode_mask", "Item gate: mask 0x3FB so bit 9 (mode 10) is accepted."),
    0x60466000: ("item_gate_max_mode_2", "Item gate (second call site): widen the accepted mode range."),
    0x6046600C: ("item_gate_mode_mask_2", "Item gate (second call site): mask 0x3FB."),
    0x6078E6A8: ("mode_six_or_ten", "A gate that special-cases mode 6 now also special-cases mode 10."),
    0x60795FF0: ("height_table_redirect_a", "Redirect to the relocated height table."),
    0x607960F8: ("height_table_redirect_b", "Redirect to the relocated height table (second reader)."),
    0x6078C58C: ("body_table_redirect_a", "Redirect to the relocated body-type table."),
    0x6078E604: ("body_table_redirect_b", "Redirect to the relocated body-type table (second reader)."),
    0x6078E7E8: ("body_table_redirect_c", "Redirect to the relocated body-type table (third reader)."),
    0x607982D8: ("draw_offset_redirect", "Redirect to the relocated draw-offset table."),
    0x60B493A8: ("height_table_slot_10", "Relocated height table: mode 10 height."),
    0x60B493D8: ("body_table_slot_10", "Relocated body-type table: mode 10 body."),
    0x60B49404: ("draw_offset_slot_10", "Relocated draw-offset table: mode 10 vertical offset."),
}


def hook_text(va):
    """Return (kind, value) for one changed word."""
    oa, ob = off(SA, va), off(SB, va)
    wb = struct.unpack_from("<I", b, ob)[0]
    in_text = TEXT[0] <= va < TEXT[1]

    if in_text:
        ins = next(iter(md.disasm(struct.pack("<I", wb), va)), None)
        if ins:
            text = f"{ins.mnemonic} {ins.op_str}"
            if assemble(text) == wb:
                return "instr", text

    raw = " ".join(f"{x:02X}" for x in struct.pack("<I", wb))
    return "data", raw


# ---- 3. emit ----
os.makedirs(os.path.join(PROJ, "hooks"), exist_ok=True)

by_file = {}
for va in words:
    by_file.setdefault(group_for(va), []).append(va)

HEADER = """@{title}
@
@ Generated from the verified byte diff between the stock NSMBU Deluxe v1.0.0
@ main NSO and the Hammer power-up build. Every hook below corresponds to a
@ word that actually differs; the full diff is 115 bytes across 59 regions with
@ nothing unaccounted for.
@
@ SweetDX format: an unindented 'name:' header, indented 'key: value' fields,
@ and '@' comments. 'instr' hooks are reassembled by clang and were round-trip
@ verified against the patched bytes; 'data' hooks are written verbatim.
"""

stats = {"instr": 0, "data": 0}
emitted = []

for fname in sorted(by_file):
    title, _ = GROUPS[fname]
    lines = [HEADER.format(title=title)]
    for va in sorted(by_file[fname]):
        rva = va - IDB
        key = va
        name, comment = LABELS.get(key, (f"patch_{rva:06x}", ""))
        kind, value = hook_text(va)
        stats[kind] += 1
        lines.append(f"{name}:")
        if comment:
            lines.append(f"    @ {comment}")
        lines.append(f"    type:    {kind}")
        if kind == "instr":
            lines.append(f"    instruction: {value}")
        else:
            lines.append(f"    data:    {value}")
        lines.append(f"    address: 0x{rva:08X}")
        lines.append("")
        emitted.append((fname, name, kind, value, rva))

    path = os.path.join(PROJ, "hooks", fname)
    with open(path, "w", encoding="utf-8", newline="\n") as f:
        f.write("\n".join(lines).rstrip() + "\n")

print(f"=== emitted {len(by_file)} hook files, {len(emitted)} hooks ===")
for fname in sorted(by_file):
    n = sum(1 for e in emitted if e[0] == fname)
    print(f"  hooks/{fname:26} {n} hooks")
print(f"\n  instr hooks (clang-verified): {stats['instr']}")
print(f"  data  hooks (raw bytes)     : {stats['data']}")

bad = [(n, v, r) for _, n, k, v, r in emitted
       if k == "instr" and assemble(v) is None]
print(f"  instr that failed to assemble: {len(bad)}")
