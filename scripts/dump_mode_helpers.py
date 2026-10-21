import sys
sys.path.insert(0, r".rea")
from rpc import call
for a, n in [(0x6076DD38, "F_6DD38"), (0x6075FC38, "F_5FC38"),
             (0x607868D4, "F_868D4"), (0x60793CA8, "F_93CA8"),
             (0x607CC0DC, "F_CC0DC")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:14000])
    except Exception as e:
        print("ERR", e)
