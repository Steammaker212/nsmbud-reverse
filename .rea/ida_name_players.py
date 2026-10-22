"""Name the two large player_states resource loaders, honestly.

Both functions:
  * call ArchiveManager_loadSzs / LoadResource / Resource_getModel2 / ModelWrapper_ctor /
    ModelWrapper_setup / ModelWrapper_updateAnims / AnimationCtrl_setRepeat / TexAnim_play
  * use atoi / strlen / memcmp -- they parse strings from data, typically resource specs
  * are 7.4-7.8 KB with ~1000 lines of pseudocode

So they are model+animation resource loaders for the player module. Neither has a switch on a
single argument that would make a precise method name true, and neither references a distinctive
string that would name them.

The name applied says only what the call set proves:
    0x607E55DC -> PlayerStates_loadModelResources
    0x607E8220 -> PlayerStates_updateModelAndAnims

Those are separate claims and both are supported: the first calls ArchiveManager_loadSzs +
Resource_getModel2 + ModelWrapper_ctor + ModelWrapper_setup (loading and constructing), the
second calls ModelWrapper_updateModel + ModelWrapper_updateAnims + TexAnim_play +
SceneMgr_doSceneChange (per-frame driving).

If a later round establishes something sharper, these get renamed. They are better than
sub_607E55DC only because they tell a reader which module and which kind of operation, which is
verifiable from the call list.
"""
import ida_name
import idaapi
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

APPLY = [
    (0x007E55DC, "PlayerStates_loadModelResources"),
    (0x007E8220, "PlayerStates_updateModelAndAnims"),
]

for rva, name in APPLY:
    ea = BASE + rva
    cur = ida_name.get_name(ea) or ""
    ok = ida_name.set_name(ea, name, ida_name.SN_NOWARN)
    print(f"  {rva:#010x}  {cur or '(none)':<30} -> {name}  ok={ok}")

idc.set_cmt(BASE + 0x007E55DC,
            "Calls ArchiveManager_loadSzs, Resource_getModel2, ModelWrapper_ctor/setup: "
            "loads and constructs player model resources.", 1)
idc.set_cmt(BASE + 0x007E8220,
            "Calls ModelWrapper_updateModel/updateAnims, TexAnim_play, SceneMgr_doSceneChange: "
            "per-frame model and animation update.", 1)
print("  comments set")
idaapi.save_database("", 0)
print("saved")
