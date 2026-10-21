import sys
sys.path.insert(0, r".rea")
from rpc import call

for a in [0x607A2258, 0x607A2614, 0x607A0E64, 0x607A0990, 0x607A09E8, 0x607A0A48]:
    print("\n\n==========", hex(a), "==========")
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FV_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:16000])
    except Exception as e:
        print("ERR", e)
