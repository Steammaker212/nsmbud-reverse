"""Plan the struct types and `this` prototypes that make Hex-Rays output readable.

Hex-Rays prints `*(unsigned __int8 *)(a1 + 6900)` because it does not know a1
is a Player. Give it the type and it prints `this->field_1AF4`; give it the
embedded StateMgr and `StateMgr::getCurrentState((StateMgr *)(a1 + 9916))`
becomes `StateMgr::getCurrentState(&this->stateMgr_26BC)`. The decompiler
does the rewriting, so the result is exact by construction rather than by
regex.

This script only plans. It reads the corpus (whose FIELD_* offsets are exact)
and the live database's existing structs, and writes:

    data/readability/types_plan.json   classes, members, evidence, prototypes
    data/readability/types_plan.h      the C declarations, for review

Evidence rules -- nothing here is named on a hunch:

  * A class is a function-name prefix (`Player_stun` -> Player) whose methods
    use their first parameter as an object base.
  * Base class: the first `X_ctor(this, ...)` call in the class's own ctor.
  * Size: `operator_new(N)` immediately constructed by the class's ctor. When
    absent the size is the measured lower bound and is marked so.
  * Member width/type: the widths the methods actually read and write.
  * Embedded object: `(T *)(this + N)` or `(T *)&FIELD(this, N)` handed to code
    that takes a T. Its size is T's size when the database defines T.
  * Member name: data/readability/known_fields.csv (each row cites a source),
    `<type>_<offset>` for embedded objects, `field_<offset>` otherwise.

Classes the database already defines (RicBent's layouts) are never redefined.

Usage:
    python scripts/ida/plan_types.py --repo .
"""
from __future__ import annotations

import argparse
import collections
import csv
import glob
import json
import os
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from ida_rpc import IDA  # noqa: E402

WIDTH = {"U8": 1, "S8": 1, "U16": 2, "S16": 2, "U32": 4, "S32": 4,
         "F32": 4, "U64": 8, "F64": 8}
CAST_WIDTH = {"_BYTE": 1, "char": 1, "unsigned __int8": 1, "__int8": 1, "bool": 1,
              "_WORD": 2, "__int16": 2, "unsigned __int16": 2,
              "_DWORD": 4, "int": 4, "unsigned int": 4, "float": 4,
              "_QWORD": 8, "__int64": 8, "unsigned __int64": 8, "double": 8}
NOT_CLASSES = set(CAST_WIDTH) | {"void", "unsigned", "signed", "const", "struct"}
OBJ = r"(?:a1|this)"
NUM = r"(0x[0-9A-Fa-f]+|\d+)"

RE_FIELD = re.compile(r"FIELD_(\w\d+)\(\s*(?:\([^()]*\)\s*)?" + OBJ + r"\s*,\s*" + NUM + r"\s*\)(?:\[(\d+)\])?")
RE_CAST_IDX = re.compile(r"\*\s*\(\s*([\w ]+?)\s*\*\s*\)\s*&FIELD_\w\d+\(\s*(?:\([^()]*\)\s*)?" + OBJ + r"\s*,\s*" + NUM + r"\s*\)\[(\d+)\]")
RE_EMBED_ADD = re.compile(r"\(\s*(\w+)\s*\*\s*\)\s*\(\s*" + OBJ + r"\s*\+\s*" + NUM + r"\s*\)")
RE_EMBED_FIELD = re.compile(r"\(\s*(\w+)\s*\*\s*\)\s*&FIELD_\w\d+\(\s*(?:\([^()]*\)\s*)?" + OBJ + r"\s*,\s*" + NUM + r"\s*\)(?:\[(\d+)\])?")
RE_NEW = re.compile(r"(\w+)\s*=\s*(?:\([^()]*\)\s*)?operator_new\w*\(\s*(0x[0-9A-Fa-f]+|\d+)u?\b")


def class_of(name: str):
    if re.search(r"_ref(_[0-9A-F]+)?$|^(sub|nullsub|j|loc)_|^SE_|^[A-Z0-9_]+$", name):
        return None
    m = re.match(r"^((?:[A-Za-z][A-Za-z0-9]*__)*?[A-Z][A-Za-z0-9]*?)_{1,2}(?=[a-zA-Z])", name)
    return m.group(1) if m else None


def ctor_class(call: str):
    m = re.match(r"^(\w+?)_{1,2}ctor$", call)
    return m.group(1) if m else None


def load_units(repo: Path):
    for p in glob.glob(str(repo / "decompiled/src/*/*.c")):
        b = os.path.basename(p)
        addr, name = b[:8], b[9:-2]
        if not re.fullmatch(r"[0-9A-F]{8}", addr):
            continue  # collapsed-veneer maplists carry no single address
        yield int(addr, 16), name, open(p, encoding="utf-8", errors="replace").read()


def body_of(text: str) -> str:
    i = text.find("\n{")
    return text[i:] if i >= 0 else ""


def scalar_type(widths: collections.Counter, floats: int) -> tuple[int, str]:
    w = max(widths)
    if w == 4:
        return 4, "float" if floats and floats == sum(widths.values()) else "_DWORD"
    if w == 8:
        return 8, "_QWORD"
    return w, {1: "_BYTE", 2: "_WORD"}.get(w, "_DWORD")


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--repo", default=".")
    ap.add_argument("--min-methods", type=int, default=3)
    ap.add_argument("--min-offsets", type=int, default=5)
    args = ap.parse_args()
    repo = Path(args.repo).resolve()

    ida = IDA()
    existing = {s["name"]: int(s["size"], 16) for s in ida.call("get_defined_structures")}

    known = collections.defaultdict(dict)
    for r in csv.DictReader(open(repo / "data/readability/known_fields.csv", encoding="utf-8")):
        known[r["class"]][int(r["offset"], 16)] = (r["name"], r["type"], r["source"])

    methods = collections.defaultdict(list)       # class -> [(addr, name)]
    reach = {}                                     # addr -> furthest byte touched on this
    scal = collections.defaultdict(lambda: collections.defaultdict(collections.Counter))
    flt = collections.defaultdict(collections.Counter)
    embed = collections.defaultdict(dict)          # class -> off -> type
    bases, sizes = {}, {}

    for addr, name, text in load_units(repo):
        body = body_of(text)
        # Size evidence can come from any function: v = operator_new(N); C_ctor(v, ...)
        for var, n in RE_NEW.findall(body):
            m = re.search(r"\b(\w+?_{1,2}ctor)\(\s*(?:\([^()]*\)\s*)?" + re.escape(var) + r"\b", body)
            c = ctor_class(m.group(1)) if m else None
            if c:
                sizes.setdefault(c, set()).add(int(n, 0))
        c = class_of(name)
        if not c or name.endswith("_create"):
            continue
        hits, far = 0, 0
        for w, off, idx in RE_FIELD.findall(body):
            o = int(off, 0) + (int(idx) if idx else 0)
            width = 1 if idx else WIDTH.get(w, 4)
            scal[c][o][width] += 1
            flt[c][o] += w.startswith("F")
            hits += 1
            far = max(far, o + width)
        for t, off, idx in RE_CAST_IDX.findall(body):
            o = int(off, 0) + int(idx)
            scal[c][o][CAST_WIDTH.get(t.strip(), 4)] += 1
            flt[c][o] += t.strip() == "float"
            far = max(far, o + CAST_WIDTH.get(t.strip(), 4))
        for rx in (RE_EMBED_ADD, RE_EMBED_FIELD):
            for g in rx.findall(body):
                t, off = g[0], g[1]
                idx = g[2] if len(g) > 2 and g[2] else "0"
                if t in NOT_CLASSES or t == c:
                    continue
                embed[c][int(off, 0) + int(idx)] = t
                hits += 1
                far = max(far, int(off, 0) + int(idx) + 1)
        if hits:
            methods[c].append((addr, name))
            reach[addr] = far
        if re.fullmatch(re.escape(c) + r"_{1,2}ctor", name):
            m = re.search(r"\b(\w+?_{1,2}ctor)\(\s*(?:\([^()]*\)\s*)?(?:&FIELD_U32\()?" + OBJ + r"\b", body)
            b = ctor_class(m.group(1)) if m else None
            if b and b != c:
                bases[c] = b

    plan = {"classes": {}, "prototypes": []}
    order = []

    def size_of(c):
        if c in existing:
            return existing[c]
        p = plan["classes"].get(c)
        return p["size"] if p else None

    candidates = [c for c in methods
                  if c not in existing
                  and len(methods[c]) >= args.min_methods
                  and len(scal[c]) + len(embed[c]) >= args.min_offsets]

    # A derived class's access below its base's measured extent touches an
    # inherited member, so the evidence belongs to the base. Push it down the
    # chain until nothing moves (Player -> PlayerBase; Yoshi -> PlayerBase).
    def extent(c):
        if c in existing:
            return existing[c]
        offs = list(scal[c]) + list(embed[c])
        return max(offs) + 1 if offs else 0

    moved = True
    while moved:
        moved = False
        for c in candidates:
            b = bases.get(c)
            if b not in candidates or b == c:
                continue
            lb = extent(b)
            for o in [o for o in scal[c] if o < lb]:
                scal[b][o].update(scal[c].pop(o))
                flt[b][o] += flt[c].pop(o, 0)
                moved = True
            for o in [o for o in embed[c] if o < lb]:
                embed[b].setdefault(o, embed[c].pop(o))
                moved = True
            for o in [o for o in known[c] if o < lb]:
                known[b].setdefault(o, known[c].pop(o))
                moved = True
    # Bases first, so a derived class can embed its base at offset 0.
    pending = set(candidates)
    while pending:
        progressed = False
        for c in sorted(pending):
            b = bases.get(c)
            if b and b in pending and b != c:
                continue
            plan_class(c, b if (b in existing or b in plan["classes"]) else None,
                       size_of, scal, flt, embed, known, sizes, existing, plan)
            order.append(c)
            pending.discard(c)
            progressed = True
        if not progressed:  # inheritance cycle in the evidence: plan without bases
            for c in sorted(pending):
                plan_class(c, None, size_of, scal, flt, embed, known, sizes, existing, plan)
                order.append(c)
            pending.clear()

    # Retype `this` only where the method's accesses fit inside the class. A
    # function that reaches past sizeof(C) is not (only) a C method -- e.g. the
    # Actor-prefixed functions that touch 0x157D8 of a 0x50-byte Actor.
    refused = 0
    for c, ms in methods.items():
        size = size_of(c)
        if size is None:
            continue
        for addr, name in ms:
            if reach.get(addr, 0) > size:
                refused += 1
                continue
            plan["prototypes"].append({"address": f"0x{addr:08X}", "name": name, "class": c})
    plan["prototypes_refused_out_of_bounds"] = refused

    out = repo / "data/readability"
    out.mkdir(parents=True, exist_ok=True)
    plan["order"] = order
    json.dump(plan, open(out / "types_plan.json", "w"), indent=1)
    with open(out / "types_plan.h", "w", encoding="utf-8", newline="\n") as fh:
        fh.write("// Planned by scripts/ida/plan_types.py; applied to IDA by apply_types.py.\n\n")
        for c in order:
            fh.write(plan["classes"][c]["decl"] + "\n\n")

    print(f"existing database structs : {len(existing)}")
    print(f"classes planned           : {len(order)}")
    print(f"  with measured size      : {sum(1 for c in order if plan['classes'][c]['size_evidence'] == 'operator_new')}")
    print(f"  with a base class       : {sum(1 for c in order if plan['classes'][c]['base'])}")
    print(f"members planned           : {sum(len(plan['classes'][c]['members']) for c in order)}")
    print(f"  named from evidence     : {sum(1 for c in order for m in plan['classes'][c]['members'] if m['source'])}")
    print(f"this-prototypes planned   : {len(plan['prototypes'])}")
    print(f"  refused, out of bounds  : {plan['prototypes_refused_out_of_bounds']}")


def plan_class(c, base, size_of, scal, flt, embed, known, sizes, existing, plan):
    start = size_of(base) if base else 0
    fields = []
    for o, t in embed[c].items():
        if o >= start:
            fields.append((o, existing.get(t), "embed", t))
    for o, widths in scal[c].items():
        if o >= start:
            w, ty = scalar_type(widths, flt[c][o])
            fields.append((o, w, "scalar", ty))
    # Embedded objects of known size win over the accesses inside them; then
    # wider scalars win over narrower ones at the same offset.
    fields.sort(key=lambda f: (f[0], f[2] != "embed", -(f[1] or 0)))
    members, end = [], start
    for i, (o, w, kind, ty) in enumerate(fields):
        if o < end:
            continue
        nxt = next((f[0] for f in fields[i + 1:] if f[0] > o), None)
        if kind == "embed" and w is None:
            w = (nxt - o) if nxt else 4   # opaque: up to the next evidenced member
            ty = f"_BYTE /*{ty}*/"
            opaque = True
        else:
            opaque = False
        if nxt is not None and o + w > nxt and kind == "scalar":
            continue
        name, src = (known[c][o][0], known[c][o][2]) if o in known[c] else (None, "")
        if not name:
            name = (f"{fields[i][3][0].lower()}{fields[i][3][1:]}_{o:X}" if kind == "embed"
                    else f"field_{o:X}")
        members.append({"offset": o, "size": w, "type": ty, "name": name,
                        "kind": kind, "opaque": opaque, "source": src})
        end = o + w
    # A subclass built through C's ctor allocates at least sizeof(C), so the
    # smallest allocation is the class's own (Player 0x3AF8 vs a 0x3B30 subclass).
    measured = sorted(sizes.get(c, ()))
    if measured and measured[0] >= end:
        size, ev = measured[0], "operator_new"
    else:
        size, ev = max(end, start), "lower bound" if not measured else f"inconsistent {measured}"

    lines = [f"struct {c}", "{"]
    if base:
        lines.append(f"  {base} base;  // 0x0, base class (first ctor call)")
    cur = start
    for m in members:
        if m["offset"] > cur:
            lines.append(f"  _BYTE gap_{cur:X}[0x{m['offset'] - cur:X}];")
        if m["kind"] == "embed" and not m["opaque"]:
            decl = f"  {m['type']} {m['name']};"
        elif m["opaque"]:
            decl = f"  _BYTE {m['name']}[0x{m['size']:X}];  /* {m['type'].split('/*')[1][:-2]} */"
        else:
            decl = f"  {m['type']} {m['name']};"
        lines.append(f"{decl}  // 0x{m['offset']:X}" + (f"  {m['source']}" if m["source"] else ""))
        cur = m["offset"] + m["size"]
    if size > cur:
        lines.append(f"  _BYTE gap_{cur:X}[0x{size - cur:X}];")
    lines.append("};")
    plan["classes"][c] = {"base": base, "size": size, "size_evidence": ev,
                          "members": members, "decl": "\n".join(lines)}


if __name__ == "__main__":
    main()
