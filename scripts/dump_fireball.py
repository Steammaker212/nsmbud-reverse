import sys
sys.path.insert(0, r".rea")
from rpc import call

for a in [0x607AABA0, 0x607AA6F4]:
    print("\n\n==========", hex(a), "==========")
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FB_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:16000])
    except Exception as e:
        print("ERR", e)
    print("\n=== xrefs to %s ===" % hex(a))
    try:
        r = call("get_xrefs_to", {"address": hex(a)}, 120)
        for x in r:
            fr = x.get("function") or {}
            print("  ", x.get("address"), x.get("type"), fr.get("name"), fr.get("address"))
    except Exception as e:
        print("ERR", e)
