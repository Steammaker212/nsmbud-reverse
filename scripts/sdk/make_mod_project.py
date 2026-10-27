"""Assemble a buildable sweet-dx project from a mod folder.

A mod in mods/<name>/ carries only its own code/, hooks/ and symbols/. This
lays it over:

  * sweet-dx's template headers and symbols/main.sym (codedx's names),
  * the generated game API (sdk/include, sdk/symbols/nsmbudx_game.sym),
  * the retail NSO, which sweet-dx reads to build trampolines,

and then runs sweet-dx on the result.

The template's own code/ and hooks/ (codedx's example actors and its custom
profile system) are left out by default: they register profiles and hook the
game at load, and a mod should only change what it says it changes. Pass
--with-template-code when the romfs levels place codedx's custom sprites
(724-733), or entering those levels crashes on a profile nobody registered.

Every .sym file becomes a linker script, and two scripts assigning one symbol
do not error -- the later silently wins. So a name defined twice is refused
here before sweet-dx ever sees it.

Usage:
    python scripts/sdk/make_mod_project.py --mod mods/hammer_suit \
        --sweetdx "../sweet-dx-main (1)/sweet-dx-main" --nso ../main.idb/main \
        --out <work dir> [--build]
"""
from __future__ import annotations

import argparse
import re
import shutil
import subprocess
import sys
from pathlib import Path

SYM_LINE = re.compile(r"^\s*([A-Za-z_.$][\w.$]*)\s*=\s*(0x[0-9A-Fa-f]+)\s*;?\s*(?:#.*)?$")

# New Super Mario Bros. U Deluxe. romfs assets live under
# atmosphere/contents/<title id>/romfs/, the same path LayeredFS expects.
TITLE_ID = "0100EA80032EA000"


def copy_tree(src: Path, dst: Path) -> None:
    if src.is_dir():
        shutil.copytree(src, dst, dirs_exist_ok=True)


def list_file(path: Path) -> list[list[str]]:
    """Non-comment rows of a whitespace-separated list file."""
    if not path.exists():
        return []
    rows = []
    for line in path.read_text(encoding="utf-8").splitlines():
        line = line.split("#", 1)[0].strip()
        if line:
            rows.append(line.split())
    return rows


def sprite_table_last(prof_cpp: Path) -> int:
    """Highest sprite id in profile.cpp's spriteToProfileList (each row ends `// <id>`)."""
    table = prof_cpp.read_text(encoding="utf-8")
    start = table.index("Profile::spriteToProfileList[]")
    end = table.index("\n};", start)
    return max(int(n) for n in re.findall(r"//\s*(\d+)\s*$", table[start:end], re.M))


def add_profiles(src: Path, profiles: list[list[str]]) -> None:
    """Append mod profiles to codedx's ProfileId enum and sprite table.

    The tables are the template's (codedx is never vendored here), so they are
    edited in the assembled copy only. Sprite ids are fixed by profiles.txt and
    never shift: a clash is refused, and a gap (a mod that owns the ids before
    this one is not in the build) is filled with profile 0.
    """
    pid_h = src / "include" / "profileid.h"
    prof_cpp = src / "code" / "profile.cpp"
    enum = pid_h.read_text(encoding="utf-8")
    table = prof_cpp.read_text(encoding="utf-8")

    start = table.index("Profile::spriteToProfileList[]")
    end = table.index("\n};", start)
    body = table[start:end]
    last = sprite_table_last(prof_cpp)

    lines = []
    for name, sprite in sorted(profiles, key=lambda p: int(p[1])):
        sprite = int(sprite)
        if sprite <= last:
            raise SystemExit(f"profiles.txt: {name} wants sprite {sprite}, which is already taken")
        if re.search(rf"\b{name}\b", enum):
            raise SystemExit(f"profiles.txt: ProfileId::{name} already exists")
        # Sprite ids are part of the level files and must never shift. When a
        # mod is built without the mods that own the ids before it, the gap is
        # filled with profile 0 (a flag-switch tag that does nothing visible).
        while last + 1 < sprite:
            last += 1
            lines.append(f"    0,  // {last} (owned by a mod not in this build)")
            print(f"note: sprite {last} has no profile in this build")
        enum = enum.replace("\n    Num", f"\n    {name},\n\n    Num", 1)
        lines.append(f"    ProfileId::{name},  // {sprite}")
        last = sprite

    body = body.rstrip()
    if not body.endswith(","):
        # the template's last entry has no trailing comma: add one before its comment
        body = re.sub(r"(\S)(\s*//\s*\d+)$", r"\1,\2", body)
    table = table[:start] + body + "\n" + "\n".join(lines) + table[end:]
    pid_h.write_text(enum, encoding="utf-8")
    prof_cpp.write_text(table, encoding="utf-8")
    print(f"added {len(profiles)} profile(s): " + ", ".join(f"{n}={s}" for n, s in profiles))


def sweetdx_owned(assets: Path) -> set[str]:
    """Names sweet-dx's own crt0.s and linker.ld define for every module.

    Read from the files rather than borrowed from the loader's list: the loader
    ships its own __cxa_guard_* stubs, but sweet-dx does not, and codedx's
    main.sym correctly binds those to the game's functions.
    """
    names = {"_init", "_fini"}  # DT_INIT/DT_FINI are resolved by name
    crt0 = (assets / "crt0.s").read_text(encoding="utf-8", errors="replace")
    names |= set(re.findall(r"^\s*\.global\s+(\w+)", crt0, re.M))
    names |= set(re.findall(r"^(\w+):", crt0, re.M))
    ld = (assets / "linker.ld").read_text(encoding="utf-8", errors="replace")
    names |= set(re.findall(r"\b([A-Za-z_]\w*)\s*=(?!=)", ld))
    return names - {"."}


def check_symbols(sym_dir: Path, module_owned: set[str]) -> int:
    seen: dict[str, tuple[str, str]] = {}
    clashes = 0
    for path in sorted(sym_dir.glob("*.sym")):
        for n, line in enumerate(open(path, encoding="utf-8", errors="replace"), 1):
            m = SYM_LINE.match(line)
            if not m:
                continue
            name, addr = m.group(1), m.group(2).upper()
            if name in module_owned:
                print(f"module-owned symbol assigned: {name} = {addr} ({path.name}:{n}); "
                      f"this overrides the module's own definition")
                clashes += 1
            if name in seen and seen[name][1] != addr:
                print(f"symbol clash: {name} = {addr} ({path.name}:{n}) "
                      f"vs {seen[name][1]} ({seen[name][0]})")
                clashes += 1
            seen.setdefault(name, (path.name, addr))
    return clashes


def read_release(path: Path) -> tuple[list[str], dict[str, list[str]]]:
    """mods/release.txt: one mod per line is in every release; `[group] mod mod ...`
    is an optional group, added with --with group. # starts a comment."""
    release, optional = [], {}
    for line in path.read_text(encoding="utf-8").splitlines():
        line = line.split("#", 1)[0].strip()
        if not line:
            continue
        m = re.match(r"\[(\w+)\]\s*(.*)", line)
        if m:
            optional[m.group(1)] = m.group(2).split()
        else:
            release += line.split()
    return release, optional


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--repo", default=".")
    ap.add_argument("--mod", action="append", default=[],
                    help="a mod folder; repeat to build several mods into one subsdk0 "
                         "(only one subsdk0 can load, so a release build lists them all)")
    ap.add_argument("--release", action="store_true",
                    help="build the release: every mod listed in mods/release.txt")
    ap.add_argument("--with", dest="groups", action="append", default=[], metavar="GROUP",
                    help="add an optional group from mods/release.txt to --release "
                         "(e.g. --with yoshi: the Yoshi research mods)")
    ap.add_argument("--sweetdx", required=True, help="sweet-dx checkout (has build/source)")
    ap.add_argument("--nso", required=True, help="retail main NSO")
    ap.add_argument("--out", required=True)
    ap.add_argument("--build", action="store_true", help="run sweet-dx afterwards")
    ap.add_argument("--with-diagnostics", action="store_true",
                    help="also include framework/diagnostics (logs the name of any archive the "
                         "game looks up but never loaded, before it dereferences null)")
    ap.add_argument("--with-template-code", action="store_true",
                    help="also include sweet-dx's template code/ and hooks/ (codedx's custom "
                         "actors, sprites 724-733, and the custom-profile system). Required when "
                         "the romfs levels place those sprites: without them the level references "
                         "a profile that no module registers.")
    ap.add_argument("--sweetdx-exe", help="the sweet-dx compiler to run (default: <sweetdx>/build/sweetdx-windows.exe). "
                         "The template sources still come from --sweetdx")
    ap.add_argument("--placeholder-models", action="store_true",
                    help="build every mod with the game's own models instead of the custom "
                         "archives (framework/core nsmbudx/models.h); mods can override per mod")
    args = ap.parse_args()

    repo = Path(args.repo).resolve()
    names = list(args.mod)
    if args.release or args.groups:
        release, optional = read_release(repo / "mods" / "release.txt")
        for g in args.groups:
            if g not in optional:
                raise SystemExit(f"--with {g}: mods/release.txt has no optional group '{g}' "
                                 f"(groups: {', '.join(sorted(optional)) or 'none'})")
        names += [f"mods/{m}" for m in release + [m for g in args.groups for m in optional[g]]]
    if not names:
        raise SystemExit("name the mods: --release, or --mod <folder> (repeatable)")
    mods = [(repo / m).resolve() for m in dict.fromkeys(names)]
    sweetdx = Path(args.sweetdx).resolve()
    template = sweetdx / "build" / "source"
    out = Path(args.out).resolve()
    src = out / "source"

    if src.exists():
        shutil.rmtree(src)
    for sub in ("code", "hooks", "include", "nso", "symbols"):
        (src / sub).mkdir(parents=True)

    copy_tree(template / "include", src / "include")
    if args.with_template_code:
        copy_tree(template / "code", src / "code")
        copy_tree(template / "hooks", src / "hooks")
        # The sweet-dx checkout's template carries a leftover v1 hammer mod
        # (code/hammer_suit.cpp + hooks/hammer_suit.hks, its .sym not copied).
        # Built without mods/hammer_suit it would install the old createFireBall
        # hook or fail to link; with it, the mod's files overwrite these anyway.
        for stale in (src / "code" / "hammer_suit.cpp", src / "hooks" / "hammer_suit.hks"):
            stale.unlink(missing_ok=True)
    shutil.copy2(template / "symbols" / "main.sym", src / "symbols" / "main.sym")
    copy_tree(repo / "sdk" / "include", src / "include")
    copy_tree(repo / "sdk" / "symbols", src / "symbols")
    # Framework parts: what the mods ask for, plus what those parts ask for.
    wanted = [row[0] for mod in mods for row in list_file(mod / "requires.txt")]
    if args.with_diagnostics:
        wanted.append("diagnostics")
    components: list[str] = []
    while wanted:
        comp = wanted.pop(0)
        if comp in components:
            continue
        if not (repo / "framework" / comp).is_dir():
            raise SystemExit(f"requires.txt: no framework component '{comp}'")
        components.append(comp)
        wanted += [row[0] for row in list_file(repo / "framework" / comp / "requires.txt")]

    for sub in ("code", "hooks", "symbols", "include"):
        for mod in mods:
            copy_tree(mod / sub, src / sub)
        for comp in components:
            copy_tree(repo / "framework" / comp / sub, src / sub)
    config = src / "include" / "nsmbudx" / "build_config.h"
    config.parent.mkdir(parents=True, exist_ok=True)
    config.write_text("// Written by scripts/sdk/make_mod_project.py; see nsmbudx/models.h.\n"
                      "#pragma once\n"
                      f"#define NSMBUDX_CUSTOM_MODELS {0 if args.placeholder_models else 1}\n")
    print("mods: " + ", ".join(m.name for m in mods))
    print("models: " + ("game placeholders (--placeholder-models)" if args.placeholder_models
                        else "custom"))
    if components:
        print("framework: " + ", ".join(components))

    profiles = [row for mod in mods for row in list_file(mod / "profiles.txt")]
    if profiles:
        if not args.with_template_code:
            raise SystemExit("profiles.txt needs --with-template-code (codedx's profile system)")
        add_profiles(src, profiles)
    if (src / "code" / "profile.cpp").exists():
        # The sprite table's real length, custom sprites included, so code that
        # bounds-checks it (nsmbudx::profileForSprite) accepts the mods' sprites.
        size = sprite_table_last(src / "code" / "profile.cpp") + 1
        with config.open("a", encoding="utf-8") as fh:
            fh.write(f"#define NSMBUDX_SPRITE_TABLE_SIZE {size}\n")
        print(f"sprite table: {size} entries")
    shutil.copy2(args.nso, src / "nso" / "main")

    if check_symbols(src / "symbols", sweetdx_owned(sweetdx / "assets")):
        print("refusing to build: resolve the symbol problems above")
        return 1
    print(f"assembled {src}")

    if not args.build:
        return 0
    exe = Path(args.sweetdx_exe).resolve() if args.sweetdx_exe else sweetdx / "build" / "sweetdx-windows.exe"
    if not exe.exists():
        raise SystemExit(f"no sweet-dx compiler at {exe}")
    output = out / "output"
    if output.exists():
        shutil.rmtree(output)
    (out / "build.log").unlink(missing_ok=True)  # sweet-dx refuses an existing log
    cmd = [str(exe), f"--source={src}", f"--output={output}", f"--log-file={out / 'build.log'}"]
    print("$ " + " ".join(cmd))
    rc = subprocess.run(cmd).returncode
    if rc:
        return rc
    # A clean link proves nothing about init: check where DT_INIT/MOD0 point.
    subsdk = next(output.rglob("subsdk0"), None)
    if not subsdk:
        print("FAIL: sweet-dx produced no subsdk0")
        return 1

    # romfs: sweet-dx only writes exefs/subsdk0 and the IPS patch, so a mod that
    # ships assets (a custom model archive, say) needs its tree copied into the
    # same title folder. Mirror the layout the game already uses:
    #   romfs/Model/<archive>.Nin_NX_NVN.szs
    # mods/<name>/romfs/ is the convention; nothing is copied if it is absent.
    romfs_src = [m / "romfs" for m in mods if (m / "romfs").is_dir()]
    if romfs_src:
        romfs_dst = output / "atmosphere" / "contents" / TITLE_ID / "romfs"
        for r in romfs_src:
            copy_tree(r, romfs_dst)
        added = sum(len(list(r.rglob("*.*"))) for r in romfs_src)
        print(f"romfs: {added} file(s) -> {romfs_dst}")

    return subprocess.run([sys.executable, "-I", str(repo / "scripts/sdk/inspect_subsdk.py"),
                           str(subsdk)]).returncode


if __name__ == "__main__":
    sys.exit(main())
