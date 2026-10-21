import sys
sys.path.insert(0, r".rea")
from rpc import call

for a, n in [(0x607A1388, "F_7A1388"), (0x60773630, "F_773630"),
             (0x60777FB4, "F_777FB4"), (0x607A2894, "F_7A2894")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:9000])
    except Exception as e:
        print("ERR", e)
