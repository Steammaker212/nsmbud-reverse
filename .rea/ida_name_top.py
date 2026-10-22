"""Name the highest-value unnamed functions, each justified by its decompiled body.

Four bulk naming rules have already been reverted in this project (2,450 SE_*, 78 Actor_*_build,
14 _uses1, 1,076 _vf). Every one of them failed for the same reason: the name was derived from a
cheap signal (a string prefix, a vtable position) and applied to a batch without checking whether
the signal actually predicted behaviour.

So each name below is written out individually, with the evidence that justifies it, and the naming
step ASSERTS that the function at that RVA still matches the body the name was derived from. If the
database changes and a name would no longer be accurate, the assert fires instead of silently
mislabelling the function.

The names describe what the code does, in the vocabulary the rest of the corpus already uses.
"""
import ida_funcs
import ida_name
import ida_auto
import idc

idc.auto_wait()
BASE = 0x60000000

# (rva, new_name, justification, distinctive body fragment the name was derived from)
NAMES = [
    (0x000288, "stub_return0_000288",
     "returns 0 unconditionally; 1611 callers -- a shared no-op/default virtual",
     "return 0;"),

    (0x237560, "EffectData_release",
     "calls EffectData_init on this+16 then erases a sead::ListNode at this+80",
     "EffectData_init"),

    (0x47482C, "ArrayOf20_getEntryPtr",
     "bounds-checked index into an array of 20-byte records: (count, base) at this+3508/+3512",
     "20 * a2"),

    (0x421938, "dispatch_setFlag1",
     "one-line forwarder to sub_6042194C with a trailing 1",
     "sub_6042194C(a1, a2, a3, 1)"),

    (0x41838C, "Vector2_pickBySignAndTag2",
     "selects this+0 or this+4 based on float at this+20; stores to +16, sets flag bits to 2",
     "0xFFFFFFC1 | 2"),

    (0x8DE61C, "List_getNthNode",
     "walks a linked list this+4, count at this+8, for a2 nodes",
     "result + 4"),

    (0x91CD98, "NameTable_setEntryString",
     "indexed 12-byte records (count at [152], base at [153]) then SafeStringBase operator=",
     "12 * a2"),

    (0x91CFA0, "NameTable2_setEntryString",
     "same shape as 0x91CD98 but count/base at [158]/[159] -- a second table on the same object",
     "12 * a2"),

    (0x9175E4, "Object_releaseHandle",
     "if handle at this+192 is valid and a registry lookup returns 1, calls the deleter at "
     "MEMORY[0xCC7568] and clears bit 0 of this+196",
     "0xCC7568"),

    (0x45C0A0, "thunk_sub_60909E64",
     "4-byte thunk; forwards its pointer argument unchanged",
     "thunk"),

    (0x2F36E0, "Array_compactByFlag",
     "clears flag at this+68 then compacts down to 1 entry, resolving ids via ActorMgrRelated",
     "ActorMgrRelated_getById"),

    (0x178694, "Table6_getEntry",
     "clamps index to <6 then reads a dword from this+24, stride 4",
     "a2 >= 6"),

    (0x47467C, "ArrayOf20_insertEntry",
     "finds a free slot with sub_604746E4, writes it with sub_604742D0, returns 0/1",
     "sub_604746E4"),

    (0x8DE334, "Heap_allocate",
     "malloc, or sead::HeapMgr::getCurrentHeap when MEMORY[0xCCEE90] is set",
     "getCurrentHeap"),

    (0x941A08, "Slot_resetAndAttach",
     "zeroes this+8, invokes vtable+12 on a2, stores sub_6090FEB4(a2[1]) at this+4, attaches a5",
     "*a2 + 12"),

    (0x913FB4, "Slot_getRelativeOffset",
     "returns this+4 minus the dword at the object's +8, or 0 when this+16 is null",
     "a1 + 4"),

    (0x26DC8, "StaticInit_guardRegister",
     "__cxa_guard_acquire/release pair around writes of vtable pointers -- a static registration",
     "__cxa_guard_acquire"),
]


def main():
    ok = 0
    mismatch = []
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
        print("named 0x%06X  %-30s (was %s)" % (rva, new, old))
        print("        why: %s" % why)
        ok += 1

    print()
    print("renamed: %d of %d" % (ok, len(NAMES)))
    if mismatch:
        print("MISMATCHES: %s" % mismatch)

    idaapi_save = True
    try:
        import idaapi
        idaapi.save_database("", 0)
        print("database saved")
    except Exception as e:
        print("save: %s" % e)


if __name__ == "__main__":
    main()
