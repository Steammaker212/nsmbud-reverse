import sys
sys.path.insert(0, r".rea")
from rpc import call

r = call("get_function_by_address", {"address": "0x6075dfc8"})
print(r)
