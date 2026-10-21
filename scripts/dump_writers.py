import sys
sys.path.insert(0, r".rea")
from rpc import call

for a, n in [(0x6047C13C, "F_47C13C"), (0x60451FEC, "F_451FEC"),
             (0x60452EDC, "F_452EDC"), (0x604531F8, "F_4531F8"),
             (0x607A3718, "F_7A3718"), (0x6077BFAC, "F_77BFAC"),
             (0x60782DB0, "F_782DB0")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 200)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:4500])
    except Exception as e:
        print("ERR", e)
