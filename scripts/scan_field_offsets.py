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

def mov_imm(w):
    # returns (rd, value) for MOV/MOVW/MVN immediate, else None
    if (w & 0x0FE00000) == 0x03A00000:  # MOV imm
        rd = (w >> 12) & 0xF
        imm12 = w & 0xFFF
        rot = ((imm12 >> 8) & 0xF) * 2
        v = imm12 & 0xFF
        v = ((v >> rot) | (v << (32 - rot))) & 0xFFFFFFFF if rot else v
        return (rd, v)
    if (w & 0x0FF00000) == 0x03000000:  # MOVW
        rd = (w >> 12) & 0xF
        v = (((w >> 16) & 0xF) << 12) | (w & 0xFFF)
        return (rd, v)
    if (w & 0x0FE00000) == 0x03E00000:  # MVN imm
        rd = (w >> 12) & 0xF
        imm12 = w & 0xFFF
        rot = ((imm12 >> 8) & 0xF) * 2
        v = imm12 & 0xFF
        v = ((v >> rot) | (v << (32 - rot))) & 0xFFFFFFFF if rot else v
        return (rd, (~v) & 0xFFFFFFFF)
    return None

targets = {0x1840: "item+6208", 0x2C7C: "player+11388 (mModeNext)", 0x2C78: "player+11384 (mModePrev)"}
for tgt, label in targets.items():
    print("\n\n===== accesses with offset 0x%X (%s) =====" % (tgt, label))
    for i in range(0, len(b) - 4, 4):
        va = base + i; w = g(va)
        m = mov_imm(w)
        if not m or m[1] != tgt: continue
        reg, _ = m
        # look ahead 1..8 instructions for LDR/STR register offset using reg
        for k in range(1, 9):
            va2 = va + 4*k
            w2 = g(va2)
            # word LDR/STR, register offset: bits 27-26=01, bit25=1, bit4=0, P=1
            if (w2 & 0x0C000000) != 0x04000000: continue
            if not (w2 & 0x02000000): continue
            if w2 & 0x10: continue
            if not (w2 & 0x01000000): continue
            if ((w2 >> 16) & 0xF) == 15: continue
            rm = w2 & 0xF
            if rm != reg: continue
            r = fn(va2)
            if not r: continue
            op = "LDR" if (w2 >> 20) & 1 else "STR"
            rd = (w2 >> 12) & 0xF; rn = (w2 >> 16) & 0xF
            print(hex(va2), op, "r%d,[r%d,+r%d]" % (rd, rn, reg), "fn", hex(r[0]), r[2], "| const@", hex(va))
            break
        # also ADD/SUB base,reg and then LDR [base,#imm]
        for k in range(1, 5):
            va2 = va + 4*k
            w2 = g(va2)
            # ADD Rd, Rn, Rm (register) where Rm == reg -> base
            if (w2 & 0x0FE00000) == 0x00800000 and (w2 & 0xF) == reg:
                rd2 = (w2 >> 12) & 0xF
                # next insn LDR [rd2, #imm]
                w3 = g(va2 + 4)
                if (w3 & 0x0C000000) == 0x04000000 and not (w3 & 0x02000000):
                    r = fn(va2 + 4)
                    if r:
                        op = "LDR" if (w3 >> 20) & 1 else "STR"
                        rd3 = (w3 >> 12) & 0xF; rn3 = (w3 >> 16) & 0xF
                        print(hex(va2 + 4), op, "r%d,[r%d,#0x%X]" % (rd3, rn3, w3 & 0xFFF), "fn", hex(r[0]), r[2], "| const@", hex(va), "(via ADD)")
