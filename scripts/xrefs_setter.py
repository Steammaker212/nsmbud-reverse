import sys, json
sys.path.insert(0, r".rea")
from rpc import call

for a in [0x60795CDC, 0x60760754, 0x607A0E98, 0x607A1278, 0x607A1388, 0x607C849C, 0x60777FB4]:
    print("\n=== xrefs to", hex(a), "===")
    try:
        r = call("get_xrefs_to", {"address": hex(a)}, 120)
        for x in r:
            print(" ", x.get("address"), x.get("type"), (x.get("function") or {}).get("name"), (x.get("function") or {}).get("address"))
    except Exception as e:
        print("ERR", e)
