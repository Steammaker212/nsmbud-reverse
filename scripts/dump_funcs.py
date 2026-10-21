import sys
sys.path.insert(0, r".rea")
from rpc import call

for a, n in [(0x607600A4, "F_7600A4"), (0x60760754, "F_760754"),
             (0x60760760, "F_760760"), (0x607CC0DC, "F_7CC0DC"),
             (0x607CC640, "F_7CC640"), (0x607D63A4, "F_7D63A4"),
             (0x607CBD7C, "F_7CBD7C"), (0x607CBFB0, "F_7CBFB0")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 180)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:1800])
    except Exception as e:
        print("ERR", e)
