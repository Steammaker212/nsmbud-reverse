import sys
sys.path.insert(0, r".rea")
from rpc import call

for a, n in [(0x60461904, "FireFlower_timer"), (0x60462018, "FireFlower_draw"),
             (0x604615A4, "FireFlower_clear"), (0x60461788, "FF_61788"),
             (0x60460DD0, "FireFlower_collision")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:9000])
    except Exception as e:
        print("ERR", e)
