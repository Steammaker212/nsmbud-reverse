import sys
sys.path.insert(0, r".rea")
from rpc import call
for a in [0x607AAF18, 0x607AAF68, 0x607B6C38, 0x6045DDC0]:
    print("\n\n==========", hex(a), "==========")
    r=call("decompile_function",{"address":hex(a)},240)
    t=r if isinstance(r,str) else (r.get("text") if isinstance(r,dict) else str(r))
    print(t[:8000])
    print("--- xrefs ---")
    r=call("get_xrefs_to",{"address":hex(a)},120)
    for x in r:
        fr=x.get("function") or {}
        print("  ",x.get("address"),x.get("type"),fr.get("name"),fr.get("address"))
