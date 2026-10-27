// modbase/costume.h -- extra models drawn on a player model's bones.
//
// A power-up costume (code/powerups/hammer_costume.cpp, shell_costume.cpp) makes
// its models in the onCreated listener and draws them in onDrawn
// (modbase/player_models.h), each on a bone of the player's body (+0x018) or
// head (+0x124) model:
//
//   ModBase::costume::drawOnBone(helmet, head, "player_head");
//   ModBase::costume::drawShell(shellBody, shellBelly, body);
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "graphics/model.h"
#include "graphics/drawmgr.h"

namespace ModBase {
namespace costume {

typedef s32 (*SearchBoneFn)(Model* model, const sead::SafeString* name);
typedef void (*BoneMtxFn)(Model* model, s32 index, Mtx34* out);

// A Model finds a bone by name through vtable +0x54 (0x60436074, -1 when
// absent) and returns its world matrix through +0x6C (0x60436028, unchecked:
// matrices + index * 64). The world map reads its point bones the same way
// (0x60227F68).
inline bool boneMatrix(ModelWrapper* wrapper, const char* bone, Mtx34* out)
{
    if (!wrapper || !wrapper->model)
        return false;
    Model* model = wrapper->model;
    void** vt = *(void***)model;
    sead::SafeString name(bone);
    s32 index = ((SearchBoneFn)vt[0x54 / 4])(model, &name);
    if (index < 0)
        return false;
    ((BoneMtxFn)vt[0x6C / 4])(model, index, out);
    return true;
}

// out = a * b, both rotation (3x3) + translation (column 3).
inline void multiply(const Mtx34& a, const Mtx34& b, Mtx34* out)
{
    for (u32 i = 0; i < 3; i++)
        for (u32 j = 0; j < 4; j++) {
            f32 v = a.rows[i][0] * b.rows[0][j] + a.rows[i][1] * b.rows[1][j] + a.rows[i][2] * b.rows[2][j];
            out->rows[i][j] = j == 3 ? v + a.rows[i][3] : v;
        }
}

// Draws part with this matrix and scale (the scale is the model's own, so the
// matrix stays a pure rotation + translation).
inline void place(ModelWrapper* part, const Mtx34& mtx, const Vec3& scale)
{
    Vec3 s = scale;
    part->setMtx(mtx);
    part->setScale(s);
    part->updateModel();
    DrawMgr::instance->drawModel(part);
}

inline void place(ModelWrapper* part, const Mtx34& mtx, f32 scale = 1.0f)
{
    place(part, mtx, Vec3(scale, scale, scale));
}

// Draws part on a bone of `on`, optionally moved by `local` (in the bone's
// frame), scaled per axis of its own.
inline void drawOnBone(ModelWrapper* part, ModelWrapper* on, const char* bone,
                       const Mtx34* local, const Vec3& scale)
{
    Mtx34 mtx;
    if (!part || !boneMatrix(on, bone, &mtx))
        return;
    if (local) {
        Mtx34 bone2world = mtx;
        multiply(bone2world, *local, &mtx);
    }
    place(part, mtx, scale);
}

inline void drawOnBone(ModelWrapper* part, ModelWrapper* on, const char* bone,
                       const Mtx34* local = nullptr, f32 scale = 1.0f)
{
    drawOnBone(part, on, bone, local, Vec3(scale, scale, scale));
}

// ---- The shell on the body ------------------------------------------------------
//
// romfs/Model/blue_shell (Blue Shell) and hammer_shell (Hammer Suit) hold the
// same three models: "shell" (whole; the Blue Shell item), "shell_body" (the
// dome and its white rim) and "shell_belly" (the belly plate). They keep
// nokonoko_shell's geometry: origin at the opening, dome toward +y (15.34
// deep), head end toward +z.
//
// They are drawn on the body model's bone "spin" (MB_model: at (0, 12.81,
// -0.85); bone X = up, bone Y = forward, bone Z = sideways), turned so the
// opening faces forward, the dome back and the head end up. Each part's origin
// (its opening) sits this far from the bone, in the player's terms:
//   X = sideways, Y = up, Z = forward (+ in front of the player, - behind).
// With the same offsets the two parts fit together as the whole shell.
constexpr f32 cShellBodyOffsetX  = 0.0f;
constexpr f32 cShellBodyOffsetY  = 1.5f;
constexpr f32 cShellBodyOffsetZ  = 7.1f;    // the body's front reaches 6.23

constexpr f32 cShellBellyOffsetX = 0.0f;
constexpr f32 cShellBellyOffsetY = 1.2f;
constexpr f32 cShellBellyOffsetZ = 6.6f;

// The fixed turn, with a part's offset.
inline Mtx34 shellPart(f32 x, f32 y, f32 z)
{
    Mtx34 m;
    m.rows[0][0] = 0.0f; m.rows[0][1] =  0.0f; m.rows[0][2] = 1.0f; m.rows[0][3] = y;  // bone X (up)      = the shell's z
    m.rows[1][0] = 0.0f; m.rows[1][1] = -1.0f; m.rows[1][2] = 0.0f; m.rows[1][3] = z;  // bone Y (forward) = minus its y
    m.rows[2][0] = 1.0f; m.rows[2][1] =  0.0f; m.rows[2][2] = 0.0f; m.rows[2][3] = x;  // bone Z (side)    = its x
    return m;
}

// Draws the two parts on the player's body model (either may be null).
inline void drawShell(ModelWrapper* shellBody, ModelWrapper* shellBelly, ModelWrapper* body)
{
    Mtx34 b = shellPart(cShellBodyOffsetX, cShellBodyOffsetY, cShellBodyOffsetZ);
    Mtx34 f = shellPart(cShellBellyOffsetX, cShellBellyOffsetY, cShellBellyOffsetZ);
    drawOnBone(shellBody, body, "spin", &b);
    drawOnBone(shellBelly, body, "spin", &f);
}

// ---- Mario's cap ----------------------------------------------------------------
//
// MarioModel (Mario and Luigi) shows the cap or the hair by its head type:
// setHeadID (vtable +0xB8, 0x6075A6D0) stores it at +0x22C and "bonus cap" (the
// cap drawn on its own, at the CapPosition bone) at +0x234 = (type == 1);
// calcImpl (0x6075A558) then, on the Normal and Small bodies, shows the head
// model's material 3 (mat_player_hat) for type 0 and material 2
// (mat_player_hair) for anything else. Type 2: hair, no cap anywhere.
constexpr s32 cHeadType_Normal  = 0;
constexpr s32 cHeadType_Hatless = 2;
constexpr u32 cVtSetHeadID      = 0xB8;

inline s32 headType(void* marioModel) { return *(s32*)((u8*)marioModel + 0x22C); }

inline void setHeadType(void* marioModel, s32 type)
{
    typedef void (*Fn)(void*, s32);
    ((Fn)(*(void***)marioModel)[cVtSetHeadID / 4])(marioModel, type);
}

} // namespace costume
} // namespace ModBase
