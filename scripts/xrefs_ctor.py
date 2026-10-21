import sys
sys.path.insert(0, r".rea")
from rpc import call

for a in [0x6075DEFC, 0x6075E000]:
    try:
        r = call("get_xrefs_to", {"address": hex(a)}, 120)
        print("=== xrefs to", hex(a), "===")
        print(r)
    except Exception as e:
        print("ERR", e)
