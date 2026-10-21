"""
export_profile_registry.py
-------------------------
Run inside IDA Pro (File > Script file...) with main.idb open.

Finds all call-sites of `Profile::Profile` and attempts to resolve the
four incoming registers (R0-R3) at each call. Produces `profile_registry.json`
containing entries keyed by profile id with fields: name, build_function, etc.

This script is intentionally conservative: it uses only documented IDA Python
APIs and marks entries as `incomplete` when any argument couldn't be
confidently resolved. If you see many `incomplete` entries, paste a sample
call-site and I'll extend the resolver for your binary's instruction patterns.
"""

import json
import idautils
import idc
import idaapi

# Small helper to test 64-bit read functions in a best-effort way
def read_pointer(addr):
    if addr is None or addr == idaapi.BADADDR:
        return None
    try:
        # Prefer qword on 64-bit, fall back to dword
        try:
            return idc.get_qword(addr)
        except Exception:
            try:
                return idc.get_wide_dword(addr)
            except Exception:
                try:
                    return idc.get_long(addr)
                except Exception:
                    return None
    except Exception:
        return None


def is_real_name(name):
    if not name:
        return False
    lower = name.lower()
    for p in ("sub_", "nullsub_", "j_", "loc_", "thunk_"):
        if lower.startswith(p):
            return False
    return True


def find_profile_ctor_addresses():
    candidates = []
    short_dn = idc.get_inf_attr(idc.INF_SHORT_DN)
    for ea in idautils.Functions():
        name = idc.get_func_name(ea)
        dem = idc.demangle_name(name, short_dn) or name
        if "Profile::Profile" in dem or "Profile::Profile" in name:
            candidates.append(ea)
    return candidates


# A best-effort backward register resolver for up to `num_args` (R0..R3)
def resolve_args_before_call(call_ea, num_args=4):
    func_start = idc.get_func_attr(call_ea, idc.FUNCATTR_START)
    results = {r: None for r in range(num_args)}
    pending = set(range(num_args))

    # Helpers to track partial constant construction (MOVW/MOVT, MOVZ/MOVK, ADRP/ADD)
    mov_lo = {}    # reg -> low16
    mov_hi = {}    # reg -> high16 (MOVT)
    movk_parts = {} # reg -> list of (shift, value) for MOVK/MOVZ
    adrp_base = {} # reg -> page base (ADRP)

    ea = call_ea
    while pending and ea > func_start:
        ea = idc.prev_head(ea, func_start)
        if ea == idaapi.BADADDR or ea < func_start:
            break

        mnem = (idc.print_insn_mnem(ea) or "").upper()

        # Check operand 0 is a register and get its number
        if idc.get_operand_type(ea, 0) == idc.o_reg:
            dst_reg = idc.get_operand_value(ea, 0)
        else:
            dst_reg = None

        # If dst_reg not one of the ones we track, continue
        if dst_reg is None or dst_reg not in pending:
            # still capture ADRP targets that may later be added
            # but only if they target a register we care about
            # (we skip that micro-optimization here)
            # Note: many instruction sets use different mnemonics; handle common ones
            pass

        # MOV-like immediate -> reg (covers MOV, MOVABS, MOVX)
        if mnem.startswith("MOV") or mnem in ("MOVABS", "MOVQ", "MOVS", "MOVZ"):
            if dst_reg is not None and idc.get_operand_type(ea, 1) == idc.o_imm:
                imm = idc.get_operand_value(ea, 1)
                results[dst_reg] = imm
                pending.discard(dst_reg)
                continue

        # ARM-style MOVW/MOVT pair (16-bit halves)
        if mnem in ("MOVW", "MOVT"):
            if dst_reg is not None and idc.get_operand_type(ea, 1) == idc.o_imm:
                val = idc.get_operand_value(ea, 1) & 0xffff
                if mnem == "MOVW":
                    mov_lo[dst_reg] = val
                else:
                    mov_hi[dst_reg] = val
                # If we now have both, combine into 32-bit value
                lo = mov_lo.get(dst_reg)
                hi = mov_hi.get(dst_reg)
                if lo is not None and hi is not None:
                    combined = (hi << 16) | lo
                    results[dst_reg] = combined
                    pending.discard(dst_reg)
                continue

        # ARM64-style MOVZ/MOVK with shifts
        if mnem in ("MOVK", "MOVZ"):
            if dst_reg is not None and idc.get_operand_type(ea, 1) == idc.o_imm:
                # operand 2 may hold shift/width in some assemblers; try to read second operand
                try:
                    shift = 0
                    if idc.get_operand_type(ea, 2) == idc.o_imm:
                        shift = idc.get_operand_value(ea, 2)
                except Exception:
                    shift = 0
                val = idc.get_operand_value(ea, 1) & 0xffff
                movk_parts.setdefault(dst_reg, []).append((shift, val))
                # Try to materialize if we have sensible parts (best-effort)
                total = 0
                for s, v in movk_parts.get(dst_reg, []):
                    total |= (v << s)
                # Heuristic: if we have a single MOVZ/MOVK that yields a full value, accept
                if len(movk_parts.get(dst_reg, [])) == 1:
                    results[dst_reg] = total
                    pending.discard(dst_reg)
                continue

        # ADRP + ADD pattern (ARM64) or ADR + ADD (ARM32)
        if mnem in ("ADRP", "ADR"):
            if dst_reg is not None and idc.get_operand_type(ea, 1) in (idc.o_imm, idc.o_mem):
                # store page/base; we'll try to detect ADD that consumes it
                base = idc.get_operand_value(ea, 1)
                adrp_base[dst_reg] = base
                continue
        if mnem == "ADD":
            # dst_reg already set above
            if dst_reg is not None:
                # if add reg, imm where first operand is same reg as an ADRP base
                if idc.get_operand_type(ea, 1) == idc.o_reg and idc.get_operand_value(ea, 1) in adrp_base:
                    base = adrp_base.get(idc.get_operand_value(ea, 1))
                    if idc.get_operand_type(ea, 2) == idc.o_imm:
                        total = (base or 0) + idc.get_operand_value(ea, 2)
                        results[dst_reg] = total
                        pending.discard(dst_reg)
                        continue

        # Memory load patterns: LDR/LOAD, MOV (reg, [addr]) or LEA/LOAD effective addr
        if mnem.startswith("LDR") or mnem in ("LOAD", "MOVS"):
            if dst_reg is not None and idc.get_operand_type(ea, 1) in (idc.o_mem, idc.o_imm, idc.o_displ):
                opval = idc.get_operand_value(ea, 1)
                # If operand is an address, try to read pointer-sized data from it
                ptr = read_pointer(opval)
                target = ptr if ptr else opval
                results[dst_reg] = target
                pending.discard(dst_reg)
                continue

        # Generic MOV reg, reg/other — if source is a register with a known resolved value, copy it
        if mnem == "MOV":
            if dst_reg is not None and idc.get_operand_type(ea, 1) == idc.o_reg:
                src = idc.get_operand_value(ea, 1)
                if src in results and results[src] is not None:
                    results[dst_reg] = results[src]
                    pending.discard(dst_reg)
                    continue

    return results


def addr_to_name_or_string(val):
    if val is None:
        return None
    # String literal
    try:
        s = idc.get_strlit_contents(val, -1, idc.STRTYPE_C)
        if s:
            return s.decode("utf-8", errors="replace")
    except Exception:
        pass
    # Named address
    nm = idc.get_name(val)
    if nm:
        return nm
    return hex(val)


def main():
    profile_ctors = find_profile_ctor_addresses()
    if not profile_ctors:
        print("[!] Could not find Profile::Profile. Aborting.")
        return

    registry = {}
    incomplete_count = 0
    total = 0

    for ctor_ea in profile_ctors:
        for call_ea in idautils.CodeRefsTo(ctor_ea, 0):
            total += 1
            args = resolve_args_before_call(call_ea, num_args=4)
            # By convention: R0=this, R1=build_fn, R2=profile_id, R3=name
            build_fn = args.get(1)
            profile_id = args.get(2)
            name_ptr = args.get(3)

            entry = {
                "profile_id": profile_id,
                "name": addr_to_name_or_string(name_ptr),
                "build_function_address": hex(build_fn) if build_fn else None,
                "build_function_name": None,
                "call_site": hex(call_ea),
                "incomplete": False,
            }

            if not build_fn:
                entry["incomplete"] = True
                incomplete_count += 1
            else:
                fn_name = idc.get_func_name(build_fn)
                dem = idc.demangle_name(fn_name, idc.get_inf_attr(idc.INF_SHORT_DN)) if fn_name else None
                entry["build_function_name"] = dem if dem else fn_name
                if not entry["build_function_name"] or not is_real_name(entry["build_function_name"]):
                    # we still record the address, but mark incomplete so user can review
                    entry["incomplete"] = True
                    incomplete_count += 1

            if profile_id is None or name_ptr is None:
                entry["incomplete"] = True
                incomplete_count += 1

            key = str(profile_id) if profile_id is not None else "UNRESOLVED_%s" % hex(call_ea)
            registry[key] = entry

    out = "profile_registry.json"
    with open(out, "w") as f:
        json.dump(registry, f, indent=2, sort_keys=True)

    print("[*] Scanned %d Profile::Profile call-sites." % total)
    print("[*] Incomplete entries: %d" % incomplete_count)
    print("[*] Written: %s" % out)


if __name__ == "__main__":
    main()
