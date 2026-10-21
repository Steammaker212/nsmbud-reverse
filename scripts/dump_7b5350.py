import sys
sys.path.insert(0, r".rea")
from rpc import call

def rd(a):
    return call("data_read_dword", {"address": hex(a)}, 20)

print("===== player vtable +0x480..+0x4A0")
for off in range(0x470, 0x4B0, 4):
    a = 0x60C253D4 + off
    v = rd(a)
    print(hex(a), "off", hex(off), "->", hex(v))

print("===== sub_607B5350")
try:
    r = call("decompile_function", {"address": "0x607B5350"}, 200)
    t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
    open(r".rea/F_7B5350.c", "w", encoding="utf-8").write(t)
    print(t[:7000])
except Exception as e:
    print("ERR", e)
