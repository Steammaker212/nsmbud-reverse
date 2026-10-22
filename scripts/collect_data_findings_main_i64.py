"""Adopt the FUNCTION names that main.i64 carries as DATA labels.

Why these were missed by the earlier name adoption: the first comparison only looked at
`main.i64`'s FUNCTIONS table, where these entries do not appear. IDA recorded them in the NAMES table
instead -- `BillBlaster_onCreate` at RVA 0x324284 is a named location that IDA did not also carve into a
function. They are real findings from the credited prior work, and this repo still calls those addresses
`sub_*`.

Scope, deliberately narrow:
  * only entries whose name matches the *_onCreate / *_onExecute / *_ctor / *_init / *_build / *_exec form
    used throughout this project, so no `aMod0`-style string labels or `jpt_*`/`def_*` bookkeeping leak in
  * only where this repo's table has no name at that RVA (a real gap, not a disagreement)
  * StateID_* enums and other pure constants are recorded, not applied -- they name a VALUE, and putting
    them in a function table would be wrong

Writes .rea/data_findings_main_i64.json: {"functions": {rva: name}, "constants": {rva: name}}
"""
import json
import os
import re

REA = r"C:\Users\Saif Khan\Downloads\main.idb\.rea"
RICH = os.path.join(REA, "main_i64_rich.json")
FULL = os.path.join(REA, "functions_full.json")
OUT = os.path.join(REA, "data_findings_main_i64.json")

# the verb vocabulary this project already uses for per-class methods
FUNC_NAME = re.compile(
    r"^[A-Za-z_]\w*_"
    r"(onCreate|onExecute|onDraw|onDelete|onInit|beforeDraw|afterDraw|beforeExecute|afterExecute|"
    r"ctor|dtor|init|create|execute|update|setup|build|spawn|reset|start|stop|load|save|"
    r"Action|State|Walk|Fall|Jump|Attack|Die|Turn|Move|Idle)$")


def main():
    rich = json.load(open(RICH, encoding="utf-8"))
    full = json.load(open(FULL, encoding="utf-8"))["data"]
    named_rva = {int(r["rva"]): r["name"] for r in full}
    named_names = {r["name"] for r in full}

    funcs, consts = {}, {}
    for entry in rich["data_names"]:
        name = entry["name"]
        rva = int(entry["rva"])
        if name.startswith("_Z"):
            continue

        # A StateID entry is a CONSTANT even though its name ends in a verb: `BobOmb_StateID_Walk`
        # names a state ID value, not a Walk function. The FUNC_NAME pattern matched it because
        # "Walk" is in the verb list, and the first run therefore proposed 16 "functions" of which 12
        # were state enums. Classify on the StateID/StateId infix first, then on the verb.
        if "_StateID_" in name or "_StateId_" in name:
            consts[rva] = name
            continue

        if FUNC_NAME.match(name):
            # only adopt where this repo has no name at that RVA
            if rva not in named_rva or named_rva[rva].startswith("sub_"):
                funcs[rva] = name

    json.dump({"functions": {str(k): v for k, v in sorted(funcs.items())},
               "constants": {str(k): v for k, v in sorted(consts.items())}},
              open(OUT, "w", encoding="utf-8"), indent=1)

    print("function names to adopt : %d" % len(funcs))
    for rva, name in sorted(funcs.items())[:20]:
        print("   0x%08X  %s" % (rva, name))
    print("constant names recorded : %d" % len(consts))
    for rva, name in sorted(consts.items())[:8]:
        print("   0x%08X  %s" % (rva, name))
    print("\nwrote %s" % OUT)


if __name__ == "__main__":
    main()
