import sys
sys.path.insert(0, r".rea")
from rpc import call

for a in [0x60256CFC, 0x607D6C28, 0x6075EE0C]:
    print("\n===", hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FP_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:12000])
    except Exception as e:
        print("ERR", e)
