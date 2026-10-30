// yoshi_colors.cpp -- random Yoshi colours (Tsuru's yoshicolors).
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// After Tsuru's src/yoshicolors.cpp / yoshicolors.S (https://github.com/Zenith-Team/Tsuru,
// Zenith Team, MPL-2.0): Tsuru points the YoshiModel at its own texture-archive list and gives
// every Yoshi a random entry of it instead of nybble 12.
//
// On Deluxe the YoshiModel constructor (0x607D4818, model, colour) takes its texture archive
// from a table of four sead::SafeStrings at 0x60CC5468 (+8 per colour) -- and Deluxe's static
// init (0x607D4748) fills all four with "Yoshi_TexGreen": the reason every Yoshi is green. The
// four retail archives are all there, in the always-mounted jyotyuActorPack: Yoshi_TexGreen,
// Yoshi_TexLightBlue, Yoshi_TexYellow, Yoshi_TexPink. Yoshi's constructor (0x607CB7D0) passes
// settings1 & 0xF on to 0x607D6354, which builds the model; that call (0x607CB818) is replaced
// here: the table gets the four names back and the colour is random. No custom model needed.

#include "nintendo/sead/random.h"

namespace ModBase { namespace yoshiColors {

struct SafeStringEntry { const void* vtable; const char* cstr; };

extern SafeStringEntry texTable[4];                         // symbols/player/yoshi_colors.sym
void* makeModel(void* modelHolder, unsigned int colour);     // the game's 0x607D6354
void* createModel(void* modelHolder, unsigned int colour);   // hooks/tweaks/yoshi_colors.hks

} }

void* ModBase::yoshiColors::createModel(void* modelHolder, unsigned int colour)
{
    // Tsuru's order (YoshiTexArray). The vtable words stay the game's own SafeString vtable.
    static const char* const cNames[4] = {
        "Yoshi_TexGreen", "Yoshi_TexLightBlue", "Yoshi_TexYellow", "Yoshi_TexPink"
    };
    for (unsigned int i = 0; i < 4; i++)
        texTable[i].cstr = cNames[i];
    (void)colour;
    return makeModel(modelHolder, randU32(4));
}
