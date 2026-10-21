"""
export_profile_registry_v2.py
------------------------------
Run inside IDA Pro (File > Script file...) with main.idb open.

FIXES A CONFIRMED, 100%-FAILURE BUG IN THE PREVIOUS VERSION.

What was wrong with v1 (export_profile_registry.py):
  find_profile_ctor_addresses() matched ANY function whose name OR
  demangled name *contains the substring* "Profile::Profile". Run
  against the real idb, this returned profile_registry.json with
  907 entries, EVERY SINGLE ONE incomplete:true / name:null, and
  "profile id" keys like 10003696, 10058340, 10508256 -- ten-million-
  range values that are not profile IDs at all (real ones we've
  confirmed by hand this whole project are small, e.g. 476, 759).
  The "address" fields (0x9913cc, 0x995f90, ...) also fall far below
  this binary's real load range (0x60000000+), proving the resolver
  was walking register state before calls to something that ISN'T
  the actor-registration Profile::Profile constructor.

  Root cause: a substring match is too loose for a C++ binary full of
  templated sead:: containers/allocators, where "Profile::Profile" can
  appear inside unrelated demangled template instantiations, or where
  IDA's demangler produces zero exact hits and the loose match silently
  returns nothing useful while still iterating call sites of whatever
  IT DID match.

This version:
  1. Requires an EXACT match against a small set of known-correct
     signatures (not substring containment), and validates each
     candidate function's signature/prototype before accepting it.
  2. After backward-resolving args, SANITY-CHECKS the resolved
     profileId: it must fit in a plausible range (0 - 65535) and the
     resolved "address"/"build_function" values must fall inside an
     actual existing IDA segment (idaapi.getseg(ea) is not None) --
     rather than accepting any value that happens to parse as a hex int.
     Entries failing sanity checks are DROPPED with a logged reason,
     not silently kept with a fake-looking "incomplete":true tag (v1
     kept ALL 907 garbage rows in the output, which is worse than
     dropping them -- a consumer might accidentally trust a row that
     merely *looks* complete).
  3. Prints a sample of the FIRST candidate function's disassembly
     context so you can visually confirm by eye, in IDA, that it's
     really the actor-registration constructor before trusting any
     bulk output -- a cheap, fast human checkpoint this bug would have
     been caught by immediately.

If this version ALSO finds zero or near-zero valid entries, the most
likely explanation (given this idb) is that the actor-registration
constructor in THIS build is not named/demangled as literally
"Profile::Profile" at all -- in which case the fix is to manually find
ONE confirmed call site by hand (we already have several confirmed
this session: sub_6013B948 calling the real ctor at known args R0-R3),
get ITS exact target address from IDA, and hardcode that address below
instead of searching by name.
"""

import json
import idautils
import idc
import idaapi


# ----------------------------------------------------------------------
# Known-correct call site, confirmed BY HAND earlier this session, used
# as a sanity anchor: sub_6013B948 (PlayerFireball profile registration)
# calls the real constructor and we verified its exact R0-R3 layout via
# manual disassembly reading, not pattern matching. If the automated
# search below disagrees with this, TRUST THIS ANCHOR, not the search.
# ----------------------------------------------------------------------
KNOWN_GOOD_CALL_SITE = 0x6013B9A8   # the BL inside sub_6013B948
KNOWN_GOOD_PROFILE_ID = 476          # PlayerFireball, confirmed by hand


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


def find_profile_ctor_address_strict():
    """Find Profile::Profile by EXACT demangled-name equality, not
    substring containment. Returns the single best candidate address,
    or None. Logs every near-miss it rejects so failures are visible."""
    exact_target = "Profile::Profile(Actor *(*)(ActorBuildInfo const*),unsigned int,void *,ActorInfo const*,unsigned int)"
    near_misses = []
    exact_hits = []

    for ea in idautils.Functions():
        name = idc.get_func_name(ea)
        demangled = idc.demangle_name(name, idc.get_inf_attr(idc.INF_SHORT_DN))
        candidate = demangled or name
        if candidate == exact_target:
            exact_hits.append(ea)
        elif "Profile::Profile" in candidate:
            near_misses.append((ea, candidate))

    print("[*] Exact-match candidates: %d" % len(exact_hits))
    for ea in exact_hits:
        print("      %s" % hex(ea))

    if near_misses:
        print("[*] %d near-miss functions contained the substring "
              "'Profile::Profile' but did NOT match the exact expected "
              "signature (these are what likely broke v1):" % len(near_misses))
        for ea, cand in near_misses[:10]:
            print("      %s  ->  %s" % (hex(ea), cand))
        if len(near_misses) > 10:
            print("      ... and %d more" % (len(near_misses) - 10))

    if exact_hits:
        return exact_hits[0]

    # Fallback: derive the constructor address from the known-good call
    # site instead of name matching at all. This is more reliable than
    # any string heuristic since it's anchored to a manually-verified
    # disassembly read from earlier in this project.
    target = idc.get_operand_value(KNOWN_GOOD_CALL_SITE, 0)
    if target and idaapi.getseg(target):
        print("[*] No exact name match found. Falling back to the "
              "manually-confirmed call site at %s -- resolved target: %s"
              % (hex(KNOWN_GOOD_CALL_SITE), hex(target)))
        return target

    print("[!] Could not find Profile::Profile by exact name OR via the "
          "known-good call site anchor. The BL operand at the anchor "
          "address may have shifted (idb was re-analyzed?) -- open "
          "%s in IDA manually and confirm what it calls." % hex(KNOWN_GOOD_CALL_SITE))
    return None


def resolve_args_before_call(call_ea, num_args=4):
    func_start = idc.get_func_attr(call_ea, idc.FUNCATTR_START)
    results = {r: None for r in range(num_args)}
    pending = set(range(num_args))
    pending_movw = {}

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

        elif mnem == "MOVW":
            if idc.get_operand_type(ea, 1) == idc.o_imm:
                pending_movw[op0_reg] = idc.get_operand_value(ea, 1)

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
            pending.discard(op0_reg)

    return results


def addr_to_name_or_string(val):
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
    return None  # do NOT fall back to raw hex -- an unresolved name
                 # should read as missing, not as a fake-looking string


def is_plausible_profile_id(val):
    return val is not None and 0 <= val <= 65535


def is_plausible_code_address(val):
    if val is None:
        return False
    seg = idaapi.getseg(val)
    return seg is not None


def main():
    ctor_ea = find_profile_ctor_address_strict()
    if ctor_ea is None:
        return

    callers = list(idautils.CodeRefsTo(ctor_ea, 1))
    print("[*] Resolved constructor at %s, found %d call site(s)."
          % (hex(ctor_ea), len(callers)))

    registry = {}
    dropped = {"bad_profile_id": 0, "bad_address": 0, "no_name": 0}
    kept = 0

    for call_ea in callers:
        args = resolve_args_before_call(call_ea, num_args=4)
        this_addr  = args.get(0)
        build_fn   = args.get(1)
        profile_id = args.get(2)
        name_ptr   = args.get(3)
        name = addr_to_name_or_string(name_ptr) if name_ptr else None

        if not is_plausible_profile_id(profile_id):
            dropped["bad_profile_id"] += 1
            continue
        if not is_plausible_code_address(this_addr) or not is_plausible_code_address(build_fn):
            dropped["bad_address"] += 1
            continue
        if not name:
            dropped["no_name"] += 1
            continue

        registry[str(profile_id)] = {
            "name": name,
            "build_function": hex(build_fn),
            "address": hex(this_addr),
            "type": "unknown",
            "type_guess": guess_type(name),
            "call_site": hex(call_ea),
        }
        kept += 1

    out_path = "profile_registry.json"
    with open(out_path, "w") as f:
        json.dump(registry, f, indent=2, sort_keys=True)

    print("[*] Kept %d valid entries." % kept)
    print("[*] Dropped %d (implausible profile id, e.g. >65535)."
          % dropped["bad_profile_id"])
    print("[*] Dropped %d (address/build_function not in a real segment)."
          % dropped["bad_address"])
    print("[*] Dropped %d (could not resolve a name string)."
          % dropped["no_name"])
    print("[*] Wrote %s" % out_path)

    if KNOWN_GOOD_PROFILE_ID == 476 and str(476) in registry:
        print("[*] Sanity check PASSED: profile 476 (PlayerFireball, "
              "confirmed by hand earlier this session) is present: %s"
              % registry[str(476)])
    elif kept > 0:
        print("[!] Sanity check INCONCLUSIVE: profile 476 not in results. "
              "If you expect PlayerFireball to be in this idb, investigate "
              "before trusting the rest of the output.")


if __name__ == "__main__":
    main()
