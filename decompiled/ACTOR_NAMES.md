# Actor names recovered — the developer debug tags

This is the largest naming result in the project so far: **694 actor constructors named**,
taking overall coverage from 9.7% to **11.2%**, and actor-region coverage much higher
(`actors_a` 15.8%, `actors_b` 13.0%, `core` 23.7%).

## How it was found

Every actor registration builds a two-word record on the stack and passes its address as the
4th argument to `Profile::Profile`:

```c
int sub_6003290C()
{
  _DWORD v1[2];

  v1[0] = 12321336;          /* 0x00BC0000 -- shared leading pointer */
  v1[1] = &aKK_1;            /* the name string              */
  return Profile::Profile(13106220, 206296, MEMORY[0xAF37EC], (int)v1,
                          &unk_60AF51B0, 0);
}
```

This is the same record shape as the item-name table, which is what made it recognisable.

## Why earlier attempts returned zero

Three separate reasons, all now understood:

1. **The string scan looked in the wrong place.** It only followed `LDR` literal-pool loads,
   not a stack store of a string address, so it never saw `v1[1]`.
2. **The strings are Japanese UTF-8.** The extractor replaced every byte ≥ 0x80 with `?` and
   then applied an ASCII identifier regex, which rejected all 775. The data was present the
   whole time; the reader was wrong twice over.
3. **IDA refuses non-ASCII identifiers.** `set_name` returned `False` for all 775 even once
   decoded correctly.

## What the names actually are

They are the developers' own per-entity debug tags, not localisation strings. Examples:

| ctor RVA | tag | romanized name |
|---|---|---|
| `0x00028fbc` | ボスK.K. | `BossKK` |
| `0x0004d2e0` | ブンブン（Ｗ１砦） | `BoomBoom_W1fort` |
| `0x00066e74` | 最終クッパ | `final_Bowser` |
| `0x0007e9f4` | 最終クッパの炎 | `final_Bowser_fire` |
| `0x000a28d0` | イギーの魔法 | `Iggy_magic` |
| `0x000accd0` | カメックのツララ | `Kamek_tsurara` |

These are the authoritative actor identities: 775 constructors, 759 distinct tags.

## How they are applied

Because IDA cannot hold the Japanese, the tags are transliterated:

* katakana/hiragana → romaji, longest token first
* the possessive particle `の` → `_`, so `クッパの炎` gives `Bowser_fire`, not `Bowserfire`
* fullwidth `Ｗ１` → `W1`, so world numbers survive
* known entity names mapped directly (`クッパ` → `Bowser`, `カメック` → `Kamek`, …)

**767 of 775** romanize successfully; 8 were already named from mangled C++ symbols and were
left alone. The original tag is kept beside every name in
`decompiled/data/actor_names_romaji.txt` so the transliteration stays auditable — if a name
looks odd, the Japanese original is right there.

## Shipped files

| file | contents |
|---|---|
| `decompiled/data/actor_internal_names.json` | 775 records: ctor RVA, profile id, actor id, Japanese tag |
| `decompiled/data/actor_internal_names.txt` | same, human-readable |
| `decompiled/data/actor_names_romaji.txt` | 767 romanized names, original tag beside each |

## Limitation, stated plainly

A romanized name is an interpretation of the tag, not the tag itself. `Kamek_tsurara` means
"Kamek's icicle" but `tsurara` is kept in romaji rather than translated, because guessing an
English gloss for a few hundred compound nouns would introduce errors. Where meaning matters,
read the Japanese column.

The naming is also **not** proof of what the function does beyond identity: `Actor_Iggy_build`
is Iggy's constructor because the game registers it under that tag, which is exactly the
claim made. It says nothing about the constructor's internals.
