"""Build a rename plan for every function in the authoritative database.

Offline: reads the exported function inventory, the in-repo symbol file, and
(optionally) a second database's inventory, and emits ``name_plan.json``.

Sources, in priority order:

1. Names already meaningful in the authoritative database (kept as-is).
2. Itanium-mangled names present in the database, demangled and flattened.
3. ``nsmbudx.sym`` entries that land on a function start.
4. Names discovered in another database of the *same binary* (harvest), but
   only where the authoritative database still has a placeholder.

Usage:
    python build_name_plan.py \
        --state  _probe/db_state.json \
        --out    _work/name_plan.json \
        [--harvest _work/db_state_cm.json]
"""
from __future__ import annotations

import argparse
import json
import re
import subprocess
import sys
from pathlib import Path

REPO = Path(r"C:\Users\Saif Khan\Downloads\nsmbud-reverse")
WORK = Path(r"C:\Users\Saif Khan\Downloads\main.idb\_work")
SYM = REPO / "sweetdx" / "symbols" / "nsmbudx.sym"
IMAGE_BASE = 0x60000000
CXXFILT = r"C:\Program Files\LLVM\bin\llvm-cxxfilt.exe"

PLACEHOLDER = re.compile(
    r"^(sub_|loc_|nullsub_|j_sub_|j_nullsub_|unknown_|unk_|byte_|word_|dword_|qword_|off_|asc_|a[0-9])"
)

OPERATOR_MAP = {
    "==": "eq", "!=": "ne", "<=": "le", ">=": "ge", "<": "lt", ">": "gt",
    "=": "assign", "+": "add", "-": "sub", "*": "mul", "/": "div", "%": "mod",
    "[]": "index", "()": "call", "->": "arrow", "new": "new", "delete": "delete",
    "++": "inc", "--": "dec", "&": "and", "|": "or", "^": "xor", "~": "not",
    "!": "lnot", "<<": "shl", ">>": "shr", "+=": "add_assign", "-=": "sub_assign",
    "*=": "mul_assign", "/=": "div_assign", "->*": "arrow_star",
}


def is_placeholder(name: str) -> bool:
    return bool(PLACEHOLDER.match(name or ""))


def parse_sym(path: Path) -> dict[int, str]:
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
    if not names:
        return {}
    try:
        proc = subprocess.run(
            [CXXFILT, "-n"], input="\n".join(names),
            capture_output=True, text=True, timeout=600,
        )
    except Exception as exc:
        print("demangle unavailable: %s" % exc, file=sys.stderr)
        return {}
    if proc.returncode != 0:
        return {}
    lines = proc.stdout.splitlines()
    if len(lines) != len(names):
        return {}
    return dict(zip(names, lines))


def strip_args(s: str) -> str:
    depth = 0
    for i, ch in enumerate(s):
        if ch == "(":
            depth += 1
            if depth == 1:
                return s[:i].strip()
        elif ch == ")":
            depth = max(0, depth - 1)
    return s.strip()


def sanitize(sym: str) -> str:
    """Demangled C++ signature -> Class__method identifier."""
    s = sym.strip()
    is_const = s.endswith(" const") or s.endswith(" const noexcept")
    s = strip_args(s)

    m = re.search(r"(.*?)operator\s*([^\s(]+)", s)
    if m:
        cls, op = m.group(1), m.group(2).strip()
        op_id = OPERATOR_MAP.get(op) or re.sub(r"[^A-Za-z0-9]+", "_", op).strip("_") or "op"
        s = "%soperator_%s" % (cls, op_id)

    s = re.sub(r"<[^<>]*>", "", s)
    # The scope separator must survive the underscore cleanup below, so protect
    # it first: collapsing "_+" would otherwise destroy every "Class__method".
    s = s.replace("::", "\x00")
    s = re.sub(r"[^A-Za-z0-9_\x00]", "_", s)
    s = re.sub(r"_+", "_", s).strip("_")
    s = s.replace("\x00", "__")
    if s and s[0].isdigit():
        s = "n_" + s
    if is_const and s:
        s += "_const"
    return s


def entity_kind(mangled: str, pretty: str) -> str:
    parts = strip_args(pretty).split("::")
    if len(parts) >= 2 and parts[-1] == parts[-2]:
        return "ctor"
    if parts and parts[-1].startswith("~"):
        return "dtor"
    return ""


def candidate(raw: str) -> str:
    """Identifier for a raw symbol-file or mangled name ('' if unusable)."""
    if raw.startswith("_Z"):
        pretty = demangle_many([raw]).get(raw, "")
        if not pretty or pretty == raw or "{lambda" in pretty:
            return ""
        base = sanitize(pretty)
        if not base:
            return ""
        kind = entity_kind(raw, pretty)
        if kind == "ctor":
            return base + "__ctor"
        if kind == "dtor":
            return base + "__dtor"
        return base
    if is_placeholder(raw):
        return ""
    base = sanitize(raw) if "(" in raw else re.sub(r"[^A-Za-z0-9_]", "_", raw).strip("_")
    return base


def valid(name: str) -> bool:
    return bool(name) and bool(re.match(r"^[A-Za-z_][A-Za-z0-9_]*$", name)) and len(name) <= 120


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--state", required=True)
    ap.add_argument("--out", required=True)
    ap.add_argument("--harvest", default=None)
    args = ap.parse_args()

    state = json.loads(Path(args.state).read_text())
    funcs = state["funcs"]
    starts = {f["ea"] for f in funcs}
    current = {f["ea"]: f["name"] for f in funcs}
    print("db functions: %d  (named %d)" % (len(funcs), state.get("named", -1)))

    sym = parse_sym(SYM)
    print("sym entries: %d" % len(sym))

    taken: dict[str, int] = {}
    for ea, nm in current.items():
        if nm and not is_placeholder(nm):
            taken.setdefault(nm, ea)

    plan: list[dict] = []
    assigned: set[int] = set()

    def reserve(ea: int, cand: str) -> str:
        if not valid(cand):
            return ""
        owner = taken.get(cand)
        if owner is None or owner == ea:
            taken[cand] = ea
            return cand
        alt = "%s_%X" % (cand, ea & 0xFFFFFF)
        if valid(alt) and alt not in taken:
            taken[alt] = ea
            return alt
        return ""

    # 1 + 2: mangled names already in the database.
    mangled = [nm for nm in current.values() if nm.startswith("_Z") and not nm.startswith("__")]
    dem = demangle_many(sorted(set(mangled)))
    for ea in sorted(current):
        nm = current[ea]
        if not (nm.startswith("_Z") and not nm.startswith("__")):
            continue
        pretty = dem.get(nm, "")
        if not pretty or pretty == nm or "{lambda" in pretty:
            continue
        base = sanitize(pretty)
        kind = entity_kind(nm, pretty)
        if kind == "dtor":
            # ``StageActor::~StageActor`` -> sanitising the class scope alone
            # avoids the stray leaf and the operator ``~`` underscore.
            parts = strip_args(pretty).split("::")
            base = sanitize("::".join(parts[:-1])) if len(parts) > 1 else base
        elif kind == "ctor" and "__" in base:
            # ``StageActor::StageActor`` sanitises to ``StageActor__StageActor``;
            # collapse the repeated leaf so the result reads ``StageActor__ctor``.
            head, _, tail = base.rpartition("__")
            if head.split("__")[-1] == tail:
                base = head
        want = base + ("__ctor" if kind == "ctor" else "__dtor" if kind == "dtor" else "")
        got = reserve(ea, want)
        if got:
            plan.append({"ea": ea, "old": nm, "new": got, "src": "demangle"})
            assigned.add(ea)

    # 3: symbol file.
    for ea in sorted(sym):
        if ea not in starts or ea in assigned:
            continue
        cur = current.get(ea, "")
        if not is_placeholder(cur) and not cur.startswith("_Z"):
            continue
        got = reserve(ea, candidate(sym[ea]))
        if got and got != cur:
            plan.append({"ea": ea, "old": cur, "new": got, "src": "sym"})
            assigned.add(ea)

    # 4: harvest from another DB of the same binary.
    if args.harvest:
        h = json.loads(Path(args.harvest).read_text())
        hcur = {f["ea"]: f["name"] for f in h["funcs"]}
        added = 0
        for ea in sorted(hcur):
            if ea not in starts or ea in assigned:
                continue
            cur = current.get(ea, "")
            if not is_placeholder(cur):
                continue
            nm = hcur[ea]
            if is_placeholder(nm):
                continue
            got = reserve(ea, candidate(nm) or nm)
            if got:
                plan.append({"ea": ea, "old": cur, "new": got, "src": "harvest"})
                assigned.add(ea)
                added += 1
        print("harvest additions: %d" % added)

    Path(args.out).write_text(json.dumps(plan, indent=0))
    by_src: dict[str, int] = {}
    for p in plan:
        by_src[p["src"]] = by_src.get(p["src"], 0) + 1
    print("PLAN %d renames %s" % (len(plan), by_src))
    print("named after plan: %d / %d" % (len(taken), len(funcs)))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
