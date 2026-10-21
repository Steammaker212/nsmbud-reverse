import sys, re
sys.path.insert(0, r".rea")
from rpc import call

addrs = [0x6045DDC0, 0x6045E938, 0x60467F48, 0x60468AD8, 0x604695B0, 0x6046A078,
         0x6046AB90, 0x6046B6BC, 0x6046BB70, 0x6046C364, 0x6046CD7C, 0x6046CE38,
         0x6046F8FC, 0x60470430]
for a in addrs:
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FG_%X.c" % a, "w", encoding="utf-8").write(t)
        # find call lines
        calls = [ln.strip() for ln in t.splitlines() if "60463998" in ln]
        print("\n=== %s (%s) ===" % (hex(a), (calls[0] if calls else "NO CALL")))
        for ln in calls:
            print("   ", ln)
        # also print any line with profile id / constants near call
        for ln in t.splitlines():
            if "60463998" in ln:
                pass
    except Exception as e:
        print(hex(a), "ERR", e)
