"""Generate real declarations for the data labels the corpus references.

A prototype header cannot declare `dword_60C92E18`; that is a data object with a known address, not a
function. 235 distinct data labels were unresolved across the corpus, so they are the single largest
cause of the remaining parse failures.

The honest declaration must pin the object to its ACTUAL address. A plain `extern int dword_X;`
declares an object at a linker-chosen address -- not what the decompiled code means. So each label is
declared as a typed view of its known address:

    #define dword_60C92E18 (*(int32_t *)(uintptr_t)(0x60000000u + 0x00C92E18))

This is a macro rather than an extern on purpose: it is correct without a linker script, it cannot
silently bind to the wrong object, and it reads the same way as the `MEMORY[...]` form Hex-Rays
already emits for absolute access.

Width comes from the database (exported by ida_export_data.py), cross-checked against the name prefix
IDA assigned (`dword_` -> 4, `unk_`/`byte_` -> 1). Getting this wrong would be a silent misread, so
the two sources are compared and any disagreement is reported rather than averaged.
"""
import json
import os

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\data_labels.json"
OUT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\include\nsmbudx_data.h"

BASE = 0x60000000

CTYPE = {
    1: "uint8_t",
    2: "uint16_t",
    4: "int32_t",
    8: "int64_t",
}

PREFIX_WIDTH = {
    "dword_": 4, "unk_": 1, "byte_": 1, "word_": 2, "qword_": 8,
    "flt_": 4, "dbl_": 8, "off_": 4,
}


def prefix_width(name):
    for p, w in PREFIX_WIDTH.items():
        if name.startswith(p):
            return p, w
    return None, None


def main():
    d = json.load(open(SRC, encoding="utf-8"))
    rows = d["data"]
    missing = d.get("missing", [])

    # de-duplicate, and drop the stray BOM name if it slipped through the text file
    clean = {}
    for r in rows:
        n = r["name"].lstrip("\ufeff")
        if not n:
            continue
        clean[n] = r

    disagreements = []
    for n, r in clean.items():
        p, w = prefix_width(n)
        if p and w != r["width"]:
            disagreements.append((n, p, w, r["width"]))

    lines = [
        "/* NSMBU Deluxe (Switch) v1.0.0 -- data labels referenced by the decompiled corpus",
        " *",
        " * Each entry is a typed view of a KNOWN address, not an `extern`. A plain extern would",
        " * place the object wherever the linker chose, which is not what the decompiled code means.",
        " * Declaring it as a macro over its true address keeps the reference honest and needs no",
        " * linker script.",
        " *",
        " * Widths come from the database and are cross-checked against IDA's own name prefix;",
        " * disagreements are reported during generation rather than silently averaged.",
        " *",
        " * Do not edit by hand. Regenerate with scripts/gen_data_header.py.",
        " */",
        "#ifndef NSMBUDX_DATA_H",
        "#define NSMBUDX_DATA_H",
        "",
        '#include "nsmbudx_types.h"',
        "",
        "/* ---- data labels ---- */",
    ]
    for n in sorted(clean):
        r = clean[n]
        cty = CTYPE.get(r["width"], "uint8_t")
        lines.append(
            "#define %s (*(%s *)(uintptr_t)(0x%08Xu + 0x%08Xu))" % (n, cty, BASE, r["rva"])
        )

    lines += ["", "#endif /* NSMBUDX_DATA_H */", ""]

    os.makedirs(os.path.dirname(OUT), exist_ok=True)
    with open(OUT, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(lines))

    print("wrote %s" % OUT)
    print("  labels declared            : %d" % len(clean))
    print("  unresolved (not declared)  : %d" % len(missing))
    for m in missing:
        print("      %s" % m)
    print("  width/prefix disagreements : %d" % len(disagreements))
    for n, p, pw, dw in disagreements[:12]:
        print("      %s prefix %s=%d but db size %d" % (n, p, pw, dw))


if __name__ == "__main__":
    main()
