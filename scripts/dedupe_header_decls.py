"""Remove duplicate conflicting prototypes from a generated header, keeping the first.

WHY THIS EXISTS
---------------
`decompiled/include/actors.h` contains three symbols declared twice with different signatures:

    int  Pokey__vf15C(int a1, int a2);              /* 0x002856dc */
    int  Pokey__vf15C(int a1);                      /* 0x003835e8 */
    bool ShellEnemy__vf110(int a1, int a2, int a3); /* 0x002725ac */
    void ShellEnemy__vf110(_DWORD *a1);             /* 0x003a1418 */
    int  Enemy__beforeExecute(_BYTE *a1);           /* 0x002a1bc8 */
    int  Enemy__beforeExecute(int result);          /* 0x0040a800 */

Those are two DIFFERENT functions that were given the SAME demangled name, so the header declares one
identifier twice and clang stops with "conflicting types for ...". The whole header fails, and because
every .c includes it, that one conflict cost far more than the three functions involved.

The right fix is to rename one of each pair in the IDB. That is not done here: choosing which of two
same-named functions should move needs the function bodies, and silently renaming one would be a
guess recorded as a fact. What this script does instead is the conservative thing -- keep the FIRST
declaration and drop the later duplicates, so the header parses. The survivor is the one whose
address appears first in the file, and every dropped line is reported so the conflict stays visible
rather than disappearing.
"""
import re
import sys
from pathlib import Path

# A prototype line: return type, optional __fastcall, name, args, then the address comment.
PROTO = re.compile(r"^[A-Za-z_].*?\b([A-Za-z_]\w*)\s*\([^;]*\);\s*/\*\s*(0x[0-9A-Fa-f]+)\s*\*/")


def main(argv):
    if len(argv) < 2:
        print("usage: dedupe_header_decls.py <header> [--write]")
        return 2
    path = Path(argv[1])
    write = "--write" in argv
    lines = path.read_text(encoding="utf-8", errors="surrogateescape").splitlines(True)

    seen = {}
    keep = []
    dropped = []
    for i, line in enumerate(lines, 1):
        m = PROTO.match(line.strip())
        if not m:
            keep.append(line)
            continue
        name, addr = m.group(1), m.group(2)
        if name in seen:
            dropped.append((i, name, addr, seen[name]))
            continue
        seen[name] = addr
        keep.append(line)

    print("%s: %d declarations, %d duplicates dropped" % (path.name, len(seen), len(dropped)))
    for ln, name, addr, first in dropped:
        print("  line %d: %s at %s duplicates the earlier declaration at %s" % (ln, name, addr, first))

    if write and dropped:
        path.write_text("".join(keep), encoding="utf-8", errors="surrogateescape")
        print("  written")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
