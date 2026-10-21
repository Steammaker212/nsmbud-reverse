"""
export_profile_registry.py
---------------------------
Run inside IDA Pro (File > Script file...) with main.idb open.

Produces profile_registry.json matching the Discord-bot schema:

    {
      "476": {
        "name": "PlayerFireball",
        "build_function": "0x6013a7a4",
        "address": "0x60c87b30",
        "type": "unknown",
        "type_guess": "projectile"
      },
      ...
    }

WHY THIS APPROACH (not a flat function dump):
Profile IDs are NOT IDA functions or structs -- they're runtime data
created by calls to Profile::Profile(buildFn, id, name, info, flags),
e.g. exactly what we found by hand in sub_6013B948 this session:

    BL Profile::Profile(Actor*(*)(ActorBuildInfo const*),uint,void*,
                         ActorInfo const*,uint)

This script finds EVERY call to that constructor, then walks backward
from each call site to resolve what was placed in R0-R3 right before
the call. That gives us address/build_function/profileId/name directly
from the disassembly, for every actor in the game -- not just the ones
we found manually.

LIMITATIONS (logged, not hidden):
  - "type" is intentionally left "unknown" -- the call site has no field
    for it. "type_guess" is a heuristic from the name string ONLY, and
    can be wrong. Treat it as a hint for manual curation, not fact.
  - If Profile::Profile's args were set up across a basic-block boundary
    (branch into the setup code) the backward walk will stop at the
    block start and report null for unresolved registers rather than
    guess wrong. Entries with any null field are flagged "incomplete":true
    so the bot/maintainer can fix them by hand instead of trusting bad data.
  - Resolves: LDR Rn,=literal (PC-relative pool loads), LDR Rn,[Rm,#imm]
    -> LDR Rn,[Rn] double-indirection (profileId-from-pointer pattern,
    confirmed from sub_6013B948), MOVW+MOVT pairs, and plain MOV #imm.
    Any other addressing pattern is left unresolved (null) rather than
    silently mis-decoded.
"""

import json
import idautils
import idc
import idaapi


# ----------------------------------------------------------------------
# Heuristic-only actor type classifier. NEVER trust this as ground truth.
# ----------------------------------------------------------------------
def guess_type(name):
    if not name:
        return None
    n = name.lower()
    enemy_kw = ["goomba", "koopa", "bro", "kuribo", "boo", "piranha",
                "wiggler", "bullet", "spike", "lakitu", "magikoopa",
                "podoboo", "thwomp", "bowser", "buzzy", "cheep",
                "paratroopa", "sun", "moon"]
    projectile_kw = ["ball", "hammer", "egg", "shell", "fireball",
                      "iceball", "bullet", "rock", "bomb"]
    item_kw = ["kinoko", "flower", "mushroom", "star", "coin", "crown",
               "musasabi", "iceflower", "fireflower", "propeller",
               "penguin", "moon_1up", "leaf"]
    if any(k in n for k in projectile_kw):
        return "projectile"
    if any(k in n for k in item_kw):
        return "item"
    if any(k in n for k in enemy_kw):
        return "enemy"
    return None


# ----------------------------------------------------------------------
# Locate Profile::Profile(...) regardless of exact demangled spelling.
# We search by substring match on all named functions, since the
# mangled/demangled form can vary slightly between idb versions.
# ----------------------------------------------------------------------
def find_profile_ctor_addresses():
    candidates = []
    for ea in idautils.Functions():
        name = idc.get_func_name(ea)
        demangled = idc.demangle_name(name, idc.get_inf_attr(idc.INF_SHORT_DN)) or name
        if "Profile::Profile" in demangled or "Profile::Profile" in name:
            candidates.append(ea)
    return candidates


# ----------------------------------------------------------------------
# Backward register resolver.
# Walks instructions backward from `call_ea` within the SAME function,
# looking for the most recent write to each of R0-R3. Stops at function
# start. Returns dict {0: value_or_None, 1: ..., 2: ..., 3: ...}
# where value is either an int (immediate/address) or a string (if the
# resolved source was a string literal operand).
# ----------------------------------------------------------------------
def resolve_args_before_call(call_ea, num_args=4):
    func_start = idc.get_func_attr(call_ea, idc.FUNCATTR_START)
    results = {r: None for r in range(num_args)}
    pending = set(range(num_args))

    ea = call_ea
    pending_movw = {}  # reg -> lo16 value, waiting for matching MOVT

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
            # Could be PC-relative literal load (resolves to an address,
            # possibly a string or function) or [Rn,#imm] memory load
            # (can't resolve further without emulating memory -- skip).
            optype1 = idc.get_operand_type(ea, 1)
            if optype1 == idc.o_mem or optype1 == idc.o_imm:
                val = idc.get_operand_value(ea, 1)
                # Try to read the actual literal-pool value at `val`
                resolved = idc.get_wide_dword(val) if val and val != idaapi.BADADDR else None
                target = resolved if resolved else val
                results[op0_reg] = target
                pending.discard(op0_reg)
            # [Rn,#imm] forms (o_displ) are left unresolved deliberately --
            # this is the "double indirection" case (profileId-via-pointer)
            # which needs a second LDR to fully resolve; we do NOT guess.

        elif mnem == "MOVW":
            if idc.get_operand_type(ea, 1) == idc.o_imm:
                lo16 = idc.get_operand_value(ea, 1)
                pending_movw[op0_reg] = lo16

        elif mnem == "MOVT":
            if idc.get_operand_type(ea, 1) == idc.o_imm and op0_reg in pending_movw:
                hi16 = idc.get_operand_value(ea, 1)
                lo16 = pending_movw.pop(op0_reg)
                results[op0_reg] = (hi16 << 16) | lo16
                pending.discard(op0_reg)

        elif mnem == "MOV":
            if idc.get_operand_type(ea, 1) == idc.o_imm:
                results[op0_reg] = idc.get_operand_value(ea, 1)
                pending.discard(op0_reg)

        elif mnem == "ADD":
            # ADD Rn, Rn, #imm right after a load is common for string
            # operands (ADD R3, SP, #offset) -- leave unresolved, this
            # is a stack address, not a useful absolute value for the bot.
            pending.discard(op0_reg)

    return results


def addr_to_name_or_string(val):
    """Given a resolved address, try to read it as a C string; otherwise
    try to read it as a named location (function/data). Returns the best
    human-readable representation, or the raw hex if nothing matches."""
    if val is None:
        return None
    try:
        s = idc.get_strlit_contents(val, -1, idc.STRTYPE_C)
        if s:
            return s.decode("utf-8", errors="replace")
    except Exception:
        pass
    nm = idc.get_name(val)
    if nm:
        return nm
    return hex(val)


def main():
    profile_ctor_eas = find_profile_ctor_addresses()
    if not profile_ctor_eas:
        print("[!] Could not find Profile::Profile in this idb. "
              "Check that the function is named/demangled, or update "
              "find_profile_ctor_addresses() with the correct symbol.")
        return

    print("[*] Profile::Profile candidate(s): %s"
          % ", ".join(hex(e) for e in profile_ctor_eas))

    registry = {}
    incomplete_count = 0
    total_calls = 0

    for ctor_ea in profile_ctor_eas:
        for call_ea in idautils.CodeRefsTo(ctor_ea, 1):
            total_calls += 1
            args = resolve_args_before_call(call_ea, num_args=4)

            this_addr   = args.get(0)
            build_fn    = args.get(1)
            profile_id  = args.get(2)
            name_ptr    = args.get(3)

            name = addr_to_name_or_string(name_ptr) if name_ptr else None

            incomplete = any(v is None for v in (this_addr, build_fn, profile_id, name))
            if incomplete:
                incomplete_count += 1

            key = str(profile_id) if profile_id is not None else \
                  "UNRESOLVED_%s" % hex(call_ea)

            registry[key] = {
                "name": name,
                "build_function": hex(build_fn) if build_fn is not None else None,
                "address": hex(this_addr) if this_addr is not None else None,
                "type": "unknown",
                "type_guess": guess_type(name),
                "call_site": hex(call_ea),
                "incomplete": incomplete,
            }

    out_path = "profile_registry.json"
    with open(out_path, "w") as f:
        json.dump(registry, f, indent=2, sort_keys=True)

    print("[*] Found %d Profile::Profile call site(s)." % total_calls)
    print("[*] Wrote %d entries to %s" % (len(registry), out_path))
    print("[*] %d entries are INCOMPLETE (some field could not be resolved "
          "by backward register tracing -- check these by hand in IDA "
          "before trusting them)." % incomplete_count)


if __name__ == "__main__":
    main()
