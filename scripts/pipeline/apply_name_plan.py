"""Apply a rename plan to a database, headless, and save the result.

Run with:
    idat.exe -A -S"apply_name_plan.py" <db.i64>

Reads ``_work/name_plan.json`` (built by ``build_name_plan.py``) and renames
each function. The database is saved on exit, which the MCP plugin cannot do.
"""
import json
import os
import time

import ida_auto
import ida_funcs
import ida_idp
import ida_name
import idc

PLAN = r"C:\Users\Saif Khan\Downloads\main.idb\_work\name_plan.json"


def main():
    ida_auto.auto_wait()
    plan = json.loads(open(PLAN, encoding="utf-8").read())
    print("PLAN_ENTRIES %d" % len(plan))

    t0 = time.time()
    applied = skipped = failed = 0
    for i, item in enumerate(plan):
        ea = item["ea"]
        new = item["new"]
        f = ida_funcs.get_func(ea)
        if not f or f.start_ea != ea:
            skipped += 1
            continue
        ok = idc.set_name(ea, new, idc.SN_NOWARN | idc.SN_NOCHECK)
        if ok:
            applied += 1
        else:
            # Name already used elsewhere at this address family; retry with suffix.
            alt = "%s_%X" % (new, ea & 0xFFFFFF)
            if idc.set_name(ea, alt, idc.SN_NOWARN | idc.SN_NOCHECK):
                applied += 1
            else:
                failed += 1
        if (i + 1) % 2000 == 0:
            print("PROGRESS %d/%d applied=%d skipped=%d failed=%d %.1fs"
                  % (i + 1, len(plan), applied, skipped, failed, time.time() - t0))

    print("APPLY_DONE applied=%d skipped=%d failed=%d secs=%.1f"
          % (applied, skipped, failed, time.time() - t0))

    # Persist: the MCP plugin has no save RPC, so the headless run owns saving.
    ida_auto.set_ida_state(ida_auto.st_Work)
    import ida_loader
    ok = ida_loader.save_database(None, 0)
    print("SAVED %s" % ok)


main()
idc.qexit(0)
