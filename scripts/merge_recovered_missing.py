"""Merge the 1,362 recovered substantive bodies into a corpus translation unit.

Only files at addresses listed in missing_substantive.txt are used, so the 2,100+ nullsub/j_ stubs that the
unfiltered batch also produced are excluded -- they are `{ ; }` and unconditional jumps, which add bytes and no
readability.

C++ is flattened exactly as flatten_recovered_cpp.py does: `A::B` -> `A_B`, and `this` -> the first parameter.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
SRC = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\ida_work\all_missing_out"
KEEP = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\ida_work\missing_substantive.txt"
OUT = os.path.join(ROOT, "recovered", "recovered_missing.c")
BASE = 0x60000000

SIG = re.compile(# Allow a leading `~` for destructors (`nn::mii::Database::~Database`). Without it, 11 thunks in the
# substantive list were skipped and were the last addresses absent from the corpus.
r"^(?P<ret>[A-Za-z_][\w \t\*]*?)\s*(?:__\w+\s+)?(?P<name>[A-Za-z_][\w:]*)\s*\((?P<args>[^)]*)\)", re.M)



# Hex-Rays writes a few signatures that are not parseable as C and that the pattern above cannot match:
# template arguments in the name (`GetTouchScreenState<1u>()`) and overloaded operators (`operator==`). The set is
# tiny and fixed, so a targeted rewrite of the SIGNATURE LINE is enough; the body is untouched. Without it these
# arguments were the last two addresses absent from the corpus.
TEMPLATE_ARGS = re.compile(r"(<[^<>()]*>)(?=\s*\()")
OPERATOR_EQ = re.compile(r"\boperator\s*(==|!=|<=|>=|<|>)\s*\(")
def flatten(text, name):
    if "::" in name:
        flat = name.replace("::", "_")
        text = text.replace(name + "(", flat + "(")
        text = re.sub(r"\b%s\b" % re.escape(name), flat, text)
        name = flat

    m = SIG.search(text)
    args = m.group("args") if m else ""
    this_name = "v"
    first = args.split(",")[0].strip() if args.strip() else ""
    am = re.search(r"(\w+)\s*$", first)
    if am and am.group(1) not in ("void", "this"):
        this_name = am.group(1)
    text = text.replace("this->", this_name + "->")
    text = re.sub(r"\bthis\b", this_name, text)

    # Hex-Rays emits local statics with a full C++ signature embedded in the name:
    #     `guard variable for'sead::CalculateTask::getRuntimeTypeInfoStatic(void)::typeInfo'
    # A naive `::` -> `_` rewrite turns that into `...(void)_typeInfo`, which is not an identifier and cascades
    # into "function definition is not allowed here" for every following function. Rewrite the whole quoted
    # fragment to a single stable identifier instead.
    def _demangle_static(m):
        frag = m.group(0)
        body = re.sub(r"[^A-Za-z0-9]", "_", frag)
        body = re.sub(r"_+", "_", body).strip("_")
        return "g_" + body

    # The fragment can itself CONTAIN apostrophes (`vtable for'sead::SafeStringBase<char>'` -- no, but
    # `guard variable for'X::y(void)::z'` can be adjacent to another quoted run). A `[^`']*'[^']*'` pattern spanned
    # from one fragment to the next and swallowed thousands of characters of real code, which is how sub_607C72D0
    # ended up with a 4,000-character identifier and lost its LABEL_14. Match a SINGLE backtick-to-apostrophe run
    # and require that it stays on one line.
    text = re.sub(r"`[^`'\n]*'", _demangle_static, text)
    text = re.sub(r"\b([A-Za-z_]\w*)::(?=[A-Za-z_~])", r"\1_", text)
    text = re.sub(r"(?m)^\s*//\s*attributes:.*\n", "", text)
    return text, name


def main(argv):
    write = "--write" in argv
    want = set()
    for ln in open(KEEP, encoding="utf-8"):
        ln = ln.strip()
        if ln:
            want.add(int(ln, 16))

    bodies = []
    for fn in sorted(os.listdir(SRC)):
        m = re.match(r"sub_([0-9A-Fa-f]{8})\.c$", fn)
        if not fn.endswith(".c") or not m:
            continue
        va = int(m.group(1), 16)
        if va not in want:
            continue
        t = open(os.path.join(SRC, fn), encoding="utf-8", errors="replace").read()
        sm = SIG.search(t)
        if not sm:
            # A few Hex-Rays signatures are not parseable as C and the pattern cannot match them: template arguments
            # in the name (`GetTouchScreenState<1u>()`) and overloaded operators (`operator==`). Rewrite only the
            # signature text, then match again. This was the last gap in address coverage: 2 functions.
            fixed = OPERATOR_EQ.sub(
                lambda mm: "__operator_%s(" % {"==": "eq", "!=": "ne", "<=": "le",
                                               ">=": "ge", "<": "lt", ">": "gt"}[mm.group(1)], t)
            fixed = TEMPLATE_ARGS.sub("", fixed)
            sm = SIG.search(fixed)
            if sm:
                t = fixed
        if not sm:
            continue
        body, flat = flatten(t, sm.group("name"))
        size = re.search(r"size 0x([0-9A-Fa-f]+)", t)
        bodies.append((va, flat, int(size.group(1), 16) if size else 0, body.strip()))

    print("  bodies: %d" % len(bodies))
    total = sum(b[2] for b in bodies)
    print("  code bytes: 0x%X (%.0f KB)" % (total, total / 1024.0))

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
            '#include "nsmbudx_prelude.h"\n'
            '#include "nsmbudx_recovered_deps.h"\n\n'
            "/* Substantive functions present in main.i64 but absent from the corpus.\n"
            " *\n"
            " * nullsub_* ({ ; }) and j_* (unconditional jump) stubs are deliberately excluded: the database holds\n"
            " * 6,710 and 2,109 of them respectively, and they carry no readable behaviour. This unit is the 1,362\n"
            " * functions that actually contain code.\n"
            " */\n\n" + "\n\n".join(chunks) + "\n")
        print("  wrote %s" % OUT)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
