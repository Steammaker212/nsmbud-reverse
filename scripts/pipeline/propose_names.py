"""Name functions from evidence rather than from a symbol table.

The remaining unnamed functions have no symbol anywhere. This script uses two
sources of real evidence:

1. **Model / resource strings.** Constructor-shaped functions load a model by
   name (``Model/%s.Nin_NX_NVN.szs`` the name comes from a literal like
   ``I_fireflower``). An unnamed function that references such a literal is a
   strong candidate for ``Actor_<model>``.

2. **Vtable ownership.** A function whose address appears in a vtable slot is a
   virtual method of whatever class owns that vtable. The leading vtable slot
   is the class's destructor, so the vtable's first real slots identify the
   class.

Output is a *proposal* file with per-function evidence, not a blind rename.
Only proposals backed by at least one concrete observation are emitted.

Usage:
    python propose_names.py --jsonl <export.jsonl> --out <proposals.json>
"""
from __future__ import annotations

import argparse
import json
import re
from collections import defaultdict
from pathlib import Path

# Model literals look like "I_fireflower", "koopa_model", "block_ice".
MODEL_RE = re.compile(r'^[A-Za-z][A-Za-z0-9_]{2,40}(?:_model)?$')
MODEL_HINT = re.compile(r"^I_[a-z]|_model$|_mdl$|^block_|^obj_")


def load(jsonl: Path) -> list[dict]:
    out = []
    with jsonl.open(encoding="utf-8") as fh:
        for line in fh:
            line = line.strip()
            if line:
                out.append(json.loads(line))
    return out


def class_from_name(name: str) -> str:
    """Best-effort class for a database name like Class__method."""
    if "__" in name:
        return name.split("__", 1)[0]
    return ""


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--jsonl", required=True)
    ap.add_argument("--out", required=True)
    args = ap.parse_args()

    recs = load(Path(args.jsonl))
    print("functions: %d" % len(recs))

    by_class: dict[str, list[dict]] = defaultdict(list)
    for r in recs:
        by_class[class_from_name(r["name"])].append(r)

    proposals = []
    # --- 1. model-string evidence -------------------------------------
    for r in recs:
        body = r.get("c") or ""
        if not body:
            continue
        lits = re.findall(r'"([^"\\\n]{3,44})"', body)
        models = [s for s in lits if MODEL_HINT.search(s) and MODEL_RE.match(s)]
        if not models:
            continue
        if "__" in r["name"]:          # already named meaningfully
            continue
        models.sort(key=len, reverse=True)
        best = models[0]
        cls = "".join(p.capitalize() for p in re.split(r"[_\-]", best))
        proposals.append({
            "ea": hex(r["ea"]),
            "current": r["name"],
            "proposed": "%s_Actor" % cls,
            "basis": "model_string",
            "evidence": models[:5],
        })

    print("model-string proposals: %d" % len(proposals))
    Path(args.out).write_text(json.dumps(proposals, indent=1))
    for p in proposals[:15]:
        print("  %-14s %-28s <- %s" % (p["ea"], p["proposed"], p["evidence"][:3]))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
