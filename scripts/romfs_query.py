#!/usr/bin/env python3
"""Query the Deluxe romfs asset tree.

The shipped romfs listing is 2,344 lines and 1,609 .szs archives. Searching it is much
cheaper than opening the binary when the question is simply "does this asset exist?".

Usage:
    python scripts/romfs_query.py hammer
    python scripts/romfs_query.py --models l_
    python scripts/romfs_query.py --count szs
    python scripts/romfs_query.py --list-models

The tree file uses box-drawing characters and is UTF-8, so it must be read with an explicit
encoding -- reading it as the system default produces mojibake and every path looks wrong.
"""
import argparse
import os
import re
import sys
from collections import Counter

DEFAULT_TREE = os.path.join(
    os.path.dirname(os.path.dirname(os.path.abspath(__file__))),
    "New Super Mario Bros U Deluxe (NSP)(Base Game) Tree.txt",
)


def load(path):
    with open(path, encoding="utf-8") as fh:
        return [ln.rstrip("\r\n") for ln in fh]


def basename(line):
    """Strip the tree drawing and return just the file/dir name."""
    return re.sub(r"^[\s│├└─┬┼┴┌┐┘┤]*", "", line).strip()


def main():
    ap = argparse.ArgumentParser(description="Query the Deluxe romfs tree listing.")
    ap.add_argument("term", nargs="?", help="substring to search for (case-insensitive)")
    ap.add_argument("--tree", default=DEFAULT_TREE, help="path to the tree listing")
    ap.add_argument("--models", metavar="PREFIX",
                    help="list unique .szs whose name starts with PREFIX")
    ap.add_argument("--count", metavar="EXT", help="count entries with extension EXT")
    ap.add_argument("--list-models", action="store_true",
                    help="list every distinct .szs model name")
    args = ap.parse_args()

    if not os.path.exists(args.tree):
        sys.exit(f"tree listing not found: {args.tree}")

    lines = load(args.tree)
    print(f"# {len(lines):,} lines from {os.path.basename(args.tree)}")

    if args.count:
        ext = args.count if args.count.startswith(".") else "." + args.count
        n = sum(1 for ln in lines if ln.rstrip().lower().endswith(ext))
        print(f"# entries ending {ext}: {n:,}")
        return

    if args.list_models or args.models:
        names = set()
        for ln in lines:
            b = basename(ln)
            if b.lower().endswith(".szs"):
                names.add(b)
        if args.models:
            names = {n for n in names if n.lower().startswith(args.models.lower())}
        print(f"# {len(names)} distinct .szs")
        for n in sorted(names):
            print(n)
        return

    if not args.term:
        ap.print_help()
        return

    pat = re.compile(re.escape(args.term), re.IGNORECASE)
    hits = [ln for ln in lines if pat.search(ln)]
    print(f"# {len(hits)} match(es) for {args.term!r}")
    for ln in hits:
        print(basename(ln))

    # a frequency note helps spot whether a term is one asset or a whole family
    if hits:
        fam = Counter()
        for ln in hits:
            b = basename(ln)
            m = re.match(r"([A-Za-z]+_)", b)
            fam[m.group(1) if m else "(other)"] += 1
        print()
        print("# by prefix:")
        for k, v in fam.most_common(10):
            print(f"#   {k:<24} {v}")


if __name__ == "__main__":
    main()
