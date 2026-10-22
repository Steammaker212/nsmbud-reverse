"""APPLY STRING-BACKED NAMES. Names derived from the game's own asset vocabulary.

Two-hop attribution (instruction -> literal pool -> string) finally worked: 9,099 strings
attributed across 4,275 functions. A function that loads 'I_fireflower' and 'I_kinoko' is
the item-name table; one that loads 'SE_PLY_2NDJUMP' is the double-jump sound trigger.

Names below are only applied where the string set makes the purpose unambiguous. Each is
recorded with the strings that justify it, so the label can be audited. Where a function
loads a large mixed set (e.g. all the animation names for the whole player), the name says
the category, not a specific action, because that is all the evidence supports.
"""
import ida_funcs
import ida_name
import idc
import ida_auto
import idaapi

idc.auto_wait()
BASE = 0x60000000
out = []


def log(s=""):
    out.append(s)


# name, rva, evidence
NAMES = [
    # --- item / power-up name tables and spawners ---
    ("ItemNameTable_init", 0x0045CC68,
     "loads exactly I_crown, I_fireflower, I_iceflower, I_kinoko and I_musasabi"),
    ("CourseNameTable_init", 0x0047C13C,
     "loads CourseName_1-1 .. CourseName_2-3, i.e. the course name list"),
    ("WorldNameTable_init", 0x0047BEC0,
     "loads WorldName_1 .. WorldName_9, WorldName_Coin_Battle"),
    ("MenuLayoutTable_init", 0x00476A7C,
     "loads CheckButton, CursorPushButton, DecisionButton, FlexibleTextBoxL"),
    ("StaffCreditTable_init", 0x0047DCCC,
     "loads StaffCredit, NXStaffCredit, staff_credit, VSModeSelect"),

    # --- player animation / sound plumbing ---
    ("Player_animSet_load", 0x00782DB0,
     "loads Sjump, balloon_wait, carryP_throw, carryP_wait - player anim set"),
    ("Player_animSetCarry_load", 0x0078F32C,
     "loads M_Sjump, M_carryP_throw, M_carry_walk - carried-object anim set"),
    ("Player_animSetMetamorphose_load", 0x0078BA10,
     "loads CH_Metamorphose, PEH_Metamorphose, PEH_spike, M_TAIL_wait"),
    ("Player_playDoubleJumpSound", 0x007AF67C,
     "loads SE_PLY_2NDJUMP and SE_PLY_2NDJUMP_S"),
]


def is_default(nm):
    return (not nm) or nm.startswith("sub_") or nm.startswith("nullsub_")


applied = 0
for name, rva, why in NAMES:
    ea = BASE + rva
    cur = ida_name.get_name(ea) or ""
    if not is_default(cur):
        log(f"  SKIP {rva:#010x}: already {cur}")
        continue
    ok = ida_name.set_name(ea, name, ida_name.SN_NOWARN)
    log(f"  {'OK  ' if ok else 'FAIL'} {rva:#010x} -> {name}")
    log(f"        {why}")
    if ok:
        applied += 1

log()
log(f"applied {applied} string-backed names")

# ---------------------------------------------------------------- coverage now
log()
log("=" * 100)
log("NAMING COVERAGE AFTER THIS PASS")
log("=" * 100)
import idautils

REGIONS = [
    (0x000000, 0x0F0000, "core"), (0x0F0000, 0x200000, "actor_construction"),
    (0x200000, 0x300000, "actors_a"), (0x300000, 0x450000, "actors_b"),
    (0x450000, 0x480000, "powerup"), (0x480000, 0x600000, "systems"),
    (0x600000, 0x780000, "states"), (0x780000, 0x7C0000, "player"),
    (0x7C0000, 0x800000, "player_states"), (0x800000, 0x9A0000, "libs"),
]
stats = {}
tot_named = tot = 0
for ea in idautils.Functions():
    rva = ea - BASE
    for lo, hi, n in REGIONS:
        if lo <= rva < hi:
            d = stats.setdefault(n, [0, 0])
            d[1] += 1
            nm = ida_name.get_name(ea) or ""
            if not is_default(nm):
                d[0] += 1
            break

log(f"  {'region':<22}{'named':>8}{'total':>9}{'pct':>7}")
for lo, hi, n in REGIONS:
    a, b = stats.get(n, [0, 0])
    tot_named += a
    tot += b
    pct = 100.0 * a / b if b else 0.0
    log(f"  {n:<22}{a:>8,}{b:>9,}{pct:>6.1f}%")
log(f"  {'TOTAL':<22}{tot_named:>8,}{tot:>9,}{100.0 * tot_named / tot:>6.1f}%")

idaapi.save_database("", 0)

txt = "\n".join(out)
print(txt)
with open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\out_names4.txt", "w",
          encoding="utf-8") as fh:
    fh.write(txt)
