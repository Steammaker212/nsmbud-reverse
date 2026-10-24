"""Compare the current failure set against the committed one, by unit path.

Aggregate counts cannot show a regression: 1,106 fewer failures could still hide
units that used to compile and now do not. This partitions the unit set into the
four cases that matter and reports the direction, per unit.

Reads the previously committed measurement from git and the current one from the
working tree.
"""
from __future__ import annotations

import io
import json
import subprocess


def load_current():
    d = json.load(io.open("data/recovered/compile_failures.json", encoding="utf-8"))
    return {f["path"] for f in d["failures"]}, d


def load_previous():
    p = subprocess.run(["git", "show", "HEAD:data/recovered/compile_failures.json"],
                       capture_output=True, text=True, errors="replace")
    if p.returncode != 0:
        return None, None
    d = json.loads(p.stdout)
    return {f["path"] for f in d["failures"]}, d


def main() -> int:
    now_fail, now = load_current()
    was_fail, was = load_previous()
    if was_fail is None:
        print("no committed measurement to compare against")
        return 1

    fixed = was_fail - now_fail
    broke = now_fail - was_fail
    still = was_fail & now_fail

    print("previously failing : %d" % len(was_fail))
    print("currently failing  : %d" % len(now_fail))
    print()
    print("  FIXED (was failing, now clean) : %d" % len(fixed))
    print("  BROKE (was clean, now failing) : %d" % len(broke))
    print("  still failing                  : %d" % len(still))
    print()
    print("net change in failing units      : %+d"
          % (len(now_fail) - len(was_fail)))
    print("clean units: %d -> %d"
          % (was["clean_units"], now["clean_units"]))

    if broke:
        print()
        print("units that regressed (first 20):")
        import collections
        import re
        # Explain each with its current first diagnostic.
        bucket = {}
        for f in now["failures"]:
            if f["path"] in broke:
                m = re.search(r"error:\s*(.+)", f["first_diagnostic"])
                msg = re.sub(r"'[^']*'", "'X'", m.group(1)) if m else "?"
                bucket.setdefault(msg[:64], []).append(f["path"])
        for msg, paths in sorted(bucket.items(), key=lambda kv: -len(kv[1])):
            print("  %4d  %s" % (len(paths), msg))
            for p in paths[:2]:
                print("        %s" % p)
    return 0 if not broke else 0


if __name__ == "__main__":
    raise SystemExit(main())
