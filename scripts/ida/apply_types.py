"""Apply data/readability/types_plan.json to a live IDA session (a COPY).

Two kinds of write, in this order:

  1. declare_c_type for every planned class, bases first, so a derived class
     can embed its base by value;
  2. set_function_prototype for every planned method: the first parameter
     becomes `<Class> *this`, every other parameter and the return type are
     kept exactly as the database has them.

The current prototype is read from the decompiler's own first line rather
than rebuilt from the corpus, so the only thing that changes is the type of
`this`. Every outcome is appended to data/readability/apply_log.jsonl.

Refuses to write unless IDA has the database named by --expect-db open (see
ida_rpc.IDA.check_writable); the original `main` is always refused.

Usage:
    python scripts/ida/apply_types.py --repo . --expect-db main_readable [--limit N] [--only Player,PlayerBase]
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

FIRST_LINE = re.compile(r"^(?:/\*.*?\*/\s*)?(.*?)\s*$")


def strip_comments(decl: str) -> str:
    decl = re.sub(r"/\*.*?\*/", "", decl, flags=re.S)
    return "\n".join(line.split("//", 1)[0].rstrip() for line in decl.splitlines()) + "\n"


def split_proto(proto: str):
    """'int __fastcall Player_stun(int a1, int a2)' -> (head, [params])."""
    i = proto.index("(")
    depth, j = 0, i
    for j in range(i, len(proto)):
        depth += proto[j] == "("
        depth -= proto[j] == ")"
        if depth == 0:
            break
    head, inner = proto[:i], proto[i + 1:j]
    params, depth, cur = [], 0, ""
    for ch in inner:
        depth += ch == "("
        depth -= ch == ")"
        if ch == "," and depth == 0:
            params.append(cur.strip())
            cur = ""
        else:
            cur += ch
    if cur.strip():
        params.append(cur.strip())
    return head, params, proto[j + 1:]


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--repo", default=".")
    ap.add_argument("--expect-db", required=True)
    ap.add_argument("--only", default="", help="comma-separated classes")
    ap.add_argument("--limit", type=int, default=0, help="max prototypes (smoke test)")
    ap.add_argument("--skip-types", action="store_true")
    args = ap.parse_args()
    repo = Path(args.repo).resolve()

    plan = json.load(open(repo / "data/readability/types_plan.json"))
    only = {c for c in args.only.split(",") if c}
    ida = IDA(expect_db=args.expect_db)
    ida.check_writable()
    log = open(repo / "data/readability/apply_log.jsonl", "a", encoding="utf-8")
    stamp = time.strftime("%Y-%m-%dT%H:%M:%S")

    def record(**kw):
        log.write(json.dumps({"t": stamp, **kw}) + "\n")

    ok_t = bad_t = 0
    if not args.skip_types:
        for c in plan["order"]:
            if only and c not in only:
                continue
            try:
                ida.write("declare_c_type", strip_comments(plan["classes"][c]["decl"]))
                ok_t += 1
                record(kind="type", name=c, ok=True)
            except RpcError as e:
                bad_t += 1
                record(kind="type", name=c, ok=False, error=str(e))
                print(f"type {c}: {e}")

    ok_p = bad_p = same = 0
    protos = [p for p in plan["prototypes"] if not only or p["class"] in only]
    if args.limit:
        protos = protos[:args.limit]
    for p in protos:
        try:
            first = ida.call("decompile_function", p["address"]).split("\n", 1)[0]
            proto = FIRST_LINE.match(first).group(1)
            head, params, tail = split_proto(proto)
            if not params or params == ["void"]:
                raise RpcError("no first parameter to retype")
            new_first = f"{p['class']} *this"
            if params[0].replace(" ", "") == new_first.replace(" ", ""):
                same += 1
                continue
            params[0] = new_first
            new = f"{head}({', '.join(params)}){tail}"
            ida.write("set_function_prototype", p["address"], new)
            ok_p += 1
            record(kind="proto", address=p["address"], old=proto, new=new, ok=True)
        except (RpcError, ValueError) as e:
            bad_p += 1
            record(kind="proto", address=p["address"], name=p["name"], ok=False, error=str(e))

    print(f"types declared   : {ok_t} ok, {bad_t} failed")
    print(f"prototypes set   : {ok_p} ok, {bad_p} failed, {same} already correct")
    print("log: data/readability/apply_log.jsonl")


if __name__ == "__main__":
    main()
