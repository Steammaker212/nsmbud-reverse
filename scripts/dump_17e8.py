import sys
sys.path.insert(0, r".rea")
from rpc import call
for a in [0x607A17E8, 0x607A17B0]:
    print("\n\n==========", hex(a), "==========")
    r = call("decompile_function", {"address": hex(a)}, 240)
    t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
    open(r".rea/F_%X.c" % a, "w", encoding="utf-8").write(t)
    print(t[:24000])
