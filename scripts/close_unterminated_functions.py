"""Close function bodies that the corpus left unterminated.

The defect, confirmed present at HEAD and not introduced by any later edit: a function body runs its
MEMORY[] stores and then simply STOPS, with no closing brace and no return, and the next function's header
comment follows. clang then reports the symptom at a line far from the cause:

    "function definition is not allowed here"

player.c needs 16 closes. Each one is inserted immediately BEFORE the next function header comment, which
is where the previous body provably ended.

This only ADDS braces. It does not invent statements, and it does not touch a function that already closes.
A function that ends without a return in an `int` function is legal C (the value is unspecified), which is
why the missing brace is the only real defect here.
"""
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from find_brace_break import strip_noise      # noqa: E402


HEADER_RE = re.compile(r"^/\* =+\s*$")


def repair(path, write=False):
    with open(path, encoding="utf-8", errors="replace") as fh:
        raw = fh.read()
    lines = raw.split("\n")
    clean = strip_noise(raw).split("\n")

    out = []
    depth = 0
    inserted = 0
    for i, line in enumerate(lines):
        # Before emitting a function header at column 0 while we are still inside a body, close the body.
        if HEADER_RE.match(line) and depth > 0:
            out.extend(["  }"] * depth)
            inserted += depth
            depth = 0
        out.append(line)
        cl = clean[i] if i < len(clean) else ""
        for ch in cl:
            if ch == "{":
                depth += 1
            elif ch == "}":
                depth = max(0, depth - 1)

    if depth > 0:                              # file ended mid-body
        out.extend(["  }"] * depth)
        inserted += depth

    if inserted and write:
        with open(path, "w", encoding="utf-8", newline="") as fh:
            fh.write("\n".join(out))
    return inserted


def main(argv):
    root = argv[1]
    write = "--write" in argv
    total_files = 0
    total_braces = 0
    for dirpath, _, files in os.walk(root):
        if "include" in dirpath:
            continue
        for fn in sorted(files):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dirpath, fn)
            n = repair(path, write=write)
            if n:
                total_files += 1
                total_braces += n
                print("  %-52s +%d close(s)" % (fn, n))
    print()
    print("files repaired: %d, braces inserted: %d (write=%s)"
          % (total_files, total_braces, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
