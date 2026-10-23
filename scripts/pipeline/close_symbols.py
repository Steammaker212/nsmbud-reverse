"""Close the corpus' symbol set statically, then verify in one compile pass.

Compiling 44k files one at a time to discover undeclared symbols is accurate but
far too slow. The set of referenced-but-undeclared names can be found statically
from the C text: any identifier used in a call or as an lvalue that is not a
local, a parameter, a known function, or a declared type is a global reference.

This pass:
  1. indexes every declared function and data symbol (headers + bodies),
  2. scans each body for free identifiers,
  3. writes declarations for the ones with no declaration,
  4. compiles a bounded sample to confirm the closure converged.

Usage:
    python close_symbols.py --dir <per_fn> [--sample 400]
"""
from __future__ import annotations

import argparse
import json
import re
import subprocess
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

IDENT = re.compile(r"\b[A-Za-z_]\w*\b")
CALL = re.compile(r"\b([A-Za-z_]\w*)\s*\(")
# Identifiers that are never global symbols.
KEYWORDS = {
    "if", "else", "while", "for", "do", "switch", "case", "default", "break",
    "continue", "return", "goto", "sizeof", "typeof", "int", "char", "short",
    "long", "float", "double", "unsigned", "signed", "void", "const",
    "volatile", "static", "extern", "struct", "union", "enum", "typedef",
    "inline", "register", "auto", "restrict", "bool", "true", "false", "NULL",
    "as", "defined", "__attribute__", "__asm", "__int128", "asm", "this",
    "_Bool", "uintptr_t", "intptr_t", "size_t", "ssize_t",
}
# Macro names from the generated headers.
MACROS = {
    "FIELD_U8", "FIELD_U16", "FIELD_U32", "FIELD_U64", "FIELD_S8", "FIELD_S16",
    "FIELD_S32", "FIELD_F32", "FIELD_F64", "IMAGE32", "MEMORY_FIELD",
}
# Locals introduced by Hex-Rays.
LOCAL = re.compile(r"\b(v\d+|a\d+|result|i|j|k|n|s|p|q|t)\b")

PROTO_RE = re.compile(r"^[A-Za-z_].*?\b([A-Za-z_]\w*)\s*\([^;]*\)\s*;", re.M)
DATA_RE = re.compile(r"extern\s+(?:unsigned char|uintptr_t|char|int)\s+([A-Za-z_]\w*)")
TYPEDEF_RE = re.compile(r"typedef\s+[^;]*?\b([A-Za-z_]\w*)\s*;")


def index_declarations(inc: Path) -> tuple[set[str], set[str], set[str]]:
    funcs: set[str] = set()
    data: set[str] = set()
    types: set[str] = set()
    for h in inc.glob("*.h"):
        text = h.read_text(encoding="utf-8", errors="replace")
        for m in PROTO_RE.finditer(text):
            funcs.add(m.group(1))
        data |= set(DATA_RE.findall(text))
        types |= set(TYPEDEF_RE.findall(text))
        # Struct/union tags behave like types at use sites.
        types |= set(re.findall(r"(?:struct|union|enum)\s+([A-Za-z_]\w*)", text))
    return funcs, data, types


DECL = re.compile(
    r"\b(?:unsigned|signed|const|volatile|static|register|struct|union|enum|"
    r"int|char|short|long|float|double|void|bool|_Bool|__int64|__int128|"
    r"uintptr_t|intptr_t|size_t|ssize_t|__n128|__n64|"
    r"[A-Za-z_]\w*(?:__\w+)*)\b(?:\s*\*+\s*|\s+)"
    r"([A-Za-z_]\w*)\s*(?:\[[^\]]*\]\s*)?(?=[;=,)\[])"
)
# Declaration lists: `int a1, a2, a3;` -- the first name is matched by DECL,
# the rest appear only as `, name`.
DECL_TAIL = re.compile(r",\s*([A-Za-z_]\w*)\s*(?:\[[^\]]*\]\s*)?(?=[,;=)\[])")


def scan_unit(path: Path) -> tuple[set[str], set[str]]:
    """Return (called names, other free names) used by one function file."""
    text = path.read_text(encoding="utf-8", errors="replace")
    if "*/" in text:
        text = text.split("*/", 1)[1]
    locals_ = set(DECL.findall(text)) | set(DECL_TAIL.findall(text))
    called = set(CALL.findall(text))
    others = set(IDENT.findall(text))
    return called, others - locals_


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--dir", required=True)
    ap.add_argument("--sample", type=int, default=400)
    ap.add_argument("--jobs", type=int, default=12)
    args = ap.parse_args()

    d = Path(args.dir)
    inc = d / "include"
    units = sorted(p for p in d.glob("*/*.c") if p.name != "g_image.c")
    funcs, data, types = index_declarations(inc)
    print("declared: funcs %d  data %d  types %d" % (len(funcs), len(data), len(types)))

    known = funcs | data | types | KEYWORDS | MACROS
    new_funcs: set[str] = set()
    new_data: set[str] = set()

    for u in units:
        called, others = scan_unit(u)
        for c in called:
            if c not in known and c not in new_funcs:
                new_funcs.add(c)
        for o in others:
            if o in known or o in new_funcs or o in new_data:
                continue
            if LOCAL.fullmatch(o):
                continue
            if o in called:
                continue
            new_data.add(o)
    new_data -= KEYWORDS | MACROS
    new_data -= new_funcs
    new_data -= KEYWORDS | MACROS

    print("new: funcs %d  data %d" % (len(new_funcs), len(new_data)))

    header = inc / "nsmbudx_symbols.h"
    prev = header.read_text(encoding="utf-8", errors="replace") if header.exists() else ""
    prev_f = set(re.findall(r"int (\w+)\(\)", prev))
    prev_d = set(re.findall(r"extern unsigned char (\w+)\[\]", prev))
    prev_s = set(re.findall(r"extern uintptr_t (\w+)", prev))
    all_f = new_funcs | prev_f
    all_d = (new_data | prev_d | prev_s)

    lines = [
        "/* nsmbudx_symbols.h -- symbols referenced by the decompiled bodies.",
        " *",
        " * Generated by scripts/pipeline/close_symbols.py. Each name is one a",
        " * decompiled function actually references. Data is declared as a byte",
        " * array and functions as variadic, so every use site parses. No width,",
        " * type, or calling convention is asserted here: those come from the",
        " * recovered structs and the per-subsystem headers.",
        " */",
        "#ifndef NSMBUDX_SYMBOLS_H",
        "#define NSMBUDX_SYMBOLS_H",
        "",
        '#include "nsmbudx_prelude.h"',
        "",
    ]
    for n in sorted(all_d):
        lines.append("extern unsigned char %s[];" % n)
    for n in sorted(all_f):
        lines.append("int %s();" % n)
    lines += ["", "#endif"]
    header.write_text("\n".join(lines), encoding="utf-8")
    print("wrote %s: %d data, %d funcs" % (header.name, len(all_d), len(all_f)))

    # Confirm on a bounded sample: this is cheap and catches a broken header.
    sample = units[:: max(1, len(units) // args.sample)][: args.sample]

    def check(u: Path) -> int:
        p = subprocess.run(
            ["clang", "-fsyntax-only", "-std=gnu89", "-Wno-everything",
             "-ferror-limit=0", "-I", str(inc), str(u)],
            capture_output=True, text=True)
        return len(re.findall(r"error:", p.stderr))

    with ThreadPoolExecutor(max_workers=args.jobs) as pool:
        counts = list(pool.map(check, sample))
    clean = sum(1 for c in counts if c == 0)
    print("sample: %d/%d clean (%d errors)" % (clean, len(sample), sum(counts)))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
