import sys
sys.path.insert(0, r".rea")
from rpc import call

for a in [0x603E56C0, 0x607A2F40, 0x60463CD0, 0x60766708]:
    print("\n=== xrefs to %s ===" % hex(a))
    try:
        r = call("get_xrefs_to", {"address": hex(a)}, 120)
        for x in r:
            fr = x.get("function") or {}
            print("  ", x.get("address"), x.get("type"), fr.get("name"), fr.get("address"))
    except Exception as e:
        print("ERR", e)

print("\n\n========== sub_607A27A8 ==========")
r = call("decompile_function", {"address": "0x607A27A8"}, 240)
t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
print(t)
