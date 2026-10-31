"""Add the Biddybud's walking animation to its archive.

    py -I scripts/models/biddybud_walk.py <backup.szs> <out dir>

<backup.szs> is the converted tenten_w archive (keep it: .projectignore/assets/model_backups). This
never writes it. The result is <out dir>/tenten_w.Nin_NX_NVN.szs, for romfs/Model.

The archive only has FlyWait, BlowDown and PressDown, and in all three the legs hang. This adds
one skeletal animation, "Walk", and leaves the models and the other animations alone. It starts
from the bind pose, the only one with the feet on the ground (y = 0): the legs swing around the
hips with the soles kept flat, the swinging foot lifts, and the body rocks onto the other foot.
"""
from __future__ import annotations

import argparse
import math
import os
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path[:0] = [str(ROOT / "scripts/models")]
import hammer_suit_textures as suit     # noqa: E402
from hammer_suit_textures import write_sarc, yaz0_pack  # noqa: E402
from shyguy_model import base_lines, curve_line, sway   # noqa: E402

SUITTEX = suit.SUITTEX
FIX_DICT = suit.FIX_DICT

FRAMES = 36         # one left and one right step. At 0.35 a frame the stride matches the ground.
SWING = .35         # radians, each way
LIFT = 13.0         # the swinging foot comes up the leg this far (the model is 122 tall)
ROCK = .12          # radians the body rolls onto the standing foot

HIP_Y = 59.105      # JointRoot in the bind pose
HIP_X = 34.378      # either hip from the middle
SHIN = 43.913       # the foot from the hip
PI_2 = 1.5708

BIND = {
    "JointRoot": ((1, 1, 1), (0, HIP_Y, 0), (0, -PI_2, 0)),
    "LegL": ((1, 1, 1), (-9.257, .24, -HIP_X), (-PI_2, 0, -PI_2)),
    "LegR": ((1, 1, 1), (-9.257, .24, HIP_X), (PI_2, 0, -PI_2)),
    "FootL": ((1, 1, 1), (SHIN, 0, 0), (0, -PI_2, 0)),
    "FootR": ((1, 1, 1), (SHIN, 0, 0), (0, PI_2, 0)),
}


def phase(f):
    return 2 * math.pi * f / FRAMES


def swing(f):
    """LegL forward of the hip; LegR takes the opposite."""
    return SWING * math.sin(phase(f))


def lift(f):
    """How far LegL's foot is off the ground: it swings forward while the phase's cosine is up."""
    return LIFT * max(0.0, math.cos(phase(f))) ** 2


def rock(f):
    return ROCK * math.cos(phase(f))


def hip_y(f):
    """The straight leg it stands on shortens the hip's height as it leans; the rock adds to it."""
    return HIP_Y * math.cos(swing(f)) + HIP_X * abs(math.sin(rock(f)))


def walk_curves():
    """(bone, byte offset, value(f)): translate x/y 16/20, rotate x/y/z 32/36/40."""
    return [
        ("JointRoot", 20, hip_y),
        ("JointRoot", 32, rock),
        ("LegL", 40, lambda f: -PI_2 + swing(f)),
        ("LegR", 40, lambda f: -PI_2 - swing(f)),
        ("FootL", 16, lambda f: SHIN - lift(f)),
        ("FootR", 16, lambda f: SHIN - lift(f + FRAMES / 2)),
        ("FootL", 36, lambda f: -PI_2 + swing(f)),      # the sole stays flat
        ("FootR", 36, lambda f: PI_2 + swing(f)),
    ]


def walk_job():
    job = [f"sklanim Walk FlyWait {FRAMES} loop"] + base_lines("Walk", BIND)
    for bone, offset, value in walk_curves():
        fs, keys = sway(value, FRAMES, 12)
        job.append(curve_line("Walk", bone, offset, fs, keys))
    return job


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("source", type=Path)
    ap.add_argument("out", type=Path)
    args = ap.parse_args()

    work = args.out / "work"
    work.mkdir(parents=True, exist_ok=True)

    files = suit.sarc(suit.yaz0(args.source.read_bytes()))
    name = next(n for n in files if n.endswith(".bfres"))
    bfres = work / "in.bfres"
    bfres.write_bytes(files[name])

    jobfile = work / "job.txt"
    jobfile.write_text("\n".join(walk_job()) + "\n")
    out = work / "out.bfres"
    env = dict(os.environ, DOTNET_SYSTEM_GLOBALIZATION_INVARIANT="1")
    subprocess.run([str(SUITTEX), "apply", str(bfres), str(out), str(jobfile)], check=True, stdout=subprocess.DEVNULL, env=env)

    result = dict(files)
    result[name] = out.read_bytes()
    szs = args.out / "tenten_w.Nin_NX_NVN.szs"
    szs.write_bytes(yaz0_pack(write_sarc(result), 0x2000))
    subprocess.run([sys.executable, "-I", str(FIX_DICT), str(szs)], check=True, stdout=subprocess.DEVNULL)
    print("wrote", szs)


if __name__ == "__main__":
    main()
