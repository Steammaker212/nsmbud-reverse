import sys
sys.path.insert(0, r".rea")
from rpc import call
a=0x607AAA00
r=call("decompile_function",{"address":hex(a)},240)
t=r if isinstance(r,str) else (r.get("text") if isinstance(r,dict) else str(r))
open(r".rea/FSA_607AAA00.c","w",encoding="utf-8").write(t)
print(t)
print("\n--- xrefs to 0x607AAA00 ---")
r=call("get_xrefs_to",{"address":hex(a)},120)
for x in r:
    fr=x.get("function") or {}
    print("  ",x.get("address"),x.get("type"),fr.get("name"),fr.get("address"))
