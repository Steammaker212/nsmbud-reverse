"""Convert recovered Hex-Rays C++ bodies into the corpus's C dialect.

Hex-Rays produced genuine C++ for these 472 functions: qualified names (`StageActor::afterCreate`), member access
through `this->field` and `actor->position`, and class types. The corpus is C compiled with clang's C mode, so the
bodies need four mechanical rewrites.

`Outer::method` becomes `Outer_method`, the same convention the corpus already uses for methods, so the name stays
recognisable and remains a valid C identifier. `this->x` becomes `v->x` where `v` is the first parameter (Hex-Rays
emits `this` as the first argument). `obj->a.b` chains are left alone -- `->` is legal C on a pointer to struct.

Class types are a real limitation and are reported rather than faked: the corpus has no struct definitions for most
actor classes, so a body that dereferences `StageActor *` will not compile until the struct exists. Those files are
kept and counted so the gap is visible instead of hidden.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
SRC = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\ida_work\missing_out"
OUT = os.path.join(ROOT, "recovered", "recovered_named.c")
BASE = 0x60000000

SIG = re.compile(r"^(?P<ret>[A-Za-z_][\w \t\*]*?)\s*(?:__\w+\s+)?(?P<name>[A-Za-z_][\w:]*)\s*\((?P<args>[^)]*)\)", re.M)


def cxx_to_c(text, name):
    # 1. qualified method / ctor names -> underscore form
    if "::" in name:
        flat = name.replace("::", "_")
        text = text.replace(name + "(", flat + "(")
        text = re.sub(r"\b%s\b" % re.escape(name), flat, text)
        name = flat

    # 2. `this->x` -> first parameter's pointer name, and `this` alone likewise
    # `this` is ALWAYS the first parameter in Hex-Rays C++ output. Taking the LAST parameter (as an earlier version
    # of this script did) renamed `this` to a2/a3/onCreateVal and produced 110 "undeclared identifier 'v'" errors.
    m = SIG.search(text)
    args = m.group("args") if m else ""
    this_name = "v"
    first = args.split(",")[0].strip() if args.strip() else ""
    am = re.search(r"(\w+)\s*$", first)
    if am and am.group(1) not in ("void", "this"):
        this_name = am.group(1)
    text = text.replace("this->", this_name + "->")
    text = re.sub(r"\bthis\b", this_name, text)

    # 3. Flatten EVERY remaining `A::B` qualifier, not just the function name. Hex-Rays writes parameter and local
    # types as `nn::os *v`, `sead::IDisposer *`, and those are not valid C. Doing this only for the function name
    # left 172 "undeclared identifier 'nn'" errors.
    text = re.sub(r"\b([A-Za-z_]\w*)::(?=[A-Za-z_~])", r"\1_", text)

    # 4. `// override` style comment runs are fine; strip Hex-Rays' `// attributes:` marker only
    text = re.sub(r"(?m)^\s*//\s*attributes:.*\n", "", text)
    return text, name


def main(argv):
    write = "--write" in argv
    bodies = []
    converted = 0
    for fn in sorted(os.listdir(SRC)):
        m = re.match(r"sub_([0-9A-Fa-f]{8})\.c$", fn)
        if not fn.endswith(".c") or not m:
            continue
        va = int(m.group(1), 16)
        t = open(os.path.join(SRC, fn), encoding="utf-8", errors="replace").read()
        sm = SIG.search(t)
        if not sm:
            continue
        name = sm.group("name")
        body, flat = cxx_to_c(t, name)
        if flat != name:
            converted += 1
        size = re.search(r"size 0x([0-9A-Fa-f]+)", t)
        bodies.append((va, flat, int(size.group(1), 16) if size else 0, body.strip()))

    print("  bodies: %d   qualified names flattened: %d" % (len(bodies), converted))
    if write:
        os.makedirs(os.path.dirname(OUT), exist_ok=True)
        chunks = []
        for va, name, size, body in sorted(bodies):
            chunks.append(
                "/* ============================================================================\n"
                " * %s\n"
                " * RVA 0x%08X   size 0x%X   xrefs 0   recovered from main.i64\n"
                " * ============================================================================ */\n"
                "%s" % (name, va - BASE, size, body))
        open(OUT, "w", encoding="utf-8", newline="").write(
            '#include "nsmbudx_prelude.h"\n\n'
            "/* Recovered from main.i64: functions present in the database but absent from the corpus.\n"
            " *\n"
            " * Hex-Rays emitted these as C++; names are flattened from Outer::method to Outer_method and `this->`\n"
            " * is rewritten to the first parameter. Bodies that dereference class types the corpus has no struct\n"
            " * for are still present and are counted in RECOVERED_NAMED_STATUS.md rather than dropped.\n"
            " */\n\n" + "\n\n".join(chunks) + "\n")
        print("  wrote %s" % OUT)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
