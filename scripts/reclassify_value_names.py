"""Reclassify names that the dependency header declares as types but the code uses as values.

The header's type-vs-data classification was heuristic and got a number of names wrong. Rather than guess again,
this uses clang as the oracle: a name reported as `unexpected type name 'N'` is *provably* being used in a value
position, so its `typedef struct N N;` must go.

Each such name is then re-declared according to how the code uses it:

    N(...)      a function  ->  extern uintptr_t N();
    anything else           ->  extern uintptr_t N;

`uintptr_t` is the right choice because these names are used in arithmetic (`N + 27168`), subscripted (`N[3]`) and as
integers, and a pointer-sized integer accepts all three. Where a name is genuinely a struct used behind a pointer it
never produces this error, so it is never touched.

The loop is convergent: the set of type names only shrinks, and each pass re-measures, so it stops when clang
reports no further `unexpected type name`.
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


def compile_errors():
    err = ""
    for tu in TUS:
        if not os.path.exists(tu):
            continue
        r = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC, tu],
                           capture_output=True, text=True, errors="replace")
        err += r.stderr
    return err


def usage(src_all, name):
    """Return 'func' if the name is ever called, else 'data'."""
    if re.search(r"\b%s\s*\(" % re.escape(name), src_all):
        return "func"
    return "data"


def main(argv):
    write = "--write" in argv
    src_all = ""
    for tu in TUS:
        if os.path.exists(tu):
            src_all += open(tu, encoding="utf-8", errors="replace").read()

    for it in range(8):
        errs = compile_errors()
        total = len(re.findall(r"error:", errs))
        # Two more diagnostics prove a name is being used as a VALUE while declared as a type:
        #   "use of undeclared identifier 'N'"        -- N is not declared at all yet
        #   "member reference base type 'N' (aka 'N') is not a structure or union" -- N is a struct tag with no
        #                                                 members, i.e. an opaque forward decl being dereferenced
        # ONLY "unexpected type name" is used as the removal oracle. The other diagnostics do not prove a typedef
        # should be dropped: `use of undeclared identifier 'N'` means N needs a declaration ADDED (nullsub_5476 is
        # a function that is simply not declared yet), and dropping a typedef would not help. A wider oracle was
        # tried and immediately proposed deleting int32_t and every nullsub_*, which would have been destructive.
        bad = sorted(set(re.findall(r"unexpected type name '(\w+)'", errs)))
        print("  pass %d: errors %d, wrongly-typed names %d" % (it, total, len(bad)))
        if not bad:
            break
        if not write:
            print("    (dry run) would reclassify: %s" % bad[:10])
            break

        hdr = open(INC and HDR, encoding="utf-8").read()
        lines = hdr.split("\n")
        dropped, added = [], []
        for n in bad:
            out = []
            hit = False
            for ln in lines:
                m = re.match(r"\s*typedef\s+(?:struct|void)\s+(\w+)\s*(?:\1)?\s*;\s*$", ln)
                if m and m.group(1) == n:
                    hit = True
                    continue
                out.append(ln)
            if hit:
                lines = out
                dropped.append(n)
                if usage(src_all, n) == "func":
                    added.append("extern uintptr_t %s();" % n)
                else:
                    added.append("extern uintptr_t %s;" % n)
        if not dropped:
            print("    nothing matched in the header; stopping")
            break
        text = "\n".join(lines).rstrip()
        text += "\n\n/* ---- used as VALUES, not types (data objects and functions) ---- */\n"
        text += "\n".join(added) + "\n"
        open(HDR, "w", encoding="utf-8", newline="").write(text)
        print("    reclassified %d: %s" % (len(dropped), dropped[:8]))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
