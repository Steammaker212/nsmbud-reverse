# Bee

A new sprite, **735**, that flies the way a Cheep Cheep swims, with a bee model.
It is the game's own Cheep Cheep class (profile 530) made into a new actor by
[`framework/actors`](../../framework/README.md). No Cheep Cheep code is
rewritten.

**Status:** built together with the Hammer Suit (`mods/build_all`) and installed
in Ryujinx; **not yet tested in-game**.

## Configure (top of `code/bee.cpp`)

```c
#define BEE_ARCHIVE         "bee"     // romfs/Model/bee.Nin_NX_NVN.szs
#define BEE_MODEL           "bee"     // model name inside it
#define BEE_BEHAVES_LIKE    530       // 530 swim, 532 big, 534 chases you, 536 runs away
#define BEE_OPTIONS         nsmbudx::cVariant_AirSwim
```

Your bee archive needs:

- a model named `BEE_MODEL`;
- a skeletal animation named **`swim`** (the Cheep Cheep plays it);
- optionally, a texture animation named **`pukupuku`**.

Until the archive exists, the Bee shows the Cheep Cheep model, and the Ryujinx
log says `remap: archive 'bee' is not loaded`.

## Place it

Sprite 735 in Yaz0moto (the `steam-dx-test` patch adds it under *Enemies*). Its
settings are the Cheep Cheep's:

- nybble 5: start facing left
- nybble 8: flying distance
- speed
- nybble 12: type: normal, turns around, 45° up, 45° down

## How it flies

A Cheep Cheep pins itself 16 units under the water surface every frame
(`onExecute 0x60372E6C`, ledger F0040). The air-swim option reports the surface
far above the Bee while its code runs. So it keeps the Cheep Cheep's swimming
motion, but in air. This is **inferred**: whether out-of-water Cheep Cheep code
does anything else (bubbles, splash checks, gravity) is the first thing to test.

## Test order

| # | Do | Expect |
|---|---|---|
| 1 | Place sprite 735 in the air, enter the level | A Cheep Cheep-looking Bee moves through the air without dropping to the bottom |
| 2 | Touch it | It hurts you like a Cheep Cheep; stomping or fireballs defeat it |
| 3 | Type 3, 9, 10 | Turns around / swims diagonally, as the Cheep Cheep does |
| 4 | Add `bee.Nin_NX_NVN.szs` | The bee model, flapping with its `swim` animation |
| 5 | `BEE_BEHAVES_LIKE 534` | It chases you |
