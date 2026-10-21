import sys
sys.path.insert(0, r".rea")
from rpc import call

for a, n in [(0x6075dfc8, "PlayerBase_ctor"), (0x6075e000, "PlayerBase_ctor2")]:
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/%s.c" % n, "w", encoding="utf-8").write(t)
        print("wrote", n, len(t))
    except Exception as e:
        print("ERR", e)
