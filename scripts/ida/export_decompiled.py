"""Export every function of the live IDA database as Hex-Rays text (RE_PLAN step 0.2).

Reads through ida-pro-mcp only (no writes), so it is safe to run against
RicBent's original database. One JSON object per line:

    {"address": "0x607A1F5C", "name": "Player_stun", "size": 152, "c": "...", "error": null}

The export is resumable: addresses already present in the output are skipped,
so an interrupted run continues where it stopped.

Usage:
    python scripts/ida/export_decompiled.py --out data/export/ricbent_v1.jsonl [--limit N]
"""
from __future__ import annotations

import argparse
import json
import re
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from ida_rpc import IDA, RpcError  # noqa: E402

LINE_TAG = re.compile(r"^/\* line: \d+(?:, address: 0x[0-9a-f]+)? \*/ ?", re.M)


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--out", required=True)
    ap.add_argument("--limit", type=int, default=0)
    args = ap.parse_args()

    out = Path(args.out)
    out.parent.mkdir(parents=True, exist_ok=True)
    done = set()
    if out.exists():
        for line in open(out, encoding="utf-8"):
            try:
                done.add(json.loads(line)["address"])
            except (ValueError, KeyError):
                pass

    ida = IDA()
    db = ida.db_path()
    funcs = [f for f in ida.functions() if f["address"].upper().replace("0X", "0x") not in done
             and f["address"] not in done]
    if args.limit:
        funcs = funcs[:args.limit]
    print(f"database {db}: {len(done)} already exported, {len(funcs)} to go", flush=True)

    t0 = time.time()
    ok = failed = 0
    with open(out, "a", encoding="utf-8") as fh:
        for i, f in enumerate(funcs, 1):
            rec = {"address": f["address"], "name": f["name"], "size": int(f["size"], 16),
                   "c": None, "error": None}
            try:
                rec["c"] = LINE_TAG.sub("", ida.call("decompile_function", f["address"], timeout=300))
                ok += 1
            except (RpcError, OSError) as e:
                rec["error"] = str(e)[:300]
                failed += 1
            fh.write(json.dumps(rec) + "\n")
            if i % 500 == 0 or i == len(funcs):
                fh.flush()
                rate = i / max(time.time() - t0, 1e-6)
                print(f"{i}/{len(funcs)}  ok {ok}  failed {failed}  {rate:.1f}/s  "
                      f"eta {(len(funcs) - i) / max(rate, 1e-6) / 60:.0f} min", flush=True)


if __name__ == "__main__":
    main()
