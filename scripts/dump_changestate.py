import sys
sys.path.insert(0, r".rea")
from rpc import call

for a, n in [(0x60773DC0, "Player_changeState"), (0x607D2314, "P_7D2314")]:
    print("=====", n, hex(a))
    r = call("decompile_function", {"address": hex(a)}, 200)
    t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
    open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
    print(t[:6000])
