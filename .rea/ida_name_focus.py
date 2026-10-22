"""Apply names justified INDIVIDUALLY by evidence, in the objective's four focus subsystems.

No bulk rule here. Each name below rests on a specific, falsifiable fact, and the fact is written
into the comment so a reviewer can check or refute any single one. Where the evidence admits more
than one reading, the name says only what is certain and carries the RVA so it stays unique.

Discipline being followed (four bulk rules have been reverted in this project):
  * a name must be checkable by reading one thing
  * if two functions share evidence, both get the RVA in the name rather than an invented a/b
  * where a string only shows the ASSET, the name says "load"/"setup", not the gameplay meaning

Deliberately NOT named: 0x452EDC and 0x4531F8. Both read the mode field, but an earlier round
proposed "power-up transition" for them and that claim was RETIRED as unproven. They stay sub_*.
"""
import ida_name
import idaapi
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

# (rva, name, justification recorded as a comment)
NAMES = [
    # ---- player: animation sets registered by name -------------------------
    (0x007915D4, "Player_registerRideAnimations",
     "Registers 12 P_R* animation names (P_RSeat, P_RSeat_out, P_RSeat_success, P_RSeat_fail, "
     "P_RSjump2, P_RSjumped, P_Rsjump, P_Rhip_to_stoop, P_Rstoop, P_Rstoop_start, "
     "P_Rslip_to_stoop) -- the riding/Yoshi animation set."),

    # ---- player: functions that name themselves in a debug string ----------
    (0x007A0E98, "Player_poisonDownUpdate",
     "Contains its own debug string: \"[PoisonDown] type=%d,mode=%d,IsPassingDown=%s\". "
     "The name is the game's own; nothing inferred."),

    # ---- player: model node setup ------------------------------------------
    (0x0079F548, "Player_setupModelNodes_79F548",
     "References node names \"face_1\" and \"skl_root\"; reads the power-up mode field. "
     "RVA suffix because 0x78E270 references \"face_1\" too and I cannot prove they differ "
     "in role."),
    (0x0078E270, "Player_setupModelNodes_78E270",
     "References \"face_1\". RVA suffix for the reason above."),
    (0x007B7140, "Player_setupWristNodes_7B7140",
     "References \"wrist_l1\" and \"wrist_r1\"; reads mode. RVA suffix because 0x79D5A0 "
     "references the same two nodes."),
    (0x0079D5A0, "Player_setupWristNodes_79D5A0",
     "References \"wrist_l1\" and \"wrist_r1\"."),
    (0x007B6D90, "Player_setupRingNode_7B6D90",
     "References \"ring_add\". Asset-only evidence, hence 'setupRingNode' not a behaviour name."),

    # ---- player: the three SE_PLY_DOWN users -------------------------------
    (0x007A72DC, "Player_playDownSound_7A72DC",
     "References \"SE_PLY_DOWN\". RVA suffix because three unnamed functions use it."),
    (0x007A6B18, "Player_playDownSound_7A6B18",
     "References \"SE_PLY_DOWN\"."),
    (0x007A75EC, "Player_playDownSound_7A75EC",
     "References \"SE_PLY_DOWN\"."),

    # ---- powerup / item: asset loaders -------------------------------------
    (0x00461C50, "Item_playAppearSound_461C50",
     "References \"SE_OBJ_ITEM_APPEAR\"."),
    (0x00470B10, "Item_loadMusasabi_470B10",
     "References \"I_musasabi\" (the musasabi/hammer-suit item icon)."),
    (0x0045C720, "Item_loadSwitchAssets_45C720",
     "References \"I_kinoko_switch\", \"I_yoshichibi_egg\", \"wait2\"."),
    (0x0046DD80, "Item_loadKinokoSwitch_46DD80",
     "References \"I_kinoko\" and \"I_kinoko_switch\"."),
    (0x004714E4, "Item_loadKinokoSwitch_4714E4",
     "References \"I_kinoko_switch\"."),
]

applied = 0
skipped = []
for rva, name, why in NAMES:
    ea = BASE + rva
    cur = ida_name.get_name(ea) or ""
    if cur == name:
        skipped.append((rva, name, "already"))
        continue
    ok = ida_name.set_name(ea, name, ida_name.SN_NOWARN)
    if ok:
        idc.set_cmt(ea, why, 1)
        applied += 1
        print(f"  {rva:#010x}  {cur or '(unnamed)':<22} -> {name}")
        print(f"        {why[:96]}")
    else:
        skipped.append((rva, name, "set_name failed"))

print()
print(f"applied: {applied}")
if skipped:
    print(f"skipped: {len(skipped)}")
    for rva, nm, why in skipped:
        print(f"  {rva:#010x} {nm} -- {why}")

# record why the two retired candidates are left alone
for rva in (0x00452EDC, 0x004531F8):
    idc.set_cmt(BASE + rva,
                "Reads the player mode field, but the earlier 'power-up transition' claim for "
                "this address was RETIRED as unproven. Left unnamed deliberately.", 1)
print()
print("annotated 0x452EDC and 0x4531F8 as deliberately unnamed")

idaapi.save_database("", 0)
print("saved")
