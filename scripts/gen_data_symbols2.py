"""Declare every `type_XXXXXXXX` data symbol the corpus names but never declares."""
import collections
import os
import re
import sys

PREFIX_WIDTH = {"byte": 1, "word": 2, "dword": 4, "qword": 8,
                "flt": 4, "dbl": 8, "off": 4, "unk": 1, "stru": 1}
SYM = re.compile(r"\b(byte|word|dword|qword|flt|dbl|off|unk|stru)_([0-9A-Fa-f]{6,8})\b")
# loc_ symbols are code labels that Hex-Rays casts to a function pointer and CALLS, e.g.
#   ((void (__fastcall *)(...))loc_60788A10)(...)
# They were never declared, so those calls did not compile. The address is in the name, so cast the label to
# a function address the same way instead of inventing anything.
LOC = re.compile(r"\bloc_([0-9A-Fa-f]{6,8})\b")
BASE = 0x60000000
LIMIT = 0x01000000
DECLARED_RE = re.compile(r"#define\s+(\w+)|(?:\bextern\b[^;\n]*?)(\w+)\s*(?:\[[^\]]*\])?\s*;")


def scalar_expr(width, addr):
    if width == 4:
        return "MEMORY[(0x%08X - 0x%08X) / 4]" % (addr, BASE)
    if width == 1:
        return "((uint8_t *)(uintptr_t)0x%08Xu)[0x%08X - 0x%08X]" % (BASE, addr, BASE)
    if width == 2:
        return "((uint16_t *)(uintptr_t)0x%08Xu)[(0x%08X - 0x%08X) / 2]" % (BASE, addr, BASE)
    return "((uint64_t *)(uintptr_t)0x%08Xu)[(0x%08X - 0x%08X) / 8]" % (BASE, addr, BASE)


def main(argv):
    root = argv[1]
    write = "--write" in argv
    incdir = os.path.join(root, "include")

    declared = set()
    for fn in sorted(os.listdir(incdir)):
        if fn.endswith(".h"):
            t = open(os.path.join(incdir, fn), encoding="utf-8", errors="replace").read()
            for m in DECLARED_RE.finditer(t):
                for g in m.groups():
                    if g:
                        declared.add(g)

    used = collections.Counter()
    files = collections.defaultdict(set)
    texts = {}

    # Symbols nsmbudx_undeclared.h already prototypes as functions -- a second declaration as an
    # address expression makes them conflict.
    prototyped_loc = set()
    for fn in sorted(os.listdir(incdir)):
        if fn.endswith(".h"):
            h = open(os.path.join(incdir, fn), encoding="utf-8", errors="replace").read()
            prototyped_loc |= set(re.findall(r"\b(loc_[0-9A-Fa-f]{6,8})\s*\(", h))
    for dirpath, _, names in os.walk(root):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            t = open(os.path.join(dirpath, fn), encoding="utf-8", errors="replace").read()
            texts[fn] = t
            for m in SYM.finditer(t):
                used[m.group(0)] += 1
                files[m.group(0)].add(fn)
            for m in LOC.finditer(t):
                ident = m.group(0)
                used[ident] += 1
                files[ident].add(fn)

    missing = {k: v for k, v in used.items() if k not in declared}
    print("data symbols used: %d, undeclared: %d" % (len(used), len(missing)))

    lines = []
    skipped = []
    arrays = 0
    for ident, n in sorted(missing.items(), key=lambda x: -x[1]):
        if ident.startswith("loc_"):
            # nsmbudx_undeclared.h already prototypes 35 of these as functions. Emitting a second
            # declaration as a castable address makes them conflict, so defer to the prototype.
            if ident in prototyped_loc:
                continue
            # code label called through a cast function pointer: expose the address itself
            addr = int(ident[4:], 16)
            if not (BASE <= addr < BASE + LIMIT):
                skipped.append((ident, n, "outside image"))
                continue
            lines.append("#define %-22s ((void *)(uintptr_t)0x%08Xu)" % (ident, addr))
            if n >= 10:
                print("   %-22s uses=%-4d files=%d  [code label]" % (ident, n, len(files[ident])))
            continue
        m = re.match(r"(byte|word|dword|qword|flt|dbl|off|unk|stru)_([0-9A-Fa-f]{6,8})", ident)
        prefix, addr_s = m.group(1), m.group(2)
        addr = int(addr_s, 16)
        if not (BASE <= addr < BASE + LIMIT):
            skipped.append((ident, n, "outside image"))
            continue
        width = PREFIX_WIDTH[prefix]
        sub = any(re.search(re.escape(ident) + r"\s*\[", texts[f]) for f in files[ident])
        base_expr = scalar_expr(width, addr)
        expr = "(&(%s))" % base_expr if sub else base_expr
        if sub:
            arrays += 1
        lines.append("#define %-22s (%s)" % (ident, expr))
        if n >= 25:
            print("   %-22s uses=%-4d files=%d%s" % (ident, n, len(files[ident]), "  [array]" if sub else ""))

    print("\nwould emit %d #define(s), %d as pointer-to-element" % (len(lines), arrays))
    for ident, n, why in skipped:
        print("   SKIP %-22s uses=%-4d %s" % (ident, n, why))

    if write and lines:
        out = os.path.join(incdir, "nsmbudx_data_symbols.h")
        header = (
            "/* Named data symbols that Hex-Rays emits by name but never declares.\n"
            " *\n"
            " * Generated by scripts/gen_data_symbols2.py -- do not edit by hand.\n"
            " *\n"
            " * The corpus reaches game data two ways: MEMORY[<offset>] in most places and the NAMED form\n"
            " * dword_60CC6D8C in others. Both address the same word, but only the raw form was declared, so\n"
            " * every unit mentioning a name failed with \"use of undeclared identifier\". The address is\n"
            " * carried in the identifier itself, so each definition follows from the name; nothing is guessed.\n"
            " *\n"
            " * Symbols subscripted somewhere are emitted as pointers to their first element so that\n"
            " * `dword_60B0C20C[v17]` stays valid.\n"
            " */\n"
            "#ifndef NSMBUDX_DATA_SYMBOLS_H\n#define NSMBUDX_DATA_SYMBOLS_H\n\n"
        )
        with open(out, "w", encoding="utf-8", newline="\n") as fh:
            fh.write(header)
            fh.write("\n".join(lines))
            fh.write("\n\n#endif /* NSMBUDX_DATA_SYMBOLS_H */\n")
        print("wrote %s" % out)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))