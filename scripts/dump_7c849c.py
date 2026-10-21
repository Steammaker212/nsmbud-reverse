import sys
sys.path.insert(0, r".rea")
from rpc import call

for a, n in [(0x607C849C, "F_7C849C"), (0x607C8690, "F_7C8690"),
             (0x607C83EC, "F_7C83EC")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 200)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:8000])
    except Exception as e:
        print("ERR", e)
