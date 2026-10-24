"""Measure the exact compile delta caused by the indexed-access fix.

Reporting "404 of 977 now clean" is not a delta: those units failed before, but
some may have failed for an unrelated second reason and would have stayed
failing. The honest number is how many units CHANGED state, and in which
direction.

Compares each rewritten unit against its HEAD version, compiling both, so the
result is a per-file before/after rather than a guess.
"""
from __future__ import annotations

import io
import subprocess
import sys

FILES = sys.argv[1:]
if not FILES:
    # Default: every unit modified in the working tree.
    out = subprocess.run(["git", "status", "--short", "decompiled/"],
                         capture_output=True, text=True).stdout
    FILES = [ln.split(maxsplit=1)[1] for ln in out.splitlines() if ln.strip()]

CMD = ["clang", "-fsyntax-only", "-std=gnu89", "-Wno-everything",
       "-ferror-limit=0", "-I", "decompiled/src/include"]


def compiles(path: str, text: str | None = None) -> bool:
    if text is None:
        p = subprocess.run(CMD + [path], capture_output=True, text=True)
        return p.returncode == 0
    # Write to a temp file in the same dir so relative includes still resolve.
    import os
    import tempfile
    fd, tmp = tempfile.mkstemp(suffix=".c", dir=os.path.dirname(path))
    os.close(fd)
    try:
        io.open(tmp, "w", encoding="utf-8", newline="\n").write(text)
        p = subprocess.run(CMD + [tmp], capture_output=True, text=True)
        return p.returncode == 0
    finally:
        os.unlink(tmp)


def head_text(path: str) -> str | None:
    p = subprocess.run(["git", "show", "HEAD:" + path.replace("\\", "/")],
                       capture_output=True, text=True, errors="replace")
    return p.stdout if p.returncode == 0 else None


def main() -> int:
    fixed = broke = still = already = 0
    for f in FILES:
        now = compiles(f)
        old_text = head_text(f)
        if old_text is None:
            continue
        was = compiles(f, old_text)
        if was and now:
            already += 1
        elif not was and now:
            fixed += 1
        elif was and not now:
            broke += 1
            print("REGRESSED %s" % f)
        else:
            still += 1

    print()
    print("units examined      : %d" % len(FILES))
    print("  already clean     : %d" % already)
    print("  FIXED (fail->pass): %d" % fixed)
    print("  still failing     : %d" % still)
    print("  REGRESSED         : %d" % broke)
    return 1 if broke else 0


if __name__ == "__main__":
    raise SystemExit(main())
