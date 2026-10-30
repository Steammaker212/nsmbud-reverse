// weather.cpp -- Rain (sprite 781) and Falling Leaves (sprite 782): screen-wide particles drawn
// with the 2D particle drawer the Snow Effect (sprite 198) uses.
//
// Deluxe has no rain or leaf particles, so these run their own particles and hand each one to
// the drawer as a textured quad, the way the snow does (RE'd from the snow actor, profile 792):
//   - 0x60448C14 loads a texture of an archive's output.bfres into a texture object (built by
//     0x6091FD58). The snow keeps its textures in TileMgr (+0x9DB0 = wmy_bgsnow.1), loaded once
//     per level behind the flag at +0x9DA8; Rain shares them the same way.
//   - The drawer (*0x60C9CEF0) has 12 slots. The snow configures slot 0 (0x6044B798): layer
//     (-1, 22) with 0x60450C78, blend 0x60450CBC(7, 7, 7, 1, 2) and a 0x68-byte state from
//     0x6090B350 with 0x60450C98. Both sprites configure slot 0 identically, so they draw like
//     the snow and coexist with it; the slot drops quads past its capacity (0x604504CC).
//   - 0x60450A48(drawer, vertices, 4, texture, slot) queues one quad. A vertex is 34 floats:
//     [0..2] position (level units; z +6500 draws in front, -6500 behind, as the snow does),
//     [6..7] UV, [10..12] colour 2 RGB and [13] its unscaled byte (retail 255), [14..17] colour 1
//     RGBA (0..1). Corners go round the quad (UV 00, 10, 11, 01), as in 0x6044B880.
//   - The camera (0x60CC6484) gives the view: +0x70 left, +0x68 width, +0x7C top, +0x6C height,
//     as the snow's spawn and cull read them.
//
// Falling Leaves draws texture wmy_bgsnow.1 of its own archive env_leaf (romfs/Model/
// env_leaf.Nin_NX_NVN.szs): env_snow with that texture replaced by a white leaf, tinted per leaf.
//
// Settings, Rain (781):
//   nybbles 5-6  drops (0 = 220, at most 300)      nybble 9   length (0 = 14, else n * 3)
//   nybble 7     tilt (0 = 12 degrees, else n * 4)  nybble 10  1 = behind the level
//   nybble 8     speed (0 = 10, else n * 1.5)       nybbles 13-20 colour R, G, B, A (all 0 =
//                                                   pale blue-grey, alpha 150)
// Settings, Falling Leaves (782):
//   nybbles 5-6  leaves (0 = 36, at most 150)       nybble 9   wind (0 = a light breeze to the
//   nybble 7     fall speed (0 = 0.7, else n * 0.2)            right, else (n - 8) * 0.15)
//   nybble 8     size (0 = 10, else n * 2)          nybble 10  1 = behind the level
//                                                   nybble 11  colours: 0 autumn (red, orange,
//                                                              yellow), 1 green

#include "actors/stageactor.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "nintendo/sead/random.h"
#include "nintendo/sead/safestring.h"
#include "util/math.h"

namespace ModBase { namespace weather {
extern u8* drawer;
extern u8* tileMgr;
extern u8* camera;
void constructTexture(void* texture);
void loadTexture(const sead::SafeString* archive, const sead::SafeString* texture, void* out, u32* resFile, int unused);
void setSlotLayer(void* drawer, int layer, int priority, u32 slot);
void setSlotBlend(void* drawer, int a, int b, int c, int d, int e, u32 slot);
void setSlotState(void* drawer, const void* state, u32 slot);
void initState(void* state);
void drawQuad(void* drawer, f32* vertices, int count, void* texture, u32 slot);
} }

namespace {

using namespace ModBase::weather;

const u32 cSlot = 0;                // the snow's slot
const u32 cVertexFloats = 34;

f32 frand() { return randF32(); }                       // [0, 1)
f32 frand(f32 lo, f32 hi) { return lo + randF32() * (hi - lo); }

struct View { f32 left, right, top, bottom; };

bool getView(View& v)
{
    if (!camera)
        return false;
    v.left = *(f32*)(camera + 0x70);
    v.right = v.left + *(f32*)(camera + 0x68);
    v.top = *(f32*)(camera + 0x7C);
    v.bottom = v.top - *(f32*)(camera + 0x6C);
    return true;
}

// Slot 0 as the snow sets it up (0x6044B798).
void setupSlot()
{
    if (!drawer)
        return;
    setSlotLayer(drawer, -1, 22, cSlot);
    setSlotBlend(drawer, 7, 7, 7, 1, 2, cSlot);
    u32 state[0x80 / 4];
    initState(state);
    u8* s = (u8*)state;
    state[1] |= 1;
    s[0x29] = 5;
    s[0x2B] = 6;
    *(u16*)s = 1;
    *(u16*)(s + 0x58) = 260;
    setSlotState(drawer, state, cSlot);
}

// One quad centred on (x, y): `ax` / `ay` is its long axis (half length), `bx` / `by` its short
// axis (half width). Colour bytes are 0-255.
void queueQuad(void* texture, f32 x, f32 y, f32 z, f32 ax, f32 ay, f32 bx, f32 by,
               u8 r, u8 g, u8 b, u8 a)
{
    f32 v[4 * cVertexFloats];
    static const f32 cCornerA[4] = { -1.0f, -1.0f, 1.0f, 1.0f };
    static const f32 cCornerB[4] = { -1.0f, 1.0f, 1.0f, -1.0f };
    static const f32 cU[4] = { 0.0f, 1.0f, 1.0f, 0.0f };
    static const f32 cV[4] = { 0.0f, 0.0f, 1.0f, 1.0f };
    f32 fr = r / 255.0f, fg = g / 255.0f, fb = b / 255.0f, fa = a / 255.0f;
    for (u32 i = 0; i < 4; i++) {
        f32* p = v + i * cVertexFloats;
        p[0] = x + ax * cCornerA[i] + bx * cCornerB[i];
        p[1] = y + ay * cCornerA[i] + by * cCornerB[i];
        p[2] = z;
        p[6] = cU[i];
        p[7] = cV[i];
        p[10] = fr; p[11] = fg; p[12] = fb; p[13] = 255.0f;
        p[14] = fr; p[15] = fg; p[16] = fb; p[17] = fa;
    }
    drawQuad(drawer, v, 4, texture, cSlot);
}

// ---- Rain -------------------------------------------------------------------------------------

class Rain : public StageActor
{
public:
    Rain(const ActorBuildInfo* b) : StageActor(b) { }
    static Actor* build(const ActorBuildInfo* b) { return new Rain(b); }

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    static const u32 cMax = 300;
    struct Drop { f32 x, y, speed; };
    Drop drops[cMax];
    u32 count;
    f32 dirX, dirY;         // unit fall direction
    f32 speed, halfLength, z;
    u8 colour[4];
    void* texture;
    bool started;
};

const Profile rainProfile(&Rain::build, ProfileId::Rain, "Rain", nullptr, 0);
PROFILE_RESOURCES(ProfileId::Rain, "env_snow");

u32 Rain::onCreate()
{
    u32 n = settings1 >> 24 & 0xFF;                         // nybbles 5-6
    count = n ? (n > cMax ? cMax : n) : 220;
    u32 tilt = settings1 >> 20 & 0xF;                       // nybble 7
    f32 angle = (tilt ? tilt * 4.0f : 12.0f) * (f32)M_PI / 180.0f;
    dirX = sin(angle);
    dirY = -cos(angle);
    u32 sp = settings1 >> 16 & 0xF;                         // nybble 8
    speed = sp ? sp * 1.5f : 10.0f;
    u32 len = settings1 >> 12 & 0xF;                        // nybble 9
    halfLength = (len ? len * 3.0f : 14.0f) * 0.5f;
    z = (settings1 >> 8 & 0xF) == 1 ? -6499.0f : 6501.0f;   // nybble 10
    if (settings2) {                                        // nybbles 13-20
        colour[0] = settings2 >> 24; colour[1] = settings2 >> 16;
        colour[2] = settings2 >> 8;  colour[3] = settings2;
    } else {
        colour[0] = 170; colour[1] = 190; colour[2] = 220; colour[3] = 150;
    }

    if (!tileMgr || !drawer)
        return 2;
    if (!tileMgr[0x9DA8]) {                                 // as the snow's onCreate
        tileMgr[0x9DA8] = 1;
        u32 res;
        sead::SafeString arc("env_snow");
        sead::SafeString t1("wmy_bgsnow.1"), t0("wmy_bgsnow.0"), t2("wmy_bgsnow.2");
        loadTexture(&arc, &t1, tileMgr + 0x9DB0, &res, 0);
        loadTexture(&arc, &t0, tileMgr + 0x9EC0, &res, 0);
        loadTexture(&arc, &t2, tileMgr + 0x9FD0, &res, 0);
    }
    texture = tileMgr + 0x9DB0;
    setupSlot();
    started = false;
    return 1;
}

u32 Rain::onExecute()
{
    View v;
    if (!getView(v))
        return 1;
    const f32 pad = 48.0f;
    f32 w = v.right - v.left + pad * 2.0f;
    if (!started) {
        started = true;
        for (u32 i = 0; i < count; i++) {
            drops[i].x = frand(v.left - pad, v.right + pad);
            drops[i].y = frand(v.bottom - pad, v.top + pad);
            drops[i].speed = speed * frand(0.8f, 1.2f);
        }
    }
    for (u32 i = 0; i < count; i++) {
        Drop& d = drops[i];
        d.x += dirX * d.speed;
        d.y += dirY * d.speed;
        if (d.y < v.bottom - pad) {
            d.y = v.top + frand(0.0f, pad);
            d.x = frand(v.left - pad, v.right + pad);
        }
        if (d.x < v.left - pad)
            d.x += w;
        else if (d.x > v.right + pad)
            d.x -= w;
    }
    return 1;
}

u32 Rain::onDraw()
{
    if (!started)
        return 1;
    // Long axis along the fall direction, 0.7 units wide.
    f32 ax = dirX * halfLength, ay = dirY * halfLength;
    f32 bx = -dirY * 0.7f, by = dirX * 0.7f;
    for (u32 i = 0; i < count; i++)
        queueQuad(texture, drops[i].x, drops[i].y, z, ax, ay, bx, by,
                  colour[0], colour[1], colour[2], colour[3]);
    return 1;
}

// ---- Falling Leaves ---------------------------------------------------------------------------

class FallingLeaves : public StageActor
{
public:
    FallingLeaves(const ActorBuildInfo* b) : StageActor(b) { }
    static Actor* build(const ActorBuildInfo* b) { return new FallingLeaves(b); }

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    static const u32 cMax = 150;
    struct Leaf { f32 x, y, fall, phase, phaseSpeed, sway, angle, spin, size; u8 colour; };
    Leaf leaves[cMax];
    u32 count;
    f32 fallSpeed, size, wind, z;
    u8 palette;
    bool started, loaded;
    u32 resFile;
    alignas(8) u8 texture[0x110];

    void spawn(Leaf& l, const View& v, bool anywhere);
};

const Profile leavesProfile(&FallingLeaves::build, ProfileId::FallingLeaves, "FallingLeaves", nullptr, 0);
PROFILE_RESOURCES(ProfileId::FallingLeaves, "env_leaf");

const u8 cPalettes[2][3][3] = {
    { { 214, 48, 32 }, { 240, 128, 28 }, { 246, 200, 52 } },   // autumn: red, orange, yellow
    { { 70, 150, 50 }, { 110, 180, 60 }, { 150, 200, 80 } },   // green
};

u32 FallingLeaves::onCreate()
{
    u32 n = settings1 >> 24 & 0xFF;                         // nybbles 5-6
    count = n ? (n > cMax ? cMax : n) : 36;
    u32 sp = settings1 >> 20 & 0xF;                         // nybble 7
    fallSpeed = sp ? sp * 0.2f : 0.7f;
    u32 sz = settings1 >> 16 & 0xF;                         // nybble 8
    size = sz ? sz * 2.0f : 10.0f;
    u32 wd = settings1 >> 12 & 0xF;                         // nybble 9
    wind = wd ? ((s32)wd - 8) * 0.15f : 0.3f;
    z = (settings1 >> 8 & 0xF) == 1 ? -6499.0f : 6501.0f;   // nybble 10
    palette = (settings1 >> 4 & 0xF) == 1 ? 1 : 0;          // nybble 11

    if (!drawer)
        return 2;
    constructTexture(texture);
    sead::SafeString arc("env_leaf"), tex("wmy_bgsnow.1");
    loadTexture(&arc, &tex, texture, &resFile, 0);
    setupSlot();
    started = false;
    return 1;
}

void FallingLeaves::spawn(Leaf& l, const View& v, bool anywhere)
{
    const f32 pad = 32.0f;
    l.x = frand(v.left - pad, v.right + pad);
    l.y = anywhere ? frand(v.bottom - pad, v.top + pad) : v.top + frand(0.0f, pad);
    l.fall = fallSpeed * frand(0.7f, 1.3f);
    l.phase = frand(0.0f, 6.2831853f);
    l.phaseSpeed = frand(0.02f, 0.05f);
    l.sway = frand(0.4f, 1.1f);
    l.angle = frand(0.0f, 6.2831853f);
    l.spin = frand(-0.05f, 0.05f);
    l.size = size * frand(0.75f, 1.2f);
    l.colour = (u8)randU32(3);
}

u32 FallingLeaves::onExecute()
{
    View v;
    if (!getView(v))
        return 1;
    const f32 pad = 32.0f;
    if (!started) {
        started = true;
        for (u32 i = 0; i < count; i++)
            spawn(leaves[i], v, true);
    }
    f32 w = v.right - v.left + pad * 2.0f;
    for (u32 i = 0; i < count; i++) {
        Leaf& l = leaves[i];
        l.phase += l.phaseSpeed;
        f32 s = sin(l.phase);
        l.x += wind + s * l.sway;                   // drift side to side
        l.y -= l.fall * (0.75f + 0.25f * fabs(s));  // slower at the turns
        l.angle += l.spin + s * 0.02f;
        if (l.y < v.bottom - pad)
            spawn(l, v, false);
        if (l.x < v.left - pad)
            l.x += w;
        else if (l.x > v.right + pad)
            l.x -= w;
    }
    return 1;
}

u32 FallingLeaves::onDraw()
{
    if (!started)
        return 1;
    for (u32 i = 0; i < count; i++) {
        Leaf& l = leaves[i];
        f32 c = cos(l.angle), s = sin(l.angle);
        f32 h = l.size * 0.5f;
        // Flipping over: the short axis shrinks with the sway, so leaves seem to turn.
        f32 flip = 0.35f + 0.65f * fabs(cos(l.phase));
        const u8* rgb = cPalettes[palette][l.colour];
        queueQuad(texture, l.x, l.y, z, c * h, s * h, -s * h * flip, c * h * flip,
                  rgb[0], rgb[1], rgb[2], 255);
    }
    return 1;
}

} // namespace
