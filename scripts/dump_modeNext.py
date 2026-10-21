import sys, struct, bisect, json
sys.path.insert(0, r".rea")
from rpc import call
from elfutil import load_elf

print("========== sub_607A2894 ==========")
r = call("decompile_function", {"address": "0x607A2894"}, 240)
t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
open(r".rea/FA_607A2894.c", "w", encoding="utf-8").write(t)
print(t)

print("\n\n========== sub_607A1198 ==========")
r = call("decompile_function", {"address": "0x607A1198"}, 240)
t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
open(r".rea/FA_607A1198.c", "w", encoding="utf-8").write(t)
print(t)

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
def g(va): return struct.unpack_from("<I", b, va - base)[0]

for imm in (0x2C7C, 0x2C78):
    print("\n===== STR/LDR with imm12 0x%X ===== " % imm)
    for i in range(0, len(b) - 4, 4):
        va = base + i; w = g(va)
        if (w & 0x0C000000) != 0x04000000: continue
        if (w & 0x02000000): continue
        if (w & 0xFFF) != imm: continue
        if ((w >> 16) & 0xF) == 15: continue
        r = fn(va)
        if not r: continue
        op = "LDR" if (w >> 20) & 1 else "STR"
        rd = (w >> 12) & 0xF; rn = (w >> 16) & 0xF
        print(hex(va), op, "r%d,[r%d,#0x%X]" % (rd, rn, imm), "fn", hex(r[0]), r[2])
