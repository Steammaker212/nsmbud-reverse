import struct, sys, bisect, json
sys.path.insert(0, r".rea")
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
text = [s for s in segs if s["vaddr"] == 0x60000000][0]
b = d[text["offset"]:text["offset"] + text["filesz"]]
base = text["vaddr"]
def g(va): return struct.unpack_from("<I", b, va - base)[0]

# all data-processing + load/store with imm12 == 0x1840 (6208)
print("===== instructions with imm12 0x1840 (6208) =====")
for i in range(0, len(b) - 4, 4):
    va = base + i
    w = g(va)
    # LDR/STR immediate: bits 27-26 = 01
    if (w & 0x0C000000) == 0x04000000:
        if (w & 0x02000000) == 0:  # immediate offset form
            imm = w & 0xFFF
            if imm == 0x1840:
                r = fn(va)
                op = "LDR" if (w >> 20) & 1 else "STR"
                rd = (w >> 12) & 0xF; rn = (w >> 16) & 0xF
                print(hex(va), op, "r%d,[r%d,#0x1840]" % (rd, rn), "fn", hex(r[0]) if r else None, r[2] if r else "")
    # MOV/MOVW with imm 0x1840 (movw: e30?0???)
    # MOVW Rd,#imm16: cond 1110 0011 0000 imm4 Rd imm12
    if (w & 0x0FF00000) == 0x03000000:
        imm4 = (w >> 16) & 0xF
        imm12 = w & 0xFFF
        imm = (imm4 << 12) | imm12
        if imm == 0x1840:
            r = fn(va)
            rd = (w >> 12) & 0xF
            print(hex(va), "MOVW r%d,#0x1840" % rd, "fn", hex(r[0]) if r else None, r[2] if r else "")

print("\n===== decompiled funcs mentioning 6208 / +1840 =====")
import os, re
for name in os.listdir(r".rea"):
    if not name.endswith(".c"): continue
    p = os.path.join(r".rea", name)
    try:
        t = open(p, encoding="utf-8", errors="ignore").read()
    except Exception:
        continue
    if "6208" in t or "1840" in t:
        hits = [ln.strip() for ln in t.splitlines() if "6208" in ln or "1840" in ln]
        print("---", name, "---")
        for h in hits[:12]:
            print("   ", h)
