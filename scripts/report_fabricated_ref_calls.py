"""Report `_ref` names that are called as functions but are actually string labels.

An earlier naming pass promoted resource strings -- "agl_TextureData", "SE_SYS_NICE_S", "message", "untitled" --
into function names by appending `_ref`. The result is a call like

    agl_TextureData_ref(a1 + 90);

which reads as a function call to a name that does not exist in the database and cannot exist, because
`agl_TextureData` is the contents of a string literal, not a symbol. Disassembling the enclosing function
(sub_6081EBD0) shows the real call at that site is `BL sub_6091FD58`.

Those names account for 703 distinct identifiers over 1,679 call sites and are pure noise: they inflate the apparent
API surface, they read as real functions to anyone browsing the corpus, and they cannot be resolved to an address.

This script lists them and, for a named site, prints the real BL target so the substitution is evidence-based rather
than a guess. Repair is deliberately not automatic here: several `_ref` names in the list ARE legitimate data-symbol
references in other files, and the same spelling can be a real extern in one translation unit and a fabricated call
in another.
"""
import collections
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")


def declared_names():
    names = set()
    for h in os.listdir(INC):
        if not h.endswith(".h"):
            continue
        text = open(os.path.join(INC, h), encoding="utf-8", errors="replace").read()
        names.update(re.findall(r"\b([A-Za-z_]\w*)\s*\(", text))
        names.update(re.findall(r"(?m)^\s*extern\s+[^;\n]*\b([A-Za-z_]\w*)\b", text))
    return names


def main(argv):
    declared = declared_names()
    refcalls = collections.Counter()
    sites = collections.defaultdict(list)
    for dirpath, _, names in os.walk(ROOT):
        if os.path.basename(dirpath) == "include":
            continue
        for name in names:
            if not name.endswith(".c"):
                continue
            path = os.path.join(dirpath, name)
            lines = open(path, encoding="utf-8", errors="replace").read().split("\n")
            for i, ln in enumerate(lines):
                for m in re.finditer(r"\b([A-Za-z_]\w*_ref(?:s)?)\s*\(", ln):
                    n = m.group(1)
                    if n in declared:
                        continue
                    refcalls[n] += 1
                    sites[n].append((name, i + 1, ln.strip()[:90]))

    total = sum(refcalls.values())
    print("  *_ref names called but never declared: %d distinct, %d sites" % (len(refcalls), total))
    print("  (a name that were a real extern would appear in a header; these cannot resolve to an address)")
    print()
    for n, c in refcalls.most_common(20):
        fn, line, src = sites[n][0]
        print("    %5d  %-42s %s:%d" % (c, n, fn, line))
        print("           %s" % src)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
