// music_note.cpp -- the Music Note (sprite 763) and its Music Note Manager (sprite 764): touch
// the clef and its hidden notes appear; collect them all before time runs out for a reward.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/musicnote.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour; besides the
// porting kit's renames (docs/TSURU_PORTING.md):
//   - Notes and managers find each other through ModBase::ActorList (Tsuru walks every actor).
//   - Tsuru's Actor isActive / isVisible flags are the note's own: hidden notes draw nothing
//     and have no collider until their manager is touched.
//   - The reward appears where the last note was collected (Tsuru left the power-up's
//     position at 0, 0); Star Coins appear at the manager, as in Tsuru.
//   - Sound effects are looked up by label (ModBase::playSoundAt): Tsuru's
//     SE_EMY_PATAMET_STEP + n is the label n entries after SE_EMY_PATAMET_STEP.
//
// Music Note settings:
//   nybbles 3-4   manager ID (the clef it belongs to)
//   nybble 1      pitch (0-15: SE_EMY_PATAMET_STEP + n)
//   nybbles 19-20 movement type; 21-22 movement ID
// Music Note Manager settings:
//   nybbles 3-4   ID (its notes use it)
//   nybbles 1-2   notes to collect
//   nybble 5      reward: 0 Mushroom, 1 Fire Flower, 2 Ice Flower, 3 Mini Mushroom,
//                 4 Propeller, 5 Penguin, 6 Acorn, 7 1-Up, 8 3-Up Moon, 9-11 Star Coin 1-3
//   nybbles 6-7   time limit in seconds (0: 5)
//   nybbles 19-20 movement type; 21-22 movement ID
//
// Models: note and clef (texture-pattern anim "rainbow").

#include "actors/stageactor.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "actors/movementhandler.h"
#include "modbase/stage_kit.h"
#include "modbase/tsuru.h"

class MusicNoteMgr;

class MusicNote : public StageActor
{
public:
    MusicNote(const ActorBuildInfo* buildInfo);
    ~MusicNote() { sNotes.remove(this); }
    static Actor* build(const ActorBuildInfo* buildInfo) { return new MusicNote(buildInfo); }

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void activate();
    static void collisionCallback(ActiveCollider* acSelf, ActiveCollider* acOther);
    static const ActiveCollider::Info collisionInfo;

    int note;
    ModelWrapper* noteModel;
    MovementHandler movementHandler;
    u8 mgrID;
    bool active;        // Tsuru: isActive
    bool visible;       // Tsuru: isVisible
    bool addCollider;   // set from the manager's collision callback, done in onExecute

    static ModBase::ActorList<MusicNote> sNotes;
};

class MusicNoteMgr : public StageActor
{
public:
    MusicNoteMgr(const ActorBuildInfo* buildInfo);
    ~MusicNoteMgr() { sMgrs.remove(this); }
    static Actor* build(const ActorBuildInfo* buildInfo) { return new MusicNoteMgr(buildInfo); }

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void reward(const Vec3& at);
    static void collisionCallback(ActiveCollider* acSelf, ActiveCollider* acOther);
    static const ActiveCollider::Info collisionInfo;

    ModelWrapper* clefModel;
    MovementHandler movementHandler;
    u32 collectedCount;
    u32 targetCount;
    u32 mgrId;
    u32 powerup;
    u32 timeLimit;
    bool touched;
    bool visible;

    static ModBase::ActorList<MusicNoteMgr> sMgrs;
};

ModBase::ActorList<MusicNote> MusicNote::sNotes;
ModBase::ActorList<MusicNoteMgr> MusicNoteMgr::sMgrs;

// Tsuru's MusicNoteActorInfo: notes stay active far from the screen.
const ActorInfo musicNoteActorInfo = { 0, 0, 0, 0, 4800, 4800, 0, 0, 0, 0, 0 };

const Profile musicNoteProfile(&MusicNote::build, ProfileId::MusicNote, "MusicNote", &musicNoteActorInfo, 0);
const Profile musicNoteMgrProfile(&MusicNoteMgr::build, ProfileId::MusicNoteMgr, "MusicNoteMgr", &musicNoteActorInfo, 0);
PROFILE_RESOURCES(ProfileId::MusicNote, "note", "star_coin");
PROFILE_RESOURCES(ProfileId::MusicNoteMgr, "clef", "star_coin");

// Tsuru's kind 5 is Deluxe's 3 (cold_fuzzy.cpp has the why).
const ActiveCollider::Info MusicNote::collisionInfo = {
    {0.0f, 0.0f}, {8.0f, 8.0f}, 0, 3, 0, 0x824F, 0x20208, 0, &MusicNote::collisionCallback
};
const ActiveCollider::Info MusicNoteMgr::collisionInfo = {
    {0.0f, 0.0f}, {8.0f, 16.0f}, 0, 3, 0, 0x824F, 0x20208, 0, &MusicNoteMgr::collisionCallback
};

static void placeSpinning(ModelWrapper* model, StageActor* actor)
{
    if (!model)
        return;
    Mtx34 mtx;
    mtx.rotateAndTranslate(actor->rotation, actor->position);
    actor->rotation.y += tsuru::deg2idx(3.0f);
    model->setMtx(mtx);
    model->setScale(actor->scale);
    model->updateAnimations();
    model->updateModel();
}

// ---- Music Note -----------------------------------------------------------------------------

MusicNote::MusicNote(const ActorBuildInfo* buildInfo)
    : StageActor(buildInfo), note(0), noteModel(nullptr), movementHandler(), mgrID(0), active(false), visible(false), addCollider(false)
{ }

u32 MusicNote::onCreate()
{
    noteModel = tsuru::createModel("note", "note", 0, 1);
    tsuru::playTexPatternAnim(noteModel, "rainbow");
    if (noteModel && noteModel->texAnims.count > 0)
        noteModel->texAnims[0]->setRepeat(true);

    aCollider.init(this, &collisionInfo, 0);     // added when the manager is touched

    mgrID = eventId1;                   // nybbles 3-4
    note = eventId2 >> 0x4 & 0xF;       // nybble 1
    u32 movementMask = movementHandler.getMaskForMovementType(settings2 & 0xFF);   // nybbles 19-20
    movementHandler.link(position, movementMask, movementId);                       // nybbles 21-22

    scale = Vec3(0.17f, 0.17f, 0.17f);
    sNotes.add(this);
    return onExecute();
}

void MusicNote::activate()
{
    if (active)
        return;
    active = visible = true;
    addCollider = true;     // not inside a collision callback: next onExecute
}

u32 MusicNote::onExecute()
{
    if (addCollider) {
        addCollider = false;
        addActiveColliders();
    }
    placeSpinning(noteModel, this);
    movementHandler.execute();
    position = movementHandler.position;
    return 1;
}

u32 MusicNote::onDraw()
{
    if (visible)
        tsuru::drawModel(noteModel);
    return 1;
}

void MusicNote::collisionCallback(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    if (acOther->owner->type != 1)      // players
        return;
    MusicNote* self = static_cast<MusicNote*>(acSelf->owner);
    if (!self->active || self->isDeleted)
        return;
    MusicNoteMgr* mgr = MusicNoteMgr::sMgrs.find([self](MusicNoteMgr* m) { return m->mgrId == self->mgrID; });

    ModBase::playSoundAt("SE_EMY_PATAMET_STEP", self->note, self->position);
    if (mgr) {
        if (mgr->collectedCount + 1 >= mgr->targetCount) {
            ModBase::playSoundAt("SE_EMY_PATAMET_COMPLETE", 0, self->position);
            mgr->reward(self->position);
        }
        mgr->collectedCount++;
    }
    self->removeActiveColliders();
    self->isDeleted = true;
}

// ---- Music Note Manager ---------------------------------------------------------------------

MusicNoteMgr::MusicNoteMgr(const ActorBuildInfo* buildInfo)
    : StageActor(buildInfo)
    , clefModel(nullptr)
    , movementHandler()
    , collectedCount(0)
    , targetCount(buildInfo->eventId2)                                  // nybbles 1-2
    , mgrId(buildInfo->eventId1)                                        // nybbles 3-4
    , powerup(buildInfo->settings1 >> 0x1C & 0xF)                       // nybble 5
    , timeLimit(((buildInfo->settings1 >> 0x14 & 0xFF) ? (buildInfo->settings1 >> 0x14 & 0xFF) : 5) * 60)  // nybbles 6-7
    , touched(false)
    , visible(true)
{ }

u32 MusicNoteMgr::onCreate()
{
    clefModel = tsuru::createModel("clef", "clef", 0, 1);
    tsuru::playTexPatternAnim(clefModel, "rainbow");
    if (clefModel && clefModel->texAnims.count > 0)
        clefModel->texAnims[0]->setRepeat(true);
    scale = Vec3(0.17f, 0.17f, 0.17f);

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();

    u32 movementMask = movementHandler.getMaskForMovementType(settings2 & 0xFF);
    movementHandler.link(position, movementMask, movementId);
    sMgrs.add(this);
    return onExecute();
}

// Tsuru's reward table (profiles 591-599, the Star Coin 426).
void MusicNoteMgr::reward(const Vec3& at)
{
    static const u32 cItems[] = { 591, 592, 594, 593, 595, 596, 598, 597, 599 };
    ActorBuildInfo buildInfo = { 0 };
    buildInfo.settings1 = 0x6000000;    // nybble 6 = 6: a reward item
    buildInfo.position = at;
    if (powerup >= 9 && powerup <= 11) {
        buildInfo.profile = Profile::get(426);
        buildInfo.settings1 = (powerup - 9) << 12;     // which Star Coin
        buildInfo.position = position;
    } else {
        buildInfo.profile = Profile::get(powerup < 9 ? cItems[powerup] : 591);
    }
    ActorMgr::instance->create(&buildInfo, 0);
}

u32 MusicNoteMgr::onExecute()
{
    if (collectedCount >= targetCount) {
        isDeleted = true;
        return 1;
    }

    placeSpinning(clefModel, this);
    movementHandler.execute();
    position = movementHandler.position;

    if (!touched)
        return 1;

    timeLimit--;
    if (timeLimit <= 180) {
        // Under 3 seconds left the notes flicker (4 frames on, 4 off).
        bool show = (timeLimit / 4) % 2 == 0;
        MusicNote::sNotes.forEach([this, show](MusicNote* n) { if (n->mgrID == mgrId) n->visible = show; });
    }
    if (timeLimit == 0) {
        MusicNote::sNotes.forEach([this](MusicNote* n) { if (n->mgrID == mgrId) n->isDeleted = true; });
        isDeleted = true;
    } else if (timeLimit % 60 == 0) {
        if (timeLimit <= 180) {
            // Under 3 seconds left: a faster-sounding tick each second.
            ModBase::playSoundAt("SE_SYS_SWITCH_CT_LAST", 0, position);
        } else {
            ModBase::playSoundAt("SE_SYS_SWITCH_CT", 0, position);
        }
    }
    return 1;
}

u32 MusicNoteMgr::onDraw()
{
    if (visible)
        tsuru::drawModel(clefModel);
    return 1;
}

void MusicNoteMgr::collisionCallback(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    MusicNoteMgr* self = static_cast<MusicNoteMgr*>(acSelf->owner);
    if (self->touched || acOther->owner->type != 1)
        return;
    self->touched = true;
    self->visible = false;
    ModBase::playSoundAt("SE_SYS_RED_RING", 0, self->position);
    self->removeActiveColliders();
    MusicNote::sNotes.forEach([self](MusicNote* n) { if (n->mgrID == self->mgrId) n->activate(); });
}
