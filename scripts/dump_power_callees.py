import sys, struct, bisect, json
sys.path.insert(0, r".rea")
from rpc import call
from elfutil import load_elf

d, segs = load_elf(r"convertedmain.rebased.elf")
addrs = [0x607C8118, 0x607C814C, 0x607B3698, 0x60795C50,
         0x60794368, 0x607868D4, 0x6078667C, 0x60793CA8,
         0x60794954, 0x607948E8, 0x6075EDF8]
for a in addrs:
    print("\n===", hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FD_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:8000])
    except Exception as e:
        print("ERR", e)
