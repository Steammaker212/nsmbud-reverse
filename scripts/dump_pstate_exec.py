import sys
sys.path.insert(0, r".rea")
from rpc import call
for a, n in [(0x607A5FCC, "PState_execute"), (0x607A3124, "PState_vf4"),
             (0x60013DB4, "PState_vf8"), (0x607A60DC, "PState_vf14"),
             (0x607A61F0, "PState_vf18")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:10000])
    except Exception as e:
        print("ERR", e)
