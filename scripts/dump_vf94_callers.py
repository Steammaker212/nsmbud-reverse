import sys, struct, bisect, json
sys.path.insert(0, r".rea")
from rpc import call
from elfutil import load_elf

d, segs = load_elf(r"convertedmain.rebased.elf")
f = json.load(open(r".rea/functions_all.json"))["data"]
funcs = sorted((int(x["address"], 16), int(x["size"], 16), x["name"]) for x in f)
starts = [x[0] for x in funcs]
def fn(va):
    i = bisect.bisect_right(starts, va) - 1
    if i >= 0 and va < funcs[i][0] + funcs[i][1]:
        return funcs[i]
    return None

addrs = [0x603F62C0, 0x601B200C, 0x601DB9B8, 0x601DBA74, 0x6037856C,
         0x6074F718, 0x607D6300, 0x607D6000, 0x607D5F00]
for a in addrs:
    g = fn(a)
    if not g and a in (0x607D6300,):
        continue
    if not g:
        # try exact function start search
        for x in funcs:
            if x[0] <= a < x[0] + x[1]:
                g = x; break
    if not g:
        print("=== no func for", hex(a)); continue
    a = g[0]
    print("\n===", hex(a), g[2], "size", hex(g[1]))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FC_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:9000])
    except Exception as e:
        print("ERR", e)
