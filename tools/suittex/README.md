# suittex: add a suit texture to a Deluxe player model

The game picks a player's clothes with the texture-pattern animations `PB_switch` / `PH_switch` /
`PC_switch` (Toads: `KB_switch` / `KH_switch`, Toadette: `CB_model_switch` / `CH_model_switch`), held
on one frame. A new look is a new texture plus a new frame that points at it, with the frame chosen
in code (`modbase/suits.h`, `HAMMER_SUIT_FRAME` in `hammer_suit.cpp`).

    dotnet build -c Release tools/wiiu2dx
    dotnet build -c Release tools/suittex
    py -I scripts/models/hammer_suit_textures.py <out dir> [--romfs G:/SSMB/ROMFS]

That script is the command you run: it recolours the retail textures, encodes them, runs this tool
and rebuilds the archives. It only reads the retail files. The colours and the areas of each
texture are at the top of it (`mario_suit`, `toad_body`, `toad_head`, `toadette_suit`).

| Character | File | New frame | New textures |
|---|---|---|---|
| Mario, Luigi | `Pack/jyotyuActorPack.pack` | 3 | `player_body.3` |
| Blue Toad | `Pack/jyotyuActorPack.pack` | 7 | `player_body.7`, `player_head.7` |
| Yellow Toad | `Pack/jyotyuActorPack.pack` | 8 | `player_body.8`, `player_head.8` |
| Toadette | `Model/KinopicoMdl.Nin_NX_NVN.szs` | 3 | `player_body.3` |

Mario's and Luigi's head frames reuse their normal `player_head.0`: the helmet covers the cap.

## What has to stay right

- **Baked size.** BfresLibrary overwrites every animation's `BakedSize` on save with a smaller
  formula. The script restores the retail values (`FMAA+0x6C`) and gives the changed animations
  the size `suittex` computes, which matches every retail switch animation: each curve takes
  16 bytes plus 4 per frame (2 when its frames are stored as bytes), rounded up to 8.
- **Texture dictionary.** BfresLibrary can damage the BNTX dictionary, so the script runs
  `scripts/models/fix_bntx_dict.py` on every archive.
- **Texture layout.** The new surfaces are checked against the retail size. `TextureData[0][i]` holds
  the bytes from mip `i` to the end of the surface, not just that mip.
- **Keys.** Toadette's curves store texture indices minus 1 (`Offset`), and frame 0 is the
  material's own texture. A step curve's `Delta` is an int stored in a float field.
