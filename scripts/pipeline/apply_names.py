"""Apply symbol names to the database through the IDA Pro MCP endpoint.

Sources of names, in priority order:

1. ``nsmbudx.sym`` -- the SweetDX symbol file shipped in this repository
   (21k entries; addresses are in-image RVAs).
2. Itanium-mangled names already present in the database (C2/C1/D0/D1 etc.).

Every rename goes through ``rename_function`` so the authoritative database
owns the result, and collisions are resolved before anything is written.

Naming convention (matches ``decompiled/NAMING.md``):

    Class::method(void)            -> Class__method
    Class::Class(...)       (C1/C2) -> Class__ctor
    Class::~Class()         (D0/D1) -> Class__dtor
    Class::method(...) const        -> Class__method_const
    Class::operator==               -> Class__operator_eq
    free function                   -> name as written

Usage:
    python apply_names.py            # dry run: report what would change
    python apply_names.py --apply    # actually rename
"""
from __future__ import annotations

import argparse
import json
import re
import subprocess
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))
from rpc import call  # noqa: E402

REPO = Path(r"C:\Users\Saif Khan\Downloads\nsmbud-reverse")
WORK = Path(r"C:\Users\Saif Khan\Downloads\main.idb\_work")
SYM = REPO / "sweetdx" / "symbols" / "nsmbudx.sym"
IMAGE_BASE = 0x60000000
CXXFILT = r"C:\Program Files\LLVM\bin\llvm-cxxfilt.exe"

OPERATOR_MAP = {
    "==": "eq", "!=": "ne", "<": "lt", "<=": "le", ">": "gt", ">=": "ge",
    "=": "assign", "+": "add", "-": "sub", "*": "mul", "/": "div", "%": "mod",
    "[]": "index", "()": "call", "->": "arrow", "new": "new", "delete": "delete",
    "++": "inc", "--": "dec", "&": "and", "|": "or", "^": "xor", "~": "not",
    "!": "lnot", "<<": "shl", ">>": "shr", "+=": "add_assign", "-=": "sub_assign",
}


def parse_sym(path: Path) -> dict[int, str]:
    """Return {virtual_address: symbol_name} from a SweetDX .sym file."""
    out: dict[int, str] = {}
    pat = re.compile(r"^(\S+)\s*=\s*0x([0-9A-Fa-f]+);")
    for line in path.read_text(encoding="utf-8", errors="replace").splitlines():
        line = line.strip()
        if not line or line.startswith("#"):
            continue
        m = pat.match(line)
        if m:
            out[IMAGE_BASE + int(m.group(2), 16)] = m.group(1)
    return out


def demangle_many(names: list[str]) -> dict[str, str]:
    """Batch-demangle with llvm-cxxfilt; unknown input passes through."""
    if not names:
        return {}
    try:
        proc = subprocess.run(
            [CXXFILT, "-n"], input="\n".join(names),
            capture_output=True, text=True, timeout=300,
        )
    except Exception as exc:  # pragma: no cover - tooling missing
        print("demangle failed: %s" % exc, file=sys.stderr)
        return {}
    if proc.returncode != 0:
        return {}
    lines = proc.stdout.splitlines()
    if len(lines) != len(names):
        return {}
    return dict(zip(names, lines))


def strip_args(s: str) -> str:
    """Cut the parameter list from a demangled signature."""
    depth = 0
    for i, ch in enumerate(s):
        if ch == "(":
            depth += 1
            if depth == 1:
                return s[:i].strip()
        elif ch == ")":
            depth = max(0, depth - 1)
    return s.strip()


def sanitize_cxx(sym: str, mangled_hint: str = "") -> str:
    """Turn an Itanium-demangled C++ name into this repo's Class__method form."""
    s = sym.strip()
    is_const = s.endswith(" const") or " const)" in s
    s = strip_args(s)

    # operator overloads
    m = re.search(r"(.*?)operator\s*([^\s(]+)", s)
    if m:
        cls, op = m.group(1), m.group(2).strip()
        op_id = OPERATOR_MAP.get(op, re.sub(r"[^A-Za-z0-9]+", "_", op).strip("_") or "op")
        s = "%soperator_%s" % (cls, op_id)

    s = re.sub(r"<[^<>]*>", "", s)  # template args
    s = s.replace("::", "__")
    s = re.sub(r"[^A-Za-z0-9_]", "_", s)
    s = re.sub(r"_+", "_", s).strip("_")
    if s and s[0].isdigit():
        s = "n_" + s
    if is_const and s:
        s += "_const"
    return s


def cxx_kind(mangled: str, pretty: str) -> str:
    """Classify a mangled C++ symbol: 'ctor', 'dtor', 'method' or ''.

    Itanium encodes the entity kind in the second character of the nested
    name after the length prefix, e.g. ``_ZN5ActorC1Ev``:
      C1/C2/C3 -> constructor, D0/D1/D2 -> destructor.
    """
    leaf = pretty.replace("::", "__")
    # Constructors: the leaf name equals the class name.
    parts = strip_args(pretty).split("::")
    if len(parts) >= 2 and parts[-1] == parts[-2]:
        return "ctor"
    if not parts:
        return ""
    if parts[-1].startswith("~"):
        return "dtor"
    m = re.match(r"^_ZN(?:\d+[A-Za-z0-9_]+)+?(C[123]|D[012])", mangled)
    if m:
        return "ctor" if m.group(1).startswith("C") else "dtor"
    return ""


def is_placeholder(name: str) -> bool:
    return bool(re.match(r"^(sub_|loc_|nullsub_|j_sub_|unknown_|j_nullsub_)", name or ""))


def valid_ident(name: str) -> bool:
    return bool(name) and bool(re.match(r"^[A-Za-z_][A-Za-z0-9_]*$", name)) and len(name) <= 120


def list_functions() -> list[dict]:
    out: list[dict] = []
    offset = 0
    while True:
        page = call("list_functions", {"offset": offset, "count": 5000}, timeout=600)
        data = page.get("data") or []
        out.extend({"address": int(d["address"], 16), "name": d["name"]} for d in data)
        offset = page.get("next_offset")
        if offset is None or not data:
            break
    return out


def candidate_for(ea: int, cur: str, raw: str) -> str:
    """Best identifier for one function, given a symbol-file or mangled name."""
    if raw.startswith("_Z"):
        pretty = demangle_many([raw]).get(raw, raw)
        if pretty == raw or "{lambda" in pretty:
            return ""
        base = sanitize_cxx(pretty, raw)
        if not base:
            return ""
        kind = cxx_kind(raw, pretty)
        if kind == "ctor":
            return base + "__ctor"
        if kind == "dtor":
            return base + "__dtor"
        return base
    # Already demangled / plain C symbol.
    base = sanitize_cxx(raw) if "(" in raw else re.sub(r"[^A-Za-z0-9_]", "_", raw).strip("_")
    return base if valid_ident(base) else ""


def build_plan(funcs: list[dict], sym: dict[int, str]) -> list[tuple[int, str, str]]:
    starts = {f["address"] for f in funcs}
    existing = {f["address"]: f["name"] for f in funcs}

    # Keep every name the database already considers meaningful.
    taken: dict[str, int] = {}
    for ea, nm in existing.items():
        if not is_placeholder(nm):
            taken.setdefault(nm, ea)

    plan: list[tuple[int, str, str]] = []
    assigned: set[int] = set()

    def resolve(ea: int, cur: str, cand: str) -> str:
        """Return a collision-free version of ``cand`` (or '' to skip)."""
        if not valid_ident(cand):
            return ""
        owner = taken.get(cand)
        if owner is None or owner == ea:
            return cand
        # Name taken by a different function: disambiguate with the address.
        cand2 = "%s_%X" % (cand, ea & 0xFFFFFF)
        return cand2 if valid_ident(cand2) else ""

    # 1. Mangled names already in the database.
    mangled = {ea: nm for ea, nm in existing.items()
               if nm.startswith("_Z") and not nm.startswith("__")}
    for ea, nm in sorted(mangled.items()):
        cand = resolve(ea, nm, candidate_for(ea, nm, nm))
        if cand:
            plan.append((ea, nm, cand))
            taken[cand] = ea
            assigned.add(ea)

    # 2. Symbol file, only where it improves on the current name.
    for ea in sorted(sym):
        if ea not in starts or ea in assigned:
            continue
        cur = existing.get(ea, "")
        cand = resolve(ea, cur, candidate_for(ea, cur, sym[ea]))
        if not cand or cand == cur:
            continue
        if not is_placeholder(cur) and not cur.startswith("_Z"):
            continue  # never overwrite a good database name
        plan.append((ea, cur, cand))
        taken[cand] = ea
        assigned.add(ea)

    return plan


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--limit", type=int, default=0)
    args = ap.parse_args()

    sym = parse_sym(SYM)
    funcs = list_functions()
    print("db functions: %d   sym entries: %d" % (len(funcs), len(sym)))

    plan = build_plan(funcs, sym)
    print("rename candidates: %d" % len(plan))
    if args.limit:
        plan = plan[: args.limit]

    WORK.mkdir(parents=True, exist_ok=True)
    (WORK / "rename_plan.json").write_text(
        json.dumps([{"ea": hex(e), "old": o, "new": n} for e, o, n in plan], indent=1)
    )
    for ea, old, new in plan[:15]:
        print("  %08X  %-42s -> %s" % (ea, old[:42], new))

    if not args.apply:
        print("dry run; pass --apply to write")
        return 0

    t0 = time.time()
    done = skipped = 0
    for ea, old, new in plan:
        try:
            call("rename_function", {"function_address": hex(ea), "new_name": new}, timeout=60)
            done += 1
        except Exception as exc:
            skipped += 1
            if skipped < 10:
                print("  skip %08X %s: %s" % (ea, new, exc))
        if done and done % 500 == 0:
            print("  applied %d/%d  %.1fs" % (done, len(plan), time.time() - t0))
    print("APPLIED %d skipped %d in %.1fs" % (done, skipped, time.time() - t0))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
