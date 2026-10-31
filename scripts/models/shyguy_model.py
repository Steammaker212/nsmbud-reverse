"""Build the Shy Guy archive: its nine colours and the animations its behaviours play.

    py -I scripts/models/shyguy_model.py <backup.szs> <out dir>

<backup.szs> is the plain converted model (keep it: .projectignore/assets/model_backups). This
never writes it. The result is <out dir>/shyguy.Nin_NX_NVN.szs, for romfs/Model.

What it adds (code/sprites/shy_guy.cpp uses all of it):

    heyho_tex.0-8    the atlas recoloured, one per behaviour (COLOURS)
    color_ftp        a texture-pattern animation with one frame per colour, as the Biddybud's
                     "bud": on mat_kakibo_body, frozen on a frame in code
    shyguy_orange    a second model that keeps the original rig, drawn by Behaviour 1
                     (the retail Goomba class, which never plays color_ftp)
    sitdown, sit,
    standup          the sit pose, with the head moving as if confused
    sad_idle,
    sad_walk         the head turning slowly from side to side, hands over its eyes
    sad_sit          sitting, hands over its eyes, shaking its head "no"
    idle             standing still, for the behaviours that do not walk
    sit_idle,
    sit_blow         sitting, and blowing a bubble
    happy            walk1 with big flaps of the arms

On the "shyguy" model the hood and the mask are moved from skin matrix skl_root to the head bone:
the converted model had them on skl_root, so nothing could turn the head alone.

The rig has no arms. On both models they go to the bones ha_1 and ha_2 (teeth of the Goomba rig
nothing uses), now children of spin, and every animation drives them: a slow flap, unless it says
otherwise. An animation made for the other rig has spare entries (head_end, jnt_wing) for them.
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
import hammer_suit_textures as suit     # noqa: E402  (numpy and Pillow come with it)
from hammer_suit_textures import Image, bc, hsv, mip_chain, np, over, surface, tint, write_sarc, yaz0_pack  # noqa: E402

SUITTEX = suit.SUITTEX
FIX_DICT = suit.FIX_DICT

# Body and boots of each behaviour, from the reference picture.
COLOURS = [
    ((228, 28, 44), (72, 20, 190)),     # 0 red, purple boots: the sit-down Shy Guy
    ((245, 130, 28), (46, 108, 222)),   # 1 orange, blue boots: the original
    ((245, 200, 50), (58, 170, 50)),    # 2 yellow, green boots: jumps on the spot
    ((226, 226, 226), (22, 22, 24)),    # 3 white, black boots: throws spike balls
    ((70, 175, 50), (130, 60, 16)),     # 4 green, brown boots: leaps
    ((46, 60, 226), (226, 40, 170)),    # 5 blue, magenta boots: chases
    ((30, 30, 32), (160, 160, 160)),    # 6 black, grey boots: sad
    ((90, 190, 245), (210, 40, 50)),    # 7 light blue, red boots: blows bubbles
    ((245, 125, 160), (150, 30, 235)),  # 8 pink, purple boots: happy
]
ORANGE = 1

HEAD_SPLIT_Y = 11.0     # the hood and the mask start here (the belt of the hood)
SKIN_ROOT, SKIN_SPIN, SKIN_HEAD = 0, 3, 4

# The chin of the mask, below the split, and the collar it covers; a vertex the conversion left
# on leg_l, which tore out of the robe under the arm whenever the legs moved.
SKIN_CHIN = [434, 435, 488, 489, 490, 491, 492, 493, 533]
SKIN_ROBE = [49, 54, 55, 71, 72, 119]

ARM_L, ARM_R = "ha_1", "ha_2"
ARM_SPARE = {ARM_L: "head_end", ARM_R: "jnt_wing"}
ARM_FROM_X = 8.8        # the sleeve from here on: what stays closes the shoulder
ARM_FROM_Y = 6.5
ARM_PIVOT = (7.4, 9.3, 0.0)
ARM_LENGTH = 5.2
SPIN_Y, SPIN_SCALE_Y = 5.66, 1.011      # where spin is, in the model; x is along it, y across
PI_2 = 1.5708


def recolour(atlas, body, boots):
    a = atlas[..., :3].astype(float)
    hue, sat, val = hsv(a)
    red = ((hue < 14) | (hue > 335)) & (sat > .45)     # not the brown strap
    blue = (hue > 215) & (hue < 285) & (sat > .4)
    colour = np.array(body, float)
    if colour.max() < 80:                       # black needs its folds lifted to show at all
        shade = val ** 1.2 * 1.1 + .12
    else:
        shade = val ** 1.15 * 1.02
    out = over(a, tint(colour, shade), red.astype(float))
    out = over(out, tint(np.array(boots, float), val * 1.05), blue.astype(float) * suit.box(*a.shape[:2], 0, 38, 165, a.shape[1]))
    return out


# ---- poses --------------------------------------------------------------------------------

STAND = {
    "skl_root": ((1, 1, 1), (0, 2.16, 0), (0, 0, 1.5708)),
    "leg_l": ((1, 1, 1), (-0.301, -2.547, 0), (0, 0, -1.5651)),
    "leg_r": ((1, 1, 1), (-0.301, 2.547, 0), (3.1416, 0, 1.5651)),
    "spin": ((1, 1.011, 0.986), (3.505, 0, 0), (0, 0, 0)),
    "head": ((1, 1, 1), (3.6, 0, 0), (0, 0, 0)),
}

SIT = dict(STAND)
SIT.update({
    # On its butt, leaning back, the legs out in front: both the robe's hem and the soles are at y = 0.
    "skl_root": ((1, 1, 1), (0, 0.531, -1.0), (0, 0.25, 1.5708)),
    "leg_l": ((1, 1, 1), (1.193, -3.1, 6.0), (0, 1.35, -1.5708)),
    "leg_r": ((1, 1, 1), (1.193, 3.1, 6.0), (3.1416, -1.35, 1.5708)),
})


def arm_rest(side):
    return (1, 1, 1), (ARM_PIVOT[1] - SPIN_Y, -side * ARM_PIVOT[0] / SPIN_SCALE_Y, 0.0), (0, 0, -PI_2)


ARM_SIDES = ((ARM_L, 1), (ARM_R, -1))


def arm_job(model):
    return [f"arm {model} {bone} spin {SKIN_SPIN} {side} {ARM_FROM_X} {ARM_FROM_Y} {side * ARM_PIVOT[0]} {ARM_PIVOT[1]} {ARM_PIVOT[2]} "
            f"{arm_rest(side)[1][0]:.5f} {arm_rest(side)[1][1]:.5f}" for bone, side in ARM_SIDES]


def pose_matrix(s, t, r):
    cx, sx = math.cos(r[0]), math.sin(r[0])
    cy, sy = math.cos(r[1]), math.sin(r[1])
    cz, sz = math.cos(r[2]), math.sin(r[2])
    rot = np.array([[cz, -sz, 0], [sz, cz, 0], [0, 0, 1]]) @ np.array([[cy, 0, sy], [0, 1, 0], [-sy, 0, cy]]) @ np.array([[1, 0, 0], [0, cx, -sx], [0, sx, cx]])
    m = np.eye(4)
    m[:3, :3] = rot @ np.diag(s)
    m[:3, 3] = t
    return m


def rigid(pose, bone):
    s, t, r = pose[bone]
    return pose_matrix((1, 1, 1), t, r)


def head_world(pose, head_turn):
    spin = rigid(pose, "skl_root") @ rigid(pose, "spin")
    head = pose_matrix((1, 1, 1), pose["head"][1], (head_turn, 0, 0))
    return spin, spin @ head


EYE = (3.4, 19.0, 10.2)         # where a hand goes, on the mask at rest
HAND_WIDTH = 2.2


def covering(pose, side, head_turn):
    """The arm's (scale, translate, rotate), reaching the eye however the head is turned."""
    spin, head = head_world(pose, head_turn)
    _, rest = head_world(STAND, 0.0)
    eye = head @ np.linalg.inv(rest) @ np.array([side * EYE[0], EYE[1], EYE[2], 1.0])
    _, (tx, ty, tz), _ = arm_rest(side)
    t = np.array([tx, ty, tz, 1.0])
    reach = (eye - spin @ t)[:3]
    length = float(np.linalg.norm(reach))
    x = side * reach / length
    y = np.cross((0.0, 0.0, 1.0), x)
    y /= np.linalg.norm(y)
    world = np.eye(3)
    world[:, 0], world[:, 1], world[:, 2] = x, y, np.cross(x, y)
    m = spin[:3, :3].T @ world
    r = (math.atan2(m[2, 1], m[2, 2]), math.asin(-m[2, 0]), math.atan2(m[1, 0], m[0, 0]))
    return (length / ARM_LENGTH, HAND_WIDTH, HAND_WIDTH), tuple(t[:3]), r


def channels(pose):
    """{(bone, byte offset): value}: scale 4 8 12, translate 16 20 24, rotate 32 36 40."""
    out = {}
    for bone, (s, t, r) in pose.items():
        for i in range(3):
            out[bone, 4 + i * 4] = s[i]
            out[bone, 16 + i * 4] = t[i]
            out[bone, 32 + i * 4] = r[i]
    return out


def base_lines(anim, pose):
    return [f"base {anim} {b} " + " ".join(f"{v:.5f}" for v in (*s, *t, *r)) for b, (s, t, r) in pose.items()]


def number_list(values):
    return ",".join(f"{v:.5f}" for v in values)


def curve_line(anim, bone, offset, frames, keys):
    return f"curve {anim} {bone} {offset} {number_list(frames)} {number_list(k for key in keys for k in key)}"


def ease(a, b):
    """One eased span from a to b, then rest at b."""
    d = b - a
    return [(a, 0.0, 3 * d, -2 * d), (b, 0.0, 0.0, 0.0)]


def sway(value, frames, spans):
    """A Hermite curve through value(f) over a loop, slopes taken from it."""
    step = frames / spans
    fs = [i * step for i in range(spans + 1)]
    def slope(f):
        e = 0.01
        return (value(f + e) - value(f - e)) / (2 * e) * step
    keys = []
    for i in range(spans):
        p0, p1 = value(fs[i]), value(fs[i + 1])
        m0, m1 = slope(fs[i]), slope(fs[i + 1])
        keys.append((p0, m0, 3 * (p1 - p0) - 2 * m0 - m1, 2 * (p0 - p1) + m0 + m1))
    keys.append((value(frames), 0.0, 0.0, 0.0))
    return fs, keys


def arm_lines(anim, pose):
    return [f"armanim {anim} {bone} {ARM_SPARE[bone]} " + " ".join(f"{v:.5f}" for v in (*s, *t, *r)) for bone, (s, t, r) in pose.items()]


def still_arms(anim):
    return arm_lines(anim, {bone: arm_rest(side) for bone, side in ARM_SIDES})


def flap(anim, frames, cycles, amount=.3, up=0.0):
    """Both arms flapping, `cycles` times through the animation."""
    job = still_arms(anim)
    for bone, side in ARM_SIDES:
        value = lambda f, side=side: -PI_2 + side * (up + amount * math.sin(2 * math.pi * cycles * f / frames))
        fs, keys = sway(value, frames, cycles * 8)
        job.append(curve_line(anim, bone, 40, fs, keys))
    return job


def nearest_turn(angle):
    """The same angle within half a turn of 0: atan2 jumps a whole turn at +-pi, and a curve
    through the jump spins the arm all the way round."""
    return (angle + math.pi) % (2 * math.pi) - math.pi


def covered(anim, pose, frames, head_turn):
    """Hands over its eyes as the head turns, and the head turning."""
    job = arm_lines(anim, {bone: covering(pose, side, head_turn(0)) for bone, side in ARM_SIDES})
    for bone, side in ARM_SIDES:
        for offset, group, i in ((4, 0, 0), (16, 1, 0), (20, 1, 1), (24, 1, 2), (32, 2, 0), (36, 2, 1), (40, 2, 2)):
            start = covering(pose, side, head_turn(0))[group][i]

            def value(f):
                v = covering(pose, side, head_turn(f))[group][i]
                return start + nearest_turn(v - start) if group == 2 else v

            fs, keys = sway(value, frames, 12)
            job.append(curve_line(anim, bone, offset, fs, keys))
    fs, keys = sway(head_turn, frames, 12)
    job.append(curve_line(anim, "head", 32, fs, keys))
    return job


def tween_job(name, frames, a, b):
    job = [f"sklanim {name} hikkuri {frames} once"] + base_lines(name, a)
    ca, cb = channels(a), channels(b)
    for (bone, offset), va in ca.items():
        vb = cb[bone, offset]
        if abs(va - vb) > 1e-4:
            job.append(curve_line(name, bone, offset, [0, frames], ease(va, vb)))
    return job


# What flaps in the retail animations and the sit: (frames, flaps).
FLAPS = {"idle": (60, 1), "walk": (180, 3), "walk0": (180, 3), "walk1": (180, 3), "hikkuri": (44, 1), "damage": (28, 1), "sit": (120, 2)}
BLOW = 24


def animations():
    job = tween_job("sitdown", 14, STAND, SIT)
    job += tween_job("standup", 18, SIT, STAND)
    job += still_arms("sitdown") + still_arms("standup")

    job += ["sklanim idle hikkuri 60 loop"] + base_lines("idle", STAND)

    frames = 120
    job += [f"sklanim sit hikkuri {frames} loop"] + base_lines("sit", SIT)
    fs, keys = sway(lambda f: .32 * math.sin(2 * math.pi * f / frames), frames, 8)
    job.append(curve_line("sit", "head", 32, fs, keys))
    fs, keys = sway(lambda f: .16 * math.sin(4 * math.pi * f / frames + 1.0), frames, 8)
    job.append(curve_line("sit", "head", 40, fs, keys))

    job += [f"sklanim sit_idle hikkuri {frames} loop"] + base_lines("sit_idle", SIT) + flap("sit_idle", frames, 2)

    job += [f"sklanim sit_blow hikkuri {BLOW} once"] + base_lines("sit_blow", SIT) + flap("sit_blow", BLOW, 1, .2)
    fs, keys = sway(lambda f: -.2 * math.sin(math.pi * f / BLOW) ** 2, BLOW, 8)     # leaning into it
    job.append(curve_line("sit_blow", "head", 36, fs, keys))

    job += ["sklanim happy walk1 180 loop keep"] + flap("happy", 180, 6, .55, .45)

    for anim, (length, flaps) in FLAPS.items():
        job += flap(anim, length, flaps)

    frames = 240
    job += [f"sklanim sad_idle hikkuri {frames} loop"] + base_lines("sad_idle", STAND)
    job += covered("sad_idle", STAND, frames, lambda f: .5 * math.sin(2 * math.pi * f / frames))

    walk = 180
    job += [f"sklanim sad_walk walk0 {walk} loop keep", "clear sad_walk head"]
    job += covered("sad_walk", STAND, walk, lambda f: .5 * math.sin(2 * math.pi * f / walk))

    no = 120
    job += [f"sklanim sad_sit hikkuri {no} loop"] + base_lines("sad_sit", SIT)
    job += covered("sad_sit", SIT, no, lambda f: .45 * math.sin(6 * math.pi * f / no))
    return job


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("source", type=Path)
    ap.add_argument("out", type=Path)
    args = ap.parse_args()

    work = args.out / "work"
    preview = args.out / "preview"
    work.mkdir(parents=True, exist_ok=True)
    preview.mkdir(parents=True, exist_ok=True)

    archive = args.source.read_bytes()
    files = suit.sarc(suit.yaz0(archive))
    source = work / "in.szs"
    source.write_bytes(archive)
    bfres = work / "in.bfres"
    bfres.write_bytes(files["output.bfres"])

    tex = bc.textures(source)
    fmt, w, h, bh, _ = tex["heyho_tex"]
    atlas = np.array(bc.image(tex["heyho_tex"]), np.uint8)
    env = dict(os.environ, DOTNET_SYSTEM_GLOBALIZATION_INVARIANT="1")
    info = subprocess.run([str(SUITTEX), "info", str(bfres)], capture_output=True, text=True, check=True, env=env).stdout
    total = next(int(l.split("[")[1].split(",")[0]) for l in info.splitlines() if l.startswith("tex heyho_tex "))

    job = []
    names = []
    for i, (body, boots) in enumerate(COLOURS):
        rgb = recolour(atlas, body, boots)
        name = f"heyho_tex.{i}"
        path = work / f"{name}.bin"
        path.write_bytes(surface(mip_chain(rgb, 1 + int(np.log2(max(w, h)))), fmt == bc.FMT_BC3, bh, total))
        Image.fromarray(np.clip(np.rint(rgb), 0, 255).astype(np.uint8), "RGB").save(preview / f"{name}.png")
        job.append(f"texture {name} heyho_tex {path}")
        names.append(name)

    job.append("texanim color_ftp kakibo_ftp mat_kakibo_body " + " ".join(names))
    job.append(f"model shyguy_orange shyguy mat_kakibo_body heyho_tex.{ORANGE}")
    job.append(f"rebind shyguy {SKIN_ROOT} {SKIN_HEAD} {HEAD_SPLIT_Y}")
    job.append(f"skin shyguy {SKIN_HEAD} {','.join(map(str, SKIN_CHIN))}")
    job.append(f"rebind shyguy {SKIN_ROOT} {SKIN_SPIN} -100")
    job.append(f"skin shyguy {SKIN_SPIN} {','.join(map(str, SKIN_ROBE))}")
    job.append(f"skin shyguy_orange {SKIN_SPIN} {','.join(map(str, SKIN_ROBE))}")
    job += arm_job("shyguy") + arm_job("shyguy_orange")
    job += animations()

    jobfile = work / "job.txt"
    jobfile.write_text("\n".join(job) + "\n")
    out = work / "out.bfres"
    subprocess.run([str(SUITTEX), "apply", str(bfres), str(out), str(jobfile)], check=True, stdout=subprocess.DEVNULL, env=env)

    result = dict(files)
    result["output.bfres"] = out.read_bytes()
    szs = args.out / "shyguy.Nin_NX_NVN.szs"
    szs.write_bytes(yaz0_pack(write_sarc(result), 0x2000))
    subprocess.run([sys.executable, "-I", str(FIX_DICT), str(szs)], check=True, stdout=subprocess.DEVNULL)
    print("wrote", szs)


if __name__ == "__main__":
    main()
