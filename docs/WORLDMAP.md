# World maps: how they work and how to make your own

Everything here was read from Deluxe v1.0.0 (ledger F0064-F0075). The code is
reconstructed in [readable/course_select/WorldMapData.cpp](../readable/course_select/WorldMapData.cpp),
the structures are in `framework/game/include/game/worldmap.h`, and
`scripts/worldmap/wmtool.py` dumps, checks and rebuilds the archives.

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
6. Optional: add `mods/worldmap_log` to your build. At boot the Ryujinx log
   shows `worldmap W1: 72 points, 134 routes` for every map, so you can see
   the game parsed all of yours.

## 6. Save data

The story save remembers where you are (`+428` world, `+432` variant, `+436`
point index) and keeps a record per F point, found **by name** (128 per
world and variant; flag `0x10` = reached). Renaming points in a world that a
save has already visited loses that state; use a new save to test.
