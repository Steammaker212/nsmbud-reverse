import sys
sys.path.insert(0, r".rea")
from rpc import call
for a, n in [(0x607A0E98, "F_7A0E98"), (0x607A0D80, "F_7A0D80"),
             (0x607A2894, "F_7A2894"), (0x607A2AF8, "F_7A2AF8"),
             (0x607A293C, "F_7A293C"), (0x607A1CFC, "F_7A1CFC")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:14000])
    except Exception as e:
        print("ERR", e)
