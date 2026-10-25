// Yoshi.cpp -- readable reconstruction of Yoshi (profile 442).
//
// Hand-written, behaviour-equivalent renderings of the Deluxe functions at the
// addresses given, using framework/game/include/game/yoshi.h. Wii U has no
// Yoshi source (NSMBU-Headers only declares the class); EatData and the
// PlayerBase state order come from NSMBU-Headers and were checked against
// Deluxe. Evidence: data/findings/ledger.csv F0076-F0090. Not compiled.
//
// Deluxe (Switch) v1.0.0.

#include "game/yoshi.h"

using namespace yoshi;

// ---- 0x607CB7B4 / 0x607CB7D0: build and construct ------------------------------

Actor* Yoshi_build(const ActorBuildInfo* info)
{
    return new (0x2E30) Yoshi(info);
}

Yoshi::Yoshi(const ActorBuildInfo* info)
    : PlayerBase(info)                                      // 0x6075DEFC, 0x2C5C bytes
{
    // vtable 0x60C25AB0
    mMouthActorId = 0;                                      // +0x2C5C
    _2C60 = 0;
    mModelMgr.init(mSettings1 & 0xF, 0);                    // +0x2C64, sub_607D6354: YoshiModel(colour)
    _2C74 = new (0x1C) Unk603E45E4;
    mMouthState.init(this, &StateID_MouthIdle0);            // StateMgr +0x2C8C, executer +0x2C7C
    mTonguePlayerNo = -1;                                   // +0x2C9C
    // +0x2CA0 .. +0x2CF0 cleared; effects at +0x2CF4, +0x2D5C, +0x2DC4
    mKind = ActorKind::Yoshi;                               // +0x215 = 2
    mpModelMgr = &mModelMgr;                                // +0x288
    PlayerMgr::instance->registerYoshi(this);               // sub_6078B160, sub_6078B118
}

// sub_607D6354 / sub_607D4818: the model. Archive "YoshiAnm" for animations,
// model "YB_model", tongue material "mat_yoshitongue", face "face_1"; the
// texture archive comes from a 4-entry table (0x60CC5468) indexed by colour,
// which the static initializer 0x607D4748 fills with "Yoshi_TexGreen" four times.
YoshiModel::YoshiModel(s32 colour)
    : PlayerModelBase(cTexArchive[colour], "YoshiAnm")      // 0x607929C0
{
    mColour = colour;                                       // +0x148
    // mModel = "YB_model" (ModelWrapper 0x30); +0x158 = material "mat_yoshitongue"
}

// ---- the mouth: StateMgr at +0x2C8C (StateIDs 0x60CC5398...) -----------------------

// Tongue begin, 0x607CF1EC.
void Yoshi::beginState_Tongue()
{
    mTonguePlayerNo = mPlayerNo;                            // +0x2C9C
    mFlags4D4 |= 0x400000;
    mTongueDir = mDirection;                                // +0x2CA0
    if (abs(angleToFace(mTongueDir)) <= abs(mAngleY))       // already facing that way
        startTongue();                                      // 0x607D04EC
    else
        mTonguePhase = 0;                                   // +0x2CA4: turn first
    mTongueFrame = 10;                                      // +0x2CB8
    mTongueHit = mTongueHitEffect = false;                  // +0x2CC6, +0x2CC5
}

// 0x607D04EC
void Yoshi::startTongue()
{
    mFlags4D4 |= 0x200000;
    model()->flags |= 0x40;
    model()->playAnim(102, 1.4f, 10.0f, 4.0f);              // tongue out (or sub_607949A4 when bit set)
    if (Player* rider = getRider())                         // 0x607CBC00
        rider->mYoshiAction = 1;                            // +0x144
    mTonguePhase = 1;
    playSound("SE_PLY_YOSHI_TONGUE");
}

// Tongue execute, 0x607CF27C: phase 0 wait to face, 1 out (anim 102 -> 105),
// 2 caught (0x607D0A4C), 3 back (0x607D0C14), 4 back empty, 5 end.

// 0x607D0A4C: phase 2, something is on the tongue.
void Yoshi::tongueCaught()
{
    Actor* caught = ActorMgr::getById(mMouthActorId);
    if (!caught || !caught->isStageActor()) {
        mMouthActorId = 0;
        mTonguePhase = 0;
        mMouthState.changeState(&StateID_MouthIdle0);
        return;
    }
    // tongue length follows the animation; at frame 9 the catch reaches the mouth
    if (model()->isAnimFrame(9.0f)) {
        mTongueFrame = 0;
        catchToMouth();                                     // 0x607D0F8C
    }
    if (model()->isAnimEnd()) {
        if (EatData* eat = caught->mpEatData) {             // +0x26C
            if (eat->type == EatType::YoshiFireIce)
                swapForFlame(true);                         // 0x607D1164
            else if (eat->type == EatType::YoshiFire)
                swapForFlame(false);
        }
        mTonguePhase = 0;
        mMouthState.changeState(&StateID_MouthIdle0);
    }
}

// 0x607D0F8C: the catch is in the mouth.
void Yoshi::catchToMouth()
{
    mFlags4D4 &= ~0x400000;
    if (Actor* caught = ActorMgr::getById(mMouthActorId))
        if (EatData* eat = caught->mpEatData) {
            eat->state = EatState::EatMouth;
            withPlayerNo(mTonguePlayerNo, [&] { eat->setEatMouth(this); });   // EatData +0x1C
        }
    if (Player* rider = getRider())
        rider->mYoshiAction = 2;
    mFlags4D4 &= ~0x200000;
    if (mFruitCount >= cFruitsPerEgg || mForcedEgg) {       // +0x2CC8 / +0x2CCC; 5 at 0x60B0C0C8
        startLayEgg();                                      // 0x607D7EEC, then PlayerBase state 0x60CBFA90
    }
}

// 0x607D1164: replace the catch with a YoshiFlame (profile 478) in the mouth.
bool Yoshi::swapForFlame(bool ice)
{
    if (Actor* caught = ActorMgr::getById(mMouthActorId))
        caught->mDeleteRequested = true;                    // +0x13
    mMouthActorId = 0;
    ActorBuildInfo info = {};
    info.settings1 = (ice ? 1 : 0) | (mPlayerNo << 4);
    info.profile = Profile::get(478);
    if (Actor* flame = ActorMgr::create(&info, 0)) {
        mMouthActorId = flame->mId;
        return true;
    }
    return false;
}

// 0x607D05CC: swallow.
void Yoshi::swallow()
{
    if (Actor* caught = ActorMgr::getById(mMouthActorId))
        if (EatData* eat = caught->mpEatData) {
            withPlayerNo(mTonguePlayerNo, [&] { eat->setEatGlupDown(this); });  // EatData +0x24
            eat->yoshiId = 0;
            eat->state = EatState::None;
        }
    if (Player* rider = getRider())
        rider->mYoshiAction = 0;
    mMouthActorId = 0;
    playSound("SE_VOC_YS_GOKUN");
}

// 0x607D033C: the spit sound. A YoshiFlame in the mouth is fire breath.
void Yoshi::playSpitSound()
{
    Actor* inMouth = ActorMgr::getById(mMouthActorId);
    if (inMouth && inMouth->isStageActor())
        playSound(inMouth->getProfileId() == 478 ? "SE_PLY_YOSHI_FIRE" : "SE_VOC_YS_ATTACK");
}

// ---- fruit and eggs ---------------------------------------------------------------

void Yoshi::addFruit()                                      // 0x607D15C8
{
    mFruitCount = mFruitCount < cFruitsPerEgg ? mFruitCount + 1 : cFruitsPerEgg;
}

bool Yoshi::wantsToLayEgg() const                           // 0x607D1570
{
    return mFruitCount >= cFruitsPerEgg || mForcedEgg;
}

// 0x607D15F0: the egg appears 10 units in front of the "spin" joint.
bool Yoshi::layEgg()
{
    if (!wantsToLayEgg())
        return false;
    Vec3 at = model()->jointPos("spin") + front() * 10.0f;
    u32 colour = mSettings1 & 0xF;
    u32 dir = mDirection ^ 1;
    if (mForcedEgg) {
        spawnYoshiEgg(at, colour, dir, mPlayerNo, mForcedEgg);   // 0x605BA2B8
        mForcedEgg = 0;
    } else {
        spawnYoshiEgg(at, colour, dir, mPlayerNo);               // 0x605BA190
        mFruitCount = 0;
    }
    return true;
}

// 0x605BA190: plays "SE_PLY_YOSHI_LAY_EGG" and creates profile 811 (Yoshi egg) with
//   settings1 = (playerNo << 20, or 0xF00000 for none) | (dir << 4) | cEggColour[colour] | 0x1000
// cEggColour (0x60AF2A44) = { 0, 3, 1, 2, ... }. The forced-egg variant adds (extra << 16).

// ---- flutter jump: 0x607D3CDC (part of the Jump/Fall update, not a defined function) --

void Yoshi::updateFlutter()
{
    switch (mFlutterPhase) {                                // +0x2CE8
    case 0:                                                 // jump started
        if (!mCanFlutter) { mFlutterPhase = 4; break; }     // +0x2CEC
        if (mSpeed.y < 0.0f) {                              // falling
            model()->playAnim(mFlags4B7 & 0x40 ? 124 : 6, 10.0f);
            mFlutterPhase = 1;
        }
        break;
    case 1:
        if (mSpeed.y < -2.0f && input().jumpHeld()) {
            mCanFlutter = false;                            // one flutter per jump
            mFlutterPhase = 2;
            model()->playAnim(119);
            mFlutterTimer = cFlutterFrames;                 // +0x2CF0; 30 at 0x60B0C0CC
        }
        break;
    case 2:
        playSoundOnce("SE_PLY_YOSHI_FJUMP");
        spawnEffect(428, model()->jointPos(...));           // puff, EffectWrapper +0x2CF4
        if (Player* rider = getRider())
            rider->bounce(max(mSpeed.y, 0.0f) * 0.5f);      // 0x607D608C
        if (abs(mSpeedF) > 1.5f) {                          // +0x58
            mMaxSpeedF = mSpeedF >= 0 ? 1.5f : -1.5f;       // +0x5C
            mPow = 0.05f;                                   // +0x68
        } else if (sub_607868D4(input(), 0) == 0) {         // an input test, meaning not traced
            mMaxSpeedF = 0.0f;
            mPow = max(mPow, 0.01f);
        }
        mGravity = mSpeed.y > -1.0f ? 0.07f : 0.2f;         // +0x64: upward push, 0x607D3F94/98
        if ((mFlutterTimer == 0 && (mFlags1AF4 & 2)) || (mFlags4D8 & 1)) {
            mFlutterPhase = 4;                              // timer out / interrupted
        } else if (!input().jumpHeld() || mSpeed.y > 2.4f) {
            model()->playAnim(6, 10.0f);                    // let go, or risen enough
            mFlutterPhase = 4;
        }
        break;
    }
}

// ---- Jump override (state 0x60CC54AC, vtable 0x30C / 0x310 / 0x314) -----------------

void Yoshi::beginState_Jump()                               // 0x607D3FA4
{
    PlayerBase::beginState_Jump();                          // 0x6076FEC8
    mFlutterPhase = 0;                                      // +0x2CE8
    mFlags4D4 |= 0x1000000;
    // ... jump speed from the jump data (+0x26CC), x0.8 when (+0x1AF8 & 0x18)
}

void Yoshi::executeState_Jump()                             // 0x607D4104
{
    PlayerBase::executeState_Jump();                        // 0x6076FF58
    // 0x607D3BB4: ground pound from the air (0x607D3918 -> HipAttack override
    // 0x60CC55A8), the flutter (above), and landing -> Land override 0x60CC54F4.
}
