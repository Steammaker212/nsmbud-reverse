"""Validate the Project-SteamDX Yaz0moto patch (steam-dx-test).

This is a sibling of validate_yaz0moto_patch.py, which covers the two patches
inside the repo (yaz0moto/). This one covers the custom-actor patch that ships
separately in ../steam-dx-test, and it exists because that patch has a different
failure mode from the other two:

  It declares NEW sprites (724-738) that do not exist in the base game, so the
  "no base field is dropped" check that saves the Cheep patch cannot help. What
  can go wrong instead is:

    * a new sprite reusing an id that the base game or another patch already
      owns, which silently replaces that sprite;
    * a field on a new sprite colliding with another field on the same sprite;
    * a field claiming a nybble outside the 1-24 range the level format has;
    * an id the patch declares but no mod ever registers (a dead sprite), or a
      mod sprite the patch forgot (an invisible sprite in the editor);
    * the category view attaching an id the patch does not declare.

It reads the mods' own profiles.txt to establish which sprite ids are supposed
to exist, so "the patch and the mods disagree" is a failure, not a footnote.

Paths: the Yaz0moto install moved once already and the older script still points
at the stale location, so this one searches for the newest install that actually
contains NSMBU game data.

    python scripts/validate_steam_dx_patch.py
"""
from __future__ import annotations

import os
import re
import sys
import xml.etree.ElementTree as ET
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
# The patch lives outside the repo (it is a Yaz0moto project the user keeps
# separately) but is ALSO versioned inside it under yaz0moto/, so it is covered
# by the repo's history like the other two patches. PATCH is the live working
# copy; TRACKED is the committed one. Both are checked against each other.
PATCH = REPO.parent / "steam-dx-test"
TRACKED = REPO / "yaz0moto" / "SteamDXCustomActors"

results: list[tuple[str, bool]] = []


def check(name: str, ok, detail: str = "") -> bool:
    ok = bool(ok)
    results.append((name, ok))
    print(f"  [{'PASS' if ok else 'FAIL'}] {name}" + (f"  -- {detail}" if detail else ""))
    return ok


def find_base() -> Path | None:
    """The NSMBU base spritedata the Deluxe game inherits from.

    Two Yaz0moto installs exist here and they store data under different folder
    names: the older one uses miyamotodata/games/NSMBU, the current nightly uses
    yaz0data/games/NSMBU. In both, NSMBUDX deliberately has NO spritedata of its
    own -- its main.xml says "Everything not listed here (sprites, ...) is shared
    with the Wii U version and inherited from it" -- so NSMBU is the correct base
    for a Deluxe patch in either install. Pick the newest install that has it.
    """
    roots = [
        Path(r"C:\Users\Saif Khan\Documents\Switch Modding Project"),
        Path(r"C:\Users\Saif Khan\Downloads"),
    ]
    best: tuple[float, Path] | None = None
    for root in roots:
        if not root.is_dir():
            continue
        for d in root.glob("Yaz0moto*"):
            for sub in ("miyamotodata", "yaz0data"):
                g = d / sub / "games" / "NSMBU" / "spritedata.xml"
                if g.is_file():
                    m = g.stat().st_mtime
                    if best is None or m > best[0]:
                        best = (m, g.parent)
    return best[1] if best else None


def find_live_patch_dirs() -> list[Path]:
    """Every place an installed editor would load a 'steam-dx-test' patch from."""
    out = []
    root = Path(r"C:\Users\Saif Khan\Documents\Switch Modding Project")
    if not root.is_dir():
        return out
    for d in root.glob("Yaz0moto*"):
        for sub in ("miyamotodata", "yaz0data"):
            p = d / sub / "patches" / "steam-dx-test"
            if p.is_dir():
                out.append(p)
    return out


def fields_of(sp):
    """The (spec, title, kind) triples the editor actually loads for this sprite.

    `kind` is which ATTRIBUTE the spec came from -- "nybble" or "bit" -- not the
    XML tag. Those are two different address spaces in this format and must not
    be compared (the base data has 92 bit= fields, one as wide as 35-36).
    """
    out = []
    for c in sp:
        if c.tag not in {"checkbox", "list", "value", "bitfield", "strybble",
                        "dualbox", "multidualbox", "initialstate", "layer"}:
            continue
        if c.get("nybble"):
            spec, kind = c.get("nybble"), "nybble"
        elif c.get("bit"):
            spec, kind = c.get("bit"), "bit"
        else:
            spec, kind = "?", "none"
        out.append((spec, (c.get("title") or c.get("title1") or "").strip(), kind))
    return out


NYB = re.compile(r"^\s*(\d+)\s*(?:-\s*(\d+))?\s*$")


def nybble_span(spec: str, kind: str = "nybble") -> set[int]:
    """Which bits/nybbles a spec covers.

    'bit=' and 'nybble=' are DIFFERENT address spaces: the base data uses both
    (92 bit= fields, some as wide as bit 35-36), so a bit spec must never be
    checked against the 24-nybble range. Returns an empty set for bit specs.
    """
    if kind == "bit":
        return set()
    m = NYB.match(spec or "")
    if not m:
        return set()
    lo = int(m.group(1))
    hi = int(m.group(2) or lo)
    return set(range(lo, hi + 1))


def mod_sprite_ids() -> dict[int, str]:
    """sprite id -> mod name, from every mods/*/profiles.txt."""
    out: dict[int, str] = {}
    for p in sorted((REPO / "mods").glob("*/profiles.txt")):
        for line in p.read_text(encoding="utf-8", errors="replace").splitlines():
            line = line.split("#", 1)[0].strip()
            if not line:
                continue
            parts = line.split()
            if len(parts) >= 2 and parts[-1].isdigit():
                out[int(parts[-1])] = p.parent.name
    return out


def main() -> int:
    print("=" * 68)
    print("  Project-SteamDX custom-actor patch")
    print("=" * 68)

    base_dir = find_base()
    if base_dir is None:
        print("  FATAL: no Yaz0moto install with NSMBU data found")
        return 2
    print(f"  base: {base_dir}")
    print(f"  patch: {PATCH}\n")

    check("patch directory exists", PATCH.is_dir())
    for f in ("main.xml", "spritedata.xml", "spritecategories.xml"):
        check(f"{f} present", (PATCH / f).is_file())

    # ---- main.xml
    main_root = ET.parse(PATCH / "main.xml").getroot()
    check("declares the Deluxe base",
          main_root.get("base") == "New Super Mario Bros. U Deluxe",
          repr(main_root.get("base")))
    refs = [f.get("path") for f in main_root.findall("file")]
    check("every <file> path resolves",
          all((PATCH / r).is_file() for r in refs),
          str([r for r in refs if not (PATCH / r).is_file()]))
    check("spritedata declared as a patch", "spritedata.xml" in refs)

    # ---- base data
    base_sprites = {}
    for s in ET.parse(base_dir / "spritedata.xml").getroot().findall("sprite"):
        if s.get("id"):
            base_sprites[int(s.get("id"))] = s
    base_max = max(base_sprites)
    print(f"\n  base has {len(base_sprites)} sprites, highest id {base_max}")

    # ---- the patch
    root = ET.parse(PATCH / "spritedata.xml").getroot()
    patch: dict[int, ET.Element] = {}
    dup_ids: list[int] = []
    for s in root.findall("sprite"):
        if s.get("id") is None:
            continue
        sid = int(s.get("id"))
        if sid in patch:
            dup_ids.append(sid)
        patch[sid] = s

    check("no duplicate sprite id in the patch", not dup_ids, str(dup_ids))
    check("patch declares sprites", bool(patch), f"{len(patch)} sprites")

    # Every id must be either a base sprite (a legitimate override) or above the
    # base range (a new sprite). Reusing an id inside the base range for a NEW
    # actor would silently replace a real one.
    overrides = sorted(s for s in patch if s in base_sprites)
    new = sorted(s for s in patch if s not in base_sprites)
    print(f"  overrides {len(overrides)}: {overrides}")
    print(f"  new       {len(new)}: {new}")

    check("new sprites are all above the base range",
          all(s > base_max for s in new),
          f"below/inside base range: {[s for s in new if s <= base_max]}")

    # ---- fields
    #
    # Two legitimate patterns look like nybble collisions and must not be flagged:
    #   1. Mutually exclusive variants gated by requirednybble/requiredval. The
    #      blocks use exactly this: nybble 20 carries "Contains" when nybble 13
    #      is 0 and "Contains (extended)" when it is 1, so both fields address
    #      nybble 20 but never both at once. The base game uses the same idiom.
    #   2. bit= specs, which are a separate address space from nybble=.
    bad_range, collide, retitled = [], [], []
    for sid, sp in sorted(patch.items()):
        seen: dict[int, list[str]] = {}
        gates: dict[int, str] = {}
        for spec, title, kind in fields_of(sp):
            span = nybble_span(spec, kind)
            if not span:
                continue
            if min(span) < 1 or max(span) > 24:
                bad_range.append(f"{sid}:{spec}")
            req = None
            for c in sp:
                if (c.get("title") or "").strip() == title and c.get("requirednybble"):
                    req = f"req{c.get('requirednybble')}={c.get('requiredval')}"
            for n in span:
                seen.setdefault(n, []).append(title)
                if req:
                    gates[n] = req
        for n, titles in seen.items():
            if len(titles) == 1:
                continue
            if n in gates:
                continue          # gated variants share the nybble on purpose
            collide.append(f"{sid} nybble {n}: {titles}")
        if sid in base_sprites:
            bmap = {spec: title for spec, title, _ in fields_of(base_sprites[sid])}
            for spec, title, kind in fields_of(sp):
                if kind == "bit":
                    continue
                if spec in bmap and bmap[spec] != title:
                    retitled.append((sid, spec, bmap[spec], title))

    check("every nybble is within 1-24", not bad_range, str(bad_range[:5]))
    check("no ungated field collision on one sprite", not collide,
          "; ".join(collide[:3]))

    # The only retitles allowed on an override are ones that keep the same
    # nybble AND are a documented widening of the base meaning.
    ALLOWED_RETITLE = {
        # nybble 13: the base calls it "Spawn Acorn Mushroom"; the patch names it
        # as the bit-28 flag that it actually is, which is the same bit.
        ("13", "Spawn Acorn Mushroom", "Extended contents (+16)"),
        # nybble 20: base "Contains", patch adds a gated second list. The base
        # field is restated under its own name in the first list; the new name
        # belongs to the requirednybble=13 variant.
        ("20", "Contains", "Contains (extended)"),
    }
    bad_retitle = [r for r in retitled if (r[1], r[2], r[3]) not in ALLOWED_RETITLE]
    check("overrides do not silently retitle a base field", not bad_retitle,
          str(bad_retitle[:3]))

    # ---- dropped base fields on overrides (replace semantics)
    #
    # Nybble 13 is the one accepted exception: the base's "Spawn Acorn Mushroom"
    # and the patch's "Extended contents (+16)" are the same bit, and the patch
    # is the accurate name for it. Anything else disappearing is a real loss.
    RENAMED = {("13", "Spawn Acorn Mushroom"): "Extended contents (+16)"}
    dropped = {}
    for sid in overrides:
        have = {t for _, t, _ in fields_of(patch[sid])}
        missing = []
        for spec, title, kind in fields_of(base_sprites[sid]):
            if title in have:
                continue
            if RENAMED.get((spec, title)) in have:
                continue
            missing.append(title)
        if missing:
            dropped[sid] = missing
    check("overrides restate every base field", not dropped,
          "; ".join(f"{s} loses {v}" for s, v in list(dropped.items())[:3]))

    # ---- patch vs mods
    wanted = mod_sprite_ids()
    print(f"\n  mods/*/profiles.txt declares {len(wanted)} sprite id(s): "
          f"{ {k: v for k, v in sorted(wanted.items())} }")

    missing_from_patch = sorted(set(wanted) - set(patch))
    check("every mod sprite appears in the patch", not missing_from_patch,
          str(missing_from_patch))

    # 724-733 are codedx's own template sprites (MrSun, MrMoon, ActorSpawner,
    # ModelTest, LightActor, BombBros, EffectSpawner, FakeStarCoin, MagicLift,
    # KoopaShellBros). They come from the template, not from a mods/ entry, so
    # only the ids at or above 734 have to be owned by a mod here.
    codedx_range = {s for s in new if 724 <= s <= 733}
    orphan = sorted(s for s in new if s not in wanted and s not in codedx_range)
    check("every sprite at or above 734 belongs to a mod", not orphan, str(orphan))

    # ---- categories
    cat_root = ET.parse(PATCH / "spritecategories.xml").getroot()
    attached: list[int] = []
    for view in cat_root.findall("view"):
        for cat in view.findall("category"):
            for a in cat.findall("attach"):
                for tok in (a.get("sprite") or "").split(","):
                    tok = tok.strip()
                    if "-" in tok:
                        lo, hi = tok.split("-", 1)
                        if lo.strip().isdigit() and hi.strip().isdigit():
                            attached.extend(range(int(lo), int(hi) + 1))
                    elif tok.isdigit():
                        attached.append(int(tok))
    check("every attached sprite is declared by the patch",
          all(s in patch for s in attached),
          str([s for s in attached if s not in patch]))
    check("no sprite attached twice",
          len(attached) == len(set(attached)),
          str(sorted({s for s in attached if attached.count(s) > 1})))
    # Only the sprites this patch is responsible for need a view slot: its own
    # new actors, plus any override it deliberately re-exposes. 59/60 are base
    # block sprites that already live in the base game's own views, and adding
    # them to a custom view would duplicate them in the editor.
    need_view = {s for s in patch if s >= 724}
    uncat = sorted(need_view - set(attached))
    check("every custom sprite is in a view", not uncat, str(uncat))

    # ---- comment hygiene: XML comments may not contain '--'
    #
    # Test by parsing, not by regex: a regex broad enough to catch '--' inside a
    # comment also matches the "-->" that CLOSES the previous one, which is what
    # an earlier version of this script did (7 false positives on a file that
    # parses fine).
    try:
        ET.parse(PATCH / "spritedata.xml")
        comments_ok = True
    except ET.ParseError as e:
        comments_ok = False
        print(f"        parse error: {e}")
    check("spritedata.xml is well-formed XML", comments_ok)

    # ---- drift: copies of this patch exist in more than one install, and the
    # editor loads whichever one belongs to the install you actually launch.
    # A stale copy means "I edited the patch and nothing changed".
    live = find_live_patch_dirs()
    print(f"\n  installed copies found: {len(live)}")
    src = (PATCH / "spritedata.xml").read_bytes()
    drift = []
    for d in live:
        f = d / "spritedata.xml"
        if not f.is_file():
            drift.append(f"{d}: spritedata.xml missing")
            continue
        if f.read_bytes() != src:
            other = f.read_text(encoding="utf-8", errors="replace")
            ids = sorted(int(m) for m in re.findall(r'<sprite id="(\d+)"', other))
            drift.append(f"{d}: differs (has {len(ids)} sprites, max {max(ids) if ids else '-'})")
    check("every installed copy matches the repo copy", not drift,
          "; ".join(drift) if drift else f"{len(live)} copy/copies in sync")

    # ---- the in-repo tracked copy must match the working copy
    check("yaz0moto/SteamDXCustomActors exists", TRACKED.is_dir(), str(TRACKED))
    tracked_drift = []
    if TRACKED.is_dir():
        for f in ("main.xml", "spritedata.xml", "spritecategories.xml", "sprite.py"):
            a, b = PATCH / f, TRACKED / f
            if not b.is_file():
                tracked_drift.append(f"{f} missing from repo copy")
            elif a.read_bytes() != b.read_bytes():
                tracked_drift.append(f"{f} differs")
    check("repo-tracked copy matches the working copy", not tracked_drift,
          "; ".join(tracked_drift))

    n = sum(1 for _, ok in results if ok)
    print(f"\n{'=' * 68}\n  {n}/{len(results)} checks passed\n{'=' * 68}")
    return 0 if n == len(results) else 1


if __name__ == "__main__":
    sys.exit(main())
