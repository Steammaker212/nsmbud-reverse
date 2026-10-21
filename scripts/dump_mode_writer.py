import sys
sys.path.insert(0, r".rea")
from rpc import call
for a, n in [(0x607A3718, "F_7A3718_modewrite"), (0x607A3618, "F_7A3618")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:12000])
    except Exception as e:
        print("ERR", e)
