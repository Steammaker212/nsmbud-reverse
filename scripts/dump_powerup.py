import sys
sys.path.insert(0, r".rea")
from rpc import call

for a, n in [(0x607A0C20, "F_7A0C20"), (0x607A0CD4, "F_7A0CD4"),
             (0x607A0D80, "F_7A0D80"), (0x607A0990, "F_7A0990"),
             (0x607A09E8, "F_7A09E8")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 200)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:7000])
    except Exception as e:
        print("ERR", e)
