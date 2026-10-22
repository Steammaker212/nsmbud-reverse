"""READ FireballBase: what makes a fireball exist and move.

FireballBase is the shared base for PlayerFireball (player's fire flower), PlantFireball (enemy
plant) and BroFileball (hammer bro). Its ctor is called by exactly those three, which the calibrated
call graph confirms.

The "nothing seems to fire" symptom means either
  (a) no FireballBase is ever constructed for the player, or
  (b) one is constructed but onExecute does nothing because a gate fails.

onExecute (796 bytes) is where the movement/despawn gate lives. This dumps ctor, onCreate,
beforeExecute and onExecute in full, so the gate is visible as code rather than guessed.
"""
import idautils
import ida_funcs
import ida_name
import ida_bytes
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000

TARGETS = [
    (0x00135A90, "FireballBase_ctor", 60),
    (0x00135BD8, "FireballBase_onCreate", 90),
    (0x00135DB0, "FireballBase_beforeExecute", 45),
    (0x00135E48, "FireballBase_onExecute", 120),
]


def cstr(ea, maxlen=70):
    b = []
    for i in range(maxlen):
        try:
            c = ida_bytes.get_byte(ea + i)
        except Exception:
            return None
        if c == 0:
            break
        if not (32 <= c < 127):
            return None
        b.append(chr(c))
    return "".join(b) if len(b) >= 3 else None


def strings_in(f):
    out = set()
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        if "=" not in idc.print_operand(insn, 1):
            continue
        disp = idc.get_operand_value(insn, 1)
        if not disp or not (BASE <= disp < BASE + NSO):
            continue
        w = ida_bytes.get_dword(disp)
        for cand in (w, w + BASE):
            if BASE <= cand < BASE + NSO:
                s = cstr(cand)
                if s:
                    out.add(s)
    return out


for rva, label, limit in TARGETS:
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    print("=" * 94)
    print(f"{label}   {rva:#010x}   {f.end_ea - f.start_ea:#x} bytes")
    print("=" * 94)
    ss = strings_in(f)
    if ss:
        print(f"  strings: {sorted(ss)[:8]}")
    try:
        cf = ida_hexrays.decompile(ea)
        if cf:
            lines = str(cf).splitlines()
            for ln in lines[:limit]:
                print("  " + ln)
            if len(lines) > limit:
                print(f"  ... {len(lines)-limit} more lines")
        else:
            print("  declined")
    except Exception as e:
        print(f"  error {e}")
    print()
