import sys
sys.path.insert(0, r".rea")
from rpc import call

for a in [0x60777FB4, 0x607A2894, 0x607A1388, 0x607A1198]:
    print("\n\n==========", hex(a), "==========")
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FY_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:20000])
    except Exception as e:
        print("ERR", e)
