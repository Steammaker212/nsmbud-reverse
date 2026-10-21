import sys
sys.path.insert(0, r".rea")
from rpc import call

for a in [0x607A2894, 0x607602AC, 0x60777F54, 0x60409CC8, 0x607956CC]:
    print("\n=== xrefs to", hex(a), "===")
    try:
        r = call("get_xrefs_to", {"address": hex(a)}, 120)
        for x in r:
            print("  ", x.get("address"), x.get("type"), (x.get("function") or {}).get("name"), (x.get("function") or {}).get("address"))
    except Exception as e:
        print("ERR", e)

print("\n\n========== 0x607956CC (P_79569C) ==========")
r = call("decompile_function", {"address": "0x607956CC"}, 240)
t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
open(r".rea/P_79569C2.c", "w", encoding="utf-8").write(t)
print(t)

for a in [0x607602AC, 0x60777F54, 0x60409CC8]:
    print("\n\n==========", hex(a), "==========")
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FQ_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:12000])
    except Exception as e:
        print("ERR", e)
