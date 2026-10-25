"""Turn the decompiled corpus into an API a sweet-dx mod can call.

The corpus is readable, but reading a function is not the same as being able
to call it. A mod needs two things for every game function it uses:

  * a symbol definition, so the linker resolves the name to the game address
    (sweet-dx `.sym`, RVA = VA - 0x60000000), and
  * a declaration, so the compiler emits a call with the right arguments.

This emits both from the same rows, so they cannot disagree:

    sdk/symbols/nsmbudx_game.sym
    sdk/include/nsmbudx/game.h

Signatures come from each function's own definition in decompiled/src, i.e.
from the IDA database type. They are rewritten ABI-exactly rather than
faithfully: every pointer becomes `void *` (all pointers are 32-bit, and the
corpus types are not in sweet-dx's include tree), every scalar keeps its exact
width. A function is left out -- and counted, with the reason -- when its
signature cannot be expressed without guessing: a non-standard register
convention (__usercall), a struct passed or returned by value, or a type whose
size is unknown.

Names the module's own link defines (_init, _fini, _DYNAMIC, ... -- see
scripts/pipeline/module_symbols.py) are never exported: a .sym assignment
overrides the module's definition, and with `_init = 0x24` rtld called the
game's _init a second time and every model rendered black.

Names that sweet-dx's own main.sym already defines are skipped too. Two linker
scripts assigning one symbol do not error; the later one silently wins, and if
the addresses differed a call would land in the wrong function.

Usage:
    python scripts/sdk/gen_game_api.py --repo . --template-sym <sweet-dx>/build/source/symbols/main.sym
"""
from __future__ import annotations

import argparse
import collections
import csv
import glob
import os
import re
import sys
from pathlib import Path

IMAGE_BASE = 0x60000000
# Only .text: the game's .init holds _init/_fini, which the module defines itself.
TEXT_SECTIONS = {".text"}

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "pipeline"))
from module_symbols import MODULE_SYMBOLS  # noqa: E402

# The SDK's per-object marker symbols; every module's own runtime emits these.
RUNTIME_MARKER = re.compile(r"^__nnDetailNintendoSdkRuntimeObjectFile")

# Scalar spellings Hex-Rays emits, mapped to sweet-dx's types.h names.
SCALARS = {
    "void": "void",
    "bool": "bool", "_BOOL1": "bool",
    "char": "s8", "signed char": "s8", "__int8": "s8", "int8_t": "s8",
    "unsigned char": "u8", "_BYTE": "u8", "unsigned __int8": "u8", "uint8_t": "u8",
    "short": "s16", "__int16": "s16", "int16_t": "s16", "signed __int16": "s16",
    "unsigned short": "u16", "_WORD": "u16", "unsigned __int16": "u16", "uint16_t": "u16",
    "int": "s32", "signed int": "s32", "__int32": "s32", "int32_t": "s32", "_BOOL4": "s32",
    "unsigned int": "u32", "_DWORD": "u32", "unsigned __int32": "u32", "uint32_t": "u32",
    "size_t": "u32", "uintptr_t": "u32",
    "__int64": "s64", "signed __int64": "s64", "int64_t": "s64", "long long": "s64",
    "unsigned __int64": "u64", "_QWORD": "u64", "uint64_t": "u64",
    "unsigned long long": "u64",
    "float": "f32", "double": "f64",
}

# Qualifiers and calling-convention noise that carry no ABI meaning on ARM32.
NOISE = re.compile(r"\b(__fastcall|__cdecl|__stdcall|__thiscall|__noreturn|"
                   r"__hidden|__struct_ptr|__spoils<[^>]*>|const|volatile|"
                   r"struct|enum|union|signed(?= (?:int|char|__int)))\b")

CXX_KEYWORDS = set("""alignas alignof and and_eq asm auto bitand bitor bool break
case catch char char8_t char16_t char32_t class compl concept const consteval
constexpr constinit const_cast continue co_await co_return co_yield decltype
default delete do double dynamic_cast else enum explicit export extern false
float for friend goto if inline int long mutable namespace new noexcept not
not_eq nullptr operator or or_eq private protected public register
reinterpret_cast requires return short signed sizeof static static_assert
static_cast struct switch template this thread_local throw true try typedef
typeid typename union unsigned using virtual void volatile wchar_t while xor
xor_eq""".split())

DEF_LINE = re.compile(r"^(?![#/ \t*{}])([^\n;]*\))\s*\n\{", re.M)
FNPTR_RET = re.compile(r"^.*\(\s*\*\s*\w+\s*\((.*)\)\s*\)\s*\(.*\)$")
PLAIN = re.compile(r"^(.*?)\b(\w+)\s*\((.*)\)$")


class Refused(Exception):
    pass


def norm_type(t: str, *, is_return: bool) -> str:
    """Map one Hex-Rays type to an ABI-exact sweet-dx type, or refuse."""
    t = t.strip()
    if "@<" in t:
        raise Refused("non-standard register convention")
    if "*" in t or "[" in t or "&" in t:
        return "void *"
    base = re.sub(r"\s+", " ", NOISE.sub(" ", t)).strip()
    if base in SCALARS:
        mapped = SCALARS[base]
        if mapped == "void" and not is_return:
            raise Refused("void parameter in a list")
        return mapped
    if base in ("_OWORD", "__int128", "unsigned __int128") or base.startswith(("__n128", "float32x", "int32x", "uint32x")):
        raise Refused("128-bit vector by value")
    raise Refused(f"by-value or unknown type '{base}'")


def split_params(s: str) -> list[str]:
    out, depth, cur = [], 0, ""
    for ch in s:
        if ch == "(":
            depth += 1
        elif ch == ")":
            depth -= 1
        if ch == "," and depth == 0:
            out.append(cur)
            cur = ""
        else:
            cur += ch
    if cur.strip():
        out.append(cur)
    return [p.strip() for p in out]


def param_type(p: str) -> str:
    """'StateBase *a1' -> 'StateBase *';  'int (__fastcall *cb)(int)' -> pointer."""
    if re.search(r"\(\s*[\w\s]*\*", p):
        return "void *"
    m = re.match(r"^(.*?)(\w+)\s*$", p)
    if m and m.group(1).strip():
        return m.group(1)
    return p  # unnamed parameter: the whole thing is the type


def parse_signature(sig: str):
    """Return (ret, [param types], variadic) in sweet-dx types, or raise Refused."""
    sig = re.sub(r"\s+", " ", sig).strip()
    if "__usercall" in sig or "__userpurge" in sig:
        raise Refused("non-standard register convention")
    fm = FNPTR_RET.match(sig)
    if fm:
        ret, params = "void *", fm.group(1)
    else:
        m = PLAIN.match(sig)
        if not m:
            raise Refused("unparseable definition")
        ret = norm_type(m.group(1), is_return=True)
        params = m.group(3)
    plist = split_params(params)
    if plist in ([], ["void"]):
        return ret, [], False
    variadic = plist[-1] == "..."
    if variadic:
        plist = plist[:-1]
    return ret, [norm_type(param_type(p), is_return=False) for p in plist], variadic


def load_units(repo: Path):
    units = {}
    for p in glob.glob(str(repo / "decompiled/src/*/*.c")):
        units.setdefault(os.path.basename(p).split("_", 1)[0], p)
    return units


def load_template_names(path: Path) -> set[str]:
    names = set()
    for line in open(path, encoding="utf-8", errors="replace"):
        line = line.split("#", 1)[0].strip()
        if "=" in line:
            names.add(line.split("=", 1)[0].strip())
    return names


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--repo", default=".")
    ap.add_argument("--template-sym", required=True,
                    help="sweet-dx's own symbols/main.sym, to avoid redefining its names")
    args = ap.parse_args()
    repo = Path(args.repo).resolve()

    hookable = {}
    hk = repo / "sdk/data/hookable.csv"
    if hk.exists():
        for r in csv.DictReader(open(hk, encoding="utf-8")):
            hookable[r["rva"]] = r["trampoline_safe"] == "yes"

    taken = load_template_names(Path(args.template_sym))
    units = load_units(repo)
    rows = [r for r in csv.DictReader(open(repo / "data/loader/symbols.csv", encoding="utf-8"))
            if r["kind"] == "function" and r["section"] in TEXT_SECTIONS]

    kept, refused = [], collections.Counter()
    seen = set()
    for r in rows:
        name = r["symbol"]
        try:
            if name in MODULE_SYMBOLS or RUNTIME_MARKER.match(name):
                # Assigning these from a .sym overrides the module's own
                # definition: DT_INIT became the game's _init (0xFF32F024),
                # the game re-ran its constructors, and models went black.
                raise Refused("defined by the module itself (module_symbols.py)")
            if name in taken:
                raise Refused("already defined by sweet-dx main.sym")
            if name in CXX_KEYWORDS or not re.match(r"^[A-Za-z_]\w*$", name):
                raise Refused("not a usable C/C++ identifier")
            if name.startswith("_Z"):
                raise Refused("still mangled; declare it as C++ instead")
            if name in seen:
                raise Refused("duplicate name")
            unit = units.get(r["corpus_file"])
            if not unit:
                raise Refused("no corpus unit (collapsed veneer)")
            m = DEF_LINE.search(open(unit, encoding="utf-8", errors="replace").read())
            if not m:
                raise Refused("no definition in corpus unit")
            ret, params, variadic = parse_signature(m.group(1))
        except Refused as e:
            refused[str(e).split(" '")[0] if "unknown type" in str(e) else str(e)] += 1
            continue
        seen.add(name)
        group = Path(unit).parent.name
        kept.append(dict(name=name, rva=int(r["rva"], 16), size=int(r["size"]),
                         ret=ret, params=params, variadic=variadic, group=group,
                         unit=Path(unit).relative_to(repo).as_posix(),
                         hookable=hookable.get(r["rva"])))

    emit_sym(repo, kept)
    emit_header(repo, kept)

    print(f"functions considered : {len(rows)}")
    print(f"exported to the API  : {len(kept)}")
    print(f"  trampoline-safe    : {sum(1 for k in kept if k['hookable'])}")
    for why, n in refused.most_common():
        print(f"  left out {n:5d}  {why}")


def emit_sym(repo: Path, kept) -> None:
    path = repo / "sdk/symbols/nsmbudx_game.sym"
    path.parent.mkdir(parents=True, exist_ok=True)
    with open(path, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("# Game functions callable from a sweet-dx mod.\n")
        fh.write("# Generated by scripts/sdk/gen_game_api.py; do not edit by hand.\n")
        fh.write("# Declarations: include/nsmbudx/game.h. RVA = VA - 0x60000000.\n")
        fh.write("# Deluxe (Switch) v1.0.0 only.\n")
        group = None
        for k in sorted(kept, key=lambda k: (k["group"], k["rva"])):
            if k["group"] != group:
                group = k["group"]
                fh.write(f"\n# {group}\n")
            fh.write(f"{k['name']} = 0x{k['rva']:08X};\n")


def emit_header(repo: Path, kept) -> None:
    path = repo / "sdk/include/nsmbudx/game.h"
    path.parent.mkdir(parents=True, exist_ok=True)
    with open(path, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("""// nsmbudx/game.h -- every game function a mod can call by name.
//
// Generated by scripts/sdk/gen_game_api.py from the decompiled corpus; do not
// edit by hand. The matching addresses are in symbols/nsmbudx_game.sym.
//
// Each declaration is ABI-exact, not source-exact: pointers are `void *` and
// scalars keep their width. Read the corpus unit named in the comment for what
// the function does and what its pointers point at.
//
// [hook] marks a function whose entry instruction can be replayed by a
// sweet-dx trampoline (see sdk/data/hookable.csv). Only those are safe to use
// with `type: hook` + `trampoline:`.
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "types.h"

#ifdef __cplusplus
extern "C" {
#elif !defined(bool)
#define bool _Bool
#endif
""")
        group = None
        for k in sorted(kept, key=lambda k: (k["group"], k["rva"])):
            if k["group"] != group:
                group = k["group"]
                fh.write(f"\n// ---- {group} " + "-" * max(0, 66 - len(group)) + "\n\n")
            params = ", ".join(k["params"] + (["..."] if k["variadic"] else []))
            if not params:
                params = "void"
            tag = " [hook]" if k["hookable"] else ""
            fh.write(f"{k['ret']} {k['name']}({params});"
                     f"  // 0x{k['rva']:08X} {k['unit']}{tag}\n")
        fh.write("\n#ifdef __cplusplus\n}\n#endif\n")


if __name__ == "__main__":
    main()
