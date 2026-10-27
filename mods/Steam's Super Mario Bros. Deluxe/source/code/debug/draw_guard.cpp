// draw_guard.cpp -- name (and survive) a model shape the renderer cannot draw.
//
// The per-shape draw 0x60434AE8 (called once per shape by 0x60435320) walks a
// chain of per-shape tables built when the model was set up, and dereferences
// each link without a check. Converted Wii U models faulted at address 0 in it
// (ledger F0232-F0234) with nothing in the log to say which model, which shape,
// or which link was null.
//
// This hook checks every link the function reads, in the order it reads them
// (offsets from its decompile, decompiled/src/misc/60434AE8_sub_60434AE8.c):
//
//   s = *a3                                     shape index
//   *(obj+0x48) + 56*s       -> *it             ShapeObj -> ResShape (FSHP: +0x5E material,
//                                               +0x60 bone, +0x66 skin count, +0x20 meshes)
//   *(obj+0x2C), *(obj+0x30)                    bone / material visibility bit sets
//   *(obj+0x1B8) -> +0x10 -> [3016*s] +0x10, +0x14   shader program, texture/sampler table
//   *(obj+0xE4) + 28*s (if s < *(obj+0xE0)) -> +0x04, +0x14, +0x18   block locations
//   *(obj+0x44) (skinned shapes)                skeleton matrix buffer
//
// The first null link is logged once per (model, shape) with the model's name
// (ResModel at obj+0, an FMDL) and the shape's name, and only that shape's draw
// is skipped -- the model draws without it, and the level keeps running.
//
// Deluxe (Switch) v1.0.0 only.

#include "modbase/log.h"

namespace ModBase { namespace drawGuard { int drawShape_orig(u8* obj, u8* ctx, u8* entry, u8* drawCtx); } }

namespace {

inline u32 rd(const u8* p, u32 off) { return *(const u32*)(p + off); }

// A Switch BFRES string: u16 length then the characters. Pointers in a
// relocated ResFile are u64; the low word is the address on this 32-bit build.
const char* resName(u32 block, char* out, u32 cap)
{
    out[0] = 0;
    if (!block)
        return out;
    const u8* s = (const u8*)rd((const u8*)block, 0x10);
    if (!s)
        return out;
    u32 n = *(const u16*)s;
    if (n >= cap)
        n = cap - 1;
    for (u32 i = 0; i < n; i++)
        out[i] = (char)s[2 + i];
    out[n] = 0;
    return out;
}

struct Seen { u32 obj; u32 shape; };
Seen sSeen[16];
u32 sNumSeen;

bool firstTime(u32 obj, u32 shape)
{
    for (u32 i = 0; i < sNumSeen; i++)
        if (sSeen[i].obj == obj && sSeen[i].shape == shape)
            return false;
    if (sNumSeen < 16)
        sSeen[sNumSeen++] = { obj, shape };
    return true;
}

// The first null link, or nullptr if the shape is drawable.
const char* brokenLink(const u8* obj, u32 s, u32* resShapeOut)
{
    *resShapeOut = 0;
    u32 shapes = rd(obj, 0x48);
    if (!shapes)
        return "shape array (obj+0x48)";
    u32 resShape = rd((const u8*)(shapes + 56 * s), 0);
    *resShapeOut = resShape;
    if (!resShape)
        return "ResShape (shape array entry)";
    if (!rd((const u8*)resShape, 0x20))
        return "mesh array (ResShape+0x20)";
    u32 boneVis = rd(obj, 0x2C), matVis = rd(obj, 0x30);
    if (!boneVis || !matVis)
        return "visibility bit set (obj+0x2C/0x30)";
    // The draw returns early for a hidden shape (material bit, then bone bit): nothing to check.
    u32 mat = *(const u16*)(resShape + 0x5E), bone = *(const u16*)(resShape + 0x60);
    if (!(rd((const u8*)matVis, 4 * (mat >> 5)) & (1u << (mat & 31))) ||
        !(rd((const u8*)boneVis, 4 * (bone >> 5)) & (1u << (bone & 31))))
        return nullptr;
    u32 sel = rd(obj, 0x1B8);
    if (!sel)
        return "shader selector (obj+0x1B8)";
    u32 selArr = rd((const u8*)sel, 0x10);
    if (!selArr)
        return "shader selector array (+0x10)";
    const u8* selEntry = (const u8*)(selArr + 3016 * s);
    if (!rd(selEntry, 0x10))
        return "shader program (selector entry +0x10)";
    // Read only when the shape's material binding has textures (obj+0xF4 entry +0x70).
    u32 texBase = rd(obj, 0xF4) + (rd(obj, 0xF0) > s ? 120 * s : 0);
    if (texBase && rd((const u8*)texBase, 0x70) && !rd(selEntry, 0x14))
        return "texture/sampler table (selector entry +0x14)";
    u32 blocks = rd(obj, 0xE4);
    if (blocks && rd(obj, 0xE0) > s) {
        const u8* blk = (const u8*)(blocks + 28 * s);
        if (!rd(blk, 0x04))
            return "shader block table (+0x04)";
        if (!rd(blk, 0x14))
            return "shader block location (+0x14)";
        if (!rd(blk, 0x18))
            return "shader block location (+0x18)";
    }
    if (*((const u8*)resShape + 0x66) && !rd(obj, 0x44))
        return "skeleton matrix buffer (obj+0x44, skinned shape)";
    return nullptr;
}

} // namespace

namespace ModBase { namespace drawGuard { int drawShape(u8* obj, u8* ctx, u8* entry, u8* drawCtx); } }
int ModBase::drawGuard::drawShape(u8* obj, u8* ctx, u8* entry, u8* drawCtx)
{
    if (!obj || !entry)
        return ModBase::drawGuard::drawShape_orig(obj, ctx, entry, drawCtx);
    u32 s = rd(entry, 0);
    u32 resShape;
    const char* bad = brokenLink(obj, s, &resShape);
    if (!bad)
        return ModBase::drawGuard::drawShape_orig(obj, ctx, entry, drawCtx);

    if (firstTime((u32)obj, s)) {
        char model[48], shape[48];
        resName(rd(obj, 0), model, sizeof(model));
        resName(resShape, shape, sizeof(shape));
        ModBase::log("draw guard: model '", model, "' shape ", s, " '", shape, "': null ", bad,
                     "; not drawing it");
    }
    return 0;
}
