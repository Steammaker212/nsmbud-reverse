import sys
sys.path.insert(0, r".rea")
from rpc import call

def rd(a):
    return call("data_read_dword", {"address": hex(a)}, 20)

print("==== around 0x60A66270")
for a in range(0x60A661C0, 0x60A66320, 4):
    try:
        v = rd(a)
        tag = ""
        if 0x60000000 <= v < 0x60A00000:
            tag = "TEXT"
        elif 0x60A00000 <= v < 0x60BC0000:
            tag = "RODATA"
        elif 0x60BC0000 <= v < 0x60C80000:
            tag = "DATA"
        print(hex(a), hex(v), tag)
    except Exception as e:
        print(hex(a), "ERR", e)
