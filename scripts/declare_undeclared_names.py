"""Declare identifiers that the recovered units use but nothing declares.

`reclassify_value_names.py` removes typedefs that clang proves are wrong. This script does the complementary and
safer job: for every identifier clang reports as undeclared, add a declaration whose shape fits how the code uses
the name. Nothing is ever removed or renamed, so it cannot destroy information.

The shape is chosen from the use site:

    used as `N(...)`            -> extern uintptr_t N();          a function
    used as a TYPE (`N *x`)     -> typedef struct N N;            an opaque struct
    otherwise                   -> extern uintptr_t N;            a data object

`uintptr_t` is deliberate: these names are used in arithmetic (`N + 27168`), indexed (`N[3]`) and passed by value,
and a pointer-sized integer accepts all of those. Giving them a struct type would fail on the arithmetic; giving
them `int` would fail on 64-bit-sized expressions. They are addresses in the shipped binary, so a pointer-sized
integer is the faithful model.

Some names are deliberately skipped, because a declaration would be wrong or harmful:

    * C keywords and the bare words clang emits around a syntax error (`int`, `char`, `unsigned`, ...)
    * names already declared anywhere in include/
    * `sub_*` — these are functions and are declared by the corpus's own subfuncs header; if one is missing here it
      is because the recovered body refers to a function outside the dumped range, which the address comment
      records, and it is emitted as a prototype rather than an object.

Idempotent: re-running adds nothing once the names are declared.
"""
import os
import re
import subprocess
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")
HDR = os.path.join(INC, "nsmbudx_recovered_deps.h")
CLANG = r"C:\Program Files\LLVM\bin\clang.exe"
TUS = [os.path.join(ROOT, "recovered", f)
       for f in ("recovered_named.c", "recovered_missing.c", "recovered_stubs.c")]

SKIP = {
    "int", "char", "short", "long", "float", "double", "void", "unsigned", "signed", "const", "volatile",
    "struct", "union", "enum", "typedef", "static", "extern", "inline", "register", "sizeof", "return",
    "if", "else", "for", "while", "do", "switch", "case", "default", "break", "continue", "goto",
    "int8_t", "int16_t", "int32_t", "int64_t", "uint8_t", "uint16_t", "uint32_t", "uint64_t",
    "uintptr_t", "size_t", "bool", "float32_t", "NULL", "true", "false", "operator",
}


def declared_names():
    names = set()
    for hf in os.listdir(INC):
        if not hf.endswith(".h"):
            continue
        t = open(os.path.join(INC, hf), encoding="utf-8", errors="replace").read()
        names.update(re.findall(r"\b(?:extern|struct|union|enum)\s+[\w \t\*]*?(\w+)\s*[;(]", t))
        names.update(re.findall(r"\btypedef\s+[^;]*?(\w+)\s*;", t))
        names.update(re.findall(r"#define\s+(\w+)", t))
    return names


def main(argv):
    write = "--write" in argv
    errs = ""
    for tu in TUS:
        if not os.path.exists(tu):
            continue
        r = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC, tu],
                           capture_output=True, text=True, errors="replace")
        errs += r.stderr

    missing = sorted(set(re.findall(r"use of undeclared identifier '(\w+)'", errs)))
    have = declared_names()
    src = ""
    for tu in TUS:
        if os.path.exists(tu):
            src += open(tu, encoding="utf-8", errors="replace").read()

    added = []
    for n in missing:
        if n in SKIP or n in have or not re.fullmatch(r"[A-Za-z_]\w*", n):
            continue
        # `nullsub_N` and `j_XXXX` are DEFINED as stub functions in recovered_stubs.c. Declaring them here with a
        # different return type conflicts with those definitions (154 errors). They are functions; leave them to the
        # stub unit, which already matches each signature to the corpus header.
        if re.fullmatch(r"(?:nullsub_|j_)\w+", n):
            continue
        # a type position looks like `N *ident` or `N ident;` at the start of a declaration
        if re.search(r"\b%s\s*\*" % re.escape(n), src) and not re.search(r"\b%s\s*\(" % re.escape(n), src):
            added.append("typedef struct %s %s;" % (n, n))
        elif re.search(r"\b%s\s*\(" % re.escape(n), src):
            added.append("extern uintptr_t %s();" % n)
        else:
            added.append("extern uintptr_t %s;" % n)

    print("  undeclared identifiers reported: %d" % len(missing))
    print("  already declared or skipped:     %d" % (len(missing) - len(added)))
    print("  to add:                          %d" % len(added))
    if write and added:
        t = open(HDR, encoding="utf-8").read().rstrip()
        t += "\n\n/* ---- declarations added for identifiers the recovered units use ---- */\n"
        t += "\n".join(added) + "\n"
        open(HDR, "w", encoding="utf-8", newline="").write(t)
        print("  appended to the dependency header")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
