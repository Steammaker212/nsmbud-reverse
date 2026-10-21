import sys
sys.path.insert(0, r".rea")
from rpc import call
for a, n in [(0x6075E758, "T_5E758"), (0x6076080C, "T_6080C"), (0x60760810, "T_60810"),
             (0x60760814, "T_60814"), (0x60760818, "T_60818"), (0x60760850, "T_60850"),
             (0x60760894, "T_60894"), (0x607608A0, "T_608A0"), (0x607608B0, "T_608B0")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:5000])
    except Exception as e:
        print("ERR", e)
