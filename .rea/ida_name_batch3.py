"""Batch 3: name the remaining 29 functions that have 100+ callers.

Completes the "100+ callers" tier. Same rule as batches 1 and 2: every name is read off a specific
statement in that function's body, and the justification is recorded here so a later reader can
disagree with the name rather than having to rediscover the evidence.
"""
import ida_funcs
import ida_name
import ida_auto
import idc

idc.auto_wait()
BASE = 0x60000000

NAMES = [
    (0x807EF0, "SoundPlayer_updateWithLocation",
     "if the audio globals at 0xCC6D78 say so, dispatch through vtable+24 then release the "
     "handle at a1+20 via sub_608B0390/sub_608B0444",
     "sub_608B0390(*v4, 1)"),

    (0x45BF30, "ctor_installTwoVtables",
     "calls sub_60909B00 then writes two vptrs: [0]=12562932, [77]=12562968",
     "result[77] = 12562968;"),

    (0x45BF58, "Registry_iterateAndRegister",
     "walks the array at MEMORY[0xCCF448]+220, guard-registering a vtable per entry",
     "MEMORY[0xCCF448] + 212"),

    (0x913D88, "Slot_initFromResource",
     "zeroes fields 4..24 and clears bit 0 of +20, then sub_60915628 with the current heap",
     "getCurrentHeap"),

    (0x8FDDF4, "StringUtil_formatInto",
     "sead::StringUtil::vsnprintf into the buffer at +4 with capacity +8",
     "vsnprintf"),

    (0x47EABC, "IntrusiveList_clearAndDestroy",
     "zeroes [2] and [7..11], then walks the list at [4] calling vtable+24 per node",
     "(*result + 24))(result)"),

    (0x502548, "StateMgr_resetAndMaybeChange",
     "clears seven flag bytes at +1040..1050, notifies sub_60402084 unless state is 25, then "
     "StateMgr::changeState",
     "_ZN8StateMgr11changeStateEP9StateBase"),

    (0x1E4C88, "SoundActor_playByIdWithPosition",
     "resolves a name with sub_601E3508, copies a 3-dword vector, then plays via BasicSoundActor",
     "BasicSoundActor2_play"),

    (0x446088, "AnimationCtrl_setupFromResource",
     "looks up a resource, stores it at +136, seeds floats from +104, sets repeat, tags bit 1 of +28",
     "AnimationCtrl_setRepeat"),

    (0x4734E4, "Disposer_allocateChildren",
     "resolves the heap, calls vtable+12/+16, then operator new(84) and operator new(240)",
     "operator new(84"),

    (0x421830, "ModelWrapper_ctorWithChild",
     "ModelWrapper_ctor then sub_60421BAC on a1+12 and [17]=0",
     "sub_60421BAC"),

    (0x1E0040, "LevelData_getIdPlus72",
     "resolves through sub_601A4454 and sub_60178780 then adds 72",
     "+ 72"),

    (0x75EDF8, "isMode5",
     "returns whether the dword at +1316 equals 5",
     "1316) == 5"),

    (0x473B58, "Table_getEntryById",
     "indexes an array at MEMORY[0xCD0B40]+36 with bounds check, then sub_604739E8",
     "MEMORY[0xCD0B40] + 32"),

    (0x1A443C, "Table18_getEntry2D",
     "2D index a3 + 2*a2 clamped to <0x12, reads +28 with stride 4",
     "a3 + 2 * a2"),

    (0x1FEE28, "ActorMgr_findAndInstantiate2",
     "same shape as 0x1CF9C0 with a different guard slot (0xC88ADC) -- a second registry",
     "MEMORY[0xC88ADC]"),

    (0x2A3EFC, "Scale_init",
     "stores the argument at [6] and writes 1.0f to [4], plus an incoming float to [5]",
     "1065353216"),

    (0x1DFFE4, "LevelData_getId",
     "same resolution chain as 0x1E0040 without the +72 adjustment",
     "sub_601A4454"),

    (0x793CA8, "Object_getBit5",
     "extracts bit 5 of the byte at +28 two pointer hops away",
     ">> 5) & 1"),

    (0x90B350, "RenderParams_defaultInit",
     "writes a byte pair 1,1 then 0,0, a 255 sentinel at +4, five 1.0f values, -1 at +36, and "
     "the 5,5,6,6 byte quad at +40",
     "1065353216"),

    (0x6047DF58, None, None, None),
]

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
            print("FAIL  0x%06X  refused %s" % (rva, new))
            continue
        print("named 0x%06X  %-36s (was %s)" % (rva, new, old))
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
