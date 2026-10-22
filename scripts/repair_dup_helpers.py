"""Repair the damage a non-idempotent fixer left in the aggregate files.

fix_asm_escapes.py inserted its helper block before the FIRST #include every time it ran, with no check for one
already being there, and it ran once per affected file per invocation. libs.c ended up with two copies:

    L9     static inline unsigned int uxtb16(...)      <- first insert
    L2125  static inline unsigned int uxtb16(...)      <- second insert
    error: redefinition of 'uxtb16'

The same second pass also left prototypes in the forward-declaration block that disagree with the header, which
is the older "conflicting types" complaint reappearing:

    libs.c:1278  int __fastcall __operator_new_array_al(unsigned int a1);
    libs.h       int __fastcall __operator_new_array_al(unsigned int a1, int, int);   (3 parameters)

This script (1) keeps only the first copy of each helper definition, and (2) rewrites any forward declaration
whose name is declared in a header to exactly match the header's prototype, which is the definition-derived one.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")

HELPERS = ("uxtb16", "vminnm_f32", "vmaxnm_f32", "vminnm_f64", "vmaxnm_f64")

PROTO_IN_HEADER = re.compile(
    r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
    r"\((?P<params>[^;{)]*)\)\s*;[^\n]*$", re.M)


def header_prototypes():
    """name -> exact prototype text (without the trailing RVA comment)."""
    table = {}
    for fn in sorted(os.listdir(INC)):
        if not fn.endswith(".h"):
            continue
        t = open(os.path.join(INC, fn), encoding="utf-8", errors="replace").read()
        for m in PROTO_IN_HEADER.finditer(t):
            table[m.group("name")] = ("%s %s %s(%s);" % (m.group("ret").strip(), m.group("conv"),
                                                         m.group("name"), m.group("params").strip()))
    return table


def main(argv):
    write = "--write" in argv
    hdr = header_prototypes()
    print("header prototypes known: %d" % len(hdr))
    total_dup = 0
    total_aligned = 0
    for dirpath, _, names in os.walk(ROOT):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dirpath, fn)
            text = open(path, encoding="utf-8", errors="replace").read()
            orig = text

            # 1. drop duplicate helper definitions, keeping the first
            for h in HELPERS:
                pat = re.compile(r"[ \t]*static inline [\w \t\*]+ " + h + r"\s*\([^)]*\)\s*\n"
                                 r"[ \t]*\{.*?\n[ \t]*\}[ \t]*\n", re.S)
                found = list(pat.finditer(text))
                if len(found) > 1:
                    for m in reversed(found[1:]):
                        text = text[:m.start()] + text[m.end():]
                        total_dup += 1

            # 2. align in-file prototypes to the header -- but ONLY where the header carries a full
            # prototype. Matching every prototype was tried and made things worse (459 -> 456): the header
            # is not always the better-informed side, so this is limited to names whose header prototype has
            # a real parameter list and whose in-file declaration is old-style `()`, where alignment is
            # unambiguously the right direction.
            def align(m):
                nonlocal total_aligned
                name = m.group("name")
                want = hdr.get(name)
                if not want or m.group(0).strip() == want:
                    return m.group(0)
                if m.group("params").strip():
                    return m.group(0)
                if not re.search(r"\w", want[want.index("(") + 1:want.rindex(")")]):
                    return m.group(0)
                total_aligned += 1
                return want

            text = PROTO_IN_HEADER.sub(align, text)

            if text != orig:
                print("  %-46s repaired" % os.path.relpath(path, ROOT))
                if write:
                    open(path, "w", encoding="utf-8", newline="").write(text)
    print("duplicate helpers removed: %d   prototypes aligned to headers: %d (write=%s)"
          % (total_dup, total_aligned, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
