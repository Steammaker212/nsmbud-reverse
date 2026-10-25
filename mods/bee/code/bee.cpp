// bee.cpp -- the Bee: a Cheep Cheep that flies, with a bee model.
//
// =====================================================================
//  CONFIGURATION
// =====================================================================

// Your model: romfs/Model/<BEE_ARCHIVE>.Nin_NX_NVN.szs with a model named
// BEE_MODEL. The Cheep Cheep plays a skeletal animation "swim" and a texture
// animation "pukupuku" on it, so include animations with those names (or the
// model shows without them). Until the archive exists the Bee uses the Cheep
// Cheep model and logs "remap: archive 'bee' is not loaded".
#define BEE_ARCHIVE         "bee"
#define BEE_MODEL           "bee"

// Which Cheep Cheep the Bee behaves like. Its editor settings are that
// sprite's (Yaz0moto sprite 101 for 530):
//   530 Cheep Cheep: swims straight, or turns around / 45° by nybble 12
//   532 big Cheep Cheep (1.5x)
//   534 searching: chases the player
//   536 fleeing:   swims away from the player
#define BEE_BEHAVES_LIKE    530

// The Cheep Cheep keeps itself 16 units under the water surface every frame.
// The air-swim option reports the surface far above the Bee, so it moves
// through the air the way a Cheep Cheep moves through water.
#define BEE_OPTIONS         nsmbudx::cVariant_AirSwim

// =====================================================================
//
// Everything else is framework/actors: the Bee is the game's own Cheep Cheep
// class with a private vtable whose lifecycle virtuals run with the names
// swapped (nsmbudx/actor_variant.h). Evidence: data/findings/ledger.csv
// F0034-F0042; the class is readable in readable/enemy/Pukupuku.cpp.
//
// Deluxe (Switch) v1.0.0 only.

#include "profileid.h"
#include "nsmbudx/actor_variant.h"

NSMBUDX_ACTOR_VARIANT(beeVariant,
    ProfileId::Bee, BEE_BEHAVES_LIKE, "Bee", BEE_OPTIONS,
    {
        { "pukupuku",       BEE_ARCHIVE, "pukupuku",       BEE_MODEL },
        { "pukupuku_mecha", BEE_ARCHIVE, "pukupuku_mecha", BEE_MODEL },
    });
