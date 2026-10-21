import sys
sys.path.insert(0, r".rea")
from rpc import call

for a in [0x607A2F40, 0x607A27A8, 0x607A2924, 0x607A26F8, 0x607A30CC, 0x607A2AF8, 0x607A293C, 0x6079F548]:
    print("\n=== xrefs to %s ===" % hex(a))
    try:
        r = call("get_xrefs_to", {"address": hex(a)}, 120)
        for x in r:
            print("  ", x.get("address"), x.get("type"), (x.get("function") or {}).get("name"), (x.get("function") or {}).get("address"))
    except Exception as e:
        print("ERR", e)
