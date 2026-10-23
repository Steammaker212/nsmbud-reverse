"""Collapse the operator_delete/new veneers into a single maplist.

1,793 functions are named `operator_delete_XXXXXX` and each is 4 bytes: a single
ARM `B` to a shared target. They are PLT-style veneers, not distinct functions,
and they occupy 1,793 filenames in the corpus for 7.5 KB of code.

This measures what they actually branch to. If they converge on one implementation
the group can be replaced by one maplist entry plus a range, which is what a
linker script needs anyway.

Usage:
    python collapse_stubs.py --state <db_state.json> --elf <elf> --out <stubs.json>
"""
from __future__ import annotations

import argparse
import collections
import json
import struct
from pathlib import Path

IMAGE_BASE = 0x60000000


def sections(data: bytes):
    (_, _, _, _, _, _, _, _, _, _, e_shentsize, e_shnum,
     _) = struct.unpack_from("<HHIIIIIHHHHHH", data, 16)
    shoff = struct.unpack_from("<I", data, 32)[0]
    raw = []
    for i in range(e_shnum):
        name, typ, flags, addr, offset, size = struct.unpack_from(
            "<IIIIII", data, off := shoff + i * e_shentsize)
        raw.append({"type": typ, "addr": addr, "offset": offset, "size": size})
    return raw


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--state", required=True)
    ap.add_argument("--elf", required=True)
    ap.add_argument("--out", required=True)
    args = ap.parse_args()

    data = Path(args.elf).read_bytes()
    secs = [s for s in sections(data) if s["type"] == 1 and s["addr"]]

    def read(va: int, n: int) -> bytes | None:
        best = None
        for s in secs:
            if s["addr"] <= va < s["addr"] + s["size"]:
                if best is None or s["size"] < best["size"]:
                    best = s
        if best is None:
            return None
        fo = best["offset"] + (va - best["addr"])
        return data[fo:fo + n]

    state = json.loads(Path(args.state).read_text())
    groups: dict[str, list] = collections.defaultdict(list)
    for f in state["funcs"]:
        n = f["name"]
        for prefix in ("operator_delete_array", "operator_delete",
                       "operator_new_array", "operator_new"):
            if n.startswith(prefix):
                groups[prefix].append(f)
                break

    out = {}
    for prefix, funcs in groups.items():
        targets: collections.Counter = collections.Counter()
        sizes: collections.Counter = collections.Counter()
        entries = []
        for f in funcs:
            sizes[f["size"]] += 1
            code = read(f["ea"], min(f["size"], 8)) or b""
            tgt = None
            if len(code) >= 4:
                w = struct.unpack_from("<I", code, 0)[0]
                if (w >> 24) & 0xFF in (0xEA, 0xEB):
                    imm = w & 0xFFFFFF
                    if imm & 0x800000:
                        imm -= 0x1000000
                    tgt = (f["ea"] + 8 + imm * 4) & 0xFFFFFFFF
            targets[tgt] += 1
            entries.append({"ea": hex(f["ea"]), "size": f["size"],
                            "target": hex(tgt) if tgt else None})
        out[prefix] = {
            "count": len(funcs),
            "total_bytes": sum(f["size"] for f in funcs),
            "size_histogram": dict(sizes),
            "distinct_targets": len([t for t in targets if t is not None]),
            "top_targets": [{"target": hex(t) if t else None, "count": c}
                            for t, c in targets.most_common(6)],
            "entries": entries,
        }
        print("%-24s %5d stubs, %5d bytes, %3d distinct targets"
              % (prefix, len(funcs), out[prefix]["total_bytes"],
                 out[prefix]["distinct_targets"]))
        print("   sizes: %s" % dict(sizes))
        for t, c in targets.most_common(4):
            print("   -> %s  x%d" % (hex(t) if t else "unreadable", c))

    Path(args.out).write_text(json.dumps(out, indent=1))
    print("\nwrote %s" % args.out)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
