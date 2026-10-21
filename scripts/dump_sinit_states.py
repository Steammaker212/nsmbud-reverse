import sys
sys.path.insert(0, r".rea")
from rpc import call
a=0x607B3920
r=call("decompile_function",{"address":hex(a)},300)
t=r if isinstance(r,str) else (r.get("text") if isinstance(r,dict) else str(r))
open(r".rea/FB_607B3920.c","w",encoding="utf-8").write(t)
print(t[:20000])
