// modbase/models.h -- switch every mod between your models and the game's.
//
// Each mod names two models for every custom asset: yours, and a vanilla
// placeholder the game always has. One build flag picks for all of them:
//
//   make_mod_project.py ...                        your models (default)
//   make_mod_project.py ... --placeholder-models   the game's placeholders
//
// and each mod can override the flag for itself at the top of its file:
//
//   #define HAMMER_CUSTOM_MODELS  MODBASE_CUSTOM_MODELS   // follow the build
//   #define HAMMER_CUSTOM_MODELS  0                       // always the placeholder
//
//   #define HAMMER_ITEM_ARCHIVE \
//       MODBASE_PICK_MODEL(HAMMER_CUSTOM_MODELS, "hammer", "I_fireflower")
//
// A placeholder build is the quick way to tell "my model is wrong" from "my
// code is wrong": if the placeholder build works, the archive is to blame.
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#if __has_include("modbase/build_config.h")
#include "modbase/build_config.h"       // written by scripts/sdk/make_mod_project.py
#endif

#ifndef MODBASE_CUSTOM_MODELS
#define MODBASE_CUSTOM_MODELS 1
#endif

#define MODBASE_PICK_MODEL(useCustom, custom, placeholder) ((useCustom) ? (custom) : (placeholder))
