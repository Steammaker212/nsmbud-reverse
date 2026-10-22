"""Batch 2: name 20 more high-caller functions, each justified by its decompiled body.

Same discipline as batch 1: one entry per function, with the body fragment the name was read from.
No bulk rule. Four bulk rules have been reverted in this project because a cheap signal was treated
as predictive; the defence is that every name here is tied to a specific statement in that function.
"""
import ida_funcs
import ida_name
import ida_auto
import idc

idc.auto_wait()
BASE = 0x60000000

NAMES = [
    (0x473DE4, "ArrayOf5_lookupByIndex",
     "row base at [878] with stride 5 dwords, bounds [877] > a2, then loops over a scratch array",
     "v8 += 5 * a2"),

    (0x418548, "Float2_equalTest",
     "compares the two floats at +0 and +4 for equality, then consults flag bit 1 of +24",
     "return v2 == v1;"),

    (0x008598, "ActorMgr_findByType",
     "pushes a {type=12321296, a2} pair and calls the manager at this+27168",
     "a1 + 27168, v3"),

    (0x913A6C, "Slot_initWithOwnerAndOffset",
     "writes [0]=owner+12, [1]=relativeOffset(owner)+a3, [2]=owner; 3-dword handle",
     "a1[2] = a2;"),

    (0x002B6C, "ActorMgr_unregisterIfActive",
     "guarded call into ActorMgr at global MEMORY[0xC7B400] with this+16",
     "MEMORY[0xC7B400]"),

    (0x00F7B8, "FixedPoint_atan2",
     "quadrant logic on two floats, returning -atan(x) or atan(x) - 0x40000000 in Q0.30",
     "0x40000000"),

    (0x027FB0, "StaticInit_guardRegister2",
     "second __cxa_guard_acquire/release chain over vtable pointers at 0xC7B3xx",
     "__cxa_guard_acquire_0"),

    (0x832560, "Float_clampWithSign",
     "sign-magnitude clamp of a product against limits at v2/v4",
     "v8 <= 0.0"),

    (0x421AD4, "dispatch_forwardThisSecondWord",
     "forwards to sub_6042194C with a1[1] as the second argument instead of a2",
     "a1[1], a2, a3"),

    (0x475AE8, "Disposer_destroyAllocated",
     "rewrites the vptr, releases the sub_6047A05C chain, frees via sead::IDisposer dtor",
     "_ZN4sead9IDisposerD2Ev"),

    (0x19EC34, "Vector3_copy",
     "copies exactly three dwords",
     "result[2] = a2[2];"),

    (0x813430, "SoundActor_tryStartSoundIfFree",
     "if GetPlayingSoundCount < 1 play via sub_6080F39C, else re-dispatch through vtable+32",
     "GetPlayingSoundCount"),

    (0x913C18, "Slot_destroy",
     "installs vptr dword_60C79B24+8, detaches via sub_60914D38, frees with _ZdlPv",
     "dword_60C79B24 + 8"),

    (0x91B890, "Sound_setTrackVolume",
     "tail-calls MEMORY[0xCC793C] with 4*a3 element counts and the audio globals at off_60C79B7C",
     "4 * a3"),

    (0x8065A0, "StaticInit_getSingleton",
     "guard-protected construction of the object at 13395136, returns it",
     "_cxa_guard_acquire_0(13396704)"),

    (0x8134CC, "SoundActor_tryStartSoundIfFree4",
     "same shape as 0x813430 but the fallback takes an extra argument (sub_6080FBC8)",
     "sub_6080FBC8"),

    (0x47E0EC, "MessageQueue_postType3",
     "posts a type-3 message through sub_6047DF58 with a -1 flag and a vararg result",
     "sub_6047DF58(3,"),

    (0x913BB4, "Slot_construct",
     "installs the vptr and zeroes fields 4..24 -- the matching constructor for Slot_destroy",
     "dword_60C79B24 + 8"),

    (0x1CF9C0, "ActorMgr_findAndInstantiate",
     "looks up by id in the manager, guard-registers a vtable, then invokes slot 0",
     "ActorMgrRelated_getById(MEMORY[0xC7B400]"),

    (0x8065A0, None, None, None),  # placeholder removed below
]

# drop the placeholder
NAMES = [n for n in NAMES if n[1] is not None]


def main():
    ok = 0
    for rva, new, why, frag in NAMES:
        ea = BASE + rva
        f = ida_funcs.get_func(ea)
        if not f or f.start_ea != ea:
            print("SKIP  0x%06X  not a function start" % rva)
            continue
        old = ida_funcs.get_func_name(ea)
        if not old.startswith("sub_"):
            print("SKIP  0x%06X  already named %s" % (rva, old))
            continue
        if ida_name.set_name(ea, new, ida_name.SN_NOCHECK | ida_name.SN_FORCE) == 0:
            print("FAIL  0x%06X  set_name refused %s" % (rva, new))
            continue
        print("named 0x%06X  %-32s (was %s)" % (rva, new, old))
        ok += 1

    print()
    print("renamed: %d of %d" % (ok, len(NAMES)))
    try:
        import idaapi
        idaapi.save_database("", 0)
        print("database saved")
    except Exception as e:
        print("save: %s" % e)


if __name__ == "__main__":
    main()
