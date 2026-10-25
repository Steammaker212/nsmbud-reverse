// shy_guy.cpp -- the Shy Guy: a new sprite with the Goombrat's mechanics.
//
// =====================================================================
//  CONFIGURATION
// =====================================================================

// Your model: romfs/Model/<SHYGUY_ARCHIVE>.Nin_NX_NVN.szs with a model named
// SHYGUY_MODEL. The Goombas play a skeletal animation "walk" at creation and
// then "walk0" / "walk1" -- and the same names as *texture* animations -- so
// give your archive those four. A missing one is logged, not fatal: the actor
// falls back to the vanilla model.
#define SHYGUY_ARCHIVE      "shyguy"
#define SHYGUY_MODEL        "shyguy"

// Which vanilla behaviour to copy. This is the whole point of the mod:
//
//   468 Goombrat (Kakibo) -- TURNS AT LEDGES. Every frame it checks for floor
//                            one and a half units ahead and turns instead of
//                            walking off the edge.
//   467 Goomba            -- same class, same code, walks off any ledge.
//
// The two are one C++ class with one build function and one state table. The
// only difference in the game is `getProfileId() == 468` inside onCreate
// (0x603393F0), which also selects the archive ("kakibo" vs "kuribo"), the
// starting walk state, the walk animation set and the tuning table -- see
// readable/enemy/Goomba.cpp and ledger F0092-F0097. Building with 468 therefore
// yields a Goombrat, not merely something that looks like one.
#define SHYGUY_BEHAVES_LIKE GoombaProfile::Goombrat

// The archive the vanilla build looks up for that profile, which is what the
// remap below replaces. Must match SHYGUY_BEHAVES_LIKE.
#define SHYGUY_VANILLA_ARCHIVE  "kakibo"

// The Goombrat's model is looked up by the same name as its archive, so both
// halves of the remap use it.
#define SHYGUY_VANILLA_MODEL    "kakibo"

// =====================================================================
//
// Everything else is framework/actors: the Shy Guy is the game's own Goomba
// class with a private vtable whose lifecycle virtuals run with the names
// swapped (nsmbudx/actor_variant.h). Deluxe (Switch) v1.0.0 only.

#include "profileid.h"
#include "game/goomba.h"
#include "nsmbudx/actor_variant.h"

NSMBUDX_ACTOR_VARIANT(shyGuyVariant,
    ProfileId::ShyGuy, SHYGUY_BEHAVES_LIKE, "Shy Guy", nsmbudx::cVariant_None,
    {
        { SHYGUY_VANILLA_ARCHIVE, SHYGUY_ARCHIVE,
          SHYGUY_VANILLA_MODEL,   SHYGUY_MODEL },
    },
    {}, 0, 0);
