import sys
sys.path.insert(0, r".rea")
from rpc import call
for a in [0x60796A60]:
    print("==========", hex(a), "==========")
    r = call("decompile_function", {"address": hex(a)}, 240)
    t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
    open(r".rea/FT_%X.c" % a, "w", encoding="utf-8").write(t)
    print(t)
