import sys
sys.path.insert(0, r".rea")
from rpc import call
for a, n in [(0x607D6C28, "F_7D6C28"), (0x6075EE0C, "F_75EE0C"), (0x604615A4, "F_4615A4"), (0x6045D89C, "F_45D89C")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:7000])
    except Exception as e:
        print("ERR", e)
