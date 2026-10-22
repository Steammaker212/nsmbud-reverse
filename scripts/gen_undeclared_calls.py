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
# A function used as a CAST TARGET rather than called directly:
#     ((void (*)(void))CollisionMgr_dtor)();
#     ((void (__fastcall *)(int, int *, _DWORD, _DWORD *))EffectData_create)(476, &v7, 0, a1 + 1613);
# The cast supplies the signature, so the declaration only needs to provide the ADDRESS -- an
# unprototyped declaration does that and claims no arity.
#
# The pattern must allow the CLOSING PAREN OF THE CAST EXPRESSION between the two: the text is
# `... )  )  NAME )  (`, so `\)\s*\(\s*NAME\)` cannot match it. Anchoring on `))NAME)(` and
# `))NAME)` covers the two observed shapes directly.
FN_PTR = re.compile(r"\)\)\s*([A-Za-z_]\w{2,})\s*\)")
# IDA leaks ARM condition-flag pseudo-registers into the C text: `_ZF = v3 == 0;` then `if (!_ZF)`.
# These are not variables of the program, they are artefacts of how the condition codes were read, so a
# local declaration is the honest fix -- the value is genuinely used as a boolean at that point.
FLAGREG = re.compile(r"\b(_[ZNCFV]{1,2})\s*=(?!=)")
# Names that must NEVER be declared as functions. Broadening FN_PTR to any identifier swept in C
# keywords and typedef names, producing `int __fastcall float();` and similar -- which invalidated the
# entire corpus, 447 files -> 0. A function declaration may only be emitted for an identifier that is
# not already a type keyword and not one of the typedefs this header set provides.
C_KEYWORDS = {
    "float", "double", "int", "char", "short", "long", "void", "unsigned", "signed", "const",
    "volatile", "static", "extern", "struct", "union", "enum", "return", "if", "else", "for",
    "while", "do", "switch", "case", "default", "break", "continue", "goto", "sizeof", "typedef",
}
C_TYPENAMES = {
    "uintptr_t", "intptr_t", "uint8_t", "uint16_t", "uint32_t", "uint64_t",
    "int8_t", "int16_t", "int32_t", "int64_t", "size_t", "ssize_t", "ptrdiff_t",
    "bool", "_DWORD", "_WORD", "_BYTE", "_QWORD", "float32x2_t", "float32x4_t",
    "int32x2_t", "int32x4_t", "uint32x4_t", "uint8x16_t", "int8x16_t",
}
# NEON float min/max helpers. IDA emits `vmin_f32(a, b)` and then reads a member off the RESULT:
#     v1.n64_u64[0] = vmax_f32(v1, v2).n64_u64[0];
#     v9 = vmin_f32(v4, v5).n64_u32[0];
# A member read on a call result requires the call to RETURN a vector, so a macro or an `int`
# prototype cannot satisfy it -- it needs a typed declaration returning float32x4_t. 222 uses.
NEON_BINOP = re.compile(r"\b(v(?:min|max|add|sub|mul)(?:q)?_f32)\s*\(")
# EVERY other NEON intrinsic IDA emits (`vdupq_lane_s32`, `vmlaq_lane_f32`, `vextq_s8`, `vtbl2_s8`,
# `vzipq_s32`, `vbslq_s64`, ...). These are not in any header the corpus includes, so every call was
# undeclared. They are declared unprototyped and variadic-free -- an unprototyped declaration is legal C
# and constrains nothing, which matters because the real lane/predicate signatures differ per intrinsic
# and guessing one would be worse than declaring none.
NEON_ANY = re.compile(r"\b(v(?:ld|st|dup|mov|ext|zip|uzp|trn|tbl|tbx|bsl|bit|bif|add|sub|mul|mla|mls|"
                      r"neg|abs|min|max|ceq|cge|cle|cgt|clt|shl|shr|sli|sri|and|orr|eor|bic|not|rev|"
                      r"padd|pmax|pmin|cvt|rnd|recpe|rsqrte|sqrt|qadd|qsub|combine|get|set|create|"
                      r"dup_n|lane|n_|q_)[a-z0-9_]*)\s*\(")


# Names that match the NEON-intrinsic shape but are not intrinsics: local variables, the vector
# typedefs themselves, and standard library variadic functions. Declaring these as functions would be
# wrong (and `int void();` is not even parseable).
NEON_EXCLUDE = {
    "v", "val", "void", "ver", "vtable", "vec", "vsnprintf", "vprintf", "vfprintf", "vsprintf",
    "vmaxnmq_f32", "vminnmq_f32",
}


def prelude_headers(headers_dir):
    """The headers actually reachable from a .c file, i.e. included by the prelude.

    THIS IS THE POINT. Scanning every *.h in the directory asks "does any header declare this name?",
    but a translation unit only sees the ones the prelude includes:

        nsmbudx_types.h, structs.h, nsmbudx_data.h, nsmbudx_subfuncs.h,
        nsmbudx_undeclared.h, libs.h

    actors.h, player.h, powerup.h and systems.h are generated but NOT included (they were measured to
    conflict with structs.h -- adding actors.h took the corpus 447 -> 432). So names declared only there
    are invisible, yet the old scan counted them as satisfied and emitted no declaration. That is why
    `CollisionMgr_dtor` was "undeclared" while actors.h plainly declared it, and it accounted for most
    of the remaining `use of undeclared` failures.
    """
    prelude = os.path.join(headers_dir, "nsmbudx_prelude.h")
    if not os.path.exists(prelude):
        return None  # fall back to scanning everything
    with open(prelude, encoding="utf-8", errors="replace") as fh:
        text = fh.read()
    return set(re.findall(r'#include\s+"([^"]+)"', text))


def declared_names(headers_dir, self_name):
    """Every identifier VISIBLE to a .c file, by any of the usual spellings.

    `self_name` is skipped on purpose. This script writes into the same directory it reads, so on the
    second run it would find its own previous output, count every name as already declared, and emit
    an EMPTY header -- which is exactly what happened: 292 nullsub declarations became 1 comment and
    the parse count did not move at all.

    Only headers the prelude includes are consulted; see prelude_headers().
    """
    names = set()
    reachable = prelude_headers(headers_dir)
    for f in os.listdir(headers_dir):
        if not f.endswith(".h") or f == self_name:
            continue
        if reachable is not None and f not in reachable:
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
            "scoped": {}, "table": {}, "fnptr": {}, "flags": {}, "neon": {}, "neonall": {}}
    # Every function the corpus DEFINES, with its REAL signature.
    #
    # Omission is not the answer. A name defined in one file may be used as a cast target in a
    # different file, where it still needs a declaration -- dropping it entirely took the corpus
    # 452 -> 447 and re-broke the four `use of undeclared` files.
    #
    # Emitting the definition's OWN signature is correct in both places: identical to what the defining
    # file says (no conflict), and a real prototype elsewhere (no implicit `int f()`).
    defined_in_corpus = {}
    for dp, _, fs in os.walk(root):
        for f in fs:
            if not f.endswith(".c"):
                continue
            with open(os.path.join(dp, f), encoding="utf-8", errors="replace") as fh:
                text = fh.read()
            # The argument list `[^;]*` can run past the closing paren and swallow the BODY when a
            # parameter list is multi-line, which emitted real definitions into the header
            # ("function definition is not allowed here") and took the corpus to 0/475. Scan line by
            # line instead, and take the parens as balanced text on that single line.
            for line_no, line in enumerate(text.splitlines()):
                body = re.sub(r"^\s*/\*[^*]*\*/\s*", "", line)
                m = re.match(r"([A-Za-z_][\w \t\*]*?)\b(\w+)\s*\((.*)\)\s*$", body)
                if not m:
                    continue
                # the next non-blank line must be the opening brace for this to be a definition
                nxt = ""
                for k in range(line_no + 1, min(line_no + 3, len(text.splitlines()))):
                    cand = re.sub(r"^\s*/\*[^*]*\*/\s*", "", text.splitlines()[k]).strip()
                    if cand:
                        nxt = cand
                        break
                if nxt != "{":
                    continue
                args = m.group(3)
                # A stray brace or unbalanced paren means the capture is not a clean signature.
                if "{" in args or "}" in args or args.count("(") != args.count(")"):
                    continue
                defined_in_corpus[m.group(2)] = (m.group(1).strip(), args)

    # ALSO collect plain DECLARATIONS the corpus contains (`_DWORD *sub_604B7F9C(int a1);`). systems.c
    # declares that helper itself and the cast-target emission was overriding it with an unprototyped
    # `int f()`, which conflicts. A signature stated anywhere in the corpus beats a guess.
    for dp, _, fs in os.walk(root):
        for f in fs:
            if not f.endswith(".c"):
                continue
            with open(os.path.join(dp, f), encoding="utf-8", errors="replace") as fh:
                text = fh.read()
            for line in text.splitlines():
                body = re.sub(r"^\s*/\*[^*]*\*/\s*", "", line)
                dm = re.match(r"([A-Za-z_][\w \t\*]*?)\b(\w+)\s*\((.*)\)\s*;\s*$", body)
                if not dm:
                    continue
                name, args = dm.group(2), dm.group(3)
                if "{" in args or "}" in args or args.count("(") != args.count(")"):
                    continue
                defined_in_corpus.setdefault(name, (dm.group(1).strip(), args))

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
                nm = m.group(1)
                # The broadened pattern also catches TYPE NAMES in casts such as `(float)x`, producing
                # `int __fastcall float();` -- which invalidated every file in the corpus (447 -> 0).
                # A declared function name is an identifier that is NOT a type keyword, and the
                # `sub_`/`_` prefixed forms are IDA-generated; those are the only shapes that are safe
                # to declare without inspecting what they really are.
                if nm in C_KEYWORDS or nm in C_TYPENAMES:
                    continue
                used["fnptr"][nm] = used["fnptr"].get(nm, 0) + 1
            for m in FLAGREG.finditer(text):
                used["flags"][m.group(1)] = used["flags"].get(m.group(1), 0) + 1
            for m in NEON_BINOP.finditer(text):
                used["neon"][m.group(1)] = used["neon"].get(m.group(1), 0) + 1
            for m in NEON_ANY.finditer(text):
                nm = m.group(1)
                if nm in NEON_EXCLUDE:
                    continue
                used["neonall"][nm] = used["neonall"].get(nm, 0) + 1

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
        # A nullsub that the corpus DEFINES as something other than `int f()` still needs the real
        # signature: T_5E758.c defines `void nullsub_2135()`, and an unprototyped `int` here conflicts
        # with it. The definition wins.
        if name in defined_in_corpus:
            ret, args = defined_in_corpus[name]
            lines.append("%s %s(%s);  /* %d call site(s) */" % (ret, name, args,
                                                                used["nullsub"][name]))
            n_null += 1
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
        # Prefer the definition's own signature. An unprototyped `int f()` would conflict with a
        # definition of a different type (`void nullsub_2135()`, `_DWORD *sub_604B7F9C(int)`), which is
        # the "conflicting types" error in T_5E758.c, T_60810.c, libs.c and systems.c.
        if name in defined_in_corpus:
            ret, args = defined_in_corpus[name]
            lines.append("%s %s(%s);  /* %d cast site(s), signature from its definition */"
                         % (ret, name, args, used["fnptr"][name]))
            n_fnptr += 1
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

    lines += ["", "/* ---- NEON float min/max ----", " * These return a vector, not a scalar: the corpus reads `.n64_u32[0]` off the RESULT, which is only", " * legal if the declaration says so. The operation is lane-wise min/max of two float32x4_t. */"]
    n_neon = 0
    for name in sorted(used["neon"]):
        if name in have:
            continue
        # Declared per WIDTH: the same helper is called with float32x2_t in some places and
        # float32x4_t in others, and C has no overloading. Two distinct names, chosen by the width
        # the corpus actually passes, keeps both call sites correct without guessing what the
        # hardware did.
        lines.append("float32x2_t %s_v2(float32x2_t a, float32x2_t b);  /* %d use(s) */"
                     % (name, used["neon"][name]))
        lines.append("float32x4_t %s(float32x4_t a, float32x4_t b);  /* %d use(s) */"
                     % (name, used["neon"][name]))
        n_neon += 1

    lines += ["", "/* ---- remaining NEON intrinsics ----", " * Declared unprototyped: the real lane and predicate signatures differ per intrinsic, and inventing", " * one per name would state things about the instruction that were never checked. Callers get a", " * declaration and clang stops treating them as undeclared identifiers. */"]
    n_neonall = 0
    for name in sorted(used["neonall"]):
        # The typed NEON declarations above already emitted `vadd_f32`, `vadd_f32_v2` and friends.
        # NEON_ANY also matches the `_v2` spelling, so emitting an unprototyped `int vadd_f32_v2();`
        # here conflicts with the typed one -- that took the corpus to 0/475. Skip anything the typed
        # block, the `have` set, or the exclusion list already covers.
        if name in have or name in used["neon"] or name in NEON_EXCLUDE:
            continue
        if name.endswith("_v2") and name[:-3] in used["neon"]:
            continue
        lines.append("int %s();  /* %d use(s) */" % (name, used["neonall"][name]))
        n_neonall += 1

    lines += ["", "#endif /* NSMBUDX_UNDECLARED_H */", ""]

    print("declared: nullsub %d, algn %d, simd %d, float %d, str %d, scoped %d, table %d, fnptr %d, flags %d, neon %d, neonall %d"
          % (n_null, n_algn, n_simd, n_float, n_str, n_scoped, n_table, n_fnptr, n_flag, n_neon, n_neonall))
    if write:
        os.makedirs(os.path.dirname(out), exist_ok=True)
        with open(out, "w", encoding="utf-8", newline="\n") as fh:
            fh.write("\n".join(lines))
        print("wrote %s" % out)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
