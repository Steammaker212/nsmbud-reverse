import sys
sys.path.insert(0, r".rea")
from rpc import call

for a, n in [(0x607A1278, "F_7A1278"), (0x607A1258, "F_7A1258")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 200)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:9000])
    except Exception as e:
        print("ERR", e)
