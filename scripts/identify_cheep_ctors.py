#!/usr/bin/env python3
"""Identify the Cheep Cheep family ctors that codedx profiles.csv points at."""
from rpc import call

VAS = [0x60370B50, 0x60375824, 0x603B3FBC]
LABELS = {
    0x60370B50: "profiles 530/532/534/538 (Pukpuk, middle, search, meka)",
    0x60375824: "profile 539 (Togepuku)",
    0x603B3FBC: "profile 540 (Jumping)",
}

for va in VAS:
    try:
        r = call("get_function_by_address", {"address": hex(va)}, 20)
        name = r.get("name")
        size = r.get("size")
        print(f"\n{va:#x}  {LABELS.get(va,'')}")
        print(f"  IDB name : {name}   size={size}")
        d = call("decompile_function", {"address": hex(va)}, 90)
        src = d.get("decompilation") or d.get("source") or ""
        first = src.strip().split("\n")[0] if src else "(no decompile)"
        print(f"  signature: {first[:110]}")
        # find the base-ctor call
        for ln in src.split("\n")[:12]:
            ln = ln.strip()
            if "sub_" in ln and "(" in ln:
                print(f"  call: {ln[:100]}")
    except Exception as e:
        print(f"{va:#x} ERR {str(e)[:100]}")
