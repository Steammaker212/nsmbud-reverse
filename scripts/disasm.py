import sys, struct, bisect, json
sys.path.insert(0, r".rea")
from elfutil import load_elf
from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM

d, segs = load_elf(r"convertedmain.rebased.elf")
def read(va, n):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"] + s["filesz"]:
            off = s["offset"] + (va - s["vaddr"])
            return d[off:off+n]
    return None

md = Cs(CS_ARCH_ARM, CS_MODE_ARM)
md.detail = False

f = json.load(open(r".rea/functions_all.json"))["data"]
funcs = sorted((int(x["address"], 16), int(x["size"], 16), x["name"]) for x in f)
starts = [x[0] for x in funcs]
def fn(va):
    i = bisect.bisect_right(starts, va) - 1
    if i >= 0 and va < funcs[i][0] + funcs[i][1]:
        return funcs[i]
    return None

import sys
start = int(sys.argv[1], 16) if len(sys.argv) > 1 else 0x607A17E8
size = int(sys.argv[2], 16) if len(sys.argv) > 2 else 0x300
code = read(start, size)
print("disasm", hex(start), "len", hex(len(code)))
for ins in md.disasm(code, start):
    line = "%08x  %-8s %s" % (ins.address, ins.mnemonic, ins.op_str)
    # annotate branch targets and function names
    if ins.mnemonic in ("bl", "b", "bx", "blx") and ins.op_str.startswith("#"):
        try:
            t = int(ins.op_str[1:], 16)
            g = fn(t)
            line += "   ; " + (g[2] if g else hex(t))
        except Exception:
            pass
    print(line)
