import sys
sys.path.insert(0, r".rea")
from rpc import call

for a in [0x6074F718, 0x6075C02C, 0x607988F4, 0x607D63A4]:
    print("\n\n==========", hex(a), "==========")
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FX_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:14000])
    except Exception as e:
        print("ERR", e)
