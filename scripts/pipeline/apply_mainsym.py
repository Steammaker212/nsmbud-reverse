"""Apply the verified main.sym data symbols to a database, headless, and save.

Only entries that verify_mainsym.py accepted are written: the address is inside a
real section, the slot was unnamed in the database, and the name came from
codedx's main.sym. Data symbols use set_name on the address (not the function),
so a .bss singleton and a .text function are handled the same way.

Run with:
    idat.exe -A -S"apply_mainsym.py" <db.i64>
"""
import json

import ida_auto
import ida_funcs
import ida_loader
import ida_name
import idc

PLAN = r"C:\Users\Saif Khan\Downloads\main.idb\_work\mainsym_apply.json"
REPORT = r"C:\Users\Saif Khan\Downloads\main.idb\_work\mainsym_report.txt"


def main():
    ida_auto.auto_wait()
    plan = json.loads(open(PLAN, encoding="utf-8").read())
    print("PLAN_ENTRIES %d" % len(plan))

    ok = fail = 0
    lines = []
    for item in plan:
        ea = item["ea"]
        name = item["name"]
        old = idc.get_name(ea) or ""
        # SN_NOWARN because a data symbol may share a prefix with code; the
        # name is unique by construction (verified before the plan was written).
        if idc.set_name(ea, name, idc.SN_NOWARN | idc.SN_NOCHECK):
            ok += 1
            lines.append("OK    0x%08X %-46s (was %r)" % (ea, name, old))
        else:
            fail += 1
            lines.append("FAIL  0x%08X %s" % (ea, name))
    print("APPLY_DONE ok=%d fail=%d" % (ok, fail))
    open(REPORT, "w", encoding="utf-8").write("\n".join(lines))

    ida_auto.set_ida_state(ida_auto.st_Work)
    print("SAVED %s" % ida_loader.save_database(None, 0))


main()
idc.qexit(0)
