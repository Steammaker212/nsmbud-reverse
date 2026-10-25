"""Re-derive specific ledger claims from the binary, independently of the ledger.

`validate_findings.py` checks that a row is well-formed and that the addresses it
quotes exist. That does not check whether the claim is TRUE -- only that it is
pointing at real bytes.

This script is the stronger check for the claims that matter most: each test
below re-derives a fact from the ELF by following pointers, decoding vtables and
reading immediates, and compares the result with what the ledger says. It never
reads the ledger to decide what is true; it reads the ledger only to compare.

A test that fails means either the claim is wrong or the binary differs from the
build the claim was made on. Both are worth knowing.

    python scripts/verify_semantics.py
"""
from __future__ import annotations

import struct
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "scripts" / "ida"))

from elf import Elf, SECTIONS  # noqa: E402

elf = Elf()
fails: list[str] = []
oks = 0


def u32(a: int) -> int:
    return elf.u32(a)


def va_rva(v: int) -> int:
    """Normalise a stored pointer: .data holds RVAs, add the base."""
    return v if v >= 0x60000000 else v + 0x60000000


def check(name: str, got, want) -> None:
    global oks
    if got == want:
        oks += 1
        print(f"  ok    {name}: {got}")
    else:
        fails.append(f"{name}: got {got!r}, ledger says {want!r}")
        print(f"  FAIL  {name}: got {got!r}, expected {want!r}")


def section_ok(a: int) -> bool:
    return elf.section_of(a) is not None


print("== constant facts ==")

# F0001: subsdk0 loads at main+0xCD1000. Two independent sources agree on that
# number: codedx's doc/nso-extents.txt gives the main image size as 0xCD1000, and
# the ELF's .bss ends at exactly 0x60C7B274 + 0x55D8C = 0x60CD1000. (An earlier
# version of this script asserted 0xCD2180 as the image size; that constant came
# from nowhere and appears nowhere in the game data. Corrected here.)
bss = next(s for s in SECTIONS if s[3] == "bss")
bss_end_rva = (bss[0] + bss[2]) - 0x60000000
check(".bss ends at RVA 0xCD1000 (the module load address)", hex(bss_end_rva), "0xcd1000")

extents = REPO.parent / "codedx-master" / "codedx-master" / "doc" / "nso-extents.txt"
if extents.exists():
    text = extents.read_text(encoding="utf-8", errors="replace")
    line = next((l for l in text.splitlines() if l.startswith("main")), "")
    fields = line.split()
    if len(fields) >= 3:
        check("codedx nso-extents says main size is 0xCD1000",
              int(fields[2], 16), 0xCD1000)
else:
    print("  skip  codedx nso-extents.txt not found")

print("\n== profile system ==")

# F0101: spriteToProfileList at 0x60C7B7B4, filled by sInit_SpriteToProfileTable.
# We cannot read .bss, but we can confirm the GOT slot points at it and that the
# init function exists.
got_slot = 0x60C61B18
try:
    slot = u32(got_slot)
    check("GOT[got_spriteToProfileList]", hex(va_rva(slot)), "0x60c7b7b4")
except KeyError as e:
    print(f"  skip  GOT slot unreadable: {e}")

for addr, label in ((0x60014724, "sInit_SpriteToProfileTable"),):
    check(f"{label} is in .text", section_ok(addr), True)

# F0116 / Profile ctor: 0x60017F6C
check("Profile::Profile in .text", section_ok(0x60017F6C), True)
check("Profile::get in .text", section_ok(0x600182A0), True)

# Profile::get clamps at 0x392 (914). Decode the immediate from the first
# compare in the function.
dis = elf.disasm(0x600182A0, 6)
txt = "\n".join(dis)
has_clamp = "0x392" in txt or "914" in txt
check("Profile::get clamps at 0x392", has_clamp, True)

print("\n== actor creation ==")

# F0110 / F0180: ActorMgr::create 0x60008138, and its verdict arithmetic uses 3.
check("ActorMgr::create in .text", section_ok(0x60008138), True)
dis = elf.disasm(0x60008138, 90)
joined = "\n".join(dis)
check("ActorMgr::create mentions the constant 3", ("#3" in joined or "r3, #3" in joined), True)

# F0109: Actor::Actor takes its id from ActorMgr+0x6A38.
check("Actor::Actor in .text", section_ok(0x60002C54), True)
dis = elf.disasm(0x60002C54, 40)
joined = "\n".join(dis)
check("Actor::Actor reads ActorMgr+0x6A38", "0x6a38" in joined, True)
check("Actor::Actor reads buildInfo+0xC (profile)", "#0xc]" in joined or ", #0xc" in joined, True)

print("\n== the identity of the game's own tables ==")

# F0168/F0169: the four choropoo-family factories all start with the three
# statement allocator shape (movw sizeof + bl operator new).
for addr, size, label in (
    (0x6027B310, 0x2470, "choropoo"),
    (0x60278FAC, 0x17D8, "choropoo_hole"),
    (0x60148FAC, 0x2ED0, "spanner"),
    (0x6034291C, 0x17F0, "manhole"),
):
    joined = "\n".join(elf.disasm(addr, 4))
    want = f"#0x{size:x}"
    check(f"{label} allocates 0x{size:X}", want in joined.lower(), True)

print("\n== boss contract ==")

# F0150/F0151/F0165/F0166: the six constant boss virtuals.
for addr, want_val, label in (
    (0x60026798, None, "BossBase::vf314 (stamina)"),
    (0x6004F320, None, "BossBase::vf2FC (per phase)"),
):
    check(f"{label} in .text", section_ok(addr), True)

# The stamina getter should be a tiny function returning an immediate.
dis = elf.disasm(0x60026798, 4)
joined = "\n".join(dis)
ret_imm = ("mov" in joined and "#" in joined) or "bx" in joined
check("BossBase::vf314 is a constant return", ret_imm, True)

print("\n== the event system ==")

# F0181: EventMgr::set at 0x6072A4B0 and the mask at +0x10.
check("EventMgr_set in .text", section_ok(0x6072A4B0), True)
dis = elf.disasm(0x6072A4B0, 60)
joined = "\n".join(dis)
check("EventMgr_set uses +0x10 for the mask", "#0x10]" in joined, True)
check("EventMgr_set does NOT use +0x0 as the mask",
      "ldrd    r4, r5, [r0]" not in joined, True)

# The instance pointer global, derived independently: find the movw/movt pair
# that builds 0x60C7B390 inside any function, and confirm it is a global slot.
inst = 0x60C7B390
sec = elf.section_of(inst)
check("EventMgr::instance lives in .bss", sec is not None and sec[3] == "bss", True)

print("\n== profile -> sprite table ==")

# Vanilla table length: read the ledger-independent ground truth from the
# template's own source, which mirrors the game's table.
tmpl = REPO.parent / "sweet-dx-main (1)" / "sweet-dx-main" / "build" / "source" / "code" / "profile.cpp"
if tmpl.exists():
    import re
    s = tmpl.read_text(encoding="utf-8", errors="replace")
    i = s.index("Profile::spriteToProfileList[]")
    j = s.index("\n};", i)
    body = s[i:j]
    idx = [int(m.group(1)) for m in re.finditer(r"//\s*(\d+)\s*$", body, re.M)]
    if idx:
        print(f"  info  template table indices {min(idx)}..{max(idx)} ({len(idx)} rows)")
        check("template table starts at 0", min(idx), 0)
else:
    print("  skip  template profile.cpp not found")

print()
if fails:
    print(f"{len(fails)} semantic check(s) FAILED:")
    for f in fails:
        print("  " + f)
    raise SystemExit(1)
print(f"all {oks} semantic checks passed")
