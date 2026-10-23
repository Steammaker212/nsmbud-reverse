"""Categorize the remaining compile errors across the per-function corpus.

Compiles a sample and groups the diagnostics, so the next fix is chosen from
measured frequency rather than guesswork.

Usage:
    python error_profile.py --dir <per_fn> [--sample 600] [--show 20]
"""
from __future__ import annotations

import argparse
import collections
import re
import subprocess
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ERR_RE = re.compile(r"error: (.*)")


def check(u: Path, inc: Path) -> list[str]:
    p = subprocess.run(
        ["clang", "-fsyntax-only", "-std=gnu89", "-Wno-everything",
         "-ferror-limit=0", "-I", str(inc), str(u)],
        capture_output=True, text=True)
    return ERR_RE.findall(p.stderr)


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--dir", required=True)
    ap.add_argument("--sample", type=int, default=600)
    ap.add_argument("--jobs", type=int, default=12)
    ap.add_argument("--show", type=int, default=20)
    args = ap.parse_args()

    d = Path(args.dir)
    inc = d / "include"
    units = sorted(p for p in d.glob("*/*.c") if p.name != "g_image.c")
    step = max(1, len(units) // args.sample)
    sample = units[::step][: args.sample]

    with ThreadPoolExecutor(max_workers=args.jobs) as pool:
        results = list(pool.map(lambda u: check(u, inc), sample))

    clean = sum(1 for r in results if not r)
    kinds: collections.Counter = Counter()
    examples: dict[str, str] = {}
    for name, msgs in zip((u.name for u in sample), results):
        for m in msgs:
            k = re.sub(r"'[^']*'", "'X'", m)
            k = re.sub(r"\b0x[0-9A-Fa-f]+\b", "0xN", k)
            kinds[k] += 1
            examples.setdefault(k, "%s: %s" % (name, m))

    print("sample %d  clean %d (%.0f%%)  errors %d"
          % (len(sample), clean, 100.0 * clean / max(1, len(sample)), sum(kinds.values())))
    print()
    for k, v in kinds.most_common(args.show):
        print("%6d  %s" % (v, k[:120]))
        print("        e.g. %s" % examples[k][:150])
    return 0


from collections import Counter  # noqa: E402

if __name__ == "__main__":
    raise SystemExit(main())
