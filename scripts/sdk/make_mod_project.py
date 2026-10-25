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


def add_profiles(src: Path, profiles: list[list[str]]) -> None:
    """Append mod profiles to codedx's ProfileId enum and sprite table.

    The tables are the template's (codedx is never vendored here), so they are
    edited in the assembled copy only. Each new sprite id must be the next one
    after the table's last entry: a gap or a clash would silently map a level's
    sprite to the wrong actor.
    """
    pid_h = src / "include" / "profileid.h"
    prof_cpp = src / "code" / "profile.cpp"
    enum = pid_h.read_text(encoding="utf-8")
    table = prof_cpp.read_text(encoding="utf-8")

    start = table.index("Profile::spriteToProfileList[]")
    end = table.index("\n};", start)
    body = table[start:end]
    last = max(int(n) for n in re.findall(r"//\s*(\d+)\s*$", body, re.M))

    lines = []
    for name, sprite in profiles:
        sprite = int(sprite)
        if sprite != last + 1:
            raise SystemExit(f"profiles.txt: {name} wants sprite {sprite}, next free is {last + 1}")
        if re.search(rf"\b{name}\b", enum):
            raise SystemExit(f"profiles.txt: ProfileId::{name} already exists")
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


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--repo", default=".")
    ap.add_argument("--mod", required=True)
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
    args = ap.parse_args()

    repo = Path(args.repo).resolve()
    mod = (repo / args.mod).resolve()
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
    shutil.copy2(template / "symbols" / "main.sym", src / "symbols" / "main.sym")
    copy_tree(repo / "sdk" / "include", src / "include")
    copy_tree(repo / "sdk" / "symbols", src / "symbols")
    components = [row[0] for row in list_file(mod / "requires.txt")]
    if args.with_diagnostics:
        components.append("diagnostics")
    for sub in ("code", "hooks", "symbols", "include"):
        copy_tree(mod / sub, src / sub)
        for comp in components:
            if not (repo / "framework" / comp).is_dir():
                raise SystemExit(f"requires.txt: no framework component '{comp}'")
            copy_tree(repo / "framework" / comp / sub, src / sub)
    if components:
        print("framework: " + ", ".join(components))

    profiles = list_file(mod / "profiles.txt")
    if profiles:
        if not args.with_template_code:
            raise SystemExit("profiles.txt needs --with-template-code (codedx's profile system)")
        add_profiles(src, profiles)
    shutil.copy2(args.nso, src / "nso" / "main")

    if check_symbols(src / "symbols", sweetdx_owned(sweetdx / "assets")):
        print("refusing to build: resolve the symbol problems above")
        return 1
    print(f"assembled {src}")

    if not args.build:
        return 0
    exe = sweetdx / "build" / "sweetdx-windows.exe"
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
    return subprocess.run([sys.executable, "-I", str(repo / "scripts/sdk/inspect_subsdk.py"),
                           str(subsdk)]).returncode


if __name__ == "__main__":
    sys.exit(main())
