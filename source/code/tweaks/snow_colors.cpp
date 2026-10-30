// snow_colors.cpp -- colours for the Snow Effect (sprite 198) from its spritedata (Tsuru's
// "Snow Particles" patch).
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// After Tsuru's src/snowparticles.S (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0):
// colour 1 (the flake) from nybbles 5-12 and colour 2 (its glow) from nybbles 13-20, RRGGBBAA.
//
// On the Wii U the colours sit in the actor; Deluxe's snow update (0x606A3990, profile 792) reads
// them from a static block shared by every snow actor (0x60CB9AA0, set by 0x606A4404):
//   +1..+3  flake B, G, R   (its alpha is the per-flake fade the update computes)
//   +4..+7  glow  A, B, G, R
// Retail: flake white, glow (135, 230, 255) opaque. The update copies them into each flake every
// frame, so the hook loads this actor's colours into the block before running it: several snow
// actors with different colours each draw with their own. A colour left all-zero keeps its
// retail value. The flake alpha (nybbles 11-12) has no slot on Deluxe and is ignored. The glow's
// "alpha" reaches the shader unscaled (0x6044B880: (float)byte, not byte / 255; retail 255):
// below 255 it darkens the flakes.

#include "actors/stageactor.h"

namespace ModBase { namespace snowColors {
extern u8 colours[8];
u32 onExecute(StageActor* snow);
u32 onExecute_orig(StageActor* snow);
} }

u32 ModBase::snowColors::onExecute(StageActor* snow)
{
    u32 c1 = snow->settings1;                   // nybbles 5-12: RRGGBBAA
    u32 c2 = snow->settings2;                   // nybbles 13-20: RRGGBBAA
    if (c1 == 0)                                // each left at 0 keeps its retail colour
        c1 = 0xFFFFFFFF;
    if (c2 == 0)
        c2 = 0x87E6FFFF;
    colours[1] = c1 >> 8;                       // B
    colours[2] = c1 >> 16;                      // G
    colours[3] = c1 >> 24;                      // R
    colours[4] = c2;                            // A
    colours[5] = c2 >> 8;                       // B
    colours[6] = c2 >> 16;                      // G
    colours[7] = c2 >> 24;                      // R
    return onExecute_orig(snow);
}
