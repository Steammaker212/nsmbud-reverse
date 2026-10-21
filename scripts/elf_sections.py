import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf

d, segs = load_elf(r"convertedmain.rebased.elf")
e_shoff, = struct.unpack_from("<I", d, 0x20)
e_shentsize, e_shnum, e_shstrndx = struct.unpack_from("<HHH", d, 0x2e - 2) if False else (None, None, None)
e_shentsize, = struct.unpack_from("<H", d, 0x2e)
e_shnum, e_shstrndx = struct.unpack_from("<HH", d, 0x30)
print("shoff", hex(e_shoff), "entsize", e_shentsize, "num", e_shnum, "strndx", e_shstrndx)

secs = []
for i in range(e_shnum):
    off = e_shoff + i * e_shentsize
    vals = struct.unpack_from("<IIIIIIIIII", d, off)
    secs.append(dict(name=vals[0], type=vals[1], flags=vals[2], addr=vals[3], offset=vals[4],
                     size=vals[5], link=vals[6], info=vals[7], align=vals[8], entsize=vals[9]))

strsec = secs[e_shstrndx]
strtab = d[strsec["offset"]:strsec["offset"] + strsec["size"]]
def sname(n):
    end = strtab.find(b"\0", n)
    return strtab[n:end].decode("latin1")

for i, s in enumerate(secs):
    print(i, sname(s["name"]), "type", s["type"], "addr", hex(s["addr"]), "off", hex(s["offset"]),
          "size", hex(s["size"]), "entsize", s["entsize"], "link", s["link"])
