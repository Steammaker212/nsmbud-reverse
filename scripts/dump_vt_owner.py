import sys
sys.path.insert(0, r".rea")
from rpc import call
for a, n in [(0x607C1BB0, "F_7C1BB0_vt414"), (0x60797A50, "F_797A50_vt8"),
             (0x607C80E8, "F_7C80E8_vt20"), (0x60818224, "StateMgr_changeState")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:12000])
    except Exception as e:
        print("ERR", e)
