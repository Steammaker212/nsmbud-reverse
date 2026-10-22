"""Build a data-label JSON from the labels the corpus actually references.

WHY
---
gen_data_header.py emits one address-pinned macro per row of its input JSON, and that JSON was built
from a targeted export of 233 labels. But the corpus references 23,704 distinct `dword_`/`unk_`/
`byte_`/... identifiers. The 23,471 that were never exported are simply undefined when the header is
included, which is what produces the "use of undeclared identifier 'dword_60C85B40'" class -- 52
files at last count.

THE WIDTH QUESTION. gen_data_header.py takes width from the export, and cross-checks it against IDA's
own name prefix (dword_ = 4, unk_/byte_ = 1, ...). Here there is no export to consult, so the prefix
is the only evidence available -- and it is exactly what the cross-check expects, so the two agree by
construction. Where a name carries no recognisable prefix the entry is skipped rather than guessed:
an unknown-width macro would be a silent misread of the target, which is worse than a missing
declaration that the compiler will complain about.

Usage:
    python scripts/gen_data_labels_from_corpus.py <decompiled-dir> <out.json>
"""
import json
import os
import re
import sys

# IDA's name prefixes and the width each implies. Mirrors gen_data_header.py's table.
WIDTHS = {
    "dword_": 4, "unk_": 1, "byte_": 1, "word_": 2, "qword_": 8,
    "flt_": 4, "dbl_": 8, "off_": 4,
}

LABEL = re.compile(r"\b((?:dword|unk|byte|word|qword|flt|dbl|off)_([0-9A-Fa-f]{6,8}))\b")


def main(argv):
    if len(argv) < 3:
        print("usage: gen_data_labels_from_corpus.py <decompiled-dir> <out.json>")
        return 2
    root, out = argv[1], argv[2]

    found = {}
    for dp, _, fs in os.walk(root):
        for f in fs:
            if not f.endswith(".c"):
                continue
            path = os.path.join(dp, f)
            with open(path, encoding="utf-8", errors="replace") as fh:
                for m in LABEL.finditer(fh.read()):
                    found[m.group(1)] = int(m.group(2), 16)

    data = []
    skipped = 0
    for name, addr in sorted(found.items(), key=lambda kv: kv[1]):
        if not any(name.startswith(p) for p in WIDTHS):
            skipped += 1
            continue
        data.append({"name": name, "rva": addr})
    # keep the width the prefix implies; gen_data_header re-derives it from the same table and
    # reports any disagreement, so supplying it here only avoids a spurious "missing width" error.
    for r in data:
        for p, w in WIDTHS.items():
            if r["name"].startswith(p):
                r["width"] = w
                break

    with open(out, "w", encoding="utf-8") as fh:
        json.dump({"data": data, "missing": []}, fh, indent=1)

    print("labels found in corpus : %d" % len(found))
    print("written                : %d" % len(data))
    print("skipped (no prefix)    : %d" % skipped)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
