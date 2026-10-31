// modbase/costume.h -- extra models drawn on a player model's bones.
//
// A power-up costume (code/powerups/hammer_costume.cpp, shell_costume.cpp) makes
// its models in the onCreated listener and draws them in onDrawn
// (modbase/player_models.h), each on a bone of the player's body (+0x018) or
// head (+0x124) model:
//
//   ModBase::costume::drawHelmet(helmet, head, character);
//   ModBase::costume::drawShellPart(shell, body, cBackShell[shellFitIndex(character)], cHammerShellDepth);
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
// They are drawn on the body model's bone "spin" (bone X = up, bone Y = forward,
// bone Z = sideways), turned so the opening faces forward, the dome back and the
// head end up. A part's origin (its opening) sits this far from the bone, in the
// player's terms: x sideways, y up, z forward (+ in front of the player, - behind).
// The shell is 16.92 wide, 15.34 deep and 17.42 tall at scale 1.

// =====================================================================
//  CONFIGURATION: how deep each suit's shell is
// =====================================================================

// A multiplier on each character's own depth (cBackShell, cWholeShell): 1.0 is the
// size measured for that character, 1.5 is 50% deeper, and every character keeps its
// proportions. The shell grows backward only, from where it meets the body. The Blue
// Shell's belly plate has no multiplier: it keeps its size.
constexpr f32 cHammerShellDepth = 1.2f;
constexpr f32 cBlueShellDepth   = 1.2f;

// =====================================================================

struct PartFit
{
    f32 x, y, z;
    f32 scaleSide, scaleDepth, scaleUp;
};

struct ShellFit
{
    PartFit body;
    PartFit belly;
};

// Measured from each character's Normal body around bone "spin" (half width, back,
// front, top, bottom of the torso), since they differ too much for one fit:
//
//                half width  back    front  top   bottom   bone height
//   Mario          5.30      -3.20   5.96   9.0   -5.0     12.81
//   Luigi          4.20      -2.40   4.97   9.0   -5.0     14.32
//   Toads          5.45      -3.67   5.10   5.7   -4.0      7.34
//   Toadette       5.10      -3.73   4.95   5.8   -4.0      7.34   (skirt: 6.14, -4.69, 6.09)
//
// Worn on the back (the Hammer Suit, no belly): as wide and tall as the Blue Shell's
// dome, and ending just as far behind the player. With no belly plate to cover it, the
// opening comes back 2.3, into the torso; that is all the difference in depth.
constexpr PartFit cBackShell[] = {
    { 0.0f,  2.00f, 4.56f, 0.777f, 0.674f, 0.836f },    // Mario
    { 0.0f,  2.00f, 3.57f, 0.616f, 0.700f, 0.836f },    // Luigi
    { 0.0f, -0.25f, 4.00f, 0.863f, 0.668f, 0.710f },    // Toads
    { 0.0f, -0.20f, 4.30f, 0.920f, 0.742f, 0.716f },    // Toadette
};

// Worn around the body (the Blue Shell): the opening and the belly plate in front of
// it, the dome 2.2 behind the torso. The Toads' round bodies need it lower and wider.
constexpr ShellFit cWholeShell[] = {
    { { 0.0f,  2.00f, 6.86f, 0.777f, 0.799f, 0.836f }, { 0.0f,  1.75f, 6.46f, 0.777f, 0.799f, 0.836f } },   // Mario
    { { 0.0f,  2.00f, 5.87f, 0.616f, 0.760f, 0.836f }, { 0.0f,  1.75f, 5.98f, 0.616f, 0.683f, 0.836f } },   // Luigi
    { { 0.0f, -0.25f, 6.30f, 0.863f, 0.793f, 0.710f }, { 0.0f, -0.46f, 5.90f, 0.863f, 0.793f, 0.710f } },   // Toads
    { { 0.0f, -0.20f, 6.60f, 0.920f, 0.867f, 0.716f }, { 0.0f, -0.41f, 6.17f, 0.920f, 0.867f, 0.716f } },   // Toadette
};

// Characters by modbase/player_models.h: 0 Mario, 1 Luigi, 2-4 Toads, 6 Toadette.
constexpr u32 cToadetteCharacter = 6;

inline bool wearsShell(u32 character)
{
    return character <= 4 || character == cToadetteCharacter;
}

inline u32 shellFitIndex(u32 character)
{
    return character <= 1 ? character : character == cToadetteCharacter ? 3 : 2;
}

// The fixed turn, with a part's offset.
inline Mtx34 shellPart(f32 x, f32 y, f32 z)
{
    Mtx34 m;
    m.rows[0][0] = 0.0f; m.rows[0][1] =  0.0f; m.rows[0][2] = 1.0f; m.rows[0][3] = y;  // bone X (up)      = the shell's z
    m.rows[1][0] = 0.0f; m.rows[1][1] = -1.0f; m.rows[1][2] = 0.0f; m.rows[1][3] = z;  // bone Y (forward) = minus its y
    m.rows[2][0] = 1.0f; m.rows[2][1] =  0.0f; m.rows[2][2] = 0.0f; m.rows[2][3] = x;  // bone Z (side)    = its x
    return m;
}

// Draws one part on the player's body model, `depth` times as deep as its fit.
inline void drawShellPart(ModelWrapper* part, ModelWrapper* body, const PartFit& fit, f32 depth = 1.0f)
{
    Mtx34 local = shellPart(fit.x, fit.y, fit.z);
    drawOnBone(part, body, "spin", &local, Vec3(fit.scaleSide, fit.scaleDepth * depth, fit.scaleUp));
}

// ---- The helmet on the head -----------------------------------------------------
//
// Bone "player_head" of the head model: x forward, -y up, z sideways. The Hammer Bro
// helmet (hmrpy_partsC, x -7.68..7.04, y -13.96..1.66, z -7.97..8.33) was made for
// Mario's head and fits it as it is. Luigi's hair reaches -14.04 (Mario's -11.86), with
// his head narrower: hair x -5.03..5.96 (Mario -5.61..7.39), face z 5.82 (6.99). His
// helmet keeps Mario's margins around those.
struct HelmetFit
{
    f32 x, y, z;
    f32 scaleForward, scaleUp, scaleSide;
};

constexpr HelmetFit cHelmetFit[] = {
    { 0.0f,   0.0f,  0.0f, 1.0f,   1.0f,   1.0f   },    // Mario
    { -0.29f, -1.15f, 0.0f, 0.845f, 1.087f, 0.833f },   // Luigi
};

// Mario (0) or Luigi (1).
inline void drawHelmet(ModelWrapper* helmet, ModelWrapper* head, u32 character)
{
    const HelmetFit& fit = cHelmetFit[character & 1];
    Mtx34 local;
    for (u32 i = 0; i < 3; i++)
        for (u32 j = 0; j < 4; j++)
            local.rows[i][j] = i == j ? 1.0f : 0.0f;
    local.rows[0][3] = fit.x;
    local.rows[1][3] = fit.y;
    local.rows[2][3] = fit.z;
    drawOnBone(helmet, head, "player_head", &local, Vec3(fit.scaleForward, fit.scaleUp, fit.scaleSide));
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
