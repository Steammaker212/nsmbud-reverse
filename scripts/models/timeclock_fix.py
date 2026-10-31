"""Give the Time Clock a UV-mapped program.

    py -I scripts/models/timeclock_fix.py <backup.szs> <lift_han_wood.szs> <out dir>

<backup.szs> is the converted timeclock archive (keep it: .projectignore/assets/model_backups),
which this never writes; <lift_han_wood.szs> is the retail archive from romfs/Model. The result is
<out dir>/timeclock.Nin_NX_NVN.szs, for romfs/Model.

The clock was converted on star_coinA, which maps its texture by normal: the face looks straight
at the camera and read the dark middle of the atlas. The wood platform's program maps it by UV
(the switch blocks moved to it for the same reason). port_tsuru_models.py now does this from the
Wii U model; this is for when only the converted archive is at hand.
"""
from __future__ import annotations

import argparse
import os
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path[:0] = [str(ROOT / "scripts/models")]
import hammer_suit_textures as suit     # noqa: E402
from hammer_suit_textures import write_sarc, yaz0_pack  # noqa: E402

BFSHA = "Wii_UBER.Nin_NX_NVN.bfsha"
TEMPLATE = "lift_han_wood_L", "mat_lift_han_wood"
LIGHTMAPS = "lm_01mo,lm_02mo"
MATERIALS = [
    ("timeclockA", "mat_timeclockA", "object_xx01_TimerClock_dif"),
    ("timeclockB", "mat_timeclockB_body", "timeclockB_body"),
    ("timeclockB", "mat_timeclockB_eye", "timeclockB_body"),
    ("timeclockB", "mat_timeclockB_star", "timeclockB_body"),
]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("source", type=Path)
    ap.add_argument("template", type=Path)
    ap.add_argument("out", type=Path)
    args = ap.parse_args()

    work = args.out / "work"
    work.mkdir(parents=True, exist_ok=True)

    files = suit.sarc(suit.yaz0(args.source.read_bytes()))
    template = suit.sarc(suit.yaz0(args.template.read_bytes()))
    bfres = work / "in.bfres"
    bfres.write_bytes(files["output.bfres"])
    lift = work / "lift.bfres"
    lift.write_bytes(template["output.bfres"])

    jobfile = work / "job.txt"
    jobfile.write_text("".join(f"material {model} {mat} {lift} {TEMPLATE[0]} {TEMPLATE[1]} {tex},{LIGHTMAPS}\n"
                               for model, mat, tex in MATERIALS))
    out = work / "out.bfres"
    env = dict(os.environ, DOTNET_SYSTEM_GLOBALIZATION_INVARIANT="1")
    subprocess.run([str(suit.SUITTEX), "apply", str(bfres), str(out), str(jobfile)], check=True, stdout=subprocess.DEVNULL, env=env)

    result = dict(files)
    result["output.bfres"] = out.read_bytes()
    result[BFSHA] = template[BFSHA]
    szs = args.out / "timeclock.Nin_NX_NVN.szs"
    szs.write_bytes(yaz0_pack(write_sarc(result), 0x2000))
    subprocess.run([sys.executable, "-I", str(suit.FIX_DICT), str(szs)], check=True, stdout=subprocess.DEVNULL)
    print("wrote", szs)


if __name__ == "__main__":
    main()
