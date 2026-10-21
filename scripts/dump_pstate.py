import sys
sys.path.insert(0, r".rea")
from rpc import call
for a, n in [(0x607A14E0, "PState_14E0"), (0x607A17E8, "PState_17E8"),
             (0x607A17B0, "PState_17B0"), (0x60C25364, "PState_vtable_data")]:
    print("=====", n, hex(a))
    try:
        if a < 0x60C00000:
            r = call("decompile_function", {"address": hex(a)}, 240)
        else:
            r = call("data_read_dword", {"address": hex(a)}, 30)
        t = r if isinstance(r, str) else str(r)
        open(r".rea/" + n + ".txt", "w", encoding="utf-8").write(t)
        print(t[:12000])
    except Exception as e:
        print("ERR", e)
