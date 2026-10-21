"""
export_named_functions.py
---------------------------
Run inside IDA Pro (File > Script file...) with main.idb open.

Companion dataset to profile_registry.json. Produces named_functions.json:
a SMALL, CURATED function list -- not a dump of every sub_XXXXXXXX IDA's
auto-analysis found.

Your original script (idautils.Functions() + get_func_name) is technically
correct, but for a ~30k+ function game binary it will export thousands of
meaningless "sub_60483A1C" entries. A Discord bot suggesting an unnamed
sub_ address as a patch target gives the user nothing to act on. This
script keeps ONLY:

  1. Functions IDA could NOT auto-name with "sub_" (i.e. real symbols --
     either recovered from RTTI/C++ mangling, or manually renamed by you
     during analysis, like "HammerActor_setupModel").
  2. For C++ methods, the demangled name (e.g. "HammerBros::createProjectile")
     plus the RAW mangled name, since both are useful: the bot can show
     the readable name, while the mangled name is what you'd search for
     in the .lst/.idb if cross-checking.
  3. Size and a `has_xrefs_in` count (how many places call it) -- a cheap
     signal of how "central" a function is, useful for the bot to rank
     suggestions (a function called from 50 places is probably more
     foundational than one called from nowhere -- e.g. dead/inlined code
     IDA still listed).

WHAT THIS DELIBERATELY EXCLUDES:
  - Any function whose name still starts with "sub_" -- these convey zero
    information without manual investigation, and including ~95% of the
    binary as opaque hex addresses doesn't help a patch-writing bot.
  - Thunks / library stub functions (FUNC_LIB / FUNC_THUNK flags) -- noise
    for this use case.

If you later confirm more sub_ functions by hand (like we did this whole
session for things such as HammerBros_createHammer, BlockActor__create,
etc.), just rename them in IDA and re-run this script -- they'll
automatically be picked up next export since they'll no longer start
with "sub_".
"""

import json
import idautils
import idc
import idaapi


def is_real_name(name):
    if not name:
        return False
    if name.startswith("sub_"):
        return False
    if name.startswith("nullsub_"):
        return False
    if name.startswith("j_"):  # IDA's "jump to" thunk naming
        return False
    return True


def main():
    entries = []
    skipped_unnamed = 0
    skipped_thunk = 0

    for ea in idautils.Functions():
        flags = idc.get_func_flags(ea)
        if flags & idc.FUNC_THUNK:
            skipped_thunk += 1
            continue
        if flags & idc.FUNC_LIB:
            skipped_thunk += 1
            continue

        name = idc.get_func_name(ea)
        if not is_real_name(name):
            skipped_unnamed += 1
            continue

        demangled = idc.demangle_name(name, idc.get_inf_attr(idc.INF_SHORT_DN))

        start = ea
        end = idc.get_func_attr(ea, idc.FUNCATTR_END)

        xref_count = sum(1 for _ in idautils.CodeRefsTo(ea, 0))

        entries.append({
            "name": demangled if demangled else name,
            "mangled_name": name if demangled else None,
            "address": hex(start),
            "end": hex(end),
            "size": end - start,
            "called_from_count": xref_count,
        })

    entries.sort(key=lambda e: e["called_from_count"], reverse=True)

    out_path = "named_functions.json"
    with open(out_path, "w") as f:
        json.dump(entries, f, indent=2)

    print("[*] Exported %d named/RTTI-recovered functions to %s"
          % (len(entries), out_path))
    print("[*] Skipped %d unnamed sub_/nullsub_/j_ functions (noise)."
          % skipped_unnamed)
    print("[*] Skipped %d thunk/library functions." % skipped_thunk)
    print("[*] If you manually rename more sub_ functions in IDA "
          "(as confirmed this session for things like "
          "HammerBros_createHammer), re-run this script to pick them up.")


if __name__ == "__main__":
    main()
