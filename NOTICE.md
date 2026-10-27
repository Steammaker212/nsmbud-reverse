# Notice — scope and provenance

## What this repository is

Research notes, decompiled function listings, and patch tooling produced while
reverse-engineering ***New Super Mario Bros. U Deluxe*** (Nintendo Switch).

## What this repository does **not** contain

* **No game executables.** Neither the original `main` NSO, the converted
  `convertedmain.rebased.elf`, nor any patched build is distributed here.
* **No IDA databases.** `.i64`, `.id0`, `.id1`, `.id2`, `.nam`, and `.til`
  artifacts are excluded.
* **No game assets.** `.pack` archives (`cobPack.pack`,
  `jyotyuActorPack.pack`, `Layout.pack`), ROMFS contents, models, textures,
  audio, and `.szs` archives are excluded.
* **No DRM circumvention code.** Nothing here enables decryption of a title,
  nor does it bypass console or emulator signature or authentication checks.

The `data/` directory holds *derived* metadata — function inventories, actor
catalogues, and cross-reference lists — not extracted copyrighted content.

## Provenance of the addresses

Every address in this repository refers to the **retail Deluxe `main` module**
(ARM32 / AArch32, Switch). The analysis baseline is pinned in the README by MD5.
To reproduce any result you must supply your own copy of the binary; nothing
here will work against the Wii U original.

The Wii U decompilation ([`red-pro2`](https://github.com/aboood40091/red-pro2))
and its headers ([`NSMBU-Headers`](https://github.com/aboood40091/NSMBU-Headers))
are third-party projects by **aboood40091**. They are vendored **only** on the
`wiiu-reference` branch, are clearly separated from our Deluxe findings, and
remain under their own authorship and licence terms. They are present as
reference for class layout and semantics — not as a claim of authorship, and
not as a description of the Switch binary.

## Third-party tooling and licensing

Two GPL-3.0 projects informed this work:

* [`codedx`](https://github.com/RicBent/codedx) by RicBent — a Switch-side
  reference for class layout and symbol naming.
* [`sweet-dx`](https://github.com/jabonchan/sweet-dx) by jabonchan — the build
  toolchain the `sweetdx/` project targets.

* [`Tsuru`](https://github.com/Zenith-Team/Tsuru) by the Zenith Team (MPL-2.0) — the
  Wii U NSMBU framework whose Hammer Suit `mods/hammer_suit` ports: its asset names
  and the helmet/shell drawing (`CustomPowerupModel`) are adapted in
  `mods/hammer_suit/code/hammer_suit.cpp`, which marks the ported part. Under MPL-2.0
  that part stays available under the MPL; Tsuru's own source is not vendored
  (`third_party/Tsuru` is outside the repository) and its models are never committed.

**Neither is vendored.** Both are GPL-3.0, and this repository is not; including
their source here would force this repository under GPL-3.0. Both are listed in
`.gitignore`, and `sweetdx/` contains none of their code.

The headers under `sweetdx/include/` were written from offsets and behaviour
recovered from the retail binary. Where a name or offset coincides with theirs,
it is because there is only one correct answer, not because the text was copied.
`scripts/audit_similarity.py` measures this claim rather than asserting it — the
highest similarity to any codedx header is 0.70, and every file is categorised as
independent.

You will need your own copies of those projects if you want to build with them.

## Patch tooling

`scripts/apply_approach_b.py` and related tools operate on a **copy** of the
ELF and never modify the original. They are provided for interoperability,
preservation, and research purposes.

## Legal

*New Super Mario Bros. U Deluxe* and all associated names, characters, and
assets are trademarks of Nintendo. This project is not affiliated with,
endorsed by, or sponsored by Nintendo. No copyright infringement is intended.

If you are a rights holder and want content removed, open an issue and it will
be addressed promptly.
