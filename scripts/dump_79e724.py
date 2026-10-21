import sys
sys.path.insert(0, r".rea")
from rpc import call

for a, n in [(0x6079E724, "F_79E724"), (0x607601D4, "F_7601D4"),
             (0x607602AC, "F_7602AC")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:9000])
    except Exception as e:
        print("ERR", e)
