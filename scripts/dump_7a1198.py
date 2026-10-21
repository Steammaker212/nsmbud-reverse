import sys
sys.path.insert(0, r".rea")
from rpc import call

def rd(a):
    return call("data_read_dword", {"address": hex(a)}, 20)

print("===== player vtable +0x570..+0x5A0")
for off in range(0x570, 0x5A0, 4):
    a = 0x60C253D4 + off
    v = rd(a)
    print(hex(a), "off", hex(off), "->", hex(v))

for a, n in [(0x607A1198, "F_7A1198")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 200)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:8000])
    except Exception as e:
        print("ERR", e)
