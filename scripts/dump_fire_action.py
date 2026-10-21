import sys
sys.path.insert(0, r".rea")
from rpc import call
addrs = [0x6079C0D0, 0x6079C110, 0x607AAF18, 0x607AAF80, 0x607B1D54, 0x607B22AC, 0x607B85EC, 0x607B792C]
for a in addrs:
    print("\n\n==========", hex(a), "==========")
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FA2_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:7000])
    except Exception as e:
        print("ERR", e)
    print("--- xrefs ---")
    try:
        r = call("get_xrefs_to", {"address": hex(a)}, 120)
        for x in r:
            fr = x.get("function") or {}
            print("  ", x.get("address"), x.get("type"), fr.get("name"), fr.get("address"))
    except Exception as e:
        print("ERR", e)
