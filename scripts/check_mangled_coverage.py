"""Check whether the symbol file's mangled C++ names are already used by the corpus.

Compares the set of `_Z...` names in nsmbudx.sym against the set of identifiers appearing anywhere in the corpus,
which is a single pass per file instead of a regex search per name (2,927 regexes over a 1.4 MB file did not
finish).
"""
import os
import re

SYM = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\symbols\nsmbudx.sym"
ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"

mangled = set()
for ln in open(SYM, encoding="utf-8", errors="replace"):
    ln = ln.split("#")[0].strip()
    if "=" not in ln:
        continue
    n = ln.split("=", 1)[0].strip()
    if n.startswith("_Z"):
        mangled.add(n)

idents = set()
TOK = re.compile(r"[A-Za-z_]\w*")
for dp, _, ns in os.walk(ROOT):
    if os.path.basename(dp) == "include" or "authoritative" in dp:
        continue
    for fn in ns:
        if not fn.endswith(".c"):
            continue
        with open(os.path.join(dp, fn), encoding="utf-8", errors="replace") as fh:
            idents.update(TOK.findall(fh.read()))

have = mangled & idents
print("  _Z names in symbol file:      %d" % len(mangled))
print("  also present in the corpus:   %d" % len(have))
print("  absent from the corpus:       %d" % len(mangled - have))
for n in sorted(mangled - have)[:10]:
    print("    %s" % n[:80])
