"""Merge recovered bodies into the corpus as a new translation unit, and apply IDB names to existing placeholders.

Two jobs:

1.  The 483 recovered functions are absent from the corpus entirely. They are written into
    decompiled/recovered/recovered_named.c with the same banner format the rest of the corpus uses, so naming and
    include tooling treats them identically.

2.  For the addresses that ARE already in the corpus under a `sub_XXXXXXXX` name, the recovered decompilation gives
    the real name. Those renames are applied across the whole corpus.

Renames are only applied when the target name is a valid C identifier, is not already bound to a different address in
the corpus, and is not a C++ qualified name (those carry `::`, which the corpus's C-style headers cannot express).
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
SRC = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\ida_work\missing_out"
BASE = 0x60000000

IDENT = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")
KEYWORDS = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum",
            "extern", "float", "for", "goto", "if", "inline", "int", "long", "register", "restrict", "return",
            "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void",
            "volatile", "while", "bool", "true", "false", "asm"}

# Thunks and small stubs are emitted WITHOUT a calling-convention keyword (e.g. `int _nnmusl_fini_dso()`), so the
# pattern must make `__xxx` optional -- requiring it silently dropped 265 of the 483 recovered bodies.
SIG = re.compile(r"^(?P<ret>[A-Za-z_][\w \t\*]*?)\s*(?:__\w+\s+)?(?P<name>[A-Za-z_][\w:]*)\s*\(", re.M)


def scan_recovered():
    """Return {va: (name, size, whole_text)} for the recovered files."""
    out = {}
    for fn in os.listdir(SRC):
        if not fn.endswith(".c"):
            continue
        m = re.match(r"sub_([0-9A-Fa-f]{8})\.c$", fn)
        if not m:
            continue
        va = int(m.group(1), 16)
        t = open(os.path.join(SRC, fn), encoding="utf-8", errors="replace").read()
        sm = SIG.search(t)
        if not sm:
            continue
        sz = re.search(r"size 0x([0-9A-Fa-f]+)", t)
        out[va] = (sm.group("name"), int(sz.group(1), 16) if sz else 0, t)
    return out


def corpus_banners():
    """Map va -> (name, filename) for corpus banners."""
    BANNER = re.compile(r"(?m)^/\* =+\n \* (?P<name>\w+)\n \* RVA (?P<rva>0x[0-9a-fA-F]+)\s+size (?P<size>0x[0-9a-fA-F]+)")
    seen = {}
    for dp, _, ns in os.walk(ROOT):
        if os.path.basename(dp) == "include" or "authoritative" in dp:
            continue
        for fn in ns:
            if not fn.endswith(".c"):
                continue
            t = open(os.path.join(dp, fn), encoding="utf-8", errors="replace").read()
            for m in BANNER.finditer(t):
                seen.setdefault(int(m.group("rva"), 16) + BASE, (m.group("name"), os.path.join(dp, fn)))
    return seen


def main(argv):
    write = "--write" in argv
    rec = scan_recovered()
    corp = corpus_banners()
    print("  recovered bodies:      %d" % len(rec))
    print("  corpus banners:        %d" % len(corp))

    # 1. names for addresses already in the corpus under a placeholder
    plan = {}
    skip_reason = {"qualified": 0, "invalid": 0, "dupe": 0, "same": 0}
    for va, (name, size, _t) in rec.items():
        hit = corp.get(va)
        if not hit:
            continue
        cur = hit[0]
        if "::" in name:
            skip_reason["qualified"] += 1
            continue
        if not IDENT.match(name) or name in KEYWORDS:
            skip_reason["invalid"] += 1
            continue
        if not cur.startswith("sub_"):
            skip_reason["same"] += 1
            continue
        plan[va] = name

    names = {}
    for va, n in plan.items():
        names.setdefault(n, []).append(va)
    for n, vas in list(names.items()):
        if len(vas) > 1:
            for va in vas:
                plan.pop(va)
                skip_reason["dupe"] += 1

    print("  renames to apply:      %d" % len(plan))
    print("  skipped:               %s" % skip_reason)

    if write and plan:
        pat = re.compile(r"\b(sub_%s)\b" % "|".join("%08X" % va for va in plan))
        changed = 0
        for dp, _, ns in os.walk(ROOT):
            if os.path.basename(dp) == "include" or "authoritative" in dp:
                continue
            for fn in ns:
                if not fn.endswith(".c"):
                    continue
                p = os.path.join(dp, fn)
                t = open(p, encoding="utf-8", errors="replace").read()
                nt = pat.sub(lambda m: plan[int(m.group(1)[4:], 16)], t)
                if nt != t:
                    open(p, "w", encoding="utf-8", newline="").write(nt)
                    changed += 1
        print("  files rewritten:       %d" % changed)

    # 2. write the 483 as a new TU
    if write:
        outdir = os.path.join(ROOT, "recovered")
        os.makedirs(outdir, exist_ok=True)
        p = os.path.join(outdir, "recovered_named.c")
        chunks = []
        for va in sorted(rec):
            name, size, text = rec[va]
            chunks.append(
                "/* ============================================================================\n"
                " * %s\n"
                " * RVA 0x%08X   size 0x%X   xrefs 0   recovered from main.i64\n"
                " * ============================================================================ */\n"
                "%s" % (name.split("::")[-1], va - BASE, size, text.strip()))
        open(p, "w", encoding="utf-8", newline="").write(
            "/* Recovered from main.i64: functions present in the database but missing from the corpus. */\n\n"
            + "\n\n".join(chunks) + "\n")
        print("  wrote %s (%d functions)" % (p, len(rec)))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
