import sys
sys.path.insert(0, r".rea")
from rpc import call

for a, n in [(0x607C8600, "F_7C8600"), (0x607C8680, "F_7C8680"),
             (0x607A0E64, "F_7A0E64")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:9000])
    except Exception as e:
        print("ERR", e)
