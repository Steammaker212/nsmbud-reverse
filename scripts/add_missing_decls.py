"""Collapse duplicated forward-declaration blocks and declare the functions each file actually calls.

Two separate problems, both from generators that were not idempotent.

1. DUPLICATED BLOCKS. FI2_60461AA0.c carries the same block seven times:

       /* ---- forward declarations for functions defined below ---- */
       int __fastcall sub_60461AA0(int result);

   The block generator was run once per source file per pass and prepended without checking. Harmless in
   isolation but it makes the files unreadable, and it hides the second problem.

2. MISSING DECLARATIONS. 466 of the 475 translation units are single-function files, so they only declare the
   one function they define. Every OTHER function they call -- usually defined in a sibling aggregate such as
   actors_b.c -- is then never declared at all. Under C99+ that is an error, and it is what produces

       FI2_60461AA0.c:43: sub_6035750C(v2, v5);
       error: too many arguments to function call, expected single argument 'a1', have 2

   because the never-declared name is assumed to be `int name()` with no prototype.

This adds, for each file, a declaration of every function it calls that is defined somewhere else in the corpus,
taking the signature from the definition.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"

DEF = re.compile(r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
                 r"\((?P<params>[^;{]*?)\)\s*\n[ \t]*\{", re.M | re.S)
CALL = re.compile(r"\b(\w+)\s*\(")
BLOCK = re.compile(r"/\* ---- forward declarations[^\n]*\n(?:[^\n]*\n)*?\n", re.M)

HEADER_NAMES = set()


def load_header_names():
    inc = os.path.join(ROOT, "include")
    pat = re.compile(r"\b(\w+)\s*\(", re.M)
    for fn in os.listdir(inc):
        if not fn.endswith(".h"):
            continue
        t = open(os.path.join(inc, fn), encoding="utf-8", errors="replace").read()
        for m in re.finditer(r"^[ \t]*[A-Za-z_][\w \t\*]*?__\w+\s+(\w+)\s*\(", t, re.M):
            HEADER_NAMES.add(m.group(1))


def main(argv):
    write = "--write" in argv
    load_header_names()

    # every definition in the corpus, with its exact signature
    sigs = {}
    for dp, _, names in os.walk(ROOT):
        if "include" in dp or "authoritative" in dp:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            t = open(os.path.join(dp, fn), encoding="utf-8", errors="replace").read()
            for m in DEF.finditer(t):
                sigs.setdefault(m.group("name"),
                                "%s %s %s(%s);" % (m.group("ret").strip(), m.group("conv"),
                                                   m.group("name"), m.group("params").strip()))

    dup_removed = 0
    added = 0
    for dp, _, names in os.walk(ROOT):
        if "include" in dp or "authoritative" in dp:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dp, fn)
            t = open(path, encoding="utf-8", errors="replace").read()
            orig = t

            # 1. collapse identical duplicated blocks to one
            blocks = list(re.finditer(r"/\* ---- forward declarations[^\n]*---- \*/\n((?:[^\n]*\n)*?)\n", t))
            if len(blocks) > 1:
                seen = set()
                for m in reversed(blocks):
                    body = m.group(1)
                    if body in seen:
                        t = t[:m.start()] + t[m.end():]
                        dup_removed += 1
                    else:
                        seen.add(body)

            # 2. declare every called-but-elsewhere-defined function this file does not already declare
            defined_here = {m.group("name") for m in DEF.finditer(t)}
            declared = set(re.findall(r"^[ \t]*[A-Za-z_][\w \t\*]*?__\w+\s+(\w+)\s*\(", t, re.M))
            missing = []
            for m in CALL.finditer(t):
                n = m.group(1)
                if n in defined_here or n in declared or n in HEADER_NAMES:
                    continue
                s = sigs.get(n)
                if s and n not in missing:
                    missing.append(n)
            if missing:
                block = ("/* ---- forward declarations for functions called here but defined elsewhere ---- */\n"
                         + "\n".join(sigs[n] for n in sorted(missing)) + "\n\n")
                anchor = '#include "nsmbudx_prelude.h"\n'
                if anchor in t:
                    t = t.replace(anchor, anchor + "\n" + block, 1)
                    added += len(missing)

            if t != orig:
                if write:
                    open(path, "w", encoding="utf-8", newline="").write(t)
                if dup_removed or missing:
                    print("  %-42s dup=%d declared=%d" % (os.path.relpath(path, ROOT),
                                                          len(blocks) - 1 if len(blocks) > 1 else 0,
                                                          len(missing)))
    print("duplicate blocks removed: %d   declarations added: %d (write=%s)" % (dup_removed, added, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
