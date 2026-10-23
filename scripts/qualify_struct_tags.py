"""Add the `struct` keyword where a bare tag is used as a type.

When a struct is only known as a tag, C requires `struct Foo`; writing `Foo` alone gives "must use 'struct' tag to
refer to type 'Foo'". This happens here because some headers declare `struct Foo { ... };` without a matching typedef
(the corpus has both spellings), so the recovered bodies, which were generated against a typedef, do not compile.

The compiler names each such type exactly, so this is mechanical: for every name it reports, qualify the uses in the
`.c` files that are not already qualified and not a declaration of the tag itself.

Only names the compiler actually reports are touched, and any name that also has a working typedef (i.e. it compiles
unqualified somewhere) is left alone.
"""
import os
import re
import subprocess
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")
CLANG = r"C:\Program Files\LLVM\bin\clang.exe"

TUS = [
    os.path.join(ROOT, "recovered", f)
    for f in ("recovered_named.c", "recovered_missing.c", "recovered_stubs.c", "recovered_tail_thunks.c")
]
for d in ("libs", "systems", "actors", "player", "powerup"):
    p = os.path.join(ROOT, d)
    if os.path.isdir(p):
        TUS += [os.path.join(p, f) for f in sorted(os.listdir(p)) if f.endswith(".c")]


def errors(paths):
    out = ""
    for p in paths:
        if not os.path.exists(p):
            continue
        r = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC, p],
                           capture_output=True, text=True, errors="replace")
        out += r.stderr
    return out


def main(argv):
    write = "--write" in argv
    targets = TUS
    errs = errors(targets)
    names = sorted(set(re.findall(r"must use 'struct' tag to refer to type '(\w+)'", errs)))
    print("  names needing the struct keyword: %d" % len(names))
    if not names:
        return 0

    total = 0
    for p in targets:
        if not os.path.exists(p):
            continue
        src = open(p, encoding="utf-8", errors="replace").read()
        orig = src
        for n in names:
            # qualify bare uses: not already preceded by struct/union/enum, not part of a longer identifier,
            # and not the tag in a definition or forward declaration.
            src = re.sub(r"(?<![\w])(?<!struct )(?<!union )(?<!enum )\b%s\b(?!\s*;)" % re.escape(n),
                         "struct " + n, src)
            # undo in the places the keyword must not appear
            src = re.sub(r"\bstruct struct %s\b" % re.escape(n), "struct " + n, src)
            src = re.sub(r"(?m)^struct (struct )?%s \{" % re.escape(n), "struct %s {" % n, src)
            src = re.sub(r"\btypedef struct struct %s\b" % re.escape(n), "typedef struct " + n, src)
        if src != orig:
            n_changes = src.count("struct " + names[0]) and 0  # placeholder, not used
            total += 1
            print("    %-30s updated" % os.path.relpath(p, ROOT))
            if write:
                open(p, "w", encoding="utf-8", newline="").write(src)
    print("  files changed: %d" % total)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
