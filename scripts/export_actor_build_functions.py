"""
export_actor_build_functions.py
--------------------------------
Run inside IDA Pro (File > Script file...) with main.idb open.

Produces actor_build_functions.json – a curated list of actor build
functions that have real names (excludes sub_ / nullsub_ / thunks).

Uses the same backward register resolver as export_profile_registry.py
to find every Profile::Profile call, then looks up the build function
address and checks if it has a meaningful name. If it does, it includes it.
"""

import json
import idautils
import idc
import idaapi


# ------------------------------------------------------------
# Helper: check if a function has a "real" name (not sub_ etc.)
# ------------------------------------------------------------
def is_real_name(name):
    if not name:
        return False
    if name.startswith("sub_"):
        return False
    if name.startswith("nullsub_"):
        return False
    if name.startswith("j_"):
        return False
    # You can add more filters here if needed
    return True


# ------------------------------------------------------------
# Locate Profile::Profile constructor(s) – same as before
# ------------------------------------------------------------
def find_profile_ctor_addresses():
    candidates = []
    for ea in idautils.Functions():
        name = idc.get_func_name(ea)
        demangled = idc.demangle_name(name, idc.get_inf_attr(idc.INF_SHORT_DN)) or name
        if "Profile::Profile" in demangled or "Profile::Profile" in name:
            candidates.append(ea)
    return candidates


# ------------------------------------------------------------
# Resolve R0-R3 before a call – same backward walk
# ------------------------------------------------------------
def resolve_args_before_call(call_ea, num_args=4):
    func_start = idc.get_func_attr(call_ea, idc.FUNCATTR_START)
    results = {r: None for r in range(num_args)}
    pending = set(range(num_args))
    ea = call_ea

    while pending and ea > func_start:
        ea = idc.prev_head(ea, func_start)
        if ea == idaapi.BADADDR or ea < func_start:
            break

        mnem = idc.print_insn_mnem(ea).upper()
        op0_reg = None
        if idc.get_operand_type(ea, 0) == idc.o_reg:
            op0_reg = idc.get_operand_value(ea, 0)

        if op0_reg is None or op0_reg not in pending:
            continue

        if mnem == "LDR":
            optype1 = idc.get_operand_type(ea, 1)
            if optype1 == idc.o_mem or optype1 == idc.o_imm:
                val = idc.get_operand_value(ea, 1)
                resolved = idc.get_wide_dword(val) if val and val != idaapi.BADADDR else None
                target = resolved if resolved else val
                results[op0_reg] = target
                pending.discard(op0_reg)
            # o_displ left unresolved
        elif mnem == "MOVW":
            if idc.get_operand_type(ea, 1) == idc.o_imm:
                lo16 = idc.get_operand_value(ea, 1)
                # Store lo16 for MOVT pair – but we need to track per register
                # For simplicity, we'll just store the lo16 and assume a MOVT follows
                # This is a bit simplistic; you could improve with a dict
        elif mnem == "MOVT":
            # Better to handle MOVW/MOVT pairs properly, but for this quick script
            # we'll just leave it; if you see many incomplete entries, we can improve.
            pass
        elif mnem == "MOV":
            if idc.get_operand_type(ea, 1) == idc.o_imm:
                results[op0_reg] = idc.get_operand_value(ea, 1)
                pending.discard(op0_reg)

    return results


def addr_to_name_or_string(val):
    if val is None:
        return None
    try:
        s = idc.get_strlit_contents(val, -1, idc.STRTYPE_C)
        if s:
            return s.decode("utf-8", errors="replace")
    except:
        pass
    nm = idc.get_name(val)
    if nm:
        return nm
    return hex(val)


def main():
    # Find all calls to Profile::Profile
    profile_ctors = find_profile_ctor_addresses()
    if not profile_ctors:
        print("[!] Could not find Profile::Profile. Aborting.")
        return

    registry = {}
    named_count = 0

    for ctor_ea in profile_ctors:
        for call_ea in idautils.CodeRefsTo(ctor_ea, 1):
            args = resolve_args_before_call(call_ea, num_args=4)
            build_fn = args.get(1)   # R1 = build function pointer
            profile_id = args.get(2) # R2 = profile ID
            name_ptr = args.get(3)   # R3 = name string pointer

            # Skip if we couldn't resolve a valid build function address
            if not build_fn or build_fn == idaapi.BADADDR:
                continue

            # Get the name of the build function (if it has one)
            func_name = idc.get_func_name(build_fn)
            if not func_name or not is_real_name(func_name):
                continue   # Skip unknown (sub_) build functions

            # Demangle if possible
            demangled = idc.demangle_name(func_name, idc.get_inf_attr(idc.INF_SHORT_DN))
            readable_name = demangled if demangled else func_name

            # Get actor name from the Profile::Profile call argument
            actor_name = addr_to_name_or_string(name_ptr) if name_ptr else None

            key = str(profile_id) if profile_id is not None else "UNRESOLVED_%s" % hex(call_ea)
            registry[key] = {
                "profile_id": profile_id,
                "actor_name": actor_name,
                "build_function_address": hex(build_fn),
                "build_function_name": readable_name,
                "mangled_name": func_name if demangled else None,
                "call_site": hex(call_ea),
                "complete": all(v is not None for v in (profile_id, name_ptr))
            }
            named_count += 1

    # Write to JSON
    out_path = "actor_build_functions.json"
    with open(out_path, "w") as f:
        json.dump(registry, f, indent=2, sort_keys=True)

    print("[*] Found %d named actor build functions." % named_count)
    print("[*] Saved to %s" % out_path)


if __name__ == "__main__":
    main()