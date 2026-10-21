import sys
sys.path.insert(0, r".rea")
from rpc import call

addrs = [0x60463998, 0x603E56C0, 0x605D21DC, 0x60463C30, 0x60464FE4, 0x607A293C]
for a in addrs:
    print("\n\n==========", hex(a), "==========")
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FP_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:20000])
    except Exception as e:
        print("ERR", e)
