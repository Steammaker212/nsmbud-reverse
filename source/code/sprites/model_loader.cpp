// model_loader.cpp -- the Model Loader (sprite 780): shows any model, optionally animated and
// moving, as level decoration.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/modelloader.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Differences:
//   - Tsuru reads the archive, model and animation names from String Bank actors placed in the
//     level. Here they come from cModels below: the sprite picks an entry by number.
//   - Tsuru's parallax mode draws on its own render layer (agl::lyr, not mapped on Deluxe).
//     Here the depth setting only moves the model along z (Tsuru's -250 + n * 70).
//
// Settings:
//   nybbles 5-6   entry of cModels (1-based; 0 shows nothing)
//   nybble 4      scale: 1, 0.25, 0.5, 0.75, 1.25, 1.5, 1.75, 2, 2.5, 3, 4, 5, 6, 7, 8, 10
//   nybble 1      1: use the depth in nybble 2
//   nybble 2      depth: z = -250 + n * 70
//   nybbles 19-20 movement type; 21-22 movement ID
//
// To add a model: add a line to cModels, and its archive to PROFILE_RESOURCES below (only the
// archives listed there are loaded with the level). Archives go to
// romfs/Model/<archive>.Nin_NX_NVN.szs.

#include "actors/stageactor.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "actors/movementhandler.h"
#include "modbase/tsuru.h"

namespace {

struct ModelEntry
{
    const char* archive;
    const char* model;
    const char* sklAnim;    // nullptr: not animated
};

// Entry 1 is cModels[0].
const ModelEntry cModels[] = {
    { "lift_han_wood", "lift_han_wood_M", nullptr },     // 1: a wooden platform piece (example)
};
const u32 cModelCount = sizeof(cModels) / sizeof(cModels[0]);

} // namespace

class ModelLoader : public StageActor
{
public:
    ModelLoader(const ActorBuildInfo* b) : StageActor(b), model(nullptr) { }
    static Actor* build(const ActorBuildInfo* b) { return new ModelLoader(b); }

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    ModelWrapper* model;
    MovementHandler movementHandler;
};

const Profile modelLoaderProfile(&ModelLoader::build, ProfileId::ModelLoader, "ModelLoader", nullptr, 0);
PROFILE_RESOURCES(ProfileId::ModelLoader, "lift_han_wood");

u32 ModelLoader::onCreate()
{
    static const f32 cScales[16] = {
        1.0f, 0.25f, 0.5f, 0.75f, 1.25f, 1.5f, 1.75f, 2.0f, 2.5f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 10.0f
    };
    scale = scale * cScales[eventId1 & 0xF];                       // nybble 4
    if (eventId2 >> 4 & 0xF)                                        // nybble 1
        position.z = -250.0f + (f32)(eventId2 & 0xF) * 70.0f;      // nybble 2

    u32 entry = settings1 >> 24 & 0xFF;                             // nybbles 5-6
    if (entry == 0 || entry > cModelCount) {
        ModBase::log("ModelLoader: no model entry ", entry, " (", cModelCount, " in the table)");
        return 2;
    }
    const ModelEntry& e = cModels[entry - 1];
    model = tsuru::createModel(e.archive, e.model, e.sklAnim ? 1 : 0);
    if (!model)
        return 2;
    if (e.sklAnim)
        tsuru::playSklAnim(model, e.sklAnim, true);

    movementHandler.link(position, movementHandler.getMaskForMovementType(settings2 & 0xFF), movementId);
    return onExecute();
}

u32 ModelLoader::onExecute()
{
    if (!model)
        return 1;
    movementHandler.execute();
    position = movementHandler.position;
    tsuru::placeModel(model, this);
    return 1;
}

u32 ModelLoader::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}
