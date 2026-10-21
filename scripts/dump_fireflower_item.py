import sys
sys.path.insert(0, r".rea")
from rpc import call

for a in [0x60460DD0, 0x6045D89C, 0x60461904, 0x604615A4, 0x604615BC,
          0x604616A4, 0x60461788, 0x60461850, 0x6046135C, 0x60462018]:
    print("\n===", hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FI_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:9000])
    except Exception as e:
        print("ERR", e)
