#!/usr/bin/env python3
"""Classify codedx symbols: function with name match, data symbol, or conflict."""
import json
import re
import sys
import urllib.request

SYM = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\codedx\src\main.sym"
BASE = 0x60000000
RPC = "http://127.0.0.1:13337/mcp"

DATA_KEYS = ("instanceE", "OriginalE", "profilesOriginal", "StateID_",
             "got_", "_ZTV", "GlobalRandom", "GlobalBasic", "currentId")


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
    if not name.startswith("_Z"):
        return name
    body = name[2:]
    if body.startswith("N"):
        body = body[1:]
        parts, i = [], 0
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
    funcs = {}

    def get_fn(va):
        if va not in funcs:
            try:
                r = call("get_function_by_address", {"address": hex(va)}, 15)
                res = r.get("result", r)
                funcs[va] = res if isinstance(res, dict) else None
            except Exception:
                funcs[va] = None
        return funcs[va]

    cats = {"same": [], "alias": [], "data": [], "conflict": [], "missing": []}
    for name, rva in syms:
        va = BASE + rva
        fn = get_fn(va)
        if not fn:
            cats["data"].append((va, name))
            continue
        got = fn.get("name", "?")
        dem = demangle(name)
        if got == name or got == dem:
            cats["same"].append((va, name, got))
        elif got.rstrip("_0") == dem.rstrip("_0") or \
                got.split("_0")[0] == dem:
            cats["alias"].append((va, name, got))
        elif got.startswith("sub_") or got.startswith("nullsub") or got == "?":
            cats["missing"].append((va, name, got))
        else:
            cats["conflict"].append((va, name, got, fn.get("size")))

    for k in ("same", "alias", "data", "conflict", "missing"):
        print(f"{k:10}: {len(cats[k])}")

    print("\n=== REAL NAME CONFLICTS (need review) ===")
    for va, want, got, sz in cats["conflict"]:
        print(f"  {va:#010x} size={sz:>6}  codedx={demangle(want):52} idb={got}")

    print("\n=== DATA SYMBOLS codedx gives us (new addresses) ===")
    for va, name in cats["data"]:
        print(f"  {va:#010x}  {demangle(name)}")

    return 0


if __name__ == "__main__":
    sys.exit(main())
