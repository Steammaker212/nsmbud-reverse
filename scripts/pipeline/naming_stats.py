"""Report the current naming state of the database export.

Reads the Hex-Rays export and prints how many functions carry a real name
versus an IDA default (`sub_`, `nullsub_`, `j_`), broken down by subsystem, so
progress is measurable rather than asserted.

Usage:
    python naming_stats.py --jsonl <all_functions.jsonl> [--json]
"""
from __future__ import annotations

import argparse
import json
import re
import sys
from collections import Counter
from pathlib import Path

DEFAULT_RE = re.compile(r"^(sub|nullsub|j_|loc_|off_|byte_|word_|dword_|qword_|unk_|asc_|stru_)")


def is_default(name: str) -> bool:
    return bool(DEFAULT_RE.match(name))


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--jsonl", required=True)
    ap.add_argument("--json", action="store_true")
    args = ap.parse_args()

    total = 0
    named = 0
    unnamed_bytes = 0
    total_bytes = 0
    per_class: Counter = Counter()
    named_per_class: Counter = Counter()

    with open(args.jsonl, encoding="utf-8") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            r = json.loads(line)
            total += 1
            size = r.get("size") or 0
            total_bytes += size
            name = r["name"]
            cls = name.split("__", 1)[0] if "__" in name else "(free)"
            per_class[cls] += 1
            if is_default(name):
                unnamed_bytes += size
            else:
                named += 1
                named_per_class[cls] += 1

    stats = {
        "functions": total,
        "named": named,
        "unnamed": total - named,
        "pct_named": round(100.0 * named / total, 2) if total else 0.0,
        "bytes_total": total_bytes,
        "bytes_unnamed": unnamed_bytes,
        "pct_bytes_named": round(100.0 * (total_bytes - unnamed_bytes) / total_bytes, 2)
        if total_bytes else 0.0,
        "classes": len(per_class),
    }

    if args.json:
        print(json.dumps(stats, indent=1))
    else:
        print("functions      : %d" % stats["functions"])
        print("named          : %d (%.2f%%)" % (named, stats["pct_named"]))
        print("unnamed        : %d" % stats["unnamed"])
        print("bytes named    : %.2f%% of %d" % (stats["pct_bytes_named"], total_bytes))
        print("classes seen   : %d" % stats["classes"])
        print("\ntop classes by function count:")
        for cls, n in per_class.most_common(15):
            print("  %-34s %5d  (%d named)" % (cls[:34], n, named_per_class[cls]))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
