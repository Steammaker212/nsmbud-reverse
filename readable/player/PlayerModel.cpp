// PlayerModel.cpp -- readable reconstruction of how a power-up changes the
// player's look.
//
// Hand-written, behaviour-equivalent rendering of the Deluxe functions at the
// addresses given, using framework/game/include/game/player.h. The Wii U
// decomp (red-pro2 src/player/PlayerModel.cpp, MarioModel.cpp) has the same
// structure; Deluxe offsets and tables were read from the binary. Evidence:
// data/findings/ledger.csv F0049-F0055, F0061-F0063. Documents the game;
// not compiled.
//
// Deluxe (Switch) v1.0.0.

#include "game/player.h"

// 0xB0C230 (Wii U cPlayerModelData, plus the Crown).
static const PlayerBody cModeToBody[(u32)PlayerMode::Num] = {
    PlayerBody::Small,      // Small
    PlayerBody::Normal,     // Big
    PlayerBody::Normal,     // Fire: the Normal body, coloured by setColorType
    PlayerBody::Small,      // Mini: the Small body, scaled down
    PlayerBody::Propeller,
    PlayerBody::Penguin,
    PlayerBody::Normal,     // Ice: the Normal body, coloured by setColorType
    PlayerBody::Squirrel,   // Acorn
    PlayerBody::Squirrel,   // P-Acorn: the Squirrel body, frame 1
    PlayerBody::Peachette,  // Crown
};

// Switch-animation names (Deluxe static init 0x60759C20; identical to Wii U).
// Mario: head 0x60CBF0D0, body 0x60CBF100; Luigi: head 0x60CBF130, body 0x60CBF160
// (setColorType computes 0x60CBF0B0 + body*8 + 32 for Mario's head, etc.).
static const char* const cHeadSwitchAnm_Mario[] = { "PH_switch", "PH_switch", "PH_switch", "PH_switch", "MMH_model_switch" };
static const char* const cBodySwitchAnm_Mario[] = { "PB_switch", "PB_switch", "PB_switch", "PB_switch", "MMB_model_switch" };
static const char* const cHeadSwitchAnm_Luigi[] = { "PH_switch", "PH_switch", "PH_switch", "PH_switch", "MLH_model_switch" };
static const char* const cBodySwitchAnm_Luigi[] = { "PB_switch", "PB_switch", "PB_switch", "PB_switch", "MLB_model_switch" };

// Wii U PlayerModel::setPlayerMode (Deluxe's copy not yet located): picks the
// body for the mode, then the colour.
void PlayerModel::setPlayerMode(PlayerMode mode)
{
    setPlayerModel(mode);                                   // body = cModeToBody[mode]
    mColorType = PlayerColor::Invalid;
    switch (mode) {
    case PlayerMode::Fire: setColorType(PlayerColor::Fire, false); break;
    case PlayerMode::Ice:  setColorType(PlayerColor::Ice,  false); break;
    default:               setColorType(PlayerColor::Normal, false); break;
    }
}

// 0x6075A6E4 (never a defined function; read from the disassembly).
void MarioModel::setColorType(PlayerColor color, bool keepHeadKonst3)
{
    if (mColorType == color)                                // +0x1E0
        return;
    mColorType = color;

    f32 frame = 0.0f;
    switch (mNowBodyID) {                                   // +0x12C
    case PlayerBody::Normal:
    case PlayerBody::Small:
        frame = color == PlayerColor::Ice  ? 2.0f
              : color == PlayerColor::Fire ? 1.0f : 0.0f;
        break;
    case PlayerBody::Propeller:
    case PlayerBody::Penguin:
        return;                                             // their own models: no recolour
    case PlayerBody::Squirrel:
        frame = mPlayerMode == PlayerMode::PAcorn ? 1.0f : 0.0f;   // +0x1D8 == 8
        break;
    default:
        break;
    }

    bool luigi = mType == 1;                                // +0xA4

    if (mpHeadModel) {                                      // +0x124
        TexAnim* anm = mpHeadModel->texAnims[0];            // wrapper+0x14 -> [0]
        anm->play(mpModelRes, (luigi ? cHeadSwitchAnm_Luigi : cHeadSwitchAnm_Mario)[mNowBodyID]);
        anm->frameCtrl.setRepeat(false);                    // AnimationCtrl_setRepeat(anm+4, 0)
        anm->rate  = 0.0f;                                  // anm+0x18
        anm->frame = frame;                                 // anm+0x14
        anm->flags |= 2;                                    // anm+0x1C
    }

    TexAnim* body = mpModel->texAnims[0];                   // +0x18
    body->play(mpModelRes, (luigi ? cBodySwitchAnm_Luigi : cBodySwitchAnm_Mario)[mNowBodyID]);
    body->frameCtrl.setRepeat(false);
    body->rate = 0.0f;  body->frame = frame;  body->flags |= 2;

    TexAnim* cap = mBonusCap->texAnims[0];                  // +0x224
    cap->play(mpModelRes, "PC_switch");
    cap->frameCtrl.setRepeat(false);
    cap->rate = 0.0f;  cap->frame = frame;  cap->flags |= 2;

    if (!keepHeadKonst3 && mpHeadModel)
        resetTevKColor3Alpha(mpHeadModel->model);           // sub_6078EFFC
}

// ---- the other model classes ------------------------------------------------
//
// setColorType is virtual (slot 44, vtable +0xB0) and each player-model class
// has its own; the layouts agree up to +0x1E0 and differ after it (F0061).
// MarioModel's +0x224 is the bonus cap; KinopioModel has none, and calling
// MarioModel's routine on a Toad dereferences whatever lives there.

// 0x60B0A798: first colour frame of each Toad type (+0xA4 = 2, 3, 4).
static const f32 cKinopioFrameBase[3] = { 0.0f, 3.0f, 6.0f };

// 0x60757B58 (KinopioModel, vtable 0x60C23E94; never a defined function).
void KinopioModel::setColorType(PlayerColor color, bool keepHeadKonst3)
{
    if (mColorType == color)                                // +0x1E0
        return;
    mColorType = color;

    f32 frame = 0.0f;
    switch (mNowBodyID) {                                   // +0x12C
    case PlayerBody::Normal:
    case PlayerBody::Small: {
        u32 t = mType - 2;                                  // +0xA4
        frame = t <= 2 ? cKinopioFrameBase[t] : 0.0f;
        frame += color == PlayerColor::Ice  ? 2.0f
               : color == PlayerColor::Fire ? 1.0f : 0.0f;
        break;
    }
    case PlayerBody::Propeller:
    case PlayerBody::Penguin:
        frame = mType == 3 ? 1.0f : 0.0f;
        break;
    case PlayerBody::Squirrel:
        frame = (mType == 3 ? 1.0f : 0.0f) + (mPlayerMode == PlayerMode::PAcorn ? 2.0f : 0.0f);
        break;
    default:
        break;
    }

    // Switch-animation name tables: head 0x60CBEF30, body 0x60CBEF60 (+ body*8).
    TexAnim* head = mpHeadModel->texAnims[0];               // +0x124, not null-checked
    head->play(mpModelRes, cKinopioHeadSwitchAnm[mNowBodyID]);
    head->frameCtrl.setRepeat(false);
    head->rate = 0.0f;  head->frame = frame;  head->flags |= 2;

    TexAnim* body = mpModel->texAnims[0];                   // +0x18
    body->play(mpModelRes, cKinopioBodySwitchAnm[mNowBodyID]);
    body->frameCtrl.setRepeat(false);
    body->rate = 0.0f;  body->frame = frame;  body->flags |= 2;

    if (!keepHeadKonst3)
        resetTevKColor3Alpha(mpHeadModel->model);           // sub_6078EFFC
}

// 0x6075D3AC (vtable 0x60C240DC; which character uses it is not established):
// frame = variant*3 + 1 Fire / 2 Ice on Normal/Small, with variant a u32 at
// +0x224 that 0x6075D518 sets (clamped to 3, then re-applies the colour).
// Binds body +0x18 and head +0x498.
