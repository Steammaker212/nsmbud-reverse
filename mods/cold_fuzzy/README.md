# Cold Fuzzy (sprite 740)

A Fuzzy that freezes the player, ported from Tsuru (`src/actors/coldfuzzy.cpp`,
MPL-2.0). It is the reference port of the Tsuru porting kit: see
[docs/TSURU_PORTING.md](../../docs/TSURU_PORTING.md).

| | |
|---|---|
| Touch | freezes a big player, defeats a small one (`DamageType::Ice` through player vtable +0x490) |
| Defeated by | Star, fireballs, Yoshi fireballs, thrown objects (cloud effect, Wii U id 0x15B) |
| Iceballs | destroyed, Fuzzy unharmed |
| Settings | movement ID (nybbles 21-22): follows that path controller |

**Status:** builds 2026-10-26; **awaiting an in-game test.**

## Model

`romfs/Model/coldobon.Nin_NX_NVN.szs` (not committed), from Tsuru's
`Common/actor/coldobon.szs`, against the Deluxe Fuzzy, which has the same
7-bone skeleton, `run` animation and texture layout:

```
py -3 scripts/models/wiiu2dx.py --wiiu coldobon.szs --template chorobon --name coldobon --romfs <romfs> --out mods/cold_fuzzy/romfs/Model
```

There is no placeholder model: a placeholder build needs this archive too.
