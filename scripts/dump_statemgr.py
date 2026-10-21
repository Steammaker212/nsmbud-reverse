import sys
sys.path.insert(0, r".rea")
from rpc import call
for a, n in [(0x60773DC0, "Player_changeState"), (0x60818290, "StateMgrExt_changeState"),
             (0x60818168, "StateMgr_ctor"), (0x60818198, "StateMgr_getCurrentState"),
             (0x60773630, "sub_60773630"), (0x60794368, "sub_60794368"),
             (0x60794954, "sub_60794954")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:9000])
    except Exception as e:
        print("ERR", e)
