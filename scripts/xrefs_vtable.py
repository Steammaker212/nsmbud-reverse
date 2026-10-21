import sys
sys.path.insert(0, r".rea")
from rpc import call
for a in [0x60C776DC, 0x60C776E0, 0x60C776D4, 0x60C776D8]:
    print("\n=== xrefs to %s ===" % hex(a))
    try:
        r=call("get_xrefs_to",{"address":hex(a)},120)
        for x in r:
            fr=x.get("function") or {}
            print("  ",x.get("address"),x.get("type"),fr.get("name"),fr.get("address"))
    except Exception as e:
        print("ERR",e)
