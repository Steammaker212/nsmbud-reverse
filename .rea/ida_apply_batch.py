"""Apply a naming batch from a JSON file, instead of one Python script per batch.

Batches 1-3 were each a separate script with an embedded NAMES list, and each duplicated the same
apply/verify/save logic. That is four places to fix a bug and three chances for behaviour to drift
apart. This is the single implementation; a batch is now data.

Input format -- a JSON list, or an object with a "names" list:

    [{"rva": "0x90B4B0", "name": "RenderParams_updateFrom", "why": "..."}]

Safety properties, each of which a past batch needed:

  * refuses to rename unless the current name still starts with `sub_` -- an existing name is
    evidence that someone already decided, and overwriting it silently would destroy that decision
  * refuses a non-function-start, so a mid-function address cannot become "a function"
  * reports every skip with its reason instead of failing quietly
  * saves the database, because IDA headless does not reliably persist names otherwise

Usage:  idat -A -S"ida_apply_batch.py" work_named.i64 -- <batch.json>
"""
import json
import ida_funcs
import ida_name
import ida_auto
import idc

idc.auto_wait()
BASE = 0x60000000
DEFAULT_BATCH = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\name_batch.json"


def batch_path():
    # idc.ARGV does NOT carry the arguments after `--` in every IDA version -- it silently kept
    # reading DEFAULT_BATCH, which is why a second batch file appeared to "skip everything already
    # named": it was re-reading the FIRST file. The reliable channel is the environment, which the
    # caller sets explicitly.
    import os
    env = os.environ.get("NSMBUDX_BATCH")
    if env:
        return env
    for i, a in enumerate(idc.ARGV):
        if a == "--" and i + 1 < len(idc.ARGV):
            return idc.ARGV[i + 1]
    return DEFAULT_BATCH


def main():
    path = batch_path()
    print("batch file: %s" % path)
    data = json.load(open(path, encoding="utf-8"))
    entries = data["names"] if isinstance(data, dict) else data
    print("entries: %d" % len(entries))

    ok = 0
    skips = []
    for e in entries:
        rva = e["rva"]
        if isinstance(rva, str):
            rva = int(rva, 16)
        new = e["name"]
        ea = BASE + rva
        f = ida_funcs.get_func(ea)
        if not f:
            skips.append((rva, "not a function"))
            continue
        if f.start_ea != ea:
            skips.append((rva, "inside %s, not a start" % ida_funcs.get_func_name(f.start_ea)))
            continue
        old = ida_funcs.get_func_name(ea)
        if not old.startswith("sub_"):
            skips.append((rva, "already named %s" % old))
            continue
        if ida_name.set_name(ea, new, ida_name.SN_NOCHECK | ida_name.SN_FORCE) == 0:
            skips.append((rva, "set_name refused"))
            continue
        print("named 0x%06X  %-38s (was %s)" % (rva, new, old))
        ok += 1

    print()
    print("renamed: %d of %d" % (ok, len(entries)))
    for rva, why in skips:
        print("  SKIP 0x%06X  %s" % (rva, why))

    try:
        import idaapi
        idaapi.save_database("", 0)
        print("database saved")
    except Exception as ex:
        print("save: %s" % ex)


if __name__ == "__main__":
    main()
