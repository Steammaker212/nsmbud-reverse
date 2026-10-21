import sys
sys.path.insert(0, r".rea")
from rpc import call

for a in [0x60766698, 0x607666B0, 0x607666C8, 0x607666D8, 0x607666EC,
          0x6076E680, 0x6076E7A0, 0x6076E7D8, 0x6076E7C8, 0x607A26B8]:
    print("\n\n==========", hex(a), "==========")
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FW_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:9000])
    except Exception as e:
        print("ERR", e)
