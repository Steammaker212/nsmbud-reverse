"""Close function bodies that reach the next banner with blocks still open.

This is the real cause of the 2,099 "function definition is not allowed here" errors, and it is not a guess:

    sub_6011941C ends with
            23374 |  }          <- closes the switch
            23375 |}            <- closes the function

    but its body opens TWO more blocks than it closes (net +2). Hex-Rays emitted the last arms of a nested
    if/switch chain without their closing braces. Everything after it parses inside a function body, so every
    following function is "not allowed here".

Two earlier versions were wrong, and both mistakes are worth recording:

  * inserting at every banner whose depth was > 0, measured against one stale depth array, inserted 26,832
    braces -- because after the first unclosed body EVERY later banner is also at depth > 0.
  * repairing only the first boundary per file inserted 9 braces and left the rest unclosed.

The correct approach is sequential: walk boundaries in order, and after each repair reset the running depth to 0,
because the inserted braces close the imbalance. That also makes the tool idempotent.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"

BANNER = re.compile(r"(?m)^/\* =+\n \* (?P<name>\w+)\n \* RVA[^\n]*\n \* =+ \*/")


def blank_literals(t):
    """Replace comments and literals with spaces, preserving offsets and newlines exactly."""
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


def repair(path, write, limit=None):
    raw = open(path, encoding="utf-8", errors="replace").read()
    flat = blank_literals(raw)

    banners = [m.start() for m in BANNER.finditer(raw)]
    if not banners:
        return 0, []

    depth = 0
    pos = 0
    inserts = []
    for b in banners:
        depth += flat.count("{", pos, b) - flat.count("}", pos, b)
        pos = b
        if depth > 0:
            inserts.append((b, depth))
            # The braces go immediately before this banner, which is inside the span just measured, so they
            # cancel exactly this much depth. Zeroing (or ignoring) it is what made the tool re-insert on every run.
            depth -= depth
    if not inserts:
        return 0, []

    out = raw
    added = 0
    for b, want in reversed(inserts):
        pad = "\n" + ("  }\n" * want)
        out = out[:b] + pad + out[b:]
        added += want
    if write:
        open(path, "w", encoding="utf-8", newline="").write(out)
    return added, [(raw[:b].count("\n") + 1, w) for b, w in inserts]


def fixpoint(path, write, rounds=12):
    """Apply until nothing is left to insert.

    A single pass is not enough: the braces inserted for one boundary land immediately before it, and a pass that
    inserts there can leave a later span still short. Iterating to a fixpoint is deterministic and converges -- the
    loop stops as soon as a pass reports nothing.
    """
    total = 0
    for _ in range(rounds):
        n, sites = fixpoint(path, write)
        if n == 0:
            break
        total += n
        if not write:
            break
    return total, None


def first_leak(path, write):
    """Repair only the FIRST boundary whose depth is above zero.

    Every later banner also reports depth > 0 once one body is unclosed, so repairing "all positive banners" in one
    pass is meaningless -- that is what produced 3,137 positive banners in actor_construction.c. Fixing the first
    leak, then re-reading the file, is the only formulation that converges: each pass removes exactly one leak.
    """
    return repair(path, write, limit=1)


def main(argv):
    write = "--write" in argv
    files = [a for a in argv[1:] if a.endswith(".c")] or [
        "actors/actor_construction.c", "actors/actors_b.c", "powerup/powerup.c"]
    total = 0
    for rel in files:
        path = rel if os.path.isabs(rel) else os.path.join(ROOT, rel.replace("/", os.sep))
        n, sites = repair(path, write)
        total += n
        print("  %-32s %4d brace(s) at %d site(s)" % (os.path.basename(rel), n, len(sites)))
        for line, want in (sites or [])[:8]:
            print("       line %6d needs %+d" % (line, want))
    print("total: %d (write=%s)" % (total, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
