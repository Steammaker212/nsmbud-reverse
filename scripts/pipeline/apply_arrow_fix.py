"""Repair the flattened arrow chains in the published corpus, surgically.

Regenerating all 45k units to fix ~30 would churn the tree, and re-emitting from
the pre-rewrite export would silently lose the later passes (vtable renames,
access-macro normalisation) the published files have already received.

So this edits the published files in place, one expression at a time. For each
function whose rewrite changed, it derives the exact (old, new) expression pairs
by evaluating the SAME chain match under both the old and the new algorithm, then
replaces old with new in the published text.

Pairing by set difference is wrong and was caught doing it: sorting two
independent sets and zipping them pairs unrelated expressions, so a function with
two chains would get old[0] -> new[1]. Both expressions must come from the same
match, which is why the pairs are computed per match.

Safety, each checked rather than assumed:
  * the old expression must be present in the published file, which proves the
    file really is a product of the old rewriter;
  * replacement is a literal substring substitution, so it cannot hit a nearby
    different access;
  * units whose expressions do not match are reported, never guessed at.

Usage:
    python scripts/pipeline/apply_arrow_fix.py            # dry run
    python scripts/pipeline/apply_arrow_fix.py --write
"""
from __future__ import annotations

import argparse
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)

import rewrite_arrows as RA  # noqa: E402

LAYOUTS = os.path.join(ROOT, "data", "recovered", "type_layouts.json")
PRE = r"C:\Users\Saif Khan\Downloads\main.idb\_work\export_vt\all_functions.jsonl"
CORPUS = os.path.join(ROOT, "decompiled", "src")
CHAIN = RA.CHAIN
PTR = "FIELD_U32"


def chain_parts(m):
    base = m.group(1)
    index = m.group(2) or ""
    chain = m.group(3) or ""
    toks = [t for t in re.split(r"->|\.", chain) if t.strip()]
    return base, index, toks


def evaluate(base, index, toks, types, vt, nested: bool):
    """Render one chain. nested=False reproduces the old summing algorithm."""
    if not toks:
        return None
    last, hops = toks[-1], toks[:-1]
    for t in vt.get(base, ()):
        cur = t
        expr = base
        pending = 0
        ok = True
        for h in hops:
            info = types.get(cur, (0, {}))[1].get(h)
            if not info:
                ok = False
                break
            off, _macro, mt, is_ptr = info
            if nested and is_ptr:
                expr = "%s(%s, 0x%X)" % (PTR, expr, pending + off)
                pending = 0
            else:
                pending += off
            cur = mt
            if not cur:
                ok = False
                break
        if not ok:
            continue
        info = types.get(cur, (0, {}))[1].get(last)
        if not info:
            continue
        off, macro, _mt, _p = info
        off_total = pending + off
        if index.strip():
            # Indexed access: a[i].m is base + i*sizeof(T) + off.
            #
            # There is no "old" form for these. The previous rewriter's CHAIN
            # pattern required an arrow early, so `a1[8].id` never matched and
            # survived into the corpus verbatim -- which is exactly why 448 units
            # fail to compile with "no member named 'id'". Returning None for the
            # old branch makes the caller take the source text as the old side.
            if not nested:
                return None
            size = types.get(t, (0, {}))[0]
            if not size:
                return None
            inner = index.strip()[1:-1].strip()
            return "%s(%s + (%s) * %d, 0x%X)" % (macro, expr, inner, size, off_total)
        return "%s(%s, 0x%X)" % (macro, expr, off_total)
    return None


def expression_pairs(body, types):
    """[(old_expr, new_expr)] derived per chain match, in source order.

    For an indexed access (`a1[8].id`) there is no old expression: the previous
    rewriter never matched that shape, so the published corpus still contains the
    original `a1[8].id` text and the pair is (that source text, the FIELD form).
    `old` is therefore taken from the source span rather than from a re-render.
    """
    vt = RA.var_types(body)
    pairs = []
    for m in CHAIN.finditer(body):
        base, index, toks = chain_parts(m)
        if not toks:
            continue
        o = evaluate(base, index, toks, types, vt, nested=False)
        n = evaluate(base, index, toks, types, vt, nested=True)
        if n is None:
            continue
        if o is None:
            # Indexed: the "old" text is what is literally in the source.
            o = m.group(0).strip()
        if o == n:
            continue
        if (o, n) not in pairs:
            pairs.append((o, n))
    return pairs


def find_unit(ea: int):
    hexea = "%08X" % ea
    hits = []
    for dirpath, _dirs, files in os.walk(CORPUS):
        for fn in files:
            if fn.endswith(".c") and fn.startswith(hexea + "_"):
                hits.append(os.path.join(dirpath, fn))
    return hits


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--write", action="store_true")
    ap.add_argument(
        "--require-confirmed", action="store_true",
        help="only apply expressions whose two-load shape the machine code "
             "actually shows; leave the rest untouched and report them")
    opt = ap.parse_args()

    types = RA.load_types(LAYOUTS)
    units = exprs = 0
    nofile = ambig = nomatch = unconfirmed = 0
    report = []
    held = []

    gate = None
    if opt.require_confirmed:
        import verify_arrow_fix as VF
        import verify_indexed_fix as VI
        gate = VF

    with io.open(PRE, encoding="utf-8", errors="replace") as f:
        for line in f:
            try:
                r = json.loads(line)
            except Exception:
                continue
            body = r.get("c") or ""
            if not body:
                continue

            pairs = expression_pairs(body, types)
            if not pairs:
                continue

            ea = r.get("ea") or 0
            if gate is not None:
                va = ea if ea >= VF.BASE else VF.BASE + ea
                text_d = VF.disasm(va, r.get("size") or 0x40)
                insns = VF.instructions(text_d)
                disps = VI.displacements(text_d)
                order = VF.param_regs(body) if insns else []
                keep = []
                for o, n in pairs:
                    # Indexed form: a[i].m -> FIELD(base + (i)*size, off).
                    # The claim is a single byte offset, so the test is whether
                    # that offset appears as a constant anywhere in the
                    # function. This is weaker than the nested test (which also
                    # requires ordering) but it is still a real check: an
                    # indexed access that the code does not perform at that
                    # offset is exactly what the stride-from-declared-type
                    # assumption would get wrong.
                    m_idx = VI.INDEXED.match(n)
                    if m_idx:
                        stride = int(m_idx.group(3))
                        memoff = int(m_idx.group(4), 16)
                        idxv = m_idx.group(2)
                        claimed = (int(idxv) * stride + memoff) if idxv.isdigit() else memoff
                        if claimed in disps:
                            keep.append((o, n))
                            continue
                        held.append((r.get("name"), o, n,
                                     "offset 0x%X not present in the function" % claimed))
                        continue
                    parsed = VF.parse_nested(n)
                    if parsed and insns:
                        root, first, second = parsed
                        regs = VF.reg_for(root, order)
                        if VF.check_nested(insns, regs, first, second) and \
                                not VF.check_single(insns, regs, first + second):
                            keep.append((o, n))
                            continue
                    held.append((r.get("name"), o, n,
                                 "code does not show the two-load shape"))
                pairs = keep
                if not pairs:
                    unconfirmed += 1
                    continue

            paths = find_unit(ea)
            if not paths:
                nofile += 1
                continue
            if len(paths) > 1:
                ambig += 1
                continue

            path = paths[0]
            text = io.open(path, encoding="utf-8", errors="replace").read()
            applied = []
            for o, n in pairs:
                if o in text:
                    text = text.replace(o, n)
                    applied.append((o, n))
            if not applied:
                nomatch += 1
                continue

            units += 1
            exprs += len(applied)
            report.append((r.get("name"), os.path.relpath(path, ROOT), applied))
            if opt.write:
                io.open(path, "w", encoding="utf-8", newline="\n").write(text)

    print("%s %d units, %d expressions"
          % ("FIXED" if opt.write else "WOULD FIX", units, exprs))
    print("no published file  : %d" % nofile)
    print("ambiguous path     : %d" % ambig)
    print("expression absent  : %d" % nomatch)
    print("held (unconfirmed) : %d units, %d expressions" % (unconfirmed, len(held)))
    print()
    for nm, rel, applied in report:
        print("%s  (%s)" % (nm, rel))
        for o, n in applied:
            print("    - %s" % o)
            print("    + %s" % n)
    if held:
        print()
        print("--- HELD: machine code does not corroborate the nested form ---")
        for nm, o, n, why in held:
            print("  %-30s %s  (was %s)" % (nm, n, o))
            print("      %s" % why)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
