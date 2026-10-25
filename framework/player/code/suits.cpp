// suits.cpp -- see nsmbudx/suits.h.
//
// Layout read from MarioModel::setColorType (0x6075A6E4, never a defined
// function; ledger F0050-F0052):
//
//   model+0x010  model resource          model+0x0A4  type (1 = Luigi)
//   model+0x018  body ModelWrapper*      model+0x124  head ModelWrapper* (may be null)
//   model+0x12C  body id (0 Normal, 1 Small, 2 Propeller, 3 Penguin, 4 Squirrel)
//   model+0x1D8  player mode             model+0x1E0  current colour type
//   model+0x224  bonus cap ModelWrapper*
//   wrapper+0x14 -> texture animations; [0] is the colour switch animation
//   anim+0x14 frame (f32), anim+0x18 rate, anim+0x1C flags (|= 2 after a change)
//
// Player -> model: *(*(player + 0x288) + 4), the model manager createFireBall
// asks for the wrist joint (F0015).

#include "nsmbudx/suits.h"
#include "nsmbudx/log.h"

extern "C" u8 PlayerMgr_instance[];   // generated game API: 0x60CC436C, holds PlayerMgr*

namespace {

struct Override
{
    bool active;
    u32 when;
    f32 frame;
};

Override sOverrides[4];

inline void* playerAt(u32 n)
{
    u8* mgr = *(u8**)PlayerMgr_instance;
    return mgr ? *(void**)(mgr + 0x30 + 4 * (n & 3)) : nullptr;     // grant helper F0020
}

inline void* modelOf(void* player)
{
    void* mgr = player ? *(void**)((u8*)player + 0x288) : nullptr;
    return mgr ? *(void**)((u8*)mgr + 4) : nullptr;
}

s32 playerOfModel(void* model)
{
    for (u32 i = 0; i < 4; i++)
        if (void* p = playerAt(i))
            if (modelOf(p) == model)
                return i;
    return -1;
}

void setFrame(void* wrapper, f32 frame)
{
    if (!wrapper)
        return;
    void** anims = *(void***)((u8*)wrapper + 0x14);
    u8* anim = anims ? (u8*)anims[0] : nullptr;
    if (!anim)
        return;
    *(f32*)(anim + 0x14) = frame;
    *(u32*)(anim + 0x1C) |= 2;
}

} // namespace

extern "C" void Suits_setColorType_orig(void* model, u32 colorType, bool keepHeadKonst3);

extern "C" void Suits_setColorType(void* model, u32 colorType, bool keepHeadKonst3)
{
    Suits_setColorType_orig(model, colorType, keepHeadKonst3);

    s32 n = playerOfModel(model);
    if (n < 0 || !sOverrides[n].active || sOverrides[n].when != colorType)
        return;
    u32 body = *(u32*)((u8*)model + 0x12C);
    if (body > 1)                       // only Normal and Small carry the switch frames
        return;
    f32 frame = sOverrides[n].frame;
    setFrame(*(void**)((u8*)model + 0x018), frame);   // body
    setFrame(*(void**)((u8*)model + 0x124), frame);   // head
    setFrame(*(void**)((u8*)model + 0x224), frame);   // bonus cap
}

namespace nsmbudx {
namespace suits {

void overrideColor(u32 playerNo, ColorType when, f32 frame)
{
    if (playerNo < 4)
        sOverrides[playerNo] = { true, (u32)when, frame };
}

void clear(u32 playerNo)
{
    if (playerNo < 4)
        sOverrides[playerNo].active = false;
}

void refresh(u32 playerNo)
{
    void* model = modelOf(playerAt(playerNo));
    if (!model)
        return;
    u32 current = *(u32*)((u8*)model + 0x1E0);
    *(u32*)((u8*)model + 0x1E0) = cColor_Invalid;      // the routine skips an unchanged type
    Suits_setColorType(model, current ? current : (u32)cColor_Normal, false);
}

} // namespace suits
} // namespace nsmbudx
