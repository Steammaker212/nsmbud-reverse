import sys
sys.path.insert(0, r".rea")
from rpc import call

addrs = [0x607A26F8, 0x607A27A8, 0x607A2F40, 0x607A30CC, 0x607A2924, 0x607AA6F4, 0x607A2AF8]
for a in addrs:
    print("\n\n==========", hex(a), "==========")
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FM_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:14000])
    except Exception as e:
        print("ERR", e)
