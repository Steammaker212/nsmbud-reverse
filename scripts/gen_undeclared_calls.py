"""Declare the callables the corpus uses that NO header declares.

WHY, AND WHY THIS IS NOT TIER 2 ALL OVER AGAIN
---------------------------------------------
gen_subfuncs_header.py has a disabled tier 2 that emits `int __fastcall sub_X();` for every auto-named
function. It was measured catastrophic -- 250 files parsed before, 0 after -- because the prototype
headers already declare 26,887 of those names with real signatures, and an unprototyped declaration
contradicts a prototyped one.

The names this script handles are a strictly different set: the ones NO header mentions at all, so
there is nothing to contradict. Three families dominate:

    nullsub_691      292 distinct, 987 call sites  -- IDA's name for an empty stub function
    _S0 .. _S28      SIMD register pseudo-variables
    algn_60CB424C    alignment-padding data labels

For the `nullsub_*` family the arity is genuinely unknown and the bodies are empty, so an unprototyped
declaration `int __fastcall nullsub_691();` is both legal and honest: C reads it as "returns int,
arguments unspecified". For the data-label families the declaration is an address-pinned macro, same
approach as nsmbudx_data.h.

Every name is checked against the generated headers first. A name that is already declared anywhere is
skipped, which is what keeps this from repeating the tier-2 failure.

Usage:
    python scripts/gen_undeclared_calls.py <decompiled-dir> <headers-dir> <out.h> [--write]
"""
import os
import re
import sys

# Identifiers the corpus calls or references. Grouped by how they get declared.
NULLSUB = re.compile(r"\b(nullsub_\d+(?:_\d+)?)\b")
ALIGN = re.compile(r"\b(algn_[0-9A-Fa-f]{6,8})\b")
SIMDREG = re.compile(r"\b(_S\d{1,2})\b")
FLOATSLOT = re.compile(r"\b(float_s\d+)\b")
# IDA names a rodata string `a<Text>`; these are arrays of char.
STRINGARRAY = re.compile(r"\b(a[A-Z][A-Za-z0-9_]{4,})\b")
# `Kanjibo::AnimNamesWait[...]` -- a static array reached through a class scope. In C a scope is only
# part of a name, so this flattens to Kanjibo__AnimNamesWait and becomes an ordinary array.
#
# The ALREADY-FLATTENED form must be matched too. fix_qualified_names runs before this generator, so by
# the time it looks, the text reads `Kanjibo__AnimNamesWait[` and the `::` pattern finds nothing -- which
# is why this was declared but not declared: 10 uses, no declaration, the file still failed. The
# flattened form is recognisable by the `Word__Word` shape the rewriting convention produces.
SCOPED_ARRAY = re.compile(r"\b([A-Za-z_]\w*)::([A-Za-z_]\w*)\s*\[")
FLAT_SCOPED_ARRAY = re.compile(r"\b([A-Z]\w*__[A-Z]\w*)\s*\[")
# Bare table names the decompiler references that no header declares.
TABLE = re.compile(r"\b([A-Za-z_]\w*_(?:typeInfos|rotations|Table|table))\b")
# `sub_X` used as a CAST TARGET rather than called: ((void (*)(...))sub_60106C90)(...).
# A prototype does not give that expression an address; an address-pinned array does not either, so
# these are declared as function designators -- see the note emitted in the header.
FN_PTR = re.compile(r"\)\s*\(\s*(sub_[0-9A-Fa-f]{6,8})\s*\)")
# IDA leaks ARM condition-flag pseudo-registers into the C text: `_ZF = v3 == 0;` then `if (!_ZF)`.
# These are not variables of the program, they are artefacts of how the condition codes were read, so a
# local declaration is the honest fix -- the value is genuinely used as a boolean at that point.
FLAGREG = re.compile(r"\b(_[ZNCFV]{1,2})\s*=(?!=)")


def declared_names(headers_dir, self_name):
    """Every identifier a generated header declares, by any of the usual spellings.

    `self_name` is skipped on purpose. This script writes into the same directory it reads, so on the
    second run it would find its own previous output, count every name as already declared, and emit
    an EMPTY header -- which is exactly what happened: 292 nullsub declarations became 1 comment and
    the parse count did not move at all.
    """
    names = set()
    for f in os.listdir(headers_dir):
        if not f.endswith(".h") or f == self_name:
            continue
        with open(os.path.join(headers_dir, f), encoding="utf-8", errors="replace") as fh:
            text = fh.read()
        # `#define NAME ...`
        names.update(re.findall(r"^#define\s+(\w+)", text, re.M))
        # `ret __fastcall NAME(...)`  /  `ret NAME(...)`
        names.update(re.findall(r"\b__fastcall\s+(\w+)\s*\(", text))
        names.update(re.findall(r"^[A-Za-z_][\w \t\*]*?\b(\w+)\s*\(", text, re.M))
        # opaque struct tags
        names.update(re.findall(r"\bstruct\s+(\w+)\s*;", text))
    return names


def main(argv):
    if len(argv) < 4:
        print("usage: gen_undeclared_calls.py <decompiled-dir> <headers-dir> <out.h> [--write]")
        return 2
    root, inc, out = argv[1], argv[2], argv[3]
    write = "--write" in argv

    have = declared_names(inc, os.path.basename(out))

    used = {"nullsub": {}, "algn": {}, "simd": {}, "floats": {}, "str": {},
            "scoped": {}, "table": {}, "fnptr": {}, "flags": {}}
    for dp, _, fs in os.walk(root):
        for f in fs:
            if not f.endswith(".c"):
                continue
            with open(os.path.join(dp, f), encoding="utf-8", errors="replace") as fh:
                text = fh.read()
            for m in NULLSUB.finditer(text):
                used["nullsub"][m.group(1)] = used["nullsub"].get(m.group(1), 0) + 1
            for m in ALIGN.finditer(text):
                used["algn"][m.group(1)] = used["algn"].get(m.group(1), 0) + 1
            for m in SIMDREG.finditer(text):
                used["simd"][m.group(1)] = used["simd"].get(m.group(1), 0) + 1
            for m in FLOATSLOT.finditer(text):
                used["floats"][m.group(1)] = used["floats"].get(m.group(1), 0) + 1
            for m in STRINGARRAY.finditer(text):
                used["str"][m.group(1)] = used["str"].get(m.group(1), 0) + 1
            for m in SCOPED_ARRAY.finditer(text):
                flat = "%s__%s" % (m.group(1), m.group(2))
                used["scoped"][flat] = used["scoped"].get(flat, 0) + 1
            for m in FLAT_SCOPED_ARRAY.finditer(text):
                used["scoped"][m.group(1)] = used["scoped"].get(m.group(1), 0) + 1
            for m in TABLE.finditer(text):
                used["table"][m.group(1)] = used["table"].get(m.group(1), 0) + 1
            for m in FN_PTR.finditer(text):
                used["fnptr"][m.group(1)] = used["fnptr"].get(m.group(1), 0) + 1
            for m in FLAGREG.finditer(text):
                used["flags"][m.group(1)] = used["flags"].get(m.group(1), 0) + 1

    lines = [
        "/* NSMBU Deluxe (Switch) v1.0.0 -- callables and data the corpus uses that no header declared",
        " *",
        " * Generated by scripts/gen_undeclared_calls.py. Do not edit by hand.",
        " *",
        " * Only names that appear in NO other header are emitted, which is what distinguishes this from",
        " * the tier-2 experiment in gen_subfuncs_header.py that took the parse count from 250 to 0 by",
        " * contradicting existing prototypes.",
        " */",
        "#ifndef NSMBUDX_UNDECLARED_H",
        "#define NSMBUDX_UNDECLARED_H",
        "",
        '#include "nsmbudx_types.h"',
        "",
        "/* ---- empty stub functions ----",
        " * IDA names these nullsub_N. The bodies are empty, so the real signature is unrecoverable and",
        " * irrelevant: an unprototyped declaration is both legal C and the honest description. */",
    ]
    n_null = 0
    for name in sorted(used["nullsub"]):
        if name in have:
            continue
        lines.append("int __fastcall %s();  /* %d call site(s) */" % (name, used["nullsub"][name]))
        n_null += 1

    lines += ["", "/* ---- alignment padding the decompiler reads as data ---- */"]
    n_algn = 0
    for name in sorted(used["algn"]):
        if name in have:
            continue
        lines.append("#define %s (*(uint8_t *)(uintptr_t)(0x60000000u + 0x%s))"
                     % (name, name.split("_", 1)[1]))
        n_algn += 1

    lines += ["", "/* ---- SIMD register pseudo-variables ----",
              " * The decompiler emits `_S4 = ...;` for the d-register alias of s4. Modelled as the same",
              " * 32-bit union the rest of the corpus uses for those registers. */"]
    n_simd = 0
    for name in sorted(used["simd"]):
        if name in have:
            continue
        lines.append("#define %s (*(uint32_t *)(void *)&simd_lane_%s)" % (name, name[2:]))
        n_simd += 1
    if n_simd:
        lines.append("")
        for name in sorted(used["simd"]):
            if name in have:
                continue
            lines.append("static uint32_t simd_lane_%s;" % name[2:])

    lines += ["", "/* ---- float slots ---- */"]
    n_float = 0
    for name in sorted(used["floats"]):
        if name in have:
            continue
        lines.append("#define %s (*(float *)(void *)&flt_lane_%s)" % (name, name.split("_s", 1)[1]))
        n_float += 1
    if n_float:
        lines.append("")
        for name in sorted(used["floats"]):
            if name in have:
                continue
            lines.append("static float flt_lane_%s;" % name.split("_s", 1)[1])

    lines += ["", "/* ---- rodata string arrays ----",
              " * IDA names a rodata string a<Text>; the identifier is an array of char at a fixed",
              " * address, which is how the corpus indexes it. */"]
    n_str = 0
    for name in sorted(used["str"]):
        if name in have:
            continue
        lines.append("extern const char %s[];  /* %d reference(s) */" % (name, used["str"][name]))
        n_str += 1

    lines += ["", "/* ---- static arrays reached through a class scope ----",
              " * `Kanjibo::AnimNamesWait[i]` is a static array, not a member of an object. C has no",
              " * scopes, so the flattened name is the honest equivalent and the index still works. */"]
    n_scoped = 0
    for name in sorted(used["scoped"]):
        if name in have:
            continue
        lines.append("extern const uint16_t %s[];  /* %d reference(s) */"
                     % (name, used["scoped"][name]))
        n_scoped += 1

    lines += ["", "/* ---- tables the code indexes ----",
              " * Declared as arrays of uint32_t, which is the width every observed access uses. They are",
              " * `extern` rather than address-pinned because the address is the linker's business once",
              " * the name exists; nothing in the corpus takes the address itself. */"]
    n_table = 0
    for name in sorted(used["table"]):
        if name in have:
            continue
        lines.append("extern uint32_t %s[];  /* %d reference(s) */" % (name, used["table"][name]))
        n_table += 1

    lines += ["", "/* ---- sub_* used as a cast target ----",
              " * The corpus writes `((void (__fastcall *)(int))sub_60106C90)(args)`. That needs the",
              " * function's ADDRESS, so an unprototyped declaration is exactly right here: it makes the",
              " * identifier a function designator, which decays to a pointer, and the cast in the source",
              " * then supplies the signature the call uses. No arity is claimed. */"]
    n_fnptr = 0
    for name in sorted(used["fnptr"]):
        if name in have:
            continue
        lines.append("int __fastcall %s();  /* %d cast site(s) */"
                     % (name, used["fnptr"][name]))
        n_fnptr += 1

    lines += ["", "/* ---- ARM condition-flag pseudo-registers ----", " * IDA writes `_ZF = a == b;` and then tests `!_ZF` in the next statement. These are not program", " * variables; they are the condition codes being materialised as a value. A file-scope int is enough,", " * because each is always assigned before it is read. */"]
    n_flag = 0
    for name in sorted(used["flags"]):
        if name in have:
            continue
        lines.append("int %s;  /* %d assignment(s) */" % (name, used["flags"][name]))
        n_flag += 1

    lines += ["", "#endif /* NSMBUDX_UNDECLARED_H */", ""]

    print("declared: nullsub %d, algn %d, simd %d, float %d, str %d, scoped %d, table %d, fnptr %d, flags %d"
          % (n_null, n_algn, n_simd, n_float, n_str, n_scoped, n_table, n_fnptr, n_flag))
    if write:
        os.makedirs(os.path.dirname(out), exist_ok=True)
        with open(out, "w", encoding="utf-8", newline="\n") as fh:
            fh.write("\n".join(lines))
        print("wrote %s" % out)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
