# World maps: how they work and how to make your own

Everything here was read from Deluxe v1.0.0 (ledger F0064-F0075, F0237-F0246). The code is
reconstructed in [reverse-engineering/FindingsA/course_select/WorldMapData.cpp](../reverse-engineering/FindingsA/course_select/WorldMapData.cpp),
the structures are in `source/include/game/worldmap.h`, and
`scripts/worldmap/wmtool.py` dumps, checks and rebuilds the archives and lists the objects a map spawns; `scripts/worldmap/wm_tables.py` extracts the map-enemy and scene tables into `reverse-engineering/FindingsG/`.

## 1. Files

One archive per map: `romfs/Model/CS_W<world>[a|b].Nin_NX_NVN.szs`.

| File | What it holds |
|---|---|
| `pointW<n>[a|b].csv` | one row per point: name, flags, what clearing it opens |
| `routeW<n>[a|b].csv` | one row per walkable segment: `R<from><to>,<type>,` |
| `output.bfres` | model `CS_W<n>`: **one bone per point, at the point's position**; model `CS_W<n>_Synchro` (animated scenery); small models named after special paths (`RW102W1S0`) |

The CSVs have no coordinates: a point is where the bone of the same name is.
`K` points (bends in a route) exist only in route ids and as bones.

The game picks `CS_W1` if it exists, else `CS_W1a`; a second variant is `b`.
Vanilla: W1, W2a, W3, W4, W5a, W5b, W6a, W7, W8a, W8b, W9a, W9b.

**These twelve names are the only archives the game loads.** The course-select
cache (0x6016A300) preloads exactly `CS_W1, CS_W2a, CS_W3, CS_W4, CS_W5a, CS_W5b,
CS_W6a, CS_W7, CS_W8a, CS_W8b, CS_W9a, CS_W9b` into two groups (W1-W5b, W6a-W9b)
and evicts them in that order when memory is short (0x6016AD7C). A `CS_W2b` or
`CS_W6` file would never be read: a custom world replaces one of the twelve.
Everything the map shows besides the CSVs comes from the BFRES (section 7).

## 2. Points (`pointW`)

Nine columns, no header, CRLF line ends. Lists are quoted and comma-separated.

| Col | Meaning |
|---|---|
| 0 | row index (ignored by the game) |
| 1 | name, 4 characters |
| 2 | flags (below) |
| 3 | nodes opened by the **normal** exit (max 4) |
| 4 | paths opened by the normal exit, `R<from><to>` (max 16) |
| 5 | names of map objects whose appear animation plays (max 2; empty in vanilla) |
| 6, 7, 8 | the same for the **secret** exit |

### Names

`W` + world + type + n, where n is a hex digit. The type decides the level file
(`Course/<world>-<course+1>.sarc`):

| Name | Level | | Name | Level |
|---|---|---|---|---|
| `W?0n` | `?-n` (1 … 15) | | `W?Kn` | `?-(24+n)` Toad house (n > 7: `?-(39+n)`) |
| `W?Sn` | `1-13`, `2-14`, … `5-17` (worlds 1-5) | | `W?W?` | `?-35` |
| `W?G?` | `?-20` ghost house | | `W?A?` | `?-37` airship |
| `W?Tn` | `?-(21+n)` tower | | `W?Bn` | `?-(42+n)` |
| `W?Cn` | `?-(23+n)` castle | | `W?X?` | `?-58` |
| `W?M?` | the world's start point | | `W?J?` | junction: no level, the route goes on in another world's map |

`F…` points are path points (pipes, map enemies, Toad-house stops, bends with
state). `K…` points are plain bends. A world has 58 course slots at most.

### Flags

Unknown names are ignored. The full lists (bit = position) are in
`game/worldmap.h`. The names and bits are read from the game; what each one
does below is inferred from the name and where vanilla uses it, not yet traced
in code:

| Flag | Seen on |
|---|---|
| `stop` | a point the player stops on when walking past |
| `restart` | courses where a lost life sends you back here |
| `merge` | where two paths join (W1 F008, before the castle) |
| `dokan`, `dokan2` | the two ends of a map pipe |
| `focus`, `fixX`, `fixY`, `fixZ`, `scale` | camera |
| `noUI` | hides the course banner |
| `W1PakkunA`, `W2EnemyA`… | map enemies that live on the point |
| `RainbowA`…`D`, `KanketsusenA`… | the Rainbow / geyser effects of W5 and W6 |
| `boarding`, `station`, `coaster` | W7's lift ride |

### Paths and segments

Column 4 names a **path** between two W points (`RW102W1T0`). The route CSV
holds the walk itself as segments through F and K points:

```
RW102F021  RF021K022  RK022K023 ... RF025F001  RF001K026 ... RK02hW1T0
```

A path opens every segment along its walk. Segments on no path are open from
the start (`RW1M0W101`). Entries keep 9 characters (vanilla W6 has
`RW601W602.RW601Fsa1`, which the game reads as `RW601W602`).

When a path ends on another world's map (`RW1C0W2J0`, `RW2J0W2M0`), those
segments live in that map's CSV.

## 3. Routes (`routeW`)

`R<from 4><to 4>,<type>,`. UTF-8. The type picks the walking style:

道 road · 石 stone · 石橋 stone bridge · 木 wood · 土 dirt · 砂 sand · 流砂 quicksand ·
雪 snow · 氷 ice · 氷坂 ice slope · 坂 slope · 雲 cloud · 水 water · ジャンプ jump ·
はしご ladder (右 right, 左 left) · はしご岩 rock ladder (右, 左) · はしご縄 rope ladder ·
ツタ vine · スイッチブロック switch block

## 4. Limits

| Limit | Why |
|---|---|
| `pointW` ≤ 4095 bytes | copied into a 4096-byte buffer; the rest is cut off |
| `routeW` ≤ 8191 bytes | 0x2000-byte buffer |
| 256 points, 256 routes | fixed arrays; the 257th overwrites the first |
| 4 nodes, 16 paths, 2 reveals per exit | the extra ones overwrite the first |
| 128 F points per map | save slots for point state |
| 9 worlds, 2 variants each | parsed by nine unrolled calls into 18 slots |
| 58 courses per world | course flag table |

The largest vanilla files are `pointW6a` (2095 bytes) and `routeW7` (3894),
so there is room for bigger worlds within the buffers.

## 5. Making a custom world

New worlds replace one of the nine (or a variant): the world count is fixed.

1. Dump a vanilla world to start from:
   `python scripts/worldmap/wmtool.py dump <romfs>/Model/CS_W1.Nin_NX_NVN.szs -o work/W1`
   It lists every point with its level file and position.
2. Edit the model in a BFRES editor (Switch Toolbox): move, add or remove
   **bones named after your points**. Add path models named after special
   paths if you want them to appear when opened.
3. Edit `pointW1.csv` and `routeW1.csv`. Every point needs a bone; every
   segment's ends need points or K bones.
4. Check it:
   `python scripts/worldmap/wmtool.py check work/W1 --courses <romfs>/Course`
   Besides every limit above, `check` plays the world (each course cleared by
   both exits, from the start point) and lists points and segments that can
   never be reached: if it reports none, the world can be explored.
5. Build it and put it in your mod's romfs:
   `python scripts/worldmap/wmtool.py build <romfs>/Model/CS_W1.Nin_NX_NVN.szs work/W1 -o romfs/Model/CS_W1.Nin_NX_NVN.szs`
   (same file order and alignment as the original; `--compress` for real Yaz0).
6. `source/code/framework/worldmap.cpp` is in the build. At boot the Ryujinx log
   shows `worldmap W1: 72 points, 134 routes` for every map, so you can see
   the game parsed all of yours.

## 6. Save data

The story save remembers where you are (`+428` world, `+432` variant, `+436`
point index) and keeps a record per F point, found **by name** (128 per
world and variant; flag `0x10` = reached). Renaming points in a world that a
save has already visited loses that state; use a new save to test.

## 7. Map objects come from bones

The map has no object list. When a map is built, 0x60227F68 walks **every bone
of model `CS_W<n>[a|b]`** and spawns an actor at the bone's position, chosen by
the bone's name (ledger F0237). `wmtool.py objects <map>` prints the result.

| Bone | Spawns (profile) | Notes |
|---|---|---|
| `W?0n`, `W?A?`, `W?B?`, `W?C?`, `W?G?`, `W?K?`, `W?S?`, `W?T?`, `W?W?`, `W?X?` | 866 course point | the dot you stand on; `W?M?` (start) and `W?J?` (junction) spawn nothing |
| `F…` with flag `dokan` / `dokan2` | 867 world-move pipe | |
| `F…` with `switchA` / `switchB` | 881 / 882 blue / red switch | |
| `F…` with `KanketsusenA/B/D/E` | 894 geyser | |
| `F…` with `RainbowA`-`D` | 895 W7 rainbow bridge | numbered in bone order |
| `F…` with `W5bEnemy1`-`7` | 903 grave | |
| `cobCastle` (exact) | 859 castle | |
| `cobToride…` | 860 fort / tower | `cobToride0`, `cobToride1` for two |
| `cobKinoko1up…`, `cobKinokoShuffle…`, `cobKinokoSlot…` | 861 / 862 / 863 Toad houses | the house type is also recorded for its point |
| `cobGhost` (exact) | 869 ghost house | |
| `cobPeachGates1st` / `2nd` (exact) | 864 / 865 Peach's castle doors | |
| `cobFlag…` | 892 Peach's castle flag | |
| `cobPakkun…` | 900 big Piranha Plant | scenery enemy |
| `cobUnizo…` | 902 big Urchin | |
| `cobStarGate…` | 909 W9 star gate | |
| `cobShip…` | all seven Koopaling airships 871-877 | only when the save byte `+28` is set (meaning not traced) |
| `lookW<world><NN>` | nothing | its position is saved as camera look-at `NN` of that world |
| `W8B1` on W8b | 906 Bowser Jr. | depending on the state of course 8-43 (0x6019B154 / 0x6019AF00, not traced further) |

**Parenting matters.** Castles, forts, houses, ghost houses and Peach's doors
take their course and their point from **the bone they are parented to**
(0x6022A7E4 reads the parent index at bone `+0x2A`): `cobCastle` under `W1C0`
is the 1-23 castle and opens when `W1C0` does. Put such a bone under the right
W point; `check` warns when the parent is not a course point.

Other `cob…` bones (`cobShipLemmy`, `cobSurrender`, `cobCannon`, `cobCourse`,
`cobPeachWindow` …) are not spawned from this list; the actor that owns them
finds them by name. `RFd02W1X0`-style bones are path anchors (section 2).

## 8. Map parts (the other models in the BFRES)

| Model | Who draws it |
|---|---|
| `CS_W<n>` | the map; its bones are the points and objects |
| `CS_W<n>_World` | the distant backdrop, on the `3D_World` render layer with its own camera (0x602221C8, 0x601994E8) |
| `CS_W<n>_Trap` | attached by the map (0x602221C8); W6's moving traps |
| `CS_W<n>_Synchro`, `_Synchro1`, `_Synchro2` | animated scenery, every map |
| `CS_W<n>_<part>` | a fixed list per world slot (0x60226F74): W2a `Quicksand`, `CloudBG`; W3 `Ocean`; W4 `Aurora`; W5a `Doku`, `Fog`; W8a `CloudBG`, `Ocean`, `Castle`, `Wall`; W5b `Doku`, `Ocean`; W8b `Magma`, `CloudBG`; W9b `Universe` |
| `R<path>` (e.g. `RW102W1S0`) | appears when that path opens |
| `CS_W8a_DarkCloud…` | the W8 intro scene (`DarkCloudDemoScene`, `Demo/CS_W8a_DarkCloud.sarc`) |

A part missing from the BFRES is skipped safely (the dictionary lookup returns
nothing). Every part plays the skeletal, texture and shader animations **with
its own name**, so name your animations after the model. `Doku` and `Ocean`
use a different draw pass and `CloudBG` draws without depth; the part's name
decides that, so reuse a vanilla name for the same effect.

## 9. The worlds are one 3D space

All nine worlds are built at once (0x601A044C). W3 is the anchor: its bone
`GrandCentral` becomes the origin. Every other world is moved so that its
`connectW<k>` bone lands on the same-named bone of its neighbour (0x6019F2F0,
0x601A02F8):

| Link | Bone in both maps |
|---|---|
| W1-W2 | `connectW2` |
| W2-W3 | `connectW3` |
| W3-W4, W4-W5, W5-W6, W6-W7, W7-W8 | `connectW4` … `connectW8` |
| W3-W9 | `connectW9` |

Variant-b maps are pushed 20000 units apart along X. This is the space the
camera flies over between worlds. A custom world **must keep its `connectW`
bones**, or it is placed relative to bone -1; `check` warns about missing ones.

## 10. Map enemies and fights

The map enemies are fixed per world in code (the profile per slot comes from
0x6021EE50) and in tables. `scripts/worldmap/wm_tables.py --nso <main>` writes
`reverse-engineering/FindingsG/map_enemies.csv`:

| World | Enemies (start point flag) |
|---|---|
| 1 | W1 item (`W1Item`), Piranha Plant (`W1PakkunA`) |
| 2 | Goomba (`W2EnemyA`), Hammer Bro (`W2EnemyB`), Waddlewing (`W2EnemyC`) |
| 3 | 2 jumping Cheep Cheeps (`W3EnemyA`, `B`) |
| 4 | 4 Pentaros (`W4EnemyA`-`D`), W4 item |
| 5 | 3 Boos (`W5bEnemy1`-`3`) |
| 7 | 2 Chorobons (`ChorobonA`, `B`), W7 item (`ChorobonC`) |
| 6, 8, 9 | none |

An enemy starts on the point that carries its flag, so **moving the flag moves
the enemy**. Its position, state and fight course are kept in the story save
(`+984`: 5 records of 24 bytes per world, 0x60187130). The fight course is
taken in turn from a per-world list (table 0x60AFD3B0): `?-32, ?-33, ?-34,
?-55`, plus `?-56`, `?-57` in W2 and W4 (`?-56` in W5). These level files
exist only for the worlds with enemies, so **a custom fight is one of those
level files**. A new kind of map enemy, or enemies in W6/W8/W9, needs code:
the tables are fixed.

## 11. Scenes: scripted map events

Map cutscenes (an airship flying off, a castle collapsing, a house opening,
Peach's castle) are **scripted event sequences**, not files. The event manager
(0x60C8996C) keeps a queue of 16 requests `{sequence, priority, 18 actor ids}`
(0x60191160). It starts the highest-priority request (0x601906A4) and steps
through it. A step ends when every actor in the request reports done
(0x60190CEC).

`reverse-engineering/FindingsG/event_sequences.csv` lists all 119 sequences from the table at
0x60BD5514: `{priority, steps}`, each step `{code, arg}`, ending at code 343.
Step `7(n)` waits n frames. Other codes are commands that the camera
(0x601DBB64, a `switch` on the current code), the player and the map objects
react to.

Who asks for which sequence (through 0x601863B8 / 0x6018642C):

| Sequence | Requested by |
|---|---|
| 17, 18 | castle and ghost house |
| 36 | the three Toad houses |
| 39 | map items and the Waddlewing |
| 69 | Peach's castle 2F door |
| 10, 13 | fort / tower |
| 32 | the fight sequence the map enemies wait for |
| 5, 6, 33, 38, 40, 41, 45, 58, 62, 75, 84, 85, 91, 93, 94 … | the map player and its companions |
| 4, 51, 59-61, 63-65, 109 | hint Toad / hint Nabbit (0x601E74A4) |
| 111 | the event assistant at the start of a new game (camera to W1M0 / W303) |

New scenes need code, because the table is in the binary. A custom world can
reuse the vanilla scenes by placing the objects that request them.

## 12. World map actors

Profile ids 855-910 (`MAP_PROFILES` in `wmtool.py`; their real names are the
Japanese ones passed to their Profile constructors, e.g. 859 `CourseSelectお城`):
player 855, camera 858, castle 859, fort 860, Toad houses 861-863, Peach
doors 864/865, course point 866, pipe 867, W8 cloud 868, ghost house 869, W2
Hammer Bro 870, airships 871-879, white flag 880, switches 881/882, Boo 883,
Kamek 884, fort boss 885, Piranha 886, hint Toad 887, Cheep 888, Chorobon
889, W7 item 890, W5 Boo 891, castle flag 892, Waddlewing 893, geyser 894,
rainbow bridge 895, Mii balloon 896, Pentaro 897, W4 item 898, Goomba 899,
big Piranha 900, Nabbit icon 901, big Urchin 902, grave 903, hint Nabbit 904,
bone coaster 905, Bowser Jr. 906, Peach 907, W1 item 908, star gate 909,
event assistant 910.

Bowser Jr.'s airship (878 / wrecked 879) is placed by story progress in code
(0x601F9EEC), not from a bone.

## 13. Custom world checklist

1. Pick the slot (one of the twelve archives) and start from its vanilla map.
2. Model: keep the `connectW` bones (and `GrandCentral` for W3). Add a bone
   per point, `cob…` bones parented to their W point, `lookW` bones for
   camera targets, and parts named for that slot (section 8).
3. CSVs: points, flags (enemy start flags, pipes, switches, geysers) and
   routes (sections 2-3).
4. Levels: `Course/<world>-<n>.sarc` for every course point, and the fight
   courses `?-32`… for worlds with map enemies.
5. `wmtool.py objects` and `wmtool.py check`, then `build`.
