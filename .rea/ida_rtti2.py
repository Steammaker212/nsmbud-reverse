"""RTTI NAMING, DONE PROPERLY: resolve vtables through literal pools.

The first RTTI attempt failed (0 of 775) because it looked for MOVW/MOVT constants. On ARM
a vtable address is loaded through the literal pool:

    LDR Rn, =0x60BD2120        ; a DCD inside .text holds the absolute address
    ...  STR Rn, [this]

So the constant-scan has to read the pool word. Given the vtable, the class name is at a
known place:
    vtable[-4]  -> type_info object
    type_info+4 -> char* mangled name
and the mangled name demangles to the real C++ class, e.g. _ZN9FireFlower... -> FireFlower.

This resolves RTTI for every actor constructor in the profile map and names them
`<ClassName>_build`, which is the compiler's own class name -- the strongest naming
evidence available short of debug symbols.
"""
import json
import os
import idautils
import ida_funcs
import ida_name
import ida_bytes
import idc
import ida_auto
import idaapi

idc.auto_wait()
BASE = 0x60000000
REA = r"C:\Users\Saif Khan\Downloads\main.idb\.rea"
out = []


def log(s=""):
    out.append(s)


def is_default(nm):
    return (not nm) or nm.startswith("sub_") or nm.startswith("nullsub_")


def cstr(ea, maxlen=120):
    try:
        b = []
        for i in range(maxlen):
            c = ida_bytes.get_byte(ea + i)
            if c == 0:
                break
            b.append(chr(c) if 32 <= c < 127 else "?")
        return "".join(b)
    except Exception:
        return None


def pool_constants(f):
    """Every absolute address loaded from the literal pool inside this function."""
    res = []
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        if idc.print_insn_mnem(insn) != "LDR":
            continue
        op1 = idc.print_operand(insn, 1)
        # IDA renders a pool load as  =0xADDR  or  =symbol
        if "=" not in op1:
            continue
        v = None
        # the pool word itself is the operand address for [PC, ...] forms
        disp = idc.get_operand_value(insn, 1)
        if disp and 0x60000000 <= disp < 0x61000000:
            v = ida_bytes.get_dword(disp)
        if v is None:
            import re
            m = re.search(r"0x([0-9A-Fa-f]{8})", op1)
            if m:
                v = int(m.group(1), 16)
        if v and 0x60000000 <= v < 0x61000000:
            res.append(v - BASE)
    return res


def typeinfo_of(vt_rva):
    """vtable[-4] -> type_info; type_info+4 -> name pointer; return mangled name."""
    vt = BASE + vt_rva
    ti = ida_bytes.get_dword(vt - 4)
    if not (0x60000000 <= ti < 0x61000000):
        return None
    nm_ptr = ida_bytes.get_dword(ti + 4)
    if not (0x60000000 <= nm_ptr < 0x61000000):
        return None
    s = cstr(nm_ptr)
    if not s or len(s) < 3:
        return None
    if not s[0] in "N123456789":
        return None
    return s


def demangle_simple(m):
    """Light demangler: enough to recover the class name from _ZN<len><Name>...E..."""
    if not m.startswith("_ZN") and not m.startswith("_Z"):
        return m
    s = m[2:] if m.startswith("_ZN") else m[2:]
    i = 0
    parts = []
    while i < len(s):
        if s[i].isdigit():
            j = i
            while j < len(s) and s[j].isdigit():
                j += 1
            n = int(s[i:j])
            ident = s[j:j + n]
            parts.append(ident)
            i = j + n
        elif s[i] == "E":
            break
        else:
            i += 1
    return "::".join(parts) if parts else m


records = json.load(open(os.path.join(REA, "out_profile_map.json"), encoding="utf-8"))
ctors = sorted({r["ctor_rva"] for r in records})

log("=" * 100)
log(f"RTTI NAMING via literal pools, over {len(ctors)} actor constructors")
log("=" * 100)

named = 0
with_ti = 0
samples = []
for c in ctors:
    ea = BASE + c
    f = ida_funcs.get_func(ea)
    if not f or f.start_ea != ea:
        continue
    if not is_default(ida_name.get_name(ea) or ""):
        continue
    consts = pool_constants(f)
    # vtables live in .data; try each candidate, most-derived last
    found = None
    for v in reversed(consts):
        if not (0x00A00000 <= v < 0x00D00000):
            continue
        t = typeinfo_of(v)
        if t:
            found = (v, t)
            break
    if not found:
        continue
    with_ti += 1
    cls = demangle_simple(found[1])
    short = cls.split("::")[-1] if "::" in cls else cls
    if not short or not short[0].isalpha():
        continue
    name = f"{short}_build"
    if len(name) > 90:
        name = name[:90]
    ok = ida_name.set_name(ea, name, ida_name.SN_NOWARN)
    if ok:
        named += 1
        if len(samples) < 40:
            samples.append((c, found[0], found[1], name))

log(f"  constructors with resolvable type_info: {with_ti}")
log(f"  named: {named}")
log()
for c, vt, mang, name in samples:
    log(f"  {c:#010x}  vt {vt:#08x}  {name:<42} <- {mang}")

idaapi.save_database("", 0)
txt = "\n".join(out)
print(txt)
open(os.path.join(REA, "out_rtti2.txt"), "w", encoding="utf-8").write(txt)
