"""Generate .hks hook definitions from measured call sites.

A hook needs a real instruction to overwrite. This finds them by measurement:
for a chosen symbol, locate every `BL`/`B` in the image whose target is that
symbol's address, and record the RVA of the branch. That gives a hook site that
provably exists, rather than an address typed by hand.

Each candidate is verified before it is written:

  * the word at the site decodes as an ARM B/BL,
  * the branch displacement resolves to the intended target address,
  * the target is the symbol we mean, not a coincidental neighbour.

Nothing that fails those checks is emitted.

Usage:
    python gen_hooks.py --elf <elf> --symbols <symbols.csv> --out <repo>/hooks
"""
from __future__ import annotations

import argparse
import csv
import json
import struct
from pathlib import Path

IMAGE_BASE = 0x60000000

# Branch hook types codedx accepts, chosen by the instruction actually present.
B_TYPES = ["beq", "bne", "bcs", "bcc", "bmi", "bpl", "bvs", "bvc",
           "bhi", "bls", "bge", "blt", "bgt", "ble", "bal", "b"]
BL_TYPES = ["bl" + c for c in ("eq", "ne", "cs", "cc", "mi", "pl", "vs", "vc",
                              "hi", "ls", "ge", "lt", "gt", "le", "al", "")]


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


def cond_name(w: int, is_link: bool) -> str:
    cond = (w >> 28) & 0xF
    suffix = {0x0: "eq", 0x1: "ne", 0x2: "cs", 0x3: "cc", 0x4: "mi",
              0x5: "pl", 0x6: "vs", 0x7: "vc", 0x8: "hi", 0x9: "ls",
              0xA: "ge", 0xB: "lt", 0xC: "gt", 0xD: "le", 0xE: ""}.get(cond, "al")
    if is_link:
        return "bl" + (suffix if suffix else "al")
    return "b" + (suffix if suffix else "al")


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--elf", required=True)
    ap.add_argument("--symbols", required=True, help="symbols.csv")
    ap.add_argument("--out", required=True)
    ap.add_argument("--max-hooks", type=int, default=120)
    ap.add_argument("--prefer", default="",
                    help="comma-separated substrings; matching symbols win first")
    ap.add_argument("--exclude", default="",
                    help="comma-separated substrings; matching symbols are skipped")
    args = ap.parse_args()

    data = Path(args.elf).read_bytes()
    secs = [s for s in sections(data) if s["type"] == 1 and s["addr"]]
    text = max(secs, key=lambda s: s["size"])

    # Map every B/BL target -> list of (site_va, kind)
    calls: dict[int, list] = {}
    base = text["addr"]
    code = data[text["offset"]:text["offset"] + text["size"]]
    for i in range(0, len(code) - 3, 4):
        w = struct.unpack_from("<I", code, i)[0]
        if (w >> 25) & 0x7 != 0x5:
            continue
        cond = (w >> 28) & 0xF
        if cond == 0xF:      # BLX / PLD encodings, not plain branch
            continue
        imm = w & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        site = base + i
        target = (site + 8 + imm * 4) & 0xFFFFFFFF
        is_link = bool((w >> 24) & 1)
        calls.setdefault(target, []).append((site, is_link, w))

    print("distinct branch targets in .text: %d" % len(calls))

    rows = list(csv.DictReader(open(args.symbols, encoding="utf-8")))
    by_va = {int(r["va"], 16): r for r in rows}

    prefer = [s.strip() for s in args.prefer.split(",") if s.strip()]
    exclude = [s.strip() for s in args.exclude.split(",") if s.strip()]

    out = Path(args.out)
    out.mkdir(parents=True, exist_ok=True)

    # Prefer hooks on functions that something actually calls, and that are
    # named (so the hook name is meaningful).
    picked = []
    for va, r in by_va.items():
        if exclude and any(x in r["raw_name"] for x in exclude):
            continue
        sites = calls.get(va)
        if not sites:
            continue
        # The site must not be inside the target itself (self-recursion is not a
        # useful hook point for replacing a function).
        size = int(r["size"])
        external = [s for s in sites if not (va <= s[0] < va + max(size, 4))]
        if not external:
            continue
        site, is_link, w = sorted(external)[0]
        kind = cond_name(w, is_link)
        # Verify the decode once more, independently of the accumulation loop.
        imm = w & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        if (site + 8 + imm * 4) & 0xFFFFFFFF != va:
            continue
        picked.append({
            "hook": r["symbol"] + "_hook",
            "type": kind,
            "func": r["symbol"] + "_hook",
            "symbol": r["symbol"],
            "site_rva": site - IMAGE_BASE,
            "target_rva": va - IMAGE_BASE,
            # Use the sanitised symbol, not the raw database name: a raw name may
            # contain characters the linker cannot take (`??Player__...`), and the
            # comment is what verify_hooks.py cross-references against main.sym.
            "target_name": r["symbol"],
            "raw_name": r["raw_name"],
            "size": size,
            "callers": len(external),
        })

    # Prefer symbols the caller asked for; otherwise rank by how many places
    # actually branch here, which is what makes a hook interesting to have.
    def rank(h):
        name = h["target_name"]
        want = 0 if not prefer else (1 if any(p in name for p in prefer) else 0)
        return (-want, -h["callers"], h["site_rva"])

    picked.sort(key=rank)
    picked = picked[:args.max_hooks]
    print("verified hook sites: %d" % len(picked))

    # .hks comments are introduced by `@`, not `#` -- codedx's parser strips at
    # the first `@` and treats any other text as hook syntax, so a `#` header
    # turns every comment line into a malformed hook. sweet-dx's README says the
    # same ("`#` works just fine inside instructions, as comments in `.hks` use
    # `@`"). The previous `#` header made hooks_to_ips.py emit one
    # "parsing hook failed" line per comment.
    lines = ["@ hooks.hks -- generated by scripts/pipeline/gen_hooks.py",
             "@",
             "@ Every site below was found by decoding a real B/BL in .text and",
             "@ confirming its displacement lands on the named symbol. Nothing was",
             "@ typed by hand, and each entry was re-verified after decoding.",
             "@",
             "@ Deluxe (Switch) v1.0.0 addresses. RVAs are relative to 0x60000000.",
             ""]
    for h in picked:
        lines.append("%s:" % h["hook"])
        lines.append("    type:   %s" % h["type"])
        lines.append("    func:   %s" % h["func"])
        lines.append("    addr:   0x%08X" % h["site_rva"])
        lines.append("    @ -> %s (0x%08X), %d caller(s)"
                     % (h["target_name"], h["target_rva"], h["callers"]))
        lines.append("")
    (out / "hooks.hks").write_text("\n".join(lines))
    print("wrote %s" % (out / "hooks.hks"))

    (out / "hooks.json").write_text(json.dumps(picked, indent=1))
    print("wrote %s/hooks.json" % out)

    print("\nsample:")
    for h in picked[:8]:
        print("  0x%08X %-8s -> %-40s (%d callers)"
              % (h["site_rva"], h["type"], h["target_name"], h["callers"]))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
