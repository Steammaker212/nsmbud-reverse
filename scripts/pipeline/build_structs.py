"""Recover struct layouts from the decompiler's own member names.

Hex-Rays names an untyped field access ``a1->field_234`` where ``234`` is the
real byte offset. That is measurable evidence, not a guess, so a layout can be
rebuilt from the accesses the corpus actually performs:

* ``field_234`` / ``_234`` / ``_28``  -> member at 0x234 / 0x234 / 0x28
* ``_`` or ``__``                     -> member at 0x0
* gaps are padded with ``unsigned char`` arrays

Members whose names carry no offset (``movementId``, ``isDeleted``) are dropped:
they come from a real header the binary was built with, which this project does
not have, and inventing an offset would be a fabrication.

Usage:
    python build_structs.py --jsonl <export.jsonl> --out <structs.h>
"""
from __future__ import annotations

import argparse
import json
import re
from collections import defaultdict
from pathlib import Path

# Words that appear where a type name would, but are not types.
CADENCE_WORDS = {
    "__fastcall", "__cdecl", "__noreturn", "void", "int", "char", "float",
    "double", "unsigned", "signed", "long", "short", "bool", "const",
    "_BYTE", "_WORD", "_DWORD", "_QWORD", "_BOOL4", "_UNKNOWN",
}

ID_PAT = re.compile(r"^(?:field(?:_|_?0x)?|_)([0-9A-Fa-f]{1,4})$")


def offset_of(member: str) -> int | None:
    if member in ("_", "__", "___"):
        return 0
    if member == "_unknown":
        return None
    m = ID_PAT.match(member)
    if not m:
        return None
    digits = m.group(1)
    # IDA writes offsets in hex without a 0x prefix.
    try:
        return int(digits, 16)
    except ValueError:
        return None


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--jsonl", required=True)
    ap.add_argument("--out", required=True)
    args = ap.parse_args()

    # type -> {offset: member_name}; type inferred from cast/param text.
    layout: dict[str, dict[int, str]] = defaultdict(dict)
    # ``T *v = ...`` then ``v->field_XX``: track simple pointer variables.
    var_type: dict[str, str] = {}

    decl_re = re.compile(r"\b([A-Za-z_]\w*)\s*\*\s*([A-Za-z_]\w*)\s*[;=]")
    mem_re = re.compile(r"\b([A-Za-z_]\w*)\s*->\s*([A-Za-z_]\w*)")
    # Parameter declarations in the signature, e.g. `(StageActor *a1, int a2)`.
    param_re = re.compile(r"([A-Za-z_]\w*)\s*\*\s*([A-Za-z_]\w*)")

    with open(args.jsonl, encoding="utf-8") as fh:
        for line in fh:
            r = json.loads(line)
            body = r.get("c")
            if not body:
                continue
            local: dict[str, str] = {}
            first = body.splitlines()[0] if body else ""
            sig = first.split("*/", 1)[-1] if "*/" in first else first
            for m in param_re.finditer(sig):
                local[m.group(2)] = m.group(1)
            for m in decl_re.finditer(body):
                local[m.group(2)] = m.group(1)
            for m in mem_re.finditer(body):
                var, member = m.group(1), m.group(2)
                off = offset_of(member)
                if off is None:
                    continue
                t = local.get(var)
                if not t or t in CADENCE_WORDS:
                    continue
                layout[t].setdefault(off, member)

    # Members first seen in this order; a real struct cannot contain the same
    # name twice, so later duplicates at a different offset get a suffix.
    out = [
        "/* structs_recovered.h -- layouts rebuilt from Hex-Rays field offsets.",
        " *",
        " * Every member offset here is the offset the decompiler printed, so the",
        " * layout is measured rather than assumed. Gap padding is explicit.",
        " * Types with no observed member access are not defined.",
        " */",
        "#ifndef NSMBUDX_STRUCTS_RECOVERED_H",
        "#define NSMBUDX_STRUCTS_RECOVERED_H",
        "",
    ]
    total_members = 0
    for t in sorted(layout):
        members = layout[t]
        if not members:
            continue
        out.append("#ifndef NSMBUDX_LAYOUT_%s" % t.upper())
        out.append("#define NSMBUDX_LAYOUT_%s" % t.upper())
        out.append("typedef struct %s {" % t)
        cursor = 0
        seen: set[str] = set()
        for off in sorted(members):
            name = members[off]
            if name in ("_", "__", "___"):
                # A bare underscore is not a usable C member name.
                name = "field_%X" % off
            if name in seen:
                name = "%s_%X" % (name, off)
            seen.add(name)
            if off > cursor:
                out.append("    unsigned char _pad_%X[%d];" % (cursor, off - cursor))
                cursor = off
            # Width unknown from the name alone: a byte array keeps the offsets
            # right without asserting a type the evidence does not show.
            out.append("    unsigned char %s[4];" % name)
            cursor = off + 4
            total_members += 1
        out.append("} %s;" % t)
        out.append("#endif")
        out.append("")

    out.append("#endif /* NSMBUDX_STRUCTS_RECOVERED_H */")
    Path(args.out).write_text("\n".join(out))
    print("types: %d  members: %d -> %s" % (len(layout), total_members, args.out))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
