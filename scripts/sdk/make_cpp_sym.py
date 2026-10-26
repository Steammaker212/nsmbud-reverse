"""Write the game's C++ symbols as a sweet-dx .sym, constructors and destructors with their variant.

    python scripts/sdk/make_cpp_sym.py                 # sdk/symbols_cpp/nsmbudx_cpp.sym
    python scripts/sdk/make_cpp_sym.py --annotate      # also mark the decompiled sources

sweet-dx (0.0.4+) accepts a demangled C++ signature in a .sym and mangles it
itself, but a constructor or destructor must say which variant it is:

    Actor::Actor(ActorBuildInfo const*) as C1 = 0x00000654

The variant is **read from the original mangled name**, never assumed:
C1 complete / C2 base / C3 allocating constructor, D0 deleting / D1 complete /
D2 base destructor. Sources, all with v1.0.0 addresses:

  data/loader/mangled_names.csv   mangled names from RicBent's IDA database and
                                  codedx's main.sym (snapshot; see its header)
  data/loader/symbols.csv         the repo's inventory: hand-named functions

A function that is a constructor or destructor by its (hand-given) name but has
no mangled name has no recoverable variant; it is written commented out:

    # StateActor_ctor as UNKNOWN = 0x0015A2C8

Every address is 8 hex digits (the module offset, VA - 0x60000000).
"""
from __future__ import annotations

import argparse
import csv
import re
import shutil
import subprocess
from collections import defaultdict
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
MANGLED = REPO / "data" / "loader" / "mangled_names.csv"
INVENTORY = REPO / "data" / "loader" / "symbols.csv"
CORPUS = REPO / "decompiled" / "src"
OUT = REPO / "sdk" / "symbols_cpp" / "nsmbudx_cpp.sym"

# A hand-given name that says constructor/destructor (StageActor__ctor, EffectWrapper_dtorFree ...).
HAND_CTOR_DTOR = re.compile(r"(^|_)(ctor|dtor|dtorFree|Ctor|Dtor)(\d*)$|__ctor_|__dtor_")

KIND = {"C1": "complete object constructor", "C2": "base object constructor",
        "C3": "allocating constructor", "D0": "deleting destructor",
        "D1": "complete object destructor", "D2": "base object destructor"}


def ctor_dtor_variant(mangled: str) -> str | None:
    """The C1/C2/C3/D0/D1/D2 marker that ends a mangled ctor/dtor's nested name, or None.

    Walks <nested-name>: _Z N [CV-qualifiers] { <source-name> | St | S<seq>_ | I<args>E }* <ctor-dtor-name> E
    """
    if not mangled.startswith("_ZN"):
        return None
    i, s = 3, mangled
    while i < len(s) and s[i] in "rVKRO":
        i += 1
    while i < len(s):
        c = s[i]
        if c.isdigit():                                     # <source-name>
            j = i
            while j < len(s) and s[j].isdigit():
                j += 1
            i = j + int(s[i:j])
        elif c == "S":                                      # substitution St / S_ / S<seq>_
            if i + 1 < len(s) and s[i + 1] in "tabsio":
                i += 2
            else:
                j = s.find("_", i)
                if j < 0:
                    return None
                i = j + 1
        elif c == "I":                                      # template args: skip, balanced
            depth, i = 1, i + 1
            while i < len(s) and depth:
                if s[i] == "I":
                    depth += 1
                elif s[i] == "E":
                    depth -= 1
                elif s[i].isdigit():
                    j = i
                    while j < len(s) and s[j].isdigit():
                        j += 1
                    i = j + int(s[i:j]) - 1
                i += 1
        elif c in "CD" and i + 2 < len(s) and s[i + 1] in "0123" and s[i + 2] == "E":
            v = s[i:i + 2]
            return v if v in KIND else None
        else:
            return None
    return None


def demangle(names: list[str]) -> dict[str, str]:
    tool = shutil.which("c++filt") or shutil.which("llvm-cxxfilt")
    if not tool:
        raise SystemExit("c++filt not found on PATH")
    out = subprocess.run([tool], input="\n".join(names), capture_output=True, text=True).stdout.splitlines()
    return dict(zip(names, out))


# A demangled name sweet-dx can take as a signature: a plain function or variable.
UNSAFE = re.compile(r"vtable for|typeinfo|VTT for|guard variable|construction vtable|thunk to|"
                    r"\(anonymous namespace\)|\{lambda|\[clone|'lambda|\$_\d|unnamed")


def owner(signature: str) -> str:
    """'nn::g3d::ResFile::Setup(...)' -> 'nn::g3d::ResFile'; '' for a free function."""
    head = signature.split("(", 1)[0]
    depth, cut = 0, -1
    for k, ch in enumerate(head):
        if ch == "<":
            depth += 1
        elif ch == ">":
            depth -= 1
        elif ch == ":" and depth == 0 and head[k:k + 2] == "::":
            cut = k
    return head[:cut] if cut > 0 else ""


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--out", type=Path, default=OUT)
    ap.add_argument("--annotate", action="store_true", help="add the line to each ctor/dtor's decompiled source")
    a = ap.parse_args()

    mangled = list(csv.DictReader(MANGLED.open(encoding="utf-8")))
    names = sorted({r["mangled"] for r in mangled})
    dem = demangle(names)

    entries = []            # (group, rva, line, rva-for-annotation, annotation)
    covered = set()
    stats = defaultdict(int)
    seen_lines = set()
    for r in mangled:
        rva = int(r["rva"], 16)
        m, d = r["mangled"], dem[r["mangled"]]
        v = ctor_dtor_variant(m)
        if v:
            covered.add(rva)
            line = f"{d} as {v} = 0x{rva:08X}"
            stats[v] += 1
            note = f"{d} as {v}"
        elif UNSAFE.search(d) or d == m or d.split("(", 1)[0].endswith(">"):
            # keep the mangled form; a template function's mangled name carries its
            # return type, which the demangled signature does not round-trip
            line = f"{m} = 0x{rva:08X}"
            stats["mangled kept"] += 1
            note = None
        else:
            line = f"{d} = 0x{rva:08X}"
            stats["signature"] += 1
            note = None
        key = line.split(" = ")[0]
        if key in seen_lines:
            continue
        seen_lines.add(key)
        entries.append((owner(d) if not UNSAFE.search(d) else "(compiler-generated: vtables, typeinfo, guards)",
                        rva, line, note))

    # Hand-named constructors/destructors: their variant cannot be known.
    unknown = []
    for r in csv.DictReader(INVENTORY.open(encoding="utf-8")):
        if r["kind"] != "function":
            continue
        rva = int(r["rva"], 16)
        if rva in covered or not HAND_CTOR_DTOR.search(r["symbol"]):
            continue
        covered.add(rva)
        unknown.append((rva, r["symbol"]))
        stats["UNKNOWN"] += 1

    by_group = defaultdict(list)
    for group, rva, line, note in entries:
        by_group[group].append((rva, line))

    lines = [
        "# nsmbudx_cpp.sym -- the game's C++ symbols, for sweet-dx 0.0.4+.",
        "# NSMBU Deluxe v1.0.0 (build id AEE6DCCC06D9C05B42061E2019123A61); addresses are",
        "# module offsets (VA - 0x60000000). Generated by scripts/sdk/make_cpp_sym.py from",
        "# data/loader/mangled_names.csv (RicBent's IDA database + codedx main.sym).",
        "#",
        "# Constructors and destructors carry the variant read from their mangled name:",
        "#   C1 complete object, C2 base object, C3 allocating constructor;",
        "#   D0 deleting, D1 complete object, D2 base object destructor.",
        "# Names whose variant could not be found are commented out as UNKNOWN.",
        "#",
        "# Not loaded by default (it overlaps codedx's main.sym and sdk/symbols/nsmbudx_game.sym,",
        "# and a symbol may only be defined once): use it instead of them, or copy the lines you need.",
        "",
    ]
    for group in sorted(by_group, key=lambda g: (g.startswith("("), g.lower())):
        label = group or "free functions and globals"
        lines.append(f"# The following symbols are for {label}")
        for rva, line in sorted(by_group[group]):
            lines.append(line)
        lines.append("")
    if unknown:
        lines.append("# The following symbols are constructors/destructors named by hand in the database:")
        lines.append("# their mangled name, and so their variant, is not known. Commented out on purpose.")
        for rva, name in sorted(unknown):
            lines.append(f"# {name} as UNKNOWN = 0x{rva:08X}")
        lines.append("")

    a.out.parent.mkdir(parents=True, exist_ok=True)
    a.out.write_text("\n".join(lines), encoding="utf-8", newline="\n")
    print(f"wrote {a.out}: " + ", ".join(f"{k} {v}" for k, v in sorted(stats.items())))

    if a.annotate:
        notes = {rva: note for _, rva, _, note in entries if note}
        notes.update({rva: f"# {name} as UNKNOWN" for rva, name in unknown})
        done = 0
        for rva, note in notes.items():
            for f in CORPUS.rglob(f"{0x60000000 + rva:08X}_*.c"):
                text = f.read_text(encoding="utf-8")
                if " * sym: " in text:
                    text = re.sub(r" \* sym: .*\n", "", text)
                head, sep, rest = text.partition("\n")      # line 1: /* name
                second, sep2, rest2 = rest.partition("\n")  # line 2: * address: ...
                f.write_text(head + sep + second + sep2 + f" * sym: {note}\n" + rest2,
                             encoding="utf-8", newline="\n")
                done += 1
        print(f"annotated {done} decompiled source files")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
