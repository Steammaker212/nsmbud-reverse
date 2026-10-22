"""Remove duplicate function-definition blocks from an aggregated region file.

THE DEFECT
----------
Two region files define the same function twice:

    powerup/modes.c       sub_6078E608  at line 12 (banner RVA 0x78e608)
                          sub_6078E608  at line 114 (banner RVA 0x78e6a8)
    powerup/projectile.c  sub_607AAF80  at line 324 (banner RVA 0x7aaf80)
                          sub_607AAF80  at line 480 (banner RVA 0x7ab0e4)

The second banner in each pair is not a function start: 0x78e6a8 lies INSIDE the function that
begins at 0x78e608 (whose size is 0x1e0, so it spans to 0x78e7e8), and 0x7ab0e4 lies inside the one
beginning at 0x7aaf80. The export asked IDA for the function at the requested RVA, IDA returned the
CONTAINING function, and the same pseudocode was emitted a second time under a different banner.
clang then reports "redefinition of 'sub_6078E608'" and the whole file is lost.

THE FIX. When a block's definition repeats a name already defined earlier in the same file, the later
block is the spurious one -- it is a re-emission of code already present, not new information -- so it
is dropped, banner included. Every drop is reported so the underlying mis-targeted RVA stays visible.

Only whole blocks are removed: from the block's `/* ====` banner up to (not including) the next
banner. Nothing inside a retained block is touched.
"""
import os
import re
import sys

BANNER = re.compile(r"^/\* =+")
# `type __fastcall NAME(` at the start of a line, followed by a line that is just `{`.
DEF = re.compile(r"^(?:[A-Za-z_][\w \t\*]*?__fastcall)\s+(\w+)\s*\(")


def process(path, write):
    with open(path, encoding="utf-8", errors="surrogateescape") as fh:
        lines = fh.read().splitlines(True)

    # Split into blocks: a block starts at a banner line.
    starts = [i for i, l in enumerate(lines) if BANNER.match(l)]
    if not starts:
        return 0, []

    # Everything before the first banner is a preamble and is always kept.
    out = lines[: starts[0]]
    seen = {}
    dropped = []

    for bi, s in enumerate(starts):
        e = starts[bi + 1] if bi + 1 < len(starts) else len(lines)
        block = lines[s:e]

        name = None
        for j in range(len(block) - 1):
            m = DEF.match(block[j])
            if m and block[j + 1].strip() == "{":
                name = m.group(1)
                break

        if name is not None and name in seen:
            rva = "?"
            for l in block[:6]:
                mm = re.search(r"RVA\s+(0x[0-9a-fA-F]+)", l)
                if mm:
                    rva = mm.group(1)
                    break
            dropped.append((name, rva))
            continue

        if name is not None:
            seen[name] = True
        out.extend(block)

    if dropped and write:
        with open(path, "w", encoding="utf-8", errors="surrogateescape", newline="") as fh:
            fh.write("".join(out))

    return len(dropped), dropped


def main(argv):
    if len(argv) < 2:
        print("usage: dedupe_function_blocks.py <dir> [--write]")
        return 2
    root, write = argv[1], "--write" in argv
    files = 0
    total = 0
    for dp, _, fs in os.walk(root):
        for f in fs:
            if not f.endswith(".c"):
                continue
            p = os.path.join(dp, f)
            n, dropped = process(p, write)
            if n:
                files += 1
                total += n
                for name, rva in dropped:
                    print("  %s: dropped duplicate %s (banner RVA %s)" % (f, name, rva))
    print("duplicate blocks dropped: %d in %d files%s"
          % (total, files, "" if write else " (dry run)"))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
