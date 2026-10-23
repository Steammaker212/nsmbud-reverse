"""Apply the vtable-slot naming plan to a database, headless, and save.

Run with:
    idat.exe -A -S"apply_vtable_plan.py" <db.i64>

Every entry in the plan was derived from a measured vtable slot (see
dump_vtables.py and name_from_vtables.py), so the rename asserts only what the
image shows: which class owns the slot and at what byte offset.
"""
import json
import time

import ida_auto
import ida_funcs
import ida_loader
import idc

PLAN = r"C:\Users\Saif Khan\Downloads\main.idb\_work\vtable_plan_apply.json"
REPORT = r"C:\Users\Saif Khan\Downloads\main.idb\_work\vtable_apply_report.txt"


def main():
    ida_auto.auto_wait()
    plan = json.loads(open(PLAN, encoding="utf-8").read())
    print("PLAN_ENTRIES %d" % len(plan))

    t0 = time.time()
    applied = skipped = failed = 0
    done = []
    for item in plan:
        ea = item["ea"]
        new = item["new"]
        f = ida_funcs.get_func(ea)
        if not f or f.start_ea != ea:
            skipped += 1
            done.append("SKIP  0x%08X %s (no function)" % (ea, new))
            continue
        if idc.set_name(ea, new, idc.SN_NOWARN | idc.SN_NOCHECK):
            applied += 1
            done.append("OK    0x%08X %s" % (ea, new))
        else:
            failed += 1
            done.append("FAIL  0x%08X %s" % (ea, new))

    print("APPLY_DONE applied=%d skipped=%d failed=%d secs=%.1f"
          % (applied, skipped, failed, time.time() - t0))
    open(REPORT, "w", encoding="utf-8").write("\n".join(done))

    ida_auto.set_ida_state(ida_auto.st_Work)
    ok = ida_loader.save_database(None, 0)
    print("SAVED %s" % ok)


main()
idc.qexit(0)
