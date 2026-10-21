import sys
sys.path.insert(0, r".rea")
from rpc import call

def rd(a):
    return call("data_read_dword", {"address": hex(a)}, 20)

def rstr(a, n=128):
    try:
        return call("data_read_string", {"address": hex(a), "length": n}, 20)
    except Exception as e:
        return "ERR " + str(e)

for base in (0x60C24C74, 0x60C253D4, 0x60C25B40, 0x60C24294):
    print("==== vtable", hex(base))
    for off in range(-16, 16, 4):
        a = base + off
        try:
            v = rd(a)
            print(hex(a), hex(v))
        except Exception as e:
            print(hex(a), "ERR", e)
    ti = rd(base - 4)
    print("typeinfo ptr", hex(ti))
    try:
        namep = rd(ti + 4)
        print("name ptr", hex(namep), "name", rstr(namep, 200))
    except Exception as e:
        print("typeinfo err", e)
