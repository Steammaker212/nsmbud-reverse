import sys
sys.path.insert(0, r".rea")
from rpc import call

r = call("decompile_function", {"address": "0x60794ECC"}, 240)
t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
open(r".rea/Player_ctor.c", "w", encoding="utf-8").write(t)
print(t[:16000])
