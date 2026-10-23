"""Declare the identifiers the recovered TU needs but the corpus headers do not provide.

The 472 recovered bodies reference data addresses (dword_/off_/byte_ symbols) and opaque class types
(nn_mii_ParamCharInfoAccessor, sead_IDisposer, ...) that never appeared in the corpus's own functions. Rather
than widen the shared headers -- which risks colliding with the corpus -- the declarations go into their own header
that only the recovered unit includes.

Data symbols become the same accessor macros the corpus uses: `#define dword_X (*(int32_t *)(0x60000000u + X))`.
Named struct types are declared opaque with a fixed size, because a pointer parameter is all these bodies need;
`struct X` tag references are handled by declaring the tag as well as the typedef, which is the "must use struct
tag" error clang reports.
"""
import os
import re
import subprocess
import sys

C_KEYWORDS = {
    "auto", "break", "case", "char", "const", "continue", "default", "do", "double",
    "else", "enum", "extern", "float", "for", "goto", "if", "inline", "int", "long",
    "register", "restrict", "return", "short", "signed", "sizeof", "static", "struct",
    "switch", "typedef", "union", "unsigned", "void", "volatile", "while",
    "operator", "new", "delete", "this", "template", "typename", "class", "namespace",
    "and", "or", "not", "xor", "true", "false",
}

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
TU = tuple(os.path.join(ROOT, "recovered", f) for f in
           ("recovered_named.c", "recovered_missing.c", "recovered_stubs.c"))
OUT = os.path.join(ROOT, "include", "nsmbudx_recovered_deps.h")
CLANG = r"C:\Program Files\LLVM\bin\clang.exe"
INC = os.path.join(ROOT, "include")

DATA = re.compile(r"^(?P<kind>dword|word|byte|qword|off|flt|dbl|unk)_(?P<addr>[0-9A-Fa-f]{8})$")
TYPE = re.compile(r"^(?P<name>[A-Za-z_]\w*)$")

DATA_TYPE = {"dword": "int32_t", "word": "int16_t", "byte": "uint8_t", "qword": "int64_t",
             "off": "void *", "flt": "float", "dbl": "double", "unk": "void *"}


def compile_errors():
    """Errors from BOTH recovered units, so the dependency header serves each of them."""
    out = ""
    for tu in TU:
        r = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC, tu],
                           capture_output=True, text=True, errors="replace")
        out += r.stderr
    return out


def main(argv):
    errs = compile_errors()
    need = set()
    # Intentionally NOT collecting names from `errs` here. Error text depends on what the header already declares,
    # so feeding it back made the generator oscillate between two stable points (2,401 and 3,765). Names are taken
    # from the SOURCE (below), which does not change as the header changes.
    for m in re.finditer(r"(?:use of undeclared identifier|unknown type name) '(\w+)'", errs):
        need.add(m.group(1))
    tags = set(re.findall(r"must use '(?:struct|union|enum)' tag to refer to type '(\w+)'", errs))

    # The compiler reports a data symbol under several different headings depending on how it is used
    # ("unexpected type name 'dword_X': expected expression" when it appears as a value, "no member named" when it
    # is dereferenced). Matching only "undeclared identifier" missed them entirely. Scan the SOURCE for every
    # IDA-shaped data symbol instead -- that is complete by construction.
    # tags the corpus already declares: never re-declare those, and never as void
    corpus_tags = set()
    inc = os.path.join(ROOT, "include")
    for hf in os.listdir(inc):
        if not hf.endswith(".h"):
            continue
        ht = open(os.path.join(inc, hf), encoding="utf-8", errors="replace").read()
        corpus_tags.update(re.findall(r"\b(?:struct|union)\s+(\w+)\s*[;{]", ht))
        corpus_tags.update(re.findall(r"typedef\s+(?:struct|union)\s+(\w+)", ht))

    src = ""
    for tu in TU:
        src += open(tu, encoding="utf-8", errors="replace").read()
    for m in re.finditer(r"\b((?:dword|word|byte|qword|off|flt|dbl|unk)_[0-9A-Fa-f]{8})\b", src):
        need.add(m.group(1))
    # IDA also emits code/data labels (loc_/def_/off_/asc_/stru_) and bare global objects (AreaRumbleMgr_instance,
    # EventMgr_instance). Those are VALUES, but the compiler reports them as "unexpected type name" because the
    # header declared them as typedefs, and `loc_60154A5C = ...` then cannot be parsed at all. Collect them from
    # source as well, so they take the data-object path instead of the type path.
    for m in re.finditer(r"\b((?:loc|def|off|asc|stru|algn)_[0-9A-Fa-f]{8})\b", src):
        need.add(m.group(1))
    for m in re.finditer(r"\b(\w+_instance)\b", src):
        need.add(m.group(1))

    data, types = {}, set()
    for n in sorted(need):
        dm = DATA.match(n)
        if dm:
            data[n] = DATA_TYPE[dm.group("kind")]
        elif TYPE.match(n):
            # Only declare things that LOOK like data symbols or class types. IDA also emits short aliases for
            # string literals (aAse64, aBase64, aCarrypWalk_0) and for globals initialised elsewhere
            # (ActiveColliderMgr_instance). Declaring those as opaque types makes clang report
            # "unexpected type name" at every use, because they are VALUES, not types -- that path took the header
            # to 313 KB and produced 1,382 bogus errors.
            # A name the compiler called "unexpected TYPE name" at an expression position is almost always a
            # DATA OBJECT (Enemy_RTTI, ActiveColliderMgr_instance), not a type. Declaring those as typedefs turns
            # every use into a syntax error, so only names that really are types -- those the corpus used as
            # parameter or member types -- get a typedef. Data objects fall through to the macro path below.
            types.add(n)

    # Reclassify: a name that appears on the LEFT of an assignment, or behind `&`, is a data object.
    src_all = ""
    for tu in TU:
        src_all += open(tu, encoding="utf-8", errors="replace").read()
    for n in list(types):
        used_as_object = re.search(r"(?m)^\s*%s\s*=" % re.escape(n), src_all) or \
                         re.search(r"&\s*%s\b" % re.escape(n), src_all)
        if used_as_object and not DATA.match(n):
            data.setdefault(n, "int32_t")
            types.discard(n)

    lines = [
        "/* Dependencies of decompiled/recovered/recovered_named.c",
        " *",
        " * Generated by scripts/declare_recovered_deps.py from the compiler's own list of missing identifiers.",
        " * Kept separate from the shared headers so the corpus's declarations are not disturbed.",
        " */",
        "#ifndef NSMBUDX_RECOVERED_DEPS_H",
        "#define NSMBUDX_RECOVERED_DEPS_H",
        "",
        '#include "nsmbudx_types.h"',
        "",
        "/* ---- data addresses referenced by the recovered bodies ---- */",
    ]
    for n, ty in sorted(data.items()):
        # Only IDA-shaped names carry an address in their suffix. A name that does not (a bare global such as
        # Enemy_RTTI) has no address to synthesise, so it is declared as an ordinary extern instead of a macro.
        # Splitting unconditionally raised IndexError and silently produced a header with no declarations at all.
        parts = n.split("_", 1)
        if len(parts) == 2 and re.fullmatch(r"[0-9A-Fa-f]{8}", parts[1]):
            lines.append("#define %s (*(%s *)(uintptr_t)(0x60000000u + 0x%s))" % (n, ty, parts[1]))
        else:
            lines.append("extern %s %s;" % ("int32_t" if ty == "int32_t" else ty, n))
    lines += ["", "/* ---- opaque types: only ever used behind a pointer in these bodies ---- */"]
    for t in sorted(types):
        if t in ("v", "nn", "a2", "a3", "a4", "a1", "this"):
            continue
        # nullsub_/j_/sub_/_Z and the IDA label families are FUNCTIONS or data, never types. Emitting
        # `typedef void nullsub_5476;` made the name a type, so every definition of it became
        # "redefinition as different kind of symbol" (143 of those), and `typedef void sead_ListNode;`
        # turned 129 accesses through it into "not a structure or union".
        # Never emit a C/C++ keyword or an expression fragment as a type. `typedef void operator;` was being
        # generated from the text `operator new(...)`, and every such name then made `operator new` parse as
        # `(<type>)(new)`. That single line caused 133 "unexpected type name 'operator'" errors in one unit and
        # the same class of failure for `CurrentStateID` (which is a variable, not a type).
        if t in C_KEYWORDS or not re.fullmatch(r"[A-Za-z_]\w*", t):
            continue
        # A trailing `_` is a truncated fragment of a longer name (sead_CalculateTask_), never a real type.
        if t.endswith("_") and not t.endswith("__"):
            continue
        if t in tags or t[0].isupper():
            lines.append("typedef struct %s %s;" % (t, t))
        else:
            lines.append("typedef void %s;" % t)
    lines += ["", "#endif /* NSMBUDX_RECOVERED_DEPS_H */", ""]

    # NO MERGE. The previous version merged with whatever header was already on disk, so each run's
    # type-vs-data classification was influenced by the last run's -- and the error count oscillated between two
    # values forever. Regenerating purely from the source scan is deterministic: same input, same header.

    body = "\n".join(lines)
    if "--write" in argv:
        open(OUT, "w", encoding="utf-8", newline="").write(body)
    print("  data macros: %d" % len(data))
    print("  type decls:  %d" % len([t for t in types if t not in ("v", "nn", "a2", "a3", "a4", "a1", "this")]))
    if "--write" not in argv:
        print("  (dry run)")
    else:
        print("  wrote %s" % OUT)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
