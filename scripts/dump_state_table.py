import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
from rpc import call
d, segs = load_elf(r"convertedmain.rebased.elf")
def rdw(va):
    for s in segs:
        if s["vaddr"]<=va<s["vaddr"]+s["filesz"]:
            return struct.unpack_from("<I",d,s["offset"]+(va-s["vaddr"]))[0]
    return None
print("table region 0x60C776A0..0x60C77760:")
for va in range(0x60C776A0, 0x60C77760, 4):
    print("  %08X %08X" % (va, rdw(va)))
print()
print("========== Player_changeState 0x60773DC0 ==========")
r=call("decompile_function",{"address":"0x60773DC0"},240)
t=r if isinstance(r,str) else (r.get("text") if isinstance(r,dict) else str(r))
open(r".rea/F_73DC0.c","w",encoding="utf-8").write(t)
print(t[:8000])
