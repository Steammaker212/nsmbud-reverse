"""Convert Tsuru's Wii U models to NSMBU Deluxe archives (docs/WIIU_MODELS.md, "Tsuru's models").

    python scripts/models/port_tsuru_models.py --wiiu <dir of Wii U .szs> --romfs <Deluxe romfs> --out <dir> [name ...]

Each model is bound to the retail Deluxe actor whose compiled shaders suit it best (the table
below), takes that actor's lightmaps (--template-lightmaps) so it is lit like Deluxe's own
enemies, and is checked by wiiu2dx.py. Names limit the run to those models.
"""
import argparse, subprocess, sys
from pathlib import Path

HERE = Path(__file__).resolve().parent

LM_E = "lm_01e,lm_02e"
# name: (template, [--map ...], [--tex ...], template lightmaps, extra args)
JOBS = {
    # switch / beep blocks: the wood platform's lit, UV-mapped program. The flying ?-block's
    # (obj_block pata_block) drew them black; star_coinA maps its texture by normal (flat faces).
    **{n: ("lift_han_wood", ["mat_block_pata=mat_lift_han_wood", "mat_block_pata_wing=mat_lift_han_wood"],
           ["mat_block_pata=block_pata.0,lm_01mo,lm_02mo", "mat_block_pata_wing=block_pata_wing,lm_01mo,lm_02mo"],
           True, []) for n in ("block_beep", "block_rdbl", "block_stch")},
    # triple blocks: retail block_challenge is Nintendo's conversion of this very material
    **{n: ("block_challenge", [], [], True, []) for n in ("block_trip", "blocktripa", "blocktripb", "blocktripc")},
    "clef":        ("star_coin", ["clef=mat_star_coinA"], ["clef=NoteObjFirstBody_alb,lm_01mo,lm_02mo"], True, []),
    "note":        ("star_coin", ["note=mat_star_coinA"], ["note=red,lm_01mo,lm_02mo"], True, []),
    "star_shard":  ("star_coin", ["mat_star_shard=mat_star_coinA"], [], True, []),
    "timeclock":   ("star_coin", ["mat_timeclockA=mat_star_coinA", "mat_timeclockB_body=mat_star_coinB_body",
                                  "mat_timeclockB_eye=mat_star_coinB_eye", "mat_timeclockB_star=mat_star_coinB_star"],
                    ["mat_timeclockA=object_xx01_TimerClock_dif,lm_01mo,lm_02mo"], True, []),
    "e_poison":    ("switch", ["mat_poison=mat_switch_bikkuri_2"], ["mat_poison=poison,lm_01i,lm_02i,poison_env"], True, []),
    "poisball":    ("switch", ["mat_poison=mat_switch_bikkuri_2"], ["mat_poison=poison,lm_01i,lm_02i,poison_env"], True, []),
    "gasagoso":    ("musasabi", ["mt_gasagoso=mt_musasabi_body", "mt_gasagosostring=mt_musasabi_eye"],
                    [f"mt_gasagoso=gasagoso,{LM_E}", f"mt_gasagosostring=white,{LM_E}"], True, []),
    "guruguru":    ("gorogoro", [], [], True, []),
    # Stingby, Cataquack, Peepa: drawn black / unlit with the generic programs at Tsuru's setScale
    # 0.1-0.17. Bound instead to programs proven in game (kakibo = the Shy Guy, chorobon = the Cold
    # Fuzzy), with the actor's scale baked into the model so the code draws it at scale 1.
    "hacchin000":  ("kakibo", ["HacchinBodyMat00=mat_kakibo_body", "HacchinBodyMat01=mat_kakibo_body",
                               "HacchinBodyMat02=mat_kakibo_body", "HacchinMouthMat00=mat_kakibo_body",
                               "HacchinEyeMat00=mat_kakibo_body"],
                    [f"HacchinBodyMat00=HacchinBody_alb,{LM_E}", f"HacchinBodyMat01=HacchinBody_alb,{LM_E}",
                     f"HacchinBodyMat02=HacchinBody_alb,{LM_E}", f"HacchinMouthMat00=HacchinMouth_alb,{LM_E}",
                     f"HacchinEyeMat00=HacchinEye_alb.0,{LM_E}"], True, ["--bake-scale", "0.17"]),
    "kamiya":      ("iggy", ["mat_broomA=mat_bodyA"], [], True, []),
    # lavaglow sits in the second lightmap slot on purpose (the lava glow): keep the model's own
    "laron":       ("karon", ["mat_laron_body=mat_karon_body", "mat_kalav_body=mat_karon_body"],
                    ["mat_kalav_body=lavaglow,lm_01e,lm_02e"], False, []),  # its own lavaanim is missing from the file
    "moking":      ("mokinger", ["MokingBodyMat00=mt_mokinger_body", "MokingBodyMat01=mt_mokinger_body",
                                 "MokingNailMat00=mt_mokinger_body", "MokingEyeMat00=mt_mokinger_eye"],
                    [f"MokingBodyMat00=MokingBody_alb,{LM_E}", f"MokingBodyMat01=MokingBody_alb,{LM_E}",
                     f"MokingNailMat00=MokingBody_alb,{LM_E}", f"MokingEyeMat00=MokingEye_alb.0,{LM_E}"], True, []),
    "nokonokoB":   ("nokonokoA", ["mat_nokonokoB=mat_nokonokoA"], [], True, []),
    "nukubomb":    ("gabon_rock", ["NukkunBombMat00=mat_rock"], [f"NukkunBombMat00=NukkunBomb00_alb,{LM_E}"], True, []),
    "nukunuku":    ("musasabi", ["NukkunBodyMat00=mt_musasabi_body", "NukkunLeafMat00=mt_musasabi_body",
                                 "NukkunMouthMat00=mt_musasabi_body"],
                    [f"NukkunBodyMat00=NukkunBody00_alb,{LM_E}", f"NukkunLeafMat00=NukkunLeaf00_alb,{LM_E}",
                     f"NukkunMouthMat00=NukkunBody00_alb,{LM_E}"], True, []),
    "poihana":     ("kakibo", ["mt_poihana=mat_kakibo_body"], [f"mt_poihana=Poihana,{LM_E}"], True,
                    ["--bake-scale", "0.1"]),
    "teren":       ("chorobon", ["TerenBodyMat00=mat_chorobon", "TerenMouthMat00=mat_chorobon",
                                 "Clouds=mat_chorobon"],
                    [f"TerenBodyMat00=Teren_dif,{LM_E},chorobon_env", f"TerenMouthMat00=Teren_dif,{LM_E},chorobon_env"],
                    True, ["--drop-material", "Clouds", "--bake-scale", "0.15"]),
    # truck: all parts on the plain lit program; the metal-env one washed the metal out white/silver
    "truck":       ("gorogoro", ["mt_metal=machine3_mat", "mt_lightmetal=machine3_mat",
                                 "mt_wood=machine3_mat", "mt_light=machine3_mat"],
                    [f"mt_metal=Truck_alb,{LM_E}", f"mt_lightmetal=TruckLight01_alb,{LM_E}",
                     f"mt_wood=TruckWood_alb,{LM_E}", f"mt_light=KinopioHeadLight_alb,{LM_E}"], True, []),
    "ukibofloat":  ("gabon_rock", [], [f"mat_rock=ukibofloat_alb,{LM_E}"], True, []),
}


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--wiiu", required=True, type=Path, help="folder with the Wii U <name>.szs archives")
    ap.add_argument("--romfs", required=True, type=Path, help="the Deluxe romfs (templates)")
    ap.add_argument("--out", required=True, type=Path)
    ap.add_argument("names", nargs="*")
    a = ap.parse_args()

    failed = []
    for name, (tpl, maps, texs, lm, extra) in JOBS.items():
        if a.names and name not in a.names:
            continue
        cmd = [sys.executable, str(HERE / "wiiu2dx.py"), "--wiiu", str(a.wiiu / f"{name}.szs"),
               "--template", tpl, "--name", name, "--romfs", str(a.romfs), "--out", str(a.out)]
        for m in maps:
            cmd += ["--map", m]
        for t in texs:
            cmd += ["--tex", t]
        if lm:
            cmd += ["--template-lightmaps"]
        cmd += extra
        print(f"===== {name} (template {tpl})", flush=True)
        if subprocess.run(cmd).returncode != 0:
            failed.append(name)
    print("failed:", failed or "none")
    return 1 if failed else 0


if __name__ == "__main__":
    sys.exit(main())
