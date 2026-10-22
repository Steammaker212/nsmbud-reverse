"""Relax the specific in-file prototypes that clang reports as conflicting with a relaxed header.

The broad version of this (relax every in-file prototype whose name a header declares `()`) took parse from 463
down to 460: a header may declare a name `()` for one overload while the .c file legitimately defines a
different arity, and relaxing those broke files that had been fine.

This asks the compiler instead of guessing. It compiles each failing unit, takes the exact names from
"error: conflicting types for 'X'", and rewrites only those declarations -- never a definition.
"""
import os
import re
import subprocess
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")
CLANG = r"C:\Program Files\LLVM\bin\clang.exe"

PROTO = re.compile(r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
                   r"\((?P<params>[^;{\)]*)\)\s*;(?P<tail>[^\n]*)", re.M)
DEF_START = re.compile(r"^[ \t]*[A-Za-z_][\w \t\*]*?__\w+\s+(?P<name>\w+)\s*\([^;{]*\)\s*\n[ \t]*\{",
                       re.M | re.S)


def conflicting(path):
    out = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0",
                          "-I", INC, path], capture_output=True, text=True, errors="replace").stderr
    names = set()
    for ln in out.split("\n"):
        m = re.search(r"error: conflicting types for '(?P<n>\w+)'", ln)
        if m:
            names.add(m.group("n"))
    return names


def main(argv):
    write = "--write" in argv
    total = 0
    for dp, _, fns in os.walk(ROOT):
        if "include" in dp or "authoritative" in dp:
            continue
        for fn in sorted(fns):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dp, fn)
            bad = conflicting(path)
            if not bad:
                continue
            t = open(path, encoding="utf-8", errors="replace").read()
            def_spans = [(m.start(), m.end()) for m in DEF_START.finditer(t)]
            hits = []

            def repl(m):
                if m.group("name") not in bad or not m.group("params").strip():
                    return m.group(0)
                if any(a <= m.start() < b for a, b in def_spans):
                    return m.group(0)
                hits.append(m.group("name"))
                return "%s %s %s();%s" % (m.group("ret").strip(), m.group("conv"),
                                          m.group("name"), m.group("tail"))

            new = PROTO.sub(repl, t)
            if hits:
                total += len(hits)
                print("  %-40s %3d conflicting declaration(s) relaxed" % (os.path.relpath(path, ROOT),
                                                                         len(hits)))
                if write:
                    open(path, "w", encoding="utf-8", newline="").write(new)
    print("total relaxed: %d (write=%s)" % (total, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
