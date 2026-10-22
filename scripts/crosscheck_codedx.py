#!/usr/bin/env python3
"""Cross-check codedx's main.sym against our IDA database.

codedx RVAs + 0x60000000 = IDA VA. For each symbol: does a function exist at
that VA, and what does our IDB call it? Reports MATCH / MISMATCH / MISSING.
"""
import json
import re
import sys
import urllib.request

SYM = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\codedx\src\main.sym"
BASE = 0x60000000
RPC = "http://127.0.0.1:13337/mcp"


def call(method, params=None, timeout=30):
    payload = {"jsonrpc": "2.0", "id": 1, "method": method}
    if params:
        payload["params"] = params
    req = urllib.request.Request(
        RPC, data=json.dumps(payload).encode(),
        headers={"Content-Type": "application/json"})
    with urllib.request.urlopen(req, timeout=timeout) as r:
        return json.loads(r.read().decode())


def parse_sym(path):
    out = []
    for line in open(path, encoding="utf-8", errors="replace"):
        line = line.strip()
        if not line or line.startswith("#"):
            continue
        m = re.match(r"^([A-Za-z_][\w:]*)\s*=\s*0x([0-9A-Fa-f]+)", line)
        if m:
            out.append((m.group(1), int(m.group(2), 16)))
    return out


def demangle(name):
    """Very small Itanium demangler for the shapes codedx uses."""
    if not name.startswith("_Z"):
        return name
    body = name[2:]
    if body.startswith("N"):
        body = body[1:]
        parts = []
        i = 0
        while i < len(body) and body[i] != "E":
            m = re.match(r"(\d+)", body[i:])
            if not m:
                i += 1
                continue
            n = int(m.group(1))
            i += len(m.group(1))
            parts.append(body[i:i + n])
            i += n
        return "::".join(parts)
    m = re.match(r"(\d+)", body)
    if m:
        n = int(m.group(1))
        i = len(m.group(1))
        return body[i:i + n]
    return name


def main():
    syms = parse_sym(SYM)
    print(f"parsed {len(syms)} symbols from main.sym\n")

    funcs = {}

    def get_fn(va):
        if va in funcs:
            return funcs[va]
        try:
            r = call("get_function_by_address", {"address": hex(va)}, 15)
            res = r.get("result", r)
            # unwrap content if present
            if isinstance(res, dict) and "content" in res:
                res = res["content"]
            funcs[va] = res if isinstance(res, dict) else None
        except Exception:
            funcs[va] = None
        return funcs[va]

    match = mismatch = missing = 0
    new_names = []
    diff = []
    for name, rva in syms:
        va = BASE + rva
        fn = get_fn(va)
        if not fn:
            missing += 1
            continue
        got = fn.get("name", "?")
        if got == name or got == demangle(name):
            match += 1
        elif got.startswith("sub_") or got.startswith("nullsub"):
            new_names.append((va, name, got))
        else:
            diff.append((va, name, got))
            mismatch += 1

    print(f"MATCH (already named same): {match}")
    print(f"IDB unnamed (would gain a name): {len(new_names)}")
    print(f"CONFLICT (different name):      {mismatch}")
    print(f"MISSING (no function at VA):    {missing}")

    if diff:
        print("\n=== CONFLICTS (first 25) ===")
        for va, want, got in diff[:25]:
            print(f"  {va:#010x}  codedx={want}  idb={got}")

    if new_names:
        print("\n=== IDB UNNAMED, codedx names them (first 40) ===")
        for va, want, got in new_names[:40]:
            print(f"  {va:#010x}  {want}   (idb: {got})")

    return 0


if __name__ == "__main__":
    sys.exit(main())
