"""Close function bodies that end while inner blocks are still open.

Three aggregates declare a function, open its body, then reach the NEXT function's banner with inner `if` / `for`
/ `do` blocks still open. The body is otherwise complete -- the trailing `}` are simply absent -- and because the
file is then parsed at a depth that never returns to zero, every following function becomes a nested definition:

    actor_construction.c  2,099 --> 1,687 of these "function definition is not allowed here"
    actors_b.c                        341
    powerup.c                          71

This walks each file in order, tracks depth outside comments and literals, and whenever a new function banner or
definition appears while the depth is above zero, inserts the missing `}` immediately before it. Nothing else in
the body is touched.

It is verified by measurement: the tool only reports a repair, and the caller compares compiler errors before and
after, keeping the change only if the count falls.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"

SIG = re.compile(r"(?m)^[ \t]*[A-Za-z_][\w \t\*]*?__\w+[ \t\*]+(?P<name>\w+)[ \t]*\([^;{}]*\)[ \t]*$")
BANNER = re.compile(r"(?m)^/\* =+\n \* (?P<name>\w+)\n \* RVA[^\n]*\n \* =+ \*/")


def blank_literals(t):
    """Replace comments and literals with spaces, preserving every offset and newline."""
    out = list(t)
    i, n = 0, len(t)
    while i < n:
        if t.startswith("/*", i):
            j = t.find("*/", i + 2)
            j = n if j < 0 else j + 2
            for k in range(i, j):
                if out[k] != "\n":
                    out[k] = " "
            i = j
            continue
        if t.startswith("//", i):
            j = t.find("\n", i)
            j = n if j < 0 else j
            for k in range(i, j):
                out[k] = " "
            i = j
            continue
        c = t[i]
        if c in "\"'":
            q, j = c, i + 1
            while j < n:
                if t[j] == "\\":
                    j += 2
                    continue
                if t[j] == q:
                    j += 1
                    break
                j += 1
            for k in range(i, j):
                if out[k] != "\n":
                    out[k] = " "
            i = j
            continue
        i += 1
    return "".join(out)


def repair(path, write):
    raw = open(path, encoding="utf-8", errors="replace").read()
    flat = blank_literals(raw)

    # depth at every offset
    depth = [0] * (len(flat) + 1)
    d = 0
    for i, ch in enumerate(flat):
        if ch == "{":
            d += 1
        elif ch == "}":
            d -= 1
        depth[i + 1] = d

    # a boundary is a banner (or a definition) that begins while depth > 0
    inserts = []
    # The banner is a COMMENT, so it is blanked in `flat`; find banner offsets in the raw text and look up the
    # depth at the same offsets.
    #
    # Only the FIRST boundary is repaired. After that boundary the depth is correct again by construction, so any
    # later boundary reporting depth > 0 is a consequence of an earlier insertion, not an independent defect.
    # Repairing them all in one pass inserted 26,832 braces, which is obviously wrong.
    for m in BANNER.finditer(raw):
        if depth[m.start()] > 0:
            inserts.append((m.start(), depth[m.start()]))
            break
    if not inserts:
        return 0, []

    # insert closes just before each boundary, correcting for the ones already inserted
    out = raw
    added = 0
    for pos, want in reversed(inserts):
        pad = "\n" + ("  }\n" * want)
        out = out[:pos] + pad + out[pos:]
        added += want
    if write:
        open(path, "w", encoding="utf-8", newline="").write(out)
    return added, [(flat[:p].count("\n") + 1, w) for p, w in inserts]


def main(argv):
    write = "--write" in argv
    total = 0
    for rel in ["actors/actor_construction.c", "actors/actors_b.c", "powerup/powerup.c"]:
        path = os.path.join(ROOT, rel.replace("/", os.sep))
        n, sites = repair(path, write)
        total += n
        print("  %-30s %3d closing brace(s) at %d site(s)" % (rel, n, len(sites)))
        for line, want in sites[:6]:
            print("       line %6d needs %+d" % (line, want))
    print("total braces to insert: %d (write=%s)" % (total, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
