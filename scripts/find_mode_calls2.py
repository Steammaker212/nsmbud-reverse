import struct, sys, bisect, json
sys.path.insert(0, r".rea")
from elfutil import load_elf
from rpc import call

d, segs = load_elf(r"convertedmain.rebased.elf")
f = json.load(open(r".rea/functions_all.json"))["data"]
funcs = sorted((int(x["address"], 16), int(x["size"], 16), x["name"]) for x in f)
starts = [x[0] for x in funcs]
def fn(va):
    i = bisect.bisect_right(starts, va) - 1
    if i >= 0 and va < funcs[i][0] + funcs[i][1]:
        return funcs[i]
    return None

text = [s for s in segs if s["vaddr"] == 0x60000000][0]
b = d[text["offset"]:text["offset"] + text["filesz"]]
base = text["vaddr"]

print("=== LDR/STR immediate offsets of interest ===")
want = {0x94: "setPlayerMode(vf94)", 0x76C: "vf76C(tramp vf94)",
        0x770: "vf770(rawModeWrite)", 0x774: "vf774", 0x778: "vf778",
        0x588: "vf1416", 0x58C: "vf1420", 0x414: "vf414"}
for i in range(0, len(b) - 4, 4):
    w = struct.unpack_from("<I", b, i)[0]
    if (w & 0x0C000000) != 0x04000000:
        continue
    if (w & 0x02000000):   # bit25=1 => register offset, skip
        continue
    imm = w & 0xFFF
    if imm in want:
        va = base + i
        g = fn(va)
        op = "LDR" if (w >> 20) & 1 else "STR"
        print(hex(va), op, "off", hex(imm), want[imm], "fn", hex(g[0]) if g else None, g[2] if g else "")

print("\n=== decompile +0x31F4/+0x31EC users ===")
for a, n in [(0x607B3318, "F_B3318_pending"), (0x607B1D54, "F_B1D54"),
             (0x607440CC, "F_7440CC"), (0x6040FF08, "F_40FF08_copy")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:14000])
    except Exception as e:
        print("ERR", e)
