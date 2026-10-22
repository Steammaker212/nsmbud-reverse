"""READ __Player__applyPowerUpTransform -- the function that actually applies a power-up.

sub_604F9090 ends with:

    v4 = 20;
    return __Player__applyPowerUpTransform(a1, a1 + 3632, &dword_60CA6BB8, &v4);

and dword_60CA6BB8 begins a 20-entry table laid out as pairs:

    [0]  "P_Kinoko_00"      [1]  "P_FireFlower_00"   [2]  "P_Penguin_00"
    [3]  "P_Star_00"        [4]  "P_IceFlower_00"    [5]  "P_MameKinoko_00"
    [6]  "P_Propeller_00"   [7]  "P_NutKinoko_00"    [8]  "P_PNutKinoko_00"
    [9]  "P_PeachCrown_00"  [10] "P_Kinoko_01"       [11] "P_FireFlower_01"
    [12] "P_Penguin_01"     [13] "P_Star_01"         [14] "P_IceFlower_01"
    [15] "P_MameKinoko_01"  [16] "P_Propeller_01"    [17] "P_NutKinoko_01"
    [18] "P_PNutKinoko_01"  [19] "P_PeachCrown_01"

NOTE the order: this is NOT the mode order. The mode order is
0 Kinoko, 1 FireFlower, 2 Star, 3 IceFlower, 4 Propeller, 5 MameKinoko, 6 Penguin,
7 NutKinoko, 8 PNutKinoko, 9 PeachCrown -- whereas this table is
Kinoko, FireFlower, Penguin, Star, IceFlower, MameKinoko, Propeller, NutKinoko,
PNutKinoko, PeachCrown.

So something must translate mode -> an index into THIS table. If that translation is wrong for
FireFlower, the player would get a different power-up's animations, which matches the symptom.

This reads applyPowerUpTransform in full to find out whether it indexes by mode directly or via
Player_modeGroupTable, and what it does with the 20 count.
"""
import collections
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

# resolve the callee by name
target = None
for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    if "applyPowerUpTransform" in nm:
        target = ea - BASE
        break
print(f"applyPowerUpTransform: {target if target is None else hex(target)}")

if target is None:
    # find it from the call site in sub_604F9090
    f = ida_funcs.get_func(BASE + 0x004F9090)
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        if idc.print_insn_mnem(insn) in ("BL", "BLX"):
            t = idc.get_operand_value(insn, 0)
            if BASE <= t < BASE + 0x00CD1000:
                nm = ida_name.get_name(t) or ""
                print(f"  call at {insn - BASE:#010x} -> {t - BASE:#010x} {nm}")

if target is not None:
    ea = BASE + target
    f = ida_funcs.get_func(ea)
    print("=" * 94)
    print(f"__Player__applyPowerUpTransform {target:#010x} "
          f"{(f.end_ea - f.start_ea) if f else 0:#x} bytes")
    print("=" * 94)
    if f:
        for insn in idautils.Heads(f.start_ea, f.end_ea):
            d = idc.GetDisasm(insn)
            note = ""
            if "=" in d:
                try:
                    disp = int(d.split("=")[1].split(";")[0].strip().lstrip("#"), 16)
                    b = []
                    for k in range(40):
                        c = ida_bytes.get_byte(disp + k)
                        if c == 0:
                            break
                        if not (32 <= c < 127):
                            b = []
                            break
                        b.append(chr(c))
                    if len(b) >= 3:
                        note = f'   ; "{"".join(b)}"'
                except Exception:
                    pass
            print(f"  {insn - BASE:#010x}  {d}{note}")
    print()
    try:
        cf = ida_hexrays.decompile(ea)
        if cf:
            lines = str(cf).splitlines()
            print(f"  pseudocode {len(lines)} lines:")
            for ln in lines[:110]:
                print("  " + ln)
            if len(lines) > 110:
                print(f"  ... {len(lines)-110} more")
    except Exception as e:
        print(f"  error {e}")
