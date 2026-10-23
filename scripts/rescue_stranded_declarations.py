"""Move declarations out of nsmbudx_recovered_deps.h, which nothing includes, into a header that the prelude does.

nsmbudx_recovered_deps.h holds roughly 2,200 lines of externs and prototypes and is not reachable from
nsmbudx_prelude.h -- not directly, and not through any of the twelve headers the prelude does reach. Declarations
placed there have no effect on the corpus, so names that look declared are still reported as undeclared.

Rather than include that header wholesale (it contains types and spellings that conflict with the headers actually
in use, and enabling it regressed the corpus badly when tried), this copies across only the individual declarations
that the compiler is currently asking for, verbatim, and drops nothing from the source file. The result is a small,
verified addition instead of a large unverified one.
"""
import os
import re
import subprocess
import sys

CLANG = r"C:\Program Files\LLVM\bin\clang.exe"
ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")
DEPS = os.path.join(INC, "nsmbudx_recovered_deps.h")
DEST = os.path.join(INC, "nsmbudx_recovered_types.h")
FILES = ["libs\\libs.c", "systems\\systems.c", "systems\\states.c", "actors\\actors_b.c",
         "actors\\actor_construction.c", "actors\\actors_a.c", "systems\\core.c",
         "player\\player.c", "powerup\\powerup.c"]


def undeclared():
    counts = {}
    for f in FILES:
        path = os.path.join(ROOT, f)
        if not os.path.exists(path):
            continue
        r = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC, path],
                           capture_output=True, text=True, errors="replace")
        for m in re.finditer(r"error: use of undeclared identifier '(\w+)'", r.stderr):
            counts[m.group(1)] = counts.get(m.group(1), 0) + 1
    return counts


def total_errors():
    n = 0
    for f in FILES:
        path = os.path.join(ROOT, f)
        if not os.path.exists(path):
            continue
        r = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC, path],
                           capture_output=True, text=True, errors="replace")
        n += r.stderr.count("error:")
    return n


def main(argv):
    write = "--write" in argv
    before = total_errors()
    counts = undeclared()
    deps = open(DEPS, encoding="utf-8", errors="replace").read()
    dest_text = open(DEST, encoding="utf-8").read()

    moved = []
    for name in sorted(counts, key=lambda n: -counts[n]):
        if re.search(r"(?m)^[^\n;]*\b" + re.escape(name) + r"\b[^\n;]*;", dest_text):
            continue
        m = re.search(r"(?m)^extern [^;\n]*\b" + re.escape(name) + r"\b[^;\n]*;", deps)
        if not m:
            continue
        decl = m.group(0)
        if decl in dest_text:
            continue
        moved.append((counts[name], name, decl))

    print("  errors before: %d" % before)
    print("  declarations to move: %d" % len(moved))
    if not moved:
        return 0

    block = ("\n/* ---- declarations recovered from nsmbudx_recovered_deps.h, which the prelude does not reach ---- */\n"
             + "\n".join(d for _, _, d in moved) + "\n")
    trial = dest_text.rstrip("\n") + "\n" + block
    open(DEST, "w", encoding="utf-8", newline="").write(trial)
    after = total_errors()
    print("  errors after:  %d  (%+d)" % (after, after - before))
    for c, n, d in moved:
        print("    %4d uses  %s" % (c, n))

    if after > before:
        open(DEST, "w", encoding="utf-8", newline="").write(dest_text)
        print("  REGRESSION -- reverted")
        return 1
    if not write:
        open(DEST, "w", encoding="utf-8", newline="").write(dest_text)
        print("  dry run -- reverted (pass --write to keep)")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
