"""Name the largest unnamed functions from what their bodies prove.

Each name below is justified by a specific, checkable observation. Where the observation is not
decisive the function is left unnamed.

  0x0077BFAC  25,752 b  states
      Writes a long run of MEMORY[0xCBFBC4...] = {0xBC0058-ish tag, "wait"/"Rwait"/"YB_Rwait"/
      "P_wait"/"walk"/...} records. That is a static initialiser filling an animation-name table
      with a tagged record layout. It is the player animation state table.
      -> PlayerAnimStateTable_init

  0x00836678  16,152 b  libs
      Its entire body is
          MEMORY[0xCC72A4] = a2(a1, "nvnDeviceBuilderSetDefaults");
          MEMORY[0xCC72A8] = a2(a1, "nvnDeviceBuilderSetFlags");
          MEMORY[0xCC72AC] = a2(a1, "nvnDeviceInitialize");
      i.e. it resolves NVN graphics entry points through a passed-in lookup callback and stores
      them in a global dispatch table. That is unambiguous.
      -> Nvn_resolveDeviceFunctions

  0x001DBB64  15,284 b  actor_construction
      Calls EffectData_create / EffectData_init, moveValueTo, StateMgr::changeState, and
      references SE_PLY_* sounds. Effect setup + state change + player sounds.
      -> Player_createEffectsAndState

  0x00969DE4  27,044 b  libs
      Only named call is sead::ExpHeap::create. Its body builds heaps. Largest in the image but
      no strings and no other named calls, so it is a heap/arena setup routine whose exact role
      is not established.
      -> left UNNAMED. Guessing "HeapManager_..." would be a name I cannot defend.

  0x001873D0  22,464 b  actor_construction
      222 strings including debug/camera names ("03d_dvCamera_%03d", "AL_FIREWORKS_FINISH",
      "ANDPILLAR"). Looks like a course/actor definition table builder, but with 222 strings the
      specific one is not obvious.
      -> left UNNAMED.

  0x00712498  14,620 b  states
      Calls sead::Random::getU32 x11, sqrtf x9, Player_getActorSlotChecked. Random + geometry +
      player slot lookup: reads as a spawn/scatter routine, not decisive.
      -> left UNNAMED.
"""
import ida_name
import idaapi
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

APPLY = [
    (0x0077BFAC, "PlayerAnimStateTable_init"),
    (0x00836678, "Nvn_resolveDeviceFunctions"),
    (0x001DBB64, "Player_createEffectsAndState"),
]

CMTS = {
    0x0077BFAC: "Static initialiser: fills an animation-state table with tagged records "
                "holding names 'wait','Rwait','YB_Rwait','P_wait','walk',... at 0xCBFBC4+.",
    0x00836678: "Resolves NVN device entry points ('nvnDeviceBuilderSetDefaults', "
                "'nvnDeviceBuilderSetFlags', 'nvnDeviceInitialize') via a lookup callback "
                "and stores them in the dispatch table at 0xCC72A4+.",
    0x001DBB64: "Calls EffectData_create/init, moveValueTo, StateMgr::changeState, and uses "
                "SE_PLY_* sounds: builds player effects and switches state.",
}

for rva, name in APPLY:
    ea = BASE + rva
    cur = ida_name.get_name(ea) or ""
    ok = ida_name.set_name(ea, name, ida_name.SN_NOWARN)
    print(f"  {rva:#010x}  {cur or '(none)':<28} -> {name}  ok={ok}")
    if rva in CMTS:
        idc.set_cmt(ea, CMTS[rva], 1)

print("  comments set on the three named functions")
idaapi.save_database("", 0)
print("saved")
