"""Build every NSMBUDX mod as one sweet-dx module, ready for the SD card.

    python mods/nsmbudx_all/build.py --nso <retail main> --sweetdx-exe <sweetdx.exe> [--install <sd root>]

<retail main> is the main NSO of NSMBU Deluxe v1.0.0 (build id AEE6DCCC06D9C05B),
dumped from your own copy; it is never committed. The toolchain must be on PATH:
clang/clang++ (LLVM), arm-none-eabi-ld and c++filt (on Windows: run from
PowerShell, see mods/nsmbudx_all/README.md).

Output: output/atmosphere/... (subsdk0, the IPS patch and romfs/Model archives).
--install copies it onto an SD card or Ryujinx sdcard folder, backing up any
subsdk0/IPS it replaces into output/sd_backup_<time>/.
"""
from __future__ import annotations

import argparse
import shutil
import subprocess
import sys
import time
from pathlib import Path

HERE = Path(__file__).resolve().parent
REPO = HERE.parents[1]
TITLE = "0100EA80032EA000"
BUILD_ID = "AEE6DCCC06D9C05B42061E2019123A61"


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--nso", required=True, type=Path, help="retail main NSO, v1.0.0")
    ap.add_argument("--sweetdx-exe", required=True, type=Path)
    ap.add_argument("--out", type=Path, default=HERE / "output")
    ap.add_argument("--install", type=Path, help="SD root (the folder that holds atmosphere/)")
    a = ap.parse_args()

    src = HERE / "source"
    (src / "nso").mkdir(exist_ok=True)
    shutil.copy2(a.nso, src / "nso" / "main")
    if a.out.exists():
        shutil.rmtree(a.out)
    log = HERE / "build.log"
    log.unlink(missing_ok=True)          # sweet-dx refuses an existing log
    rc = subprocess.run([str(a.sweetdx_exe), f"--source={src}", f"--output={a.out}",
                         f"--log-file={log}"]).returncode
    if rc:
        print(f"sweet-dx failed ({rc}); see {log}")
        return rc

    romfs = a.out / "atmosphere" / "contents" / TITLE / "romfs" / "Model"
    romfs.mkdir(parents=True, exist_ok=True)
    for f in (HERE / "romfs" / "Model").glob("*.szs"):
        shutil.copy2(f, romfs / f.name)

    subsdk = a.out / "atmosphere" / "contents" / TITLE / "exefs" / "subsdk0"
    rc = subprocess.run([sys.executable, "-I", str(REPO / "scripts" / "sdk" / "inspect_subsdk.py"),
                         str(subsdk)]).returncode
    if rc:
        return rc

    if a.install:
        atmo = a.install / "atmosphere"
        backup = a.out / f"sd_backup_{time.strftime('%Y%m%d_%H%M%S')}"
        for old in (atmo / "contents" / TITLE / "exefs" / "subsdk0",
                    atmo / "exefs_patches" / TITLE / f"{BUILD_ID}.ips"):
            if old.exists():
                backup.mkdir(parents=True, exist_ok=True)
                shutil.copy2(old, backup / old.name)
        shutil.copytree(a.out / "atmosphere", atmo, dirs_exist_ok=True,
                        ignore=shutil.ignore_patterns("sd_backup_*"))
        print(f"installed into {atmo}" + (f" (previous files in {backup})" if backup.exists() else ""))
    print(f"built {a.out}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
