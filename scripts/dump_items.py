import sys
sys.path.insert(0, r".rea")
from rpc import call

addrs = [0x60460408, 0x6046135C, 0x604615BC, 0x604616A4, 0x60461788,
         0x60461850, 0x60461A1C, 0x60461AA0, 0x60461BE4, 0x60461C50,
         0x60462018, 0x6045FAA8, 0x6045FE04]
for a in addrs:
    print("\n\n==========", hex(a), "==========")
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FI2_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:14000])
    except Exception as e:
        print("ERR", e)
