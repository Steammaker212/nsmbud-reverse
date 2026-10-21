import sys
sys.path.insert(0, r".rea")
from rpc import call

for a in [0x607A878C, 0x6079EA50, 0x6079EE98, 0x6079ED74, 0x607A9228, 0x607A8674]:
    print("\n===", hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FS_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:9000])
    except Exception as e:
        print("ERR", e)
