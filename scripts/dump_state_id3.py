import sys
sys.path.insert(0, r".rea")
from rpc import call
for a, n in [(0x7A9228, "FS_ID3_init"), (0x7A8674, "FS_ID3_exec"), (0x7A878C, "FS_ID3_fini"),
             (0x79EA50, "FS_ID15_init"), (0x79EE98, "FS_ID15_exec"), (0x79ED74, "FS_ID15_fini")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:10000])
    except Exception as e:
        print("ERR", e)
