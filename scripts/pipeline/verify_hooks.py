"""Re-verify every hook in hooks.hks against the binary, independently.

gen_hooks.py picks sites; this checks them without reusing its logic. For each
hook it:

  1. reads the word at `addr` from the ELF,
  2. confirms it decodes as the branch kind the hook claims (`type`),
  3. computes where that branch goes and confirms it equals the RVA of the symbol
     named in the trailing comment,
  4. confirms the symbol exists in main.sym with that RVA.

A hook that fails any step is reported and the exit status is non-zero, so a bad
hook cannot be committed by accident.

Usage:
    python verify_hooks.py --elf <elf> --hks <hooks.hks> --sym <main.sym>
"""
from __future__ import annotations

import argparse
import re
import struct
from pathlib import Path

IMAGE_BASE = 0x60000000

COND = {0x0: "eq", 0x1: "ne", 0x2: "cs", 0x3: "cc", 0x4: "mi", 0x5: "pl",
        0x6: "vs", 0x7: "vc", 0x8: "hi", 0x9: "ls", 0xA: "ge", 0xB: "lt",
        0xC: "gt", 0xD: "le", 0xE: "al", 0xF: "nv"}


def sections(data: bytes):
    (_, _, _, _, _, _, _, _, _, _, e_shentsize, e_shnum,
     _) = struct.unpack_from("<HHIIIIIHHHHHH", data, 16)
    shoff = struct.unpack_from("<I", data, 32)[0]
    raw = []
    for i in range(e_shnum):
        name, typ, flags, addr, offset, size = struct.unpack_from(
            "<IIIIII", data, shoff + i * e_shentsize)
        raw.append({"type": typ, "addr": addr, "offset": offset, "size": size})
    return raw


def parse_hooks(text: str):
    """Yield one dict per hook from a .hks file.

    `addr:` is not the last line of an entry -- the `# -> target` comment follows
    it -- so the entry is only emitted when the next hook name starts or the file
    ends.
    """
    cur = None

    def flush():
        if cur and "addr" in cur:
            return dict(cur)
        return None

    for line in text.splitlines():
        s = line.strip()
        m = re.match(r"^([A-Za-z_]\w*):\s*$", s)
        if m:
            done = flush()
            if done:
                yield done
            cur = {"name": m.group(1)}
            continue
        if cur is None:
            continue
        m = re.match(r"^type:\s*(\w+)", s)
        if m:
            cur["type"] = m.group(1)
            continue
        m = re.match(r"^addr:\s*(0x[0-9A-Fa-f]+|\d+)", s)
        if m:
            cur["addr"] = int(m.group(1), 0)
            continue
        m = re.match(r"^#\s*->\s*(\S+)\s*\(0x([0-9A-Fa-f]+)\)", s)
        if m:
            cur["target_name"] = m.group(1)
            cur["target_rva"] = int(m.group(2), 16)
            continue
    done = flush()
    if done:
        yield done


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--elf", required=True)
    ap.add_argument("--hks", required=True)
    ap.add_argument("--sym", required=True)
    args = ap.parse_args()

    data = Path(args.elf).read_bytes()
    secs = [s for s in sections(data) if s["type"] == 1 and s["addr"]]

    def word(va: int):
        best = None
        for s in secs:
            if s["addr"] <= va < s["addr"] + s["size"]:
                if best is None or s["size"] < best["size"]:
                    best = s
        if best is None:
            return None
        fo = best["offset"] + (va - best["addr"])
        if fo + 4 > len(data):
            return None
        return struct.unpack_from("<I", data, fo)[0]

    # main.sym: name -> rva
    sym: dict[str, int] = {}
    for line in Path(args.sym).read_text().splitlines():
        m = re.match(r"^(\w+)\s*=\s*0x([0-9A-Fa-f]+);", line.strip())
        if m:
            sym[m.group(1)] = int(m.group(2), 16)

    hooks = list(parse_hooks(Path(args.hks).read_text()))
    print("hooks parsed: %d" % len(hooks))

    ok = 0
    problems = []
    for h in hooks:
        name = h["name"]
        site = IMAGE_BASE + h["addr"]
        w = word(site)
        if w is None:
            problems.append((name, "no word at 0x%08X" % site))
            continue
        # Must be a branch: bits 27..25 == 0b101
        if (w >> 25) & 0x7 != 0x5:
            problems.append((name, "0x%08X is not a branch (0x%08X)" % (site, w)))
            continue
        cond = (w >> 28) & 0xF
        link = bool((w >> 24) & 1)
        decoded = ("bl" if link else "b")
        c = COND.get(cond, "al")
        # codedx writes the unconditional form as "blal"/"bal"; "bl"/"b" is
        # equally valid. Strip the two-character suffix, NOT the characters
        # 'a' and 'l' -- rstrip("al") turns "blal" into "b" and made every hook
        # fail against itself.
        claimed = h.get("type", "")
        bare_claim = claimed[:-2] if claimed.endswith("al") else claimed
        if bare_claim not in (decoded, decoded + c):
            problems.append((name, "type says %s, instruction is %s%s"
                             % (claimed, decoded, c)))
            continue
        imm = w & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        dest_rva = (site + 8 + imm * 4 - IMAGE_BASE) & 0xFFFFFFFF
        want = h.get("target_rva")
        if want is None:
            problems.append((name, "no target comment"))
            continue
        if dest_rva != want:
            problems.append((name, "branch goes to 0x%08X, comment says 0x%08X"
                             % (dest_rva, want)))
            continue
        tname = h.get("target_name")
        if tname and sym.get(tname) != want:
            problems.append((name, "symbol %s is 0x%s in main.sym, hook targets 0x%08X"
                             % (tname, ("%08X" % sym[tname]) if tname in sym else "?",
                                want)))
            continue
        ok += 1

    print("verified: %d / %d" % (ok, len(hooks)))
    for n, why in problems[:12]:
        print("  FAIL %-40s %s" % (n, why))
    if problems:
        print("\n%d hook(s) failed verification" % len(problems))
        return 1
    print("\nall hooks verified against the image")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
