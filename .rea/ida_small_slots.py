"""FIND the fire-shoot capability check among the 53 mode-reading player vtable slots.

A "can this player shoot" predicate in this engine should be tiny and check the mode against a
specific value. From earlier rounds, `ItemId_resolveGuardedByPlayerMode` was exactly that shape:
`MOVW R1,#0x1FB; TST R2,R1,LSR R0` with index mode-1, i.e. a bitmask of permitted modes.

This examines the SMALL mode-reading vtable slots and prints their full bodies. Tiny functions that
read mode and return a boolean or call a sound are the permission layer. Candidates from the slot
list: slots 251 (48b), 260 (52b), 305 (36b), 306 (36b), 176 (84b), 178 (84b), 180 (80b), 181 (92b),
187 (76b), 44 (120b).

Printing them all is cheap and decisive: if a fire gate exists as a player method, it is here.
"""
import idautils
import ida_bytes
import ida_funcs
import ida_name
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000

TARGETS = [
    (251, 0x007AEAE8), (260, 0x007B89CC), (305, 0x007AA41C), (306, 0x007AA444),
    (176, 0x007A90A4), (178, 0x007A51F4), (180, 0x007A52F0), (181, 0x007A57A0),
    (187, 0x00796104), (44, 0x00799B24), (43, 0x00799A38), (46, 0x00796104),
]


def cstr(ea, maxlen=64):
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


for slot, rva in TARGETS:
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    print("=" * 92)
    print(f"slot {slot}  {rva:#010x}  {f.end_ea - f.start_ea} bytes  "
          f"{ida_name.get_name(ea) or '(unnamed)'}")
    print("=" * 92)
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        d = idc.GetDisasm(insn)
        note = ""
        # decode literal pool strings inline
        if "=" in d:
            try:
                disp = int(d.split("=")[1].split(";")[0].strip().lstrip("#"), 16)
                for cand in (disp, disp + BASE):
                    s = cstr(cand)
                    if s:
                        note = f'   ; "{s}"'
                        break
            except Exception:
                pass
        print(f"  {insn - BASE:#010x}  {d}{note}")
    print()
