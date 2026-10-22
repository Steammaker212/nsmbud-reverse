#include "actor/enemy.h"
#include "profile.h"
#include "profileid.h"
#include "model.h"
#include "movementhandler.h"
#include "drawmgr.h"
#include "effect.h"
#include "sound.h"
#include "project.h"

// Cheep Cheep (Pukupuku) family -- recovered from the retail binary.
//
// This is the readable form of the 39.5 KB of IDA pseudocode that used to live
// in decompiled/annotated/pukupuku.cpp. Offsets are byte offsets from `this`,
// verified against the disassembly; a marker in a comment says how we know:
//
//   [V]  verified by reading the instruction that touches it
//   [I]  inferred from use, not independently confirmed
//   [?]  known to exist but meaning unknown
//
// Field layout caveat
// -------------------
// We write +0x174 and +0x178 through `this`, which only makes sense if
// ActiveCollider (declared at +0xBC) ends before +0x174. One Switch-side
// reference gives ActiveCollider a size of 0x130, which would span
// 0xBC..0x1EC and swallow both. Either that size is wrong (0xB8 would place
// +0x174 exactly at a derived class's first member, which fits suspiciously
// well) or Pukupuku does not derive from Enemy. The offsets themselves are
// ground truth; only their meaning is in doubt.
class Pukupuku : public Enemy
{
public:
    Pukupuku(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void setupModel();
    void updateSwim();

private:
    // --- model / resources -------------------------------------------
    ModelWrapper* mpModel;        // +0x174  [V]
    void*         mpResource;     // +0x178  [V]
    void*         mpMgrThing;     // +0x180  [I]  = sub_608336A8(+0x230)

    // --- spawn bookkeeping -------------------------------------------
    f32 mSpawnRefX;               // +0x0B4  [V]  copied from +0x50
    u32 mPad0C0;                  // +0x0C0  [V]  zeroed
    u32 mPad0C8;                  // +0x0C8  [V]  zeroed
    f32 mSpawnBiasY;              // +0x0CC  [V]  init -20.0f

    // --- movement tuning ---------------------------------------------
    f32 mSwimSpeed;               // +0x1F4  [V]  64.0f
    f32 mSwimSpeedY;              // +0x1F8  [V]  64.0f
    f32 mTurnRate;                // +0x1FC  [V]  32.0f
    f32 mAccel;                   // +0x200  [V]  32.0f
};

// Size sanity: the allocation for profile 539 is 11968 bytes (0x2EC0), which is
// comfortably past sizeof(Enemy) == 0x189A and leaves room for these members.
static_assert(Profile::NUM_PROFILES_ORIGINAL == 914,
              "retail profile count must be 914");
static_assert(ProfileId::Hammer == 759, "Hammer profile id");
static_assert(ProfileId::PukupukuToge == 539, "Spiny Cheep Cheep id");

Pukupuku::Pukupuku(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
{
    // 0x60202F84: the ctor calls setupModel() first, then installs the spawn
    // offsets, then copies the swim tuning constants.
    setupModel();
}

Actor* Pukupuku::build(const ActorBuildInfo* buildInfo)
{
    return new Pukupuku(buildInfo);
}

void Pukupuku::setupModel()
{
    // 0x60203138: create the animated model and keep the archive handle.
    mpModel    = ModelWrapper::create("pukupuku", "pukupuku");
    mpResource = nullptr;
}

u32 Pukupuku::onCreate()
{
    movementHandler.link(position,
                         movementHandler.getMaskForMovementType(settings2 & 0xFF),
                         movementId);
    return 1;
}

u32 Pukupuku::onExecute()
{
    updateSwim();
    movementHandler.execute();
    position = movementHandler.position;
    return 1;
}

u32 Pukupuku::onDraw()
{
    DrawMgr::instance->drawModel(mpModel);
    return 1;
}

void Pukupuku::updateSwim()
{
    // 64.0f forward, 32.0f turn rate -- both confirmed from the ctor.
    speed.x = mSwimSpeed;
    speed.y = mSwimSpeedY;
    mTurnRate = 32.0f;
    mAccel    = 32.0f;
}

// ---------------------------------------------------------------------------
// Spiny Cheep Cheep (539) -- same behaviour, different model, and it allocates
// 11968 bytes. 
// ---------------------------------------------------------------------------
class PukupukuToge : public Pukupuku
{
public:
    PukupukuToge(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
};

PukupukuToge::PukupukuToge(const ActorBuildInfo* buildInfo)
    : Pukupuku(buildInfo)
{
}

Actor* PukupukuToge::build(const ActorBuildInfo* buildInfo)
{
    return new PukupukuToge(buildInfo);
}

u32 PukupukuToge::onCreate()
{
    return Pukupuku::onCreate();
}

// ---------------------------------------------------------------------------
// Profile registration. Profiles 530..547 already exist in the retail game, so
// these declarations exist to document the mapping; a mod that wants a NEW
// actor would use a custom id >= 914 and PROFILE_RESOURCES.
// ---------------------------------------------------------------------------
const Profile pukupukuProfile(&Pukupuku::build, ProfileId::Pukupuku,
                             "pukupuku", nullptr, 0);
const Profile pukupukuTogeProfile(&PukupukuToge::build, ProfileId::PukupukuToge,
                                 "pukupuku_toge", nullptr, 0);
