"""Report, for every verified hook site, the target's real prototype.

A hook site is an opportunity; a hook needs the *prototype* of the function whose
call it is replacing, because the hook is called with that function's arguments
and its return value is used as that function's return value. This script joins
three measured facts per candidate and prints them together:

  * the branch kind and site RVA (from hooks/candidate_hooks.json)
  * the target's symbol and RVA (same file)
  * the definition line of the corpus file for that RVA, i.e. the prototype
    Hex-Rays recovered from the binary

It exists so that a hook is never written against a remembered signature.

Usage:
    python report_hook_prototypes.py --repo <repo> [--type blal] [--limit 80]
"""
from __future__ import annotations

import argparse
import json
import re
from pathlib import Path

PROTO = re.compile(r"^[A-Za-z_][\w \t\*]*?\b(\w+)\s*\(([^;{]*)\)\s*\{?\s*$")

IMAGE_BASE = 0x60000000


def corpus_file(repo: Path, rva: int):
    """Corpus files are named by VA (`60008138_Name.c`), not by RVA."""
    hits = list((repo / "decompiled" / "src").rglob(
        "%08X_*.c" % (IMAGE_BASE + rva)))
    return hits[0] if hits else None


def prototype_of(path: Path):
    """Return (definition line, return type, name, params) for the function."""
    text = path.read_text(encoding="utf-8", errors="replace")
    for line in text.splitlines():
        s = line.strip()
        if not s or s.startswith(("/*", "*", "#", "//", "}")):
            continue
        m = PROTO.match(s)
        if not m or m.group(1) in ("if", "for", "while", "switch", "return"):
            continue
        return s, m.group(1), m.group(2).strip()
    return None, None, None


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--repo", required=True)
    ap.add_argument("--type", default=None)
    ap.add_argument("--limit", type=int, default=200)
    ap.add_argument("--json-out", default=None)
    args = ap.parse_args()

    repo = Path(args.repo)
    cand = json.loads((repo / "hooks" / "candidate_hooks.json").read_text())

    rows = []
    for h in cand:
        if args.type and h["type"] != args.type:
            continue
        p = corpus_file(repo, h["target_rva"])
        proto, ret, params = (None, None, None)
        if p:
            proto, ret, params = prototype_of(p)
        nparams = 0 if not params or params == "void" else len(
            [x for x in params.split(",") if x.strip()])
        rows.append({**h, "corpus": (p.name if p else None),
                     "proto": proto, "params": params, "nparams": nparams})

    rows.sort(key=lambda r: (r["nparams"], -r["callers"]))
    rows = rows[:args.limit]

    print("%-32s %-6s %-10s %2s %6s  %s"
          % ("target", "type", "site", "ar", "callers", "prototype"))
    print("-" * 130)
    for r in rows:
        print("%-32s %-6s 0x%06X %2d %6d  %s"
              % (r["target_name"][:32], r["type"], r["site_rva"], r["nparams"],
                 r["callers"], (r["proto"] or "(no corpus file)")[:70]))

    if args.json_out:
        Path(args.json_out).write_text(json.dumps(rows, indent=1))
        print("\nwrote %s (%d rows)" % (args.json_out, len(rows)))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
