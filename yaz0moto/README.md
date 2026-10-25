# Yaz0moto patches

What came out of reverse engineering *New Super Mario Bros. U Deluxe*, expressed in
the [Yaz0moto](https://github.com/Steammaker212/Yaz0moto) patch format.

| | What it is | Status |
|---|---|---|
| [`CheepCheepFamily/`](./CheepCheepFamily/) | Exposes the movement binding on all 18 Cheep Cheep sprites, plus a dedicated view | Works, not tested in-game |
| [`HammerQuestionBlock/`](./HammerQuestionBlock/) | Relabels the two block-contents entries that already give the Hammer | Works with the Hammer build |
| [`SteamDXCustomActors/`](./SteamDXCustomActors/) | The custom-actor patch for the Project-SteamDX build: 12 sprites (codedx's 724–732 plus this project's 734–738) and the full 5-bit block contents | 23/23 structural checks; not tested in-game |
| [`HAMMER_LIMITATION.md`](./HAMMER_LIMITATION.md) | Why a Hammer cannot be *added* as a new value | Proof, 16/16 checks |

## The short version on the Hammer

It is not a missing patch; the patch format has no field that reaches it.

`Contents` is a single nybble with all 16 values already assigned to existing items,
and no base item grants power-up mode 10. Our Hammer works because of a one-byte
code change (`mov r2,#2` → `mov r2,#10`) in the Fire Flower's grant handler — which
means **once the Hammer build is installed, you set a block's `Contents` to Fire
Flower and it dispenses the Hammer.** No patch needed.

Profile 759 (Hammer) has no sprite ID at all, and our build does not extend the
sprite table, so it can never appear in the editor's sprite list.

Details and the full evidence: [`HAMMER_LIMITATION.md`](./HAMMER_LIMITATION.md).

## Verify

```
python ../scripts/validate_yaz0moto_patch.py       # 19/19
python ../scripts/validate_steam_dx_patch.py       # 23/23
python ../scripts/prove_hammer_not_patchable.py    # 16/16
```

All three read the retail image and the editor's own data files. If output ever
disagrees with the docs, the docs are wrong.

`validate_steam_dx_patch.py` also compares every installed copy of the
custom-actor patch against this repo's copy. The editor looks in either
`yaz0data/patches/` or `miyamotodata/patches/` depending on the build, and both
layouts are in use on this machine — a patch edited in one is invisible to the
other, which is exactly how a stale copy was found holding 12 sprites when the
repo had 14.
