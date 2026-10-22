"""Generate declarations for every function that is CALLED but has no prototype anywhere.

Two tiers, because they need different evidence:

TIER 1 -- the nine functions the corpus calls that no header declared. Their signatures were
          obtained by decompiling each one in IDA, so the declaration matches the body exactly.
          This is exact, not inferred.

TIER 2 -- every other `sub_*` function. Their arity is NOT reliably known: IDA's `guess_tinfo`
          returns `int()` for the overwhelming majority (43,499 of 48,946), so a generated
          declaration would claim zero parameters and contradict every call site. The honest
          declaration for an unknown arity is an unprototyped one:

              int __fastcall sub_60000280();

          In C that means "returns int, arguments unspecified" and accepts any call. It is the only
          form that cannot conflict. Emitting `(void)` instead would be a lie that breaks callers.

The header is split so a reader can tell the two apart.
"""
import json
import os
import re
import sys

EXACT = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\target_protos.json"
FULL = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\functions_full.json"
OUT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\include\nsmbudx_subfuncs.h"

BASE = 0x60000000


def clean_args(args):
    """`_DWORD *a3` is fine as-is; only the return type needs fixing."""
    return args


def main():
    exact_rows = json.load(open(EXACT, encoding="utf-8"))["data"]
    full = json.load(open(FULL, encoding="utf-8"))["data"]
    exact_names = {r["name"] for r in exact_rows}

    lines = [
        "/* NSMBU Deluxe (Switch) v1.0.0 -- declarations for auto-named functions",
        " *",
        " * The earlier export DROPPED every auto-named function:",
        " *",
        " *     named = [r for r in rows if not r[\"name\"].startswith(\"sub_\")]",
        " *",
        " * so 32,173 functions -- 65% by count, 75.5% by code bytes -- were absent from every header,",
        " * and calls to them could not resolve. Nine of them looked like they were missing from the",
        " * database when they are defined, sized and called (sub_60583000 has 40 callers).",
        " *",
        " * TWO TIERS, because the evidence is different:",
        " *",
        " *   TIER 1 (below, first block): signatures obtained by decompiling the function in IDA.",
        " *          Exact. The declaration matches the body the corpus contains.",
        " *",
        " *   TIER 2: every other sub_* function, declared `f()`. That form means 'returns int,",
        " *          arguments unspecified' and accepts any call. It is used deliberately: IDA's",
        " *          guess_tinfo reports no parameters for most functions in this image, so writing",
        " *          `f(void)` would DECLARE an arity of zero and break every caller.",
        " *",
        " * Do not edit by hand. Regenerate with scripts/gen_subfuncs_header.py.",
        " */",
        "#ifndef NSMBUDX_SUBFUNCS_H",
        "#define NSMBUDX_SUBFUNCS_H",
        "",
        '#include "nsmbudx_types.h"',
        "",
        "/* ---- TIER 1: signature taken from the decompiled body ---- */",
    ]

    t1 = 0
    for r in exact_rows:
        if "decl" not in r:
            continue
        decl = r["decl"].strip()
        lines.append("%s;  /* RVA 0x%06X, size 0x%X */" % (decl, r["rva"], r["size"]))
        t1 += 1

    # TIER 2 IS DISABLED BECAUSE IT WAS MEASURED HARMFUL.
    #
    # Emitting an unprototyped `int __fastcall sub_X();` for every auto-named function conflicts
    # with the prototype headers, which ALREADY declare 26,887 of these names with their real
    # signatures (from libs.h / actors.h / systems.h). A declaration is a contract, so an
    # unprototyped one contradicts a prototyped one, and the result was catastrophic:
    #
    #     before tier 2:  250 / 475 files parse
    #     after  tier 2:    0 / 475  -- "conflicting types for 'sub_6080126C'" on every file
    #
    # Only tier 1 (the nine exact signatures) is emitted. --tier2 exists to reproduce the
    # experiment, not to enable it.
    if "--tier2" not in sys.argv:
        lines += ["", "#endif /* NSMBUDX_SUBFUNCS_H */", ""]
        os.makedirs(os.path.dirname(OUT), exist_ok=True)
        with open(OUT, "w", encoding="utf-8", newline="\n") as fh:
            fh.write("\n".join(lines))
        print("wrote %s" % OUT)
        print("  tier 1 (exact)       : %d" % t1)
        print("  tier 2               : SKIPPED (measured harmful: 250 -> 0 files)")
        return

    lines += ["", "/* ---- TIER 2: arity not recoverable; unprototyped on purpose ---- */"]
    t2 = 0
    skipped = 0
    for r in sorted(full, key=lambda x: x["rva"]):
        if not r["auto"]:
            continue
        if r["name"] in exact_names:
            continue
        proto = r.get("proto") or ""
        # take only the return type; ignore any parameter list guess_tinfo offered
        ret = "int"
        if "__fastcall" in proto:
            ret = proto.split("__fastcall")[0].strip() or "int"
            ret = ret.replace("__int64", "long long").replace("_BOOL4", "int")
        if ret in ("void", ""):
            ret = "int"
        # a return type that is a bare `struct X` with no pointer is not a usable C type
        if ret.startswith("struct ") and "*" not in ret:
            ret = "int"
        # C++-qualified return types (`sead::SafeString`, `nn::Result`) cannot appear in a C
        # declaration. The decompiled bodies never use these values, so int is accurate enough for
        # a declaration and, importantly, cannot conflict with them.
        if "::" in ret or ret.startswith("sead") or ret.startswith("nn_"):
            ret = "int"
        # NEON aggregate types IDA prints (int8x8x2_t, float32x2x2_t, ...) are not declared by
        # nsmbudx_types.h -- only the single-register forms are. A pointer to one is an opaque
        # parameter, so `void *` declares it without needing the definition.
        if re.search(r"\w+_t\b", ret):
            ret = "void *" if "*" in ret else "int"
        lines.append("%s __fastcall %s();  /* RVA 0x%06X */" % (ret, r["name"], r["rva"]))
        t2 += 1

    lines += ["", "#endif /* NSMBUDX_SUBFUNCS_H */", ""]
    os.makedirs(os.path.dirname(OUT), exist_ok=True)
    with open(OUT, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(lines))

    print("wrote %s" % OUT)
    print("  tier 1 (exact)      : %d" % t1)
    print("  tier 2 (unprototyped): %d" % t2)


if __name__ == "__main__":
    main()
