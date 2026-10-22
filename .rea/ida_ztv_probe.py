"""Find the real vtable offset relative to the _ZTV symbol, then do RTTI naming.

Evidence so far:
  * constructors load the vtable with `LDR R0, =(sym - pc); LDR R0,[PC,R0]; ADD R0,R0,#8`
    so the stored value is 8 bytes before the pointer that goes into the object.
  * `_ZTV10StageActor` is named at 0xBC000C, and [sym-4] is zero.

So the type_info slot is not at sym-4. This dumps the words around several _ZTV symbols
and looks for the one that resolves to a type_info whose name matches the symbol, which
pins the offset down from data instead of from assumption.
"""
import idautils
import ida_name
import ida_bytes
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000


def cstr(ea, maxlen=100):
    b = []
    for i in range(maxlen):
        c = ida_bytes.get_byte(ea + i)
        if c == 0:
            break
        b.append(chr(c) if 32 <= c < 127 else "?")
    return "".join(b)


TARGETS = ["_ZTV10StageActor", "_ZTV5Actor", "_ZTV5Enemy", "_ZTV14CollisionActor"]

for nm in TARGETS:
    ea = idc.get_name_ea_simple(nm)
    if ea == idc.BADADDR:
        print(f"{nm}: not found")
        continue
    print("=" * 84)
    print(f"{nm}   symbol at {ea - BASE:#010x}")
    print("=" * 84)
    for off in range(-0x10, 0x18, 4):
        a = ea + off
        v = ida_bytes.get_dword(a)
        desc = f"{v:#012x}"
        if 0x60000000 <= v < 0x61000000:
            s = cstr(v)
            desc += f"  -> {v - BASE:#010x}"
            if s and s.isprintable():
                desc += f" {s!r}"
        elif v == 0:
            desc += "  (zero)"
        print(f"  {a - BASE:#010x} [{off:+#05x}]  {desc}")
    print()
