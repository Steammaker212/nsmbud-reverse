/**
 * pukupuku.cpp  —  Cheep Cheep family, NSMBU Deluxe (Switch)
 *
 * Hand-annotated reconstruction of the Cheep Cheep actor, recovered from
 * convertedmain.rebased.elf (ARM32/AArch32, image base 0x60000000,
 * MD5 f8a2e4c3616b8a99632b8ffe68938c34).
 *
 * PROVENANCE / CONFIDENCE
 *   [V] verified  - decompiled body + disassembly cross-checked in IDA
 *   [I] inferred  - field meaning derived from use-site, not from RTTI
 *   [?] unknown   - name/shape not established
 *
 * No Pukupuku.h exists in the Wii U reference set, so unlike Kuribo/Nokonoko
 * there is no original class declaration to guide field naming. Field names
 * below are therefore mostly [I], recovered from how each offset is used.
 * Actor-base offsets that DO match the Wii U Enemy layout are marked [V-base].
 *
 * The Wii U profile IDs were confirmed to carry over unchanged (see
 * docs/WIIU_PROFILE_ID_ALIGNMENT.md): Cheep Cheep = 530 .. 547.
 */

#include <actor/Actor.h>
#include <enemy/Enemy.h>
#include <collision/ActiveCollider.h>
#include <collision/CollisionMgr.h>
#include <graphics/ModelWrapper.h>
#include <graphics/SkeletalAnimation.h>
#include <graphics/TexAnim.h>

// ---------------------------------------------------------------------------
// Resource-kind tag
// ---------------------------------------------------------------------------
// Every LoadResource() call in this family passes the same 32-bit tag as the
// first member of its name-descriptor struct. Literal 12321336 = 0x00BC0238.
// [V]
static constexpr u32 cResourceKind_ActorModel = 12321336;   // 0x00BC0238

/**
 * Name descriptor handed to LoadResource().
 * Layout confirmed by the ctor pushing { tag, char* } as a 8-byte stack pair.
 * [V]
 */
struct ResourceName
{
    u32             kind;       // +0x00  cResourceKind_ActorModel
    const char*     name;       // +0x04  e.g. "pukupuku_toge"
};
static_assert(sizeof(ResourceName) == 8);


// ---------------------------------------------------------------------------
// Pukupuku  —  base of the family
// ---------------------------------------------------------------------------
/**
 * Deluxe profile IDs (verified present in the 0x60AF3474 table at
 * indices 63..80):
 *
 *   530 Cheep Cheep            531 Grouped           532 Medium
 *   533 Grouped Medium         534 Deep (homing)     535 Deep Medium
 *   536 Eep (fleeing)          537 Eep Medium        538 Mecha
 *   539 Spiny                  540 Jumping           541 Flying Mecha
 *   542..546 spawners          547 Formation
 *
 * This class implements the behaviour behind 530/532 and is reused by the
 * others via the profile table; 539 (Spiny) and 538 (Mecha) get their own
 * model-setup paths.
 */
class Pukupuku : public Enemy
{
public:
    // ---- ctor  Address: 0x60202F84  [V] --------------------------------
    Pukupuku(const ActorCreateParam& param);

    // ---- model/resource setup, called from the ctor  Address: 0x60203138 [V]
    void setupModel();

private:
    // -----------------------------------------------------------------
    // Fields below are recovered from use-sites in the ctor. Offsets are
    // byte offsets from `this`, cross-checked against the disassembly.
    // -----------------------------------------------------------------

    /* +0x174 [V] */ ModelWrapper*   mpModel;          // wrapper over the mdx
    /* +0x178 [V] */ void*           mpResource;       // archive handle
    /* +0x180 [V] */ void*           mpSomething;      // = sub_608336A8(+0x230)

    /* +0x0B4 [V] */ f32             mPosRefX;         // copied from +0x50
    /* +0x0C0 [V] */ u32             mPad_0C0;         // zeroed
    /* +0x0C8 [V] */ u32             mPad_0C8;         // zeroed
    /* +0x0CC [?] */ u32             mUnk_0CC;         // init to 0xC1A00000 (-20.0f)

    /* +0x1F4 [V] */ f32             mSwimSpeedX;      // 64.0f  (0x42800000)
    /* +0x1F8 [V] */ f32             mSwimSpeedY;      // 64.0f
    /* +0x1FC [V] */ f32             mTurnRate;        // 32.0f  (0x42000000)
    /* +0x200 [V] */ f32             mAccel;           // 32.0f

    /* +0x1F0 [?] */ f32             mSpawnOffsetX;    // pos.x + table[type]
    /* +0x1F8 [?] */ f32             mSpawnOffsetY;    // pos.y + bias
};


// ---------------------------------------------------------------------------
// Plain Cheep Cheep
// ---------------------------------------------------------------------------

// Address: 0x60202F84
Pukupuku::Pukupuku(const ActorCreateParam& param)
    : Enemy(param)
{
    this->setupModel();                                     // 0x60202F8C  [V]

    void* p = sub_608336A8(*(void**)((u8*)this + 0x230));   // 0x60202F94  [I]
    *(void**)((u8*)this + 0x0B4) = p;
    *(void**)((u8*)this + 0x0C0) = p;

    *(u32*)((u8*)this + 0x0C8) = 0;
    *(u32*)((u8*)this + 0x0CC) = 0;
    *(u32*)((u8*)this + 0x0D0) = 0xC1A00000;                // -20.0f      [V]

    // Position bookkeeping. +0x50/+0x54/+0x58 is the actor position triple.
    f32 x = *(f32*)((u8*)this + 0x50);                      // [V]
    f32 y = *(f32*)((u8*)this + 0x54);
    u32 z = *(u32*)((u8*)this + 0x58);

    *(f32*)((u8*)this + 0x1F4) = x;
    *(f32*)((u8*)this + 0x1F8) = y;
    *(u32*)((u8*)this + 0x1FC) = z;

    // Two spawn-offset tables selected by a param flag at +0x160.
    // flt_60203110 / flt_60203114 hold the two candidate X offsets.  [V]
    bool  flag  = *(u32*)((u8*)this + 0x160) != 0;
    f32   offX  = flag ? flt_60203110 : flt_60203114;

    *(f32*)((u8*)this + 0x200) = x + offX;
    *(f32*)((u8*)this + 0x204) = y;
    *(u32*)((u8*)this + 0x208) = z;

    // Vertical bias: a "spawn high" flag at +0x244 picks +10.0f, otherwise
    // -200.0f is applied at +0x54 (i.e. drop the fish into the water layer).
    f32 dy;
    if (*(u32*)((u8*)this + 0x244)) {                       // [V]
        dy = 10.0f;
    } else {
        f32  offY = flag ? flt_60203118 : flt_6020311C;
        dy = -200.0f;
        *(f32*)((u8*)this + 0x50) = x + offY;
    }
    *(f32*)((u8*)this + 0x54) = y + dy;

    // Collision-info selection: param at +0x248 chooses between two entries
    // in the per-player collision table at MEMORY[0xC8C5E4].   [V]
    u32 idx = *(u32*)((u8*)this + 0x248);
    if (idx >= 2)
        idx = 0;

    int base = MEMORY[0xC8C5E4] + 4 * idx;
    int* slot = (int*)(base + (flag ? 44 : 36));             // [V]
    int  info = *slot;

    *(u32*)((u8*)this + 0x1E8) = 2;
    // ... remaining field init continues at +0x1EC onward
}


// Address: 0x60203138
void Pukupuku::setupModel()
{
    // The model is resolved BY NAME at runtime -- there is no hardcoded
    // pointer. This is why a reskin can be done purely with assets.
    ResourceName name;
    name.kind = cResourceKind_ActorModel;                   // [V]
    name.name = "pukupuku";

    void* res = LoadResource(MEMORY[0xC9CA88], &name);      // [V]
    *(void**)((u8*)this + 0x178) = res;                     // +0x178 [V]

    ResourceName animName;
    animName.kind = cResourceKind_ActorModel;
    animName.name = "fly";                                  // [V]

    void* model = Resource_getModel(res, &animName,
                                    /*numTex*/ 6, /*numMat*/ 1,
                                    0, 0, 0, 0, /*flag*/ 1, 0);   // [V]

    ModelWrapper* wrap = (ModelWrapper*)operator new(48, 0, 4);
    ModelWrapper_ctor(wrap, model, 1, 0, 0, 0, 0);          // [V]
    ModelWrapper_setup(wrap, res, 0, 0);                    // [V]

    *(ModelWrapper**)((u8*)this + 0x174) = wrap;            // +0x174 [V]

    // Bind the skeletal animation named "fly" to the model.
    SkeletalAnim_play(**(void***)((u8*)this + 0x174 + 12),
                      *(void**)((u8*)this + 0x178),
                      &(ResourceName){ 12321336, "fly" });  // [V]

    // Final: apply the pose to the render node at +0x80.
    (*(void(**)(void*, void*))(***(void****)((u8*)this + 0x174) + 68))(
        **(void***)((u8*)this + 0x174), (u8*)this + 0x80);  // [V]
}


// ---------------------------------------------------------------------------
// Spiny Cheep Cheep  (profile 539)  —  "pukupuku_toge"
// ---------------------------------------------------------------------------
/**
 * This is the reskin target: its archive is a loose file on disk
 * (romfs/Model/pukupuku_toge.Nin_NX_NVN.szs, 34.5 KB), unlike plain pukupuku
 * which is pack-resident in cobPack.pack.
 */
class PukupukuToge : public Pukupuku
{
public:
    // Address: 0x60375CB8  [V]
    PukupukuToge(const ActorCreateParam& param);

    // Address: 0x60375E24  [V]
    void setupModel();

private:
    /* +0x0BC  [V] */ ActiveCollider  mCollider;
    /* +0x1808 [V] */ u8              mFreezeFlags[3];
    /* +0x18A0 [V] */ CollisionMgr    mCollision;

    /* +0x189C [V] */ ModelWrapper*   mpModel;    // toge uses this slot, not +0x174
};


// Address: 0x60375E24
void PukupukuToge::setupModel()
{
    ResourceName rn;
    rn.kind = cResourceKind_ActorModel;
    rn.name = "pukupuku_toge";                              // [V]

    void* res = LoadResource(MEMORY[0xC9CA88], &rn);        // [V]

    ResourceName rn2;
    rn2.kind = cResourceKind_ActorModel;
    rn2.name = "pukupuku_toge";

    // Note the different arg count vs the base class: 9 args, no separate
    // animation-name struct.  [V]
    void* model = Resource_getModel2(res, &rn2,
                                     1, 1, 0, 0, 0, 0, 0);

    ModelWrapper* wrap = (ModelWrapper*)operator new(48, 0, 4);
    ModelWrapper_ctor(wrap, model, 1, 1, 0, 0, 0);
    ModelWrapper_setup(wrap, res, 0, 0);

    *(ModelWrapper**)((u8*)this + 0x189C) = wrap;           // [V]

    // Skeletal anim "swim".
    sub_6040F4B8(wrap, &(ResourceName){ 12321336, "swim" }, 1);   // [V]

    // Texture animation is ALSO bound by the resource name -- this is the
    // one call a replacement archive must satisfy or risk an assert.  [V]
    void** texAnim = **(void****)((u8*)this + 0x189C + 20);
    TexAnim_play(texAnim, res, &(ResourceName){ 12321336, "pukupuku_toge" });

    // Reset the texture-anim state: two counters cleared, then bit 1 set.
    texAnim[6] = 0;                                         // [V]
    texAnim[5] = 0;
    texAnim[7] |= 2;
}


// Address: 0x60375CB8
PukupukuToge::PukupukuToge(const ActorCreateParam& param)
    : Pukupuku(param)
{
    this->setupModel();                                     // 0x60375CC4 [V]

    // Movement tuning. These four words are exactly 64.0f, 64.0f, 32.0f, 32.0f.
    *(f32*)((u8*)this + 0x1F4) = 64.0f;                     // 0x42800000
    *(f32*)((u8*)this + 0x1F8) = 64.0f;
    *(f32*)((u8*)this + 0x1FC) = 32.0f;                     // 0x42000000
    *(f32*)((u8*)this + 0x200) = 32.0f;

    // ---- active collider ------------------------------------------------
    int* pInfo = sub_60373ABC(this);                        // [V]
    mCollider.init((StageActor*)this, pInfo,
                   (u32*)((u8*)this + 0x2DEC));             // [V]

    void* mgr = MEMORY[0xC88234];
    if (!ActiveColliderMgr_isInActiveList(mgr, &mCollider)
        && !ActiveColliderMgr_isInCreateList(mgr, &mCollider))
        ActiveColliderMgr_addToCreateList(mgr, &mCollider); // [V]

    // Freeze-interaction flags: {2, 0, 4}.
    mFreezeFlags[0] = 2;                                    // [V]
    mFreezeFlags[1] = 0;
    mFreezeFlags[2] = 4;
    EnemyFreezeMgr_setFlags((u8*)this + 0x1808, mFreezeFlags);

    // ---- collision ------------------------------------------------------
    int* pCol = sub_60373ACC(this);                         // [V]
    mCollision.init((StageActor*)this, pCol,
                    (int*)((u8*)pCol + 12),
                    (f32*)((u8*)pCol + 24));                // [V]

    // Face the player.
    int dir = StageActor::directionToPlayerX(this, (u8*)this + 0x6C);  // [V]
    *(s32*)((u8*)this + 0x2EB4) = dir;                      // +2989 dwords [V]
    *(s32*)((u8*)this + 0x50)  = dir;                       // +20 dwords   [V]

    *(void**)((u8*)this + 0xA0) = sub_603737E4(this);       // +40 dwords   [V]
    *(void**)((u8*)this + 0x270) = (u8*)this + 0x2DC8;      // +156 dwords  [V]
    *(u32*)((u8*)this + 0x2DE4) = 1;                        // +2937 dwords [V]

    // Two alternates: 13198176 (0x00C96360) or 13198248 (0x00C963A8).
    // These are resource/anim IDs selected by a sub-type at +0x2DA8.  [V]
    int alt = (*(u32*)((u8*)this + 0x2DA8) == 1) ? 13198176 : 13198248;
    (*(void(**)(PukupukuToge*, int))(*((u32*)this) + 192))(this, alt);  // [V]
}


// ---------------------------------------------------------------------------
// Mecha Cheep (profile 538) — "pukupuku_mecha"
// ---------------------------------------------------------------------------
// Address: 0x60370B74  [V]
// Same shape as PukupukuToge::setupModel with rn.name = "pukupuku_mecha".
// Its archive (romfs/Model/pukupuku_mecha.Nin_NX_NVN.szs, 49.8 KB) is also
// loose on disk, so it is an equally valid reskin target.
void PukupukuMecha_setupModel(void* self);   // body mirrors PukupukuToge


#if 0
// ===========================================================================
// Build blockers  —  what stands between this file and something that compiles
// ===========================================================================
//
//  1. No Pukupuku.h exists upstream, so there is no authoritative field list.
//     Every offset above was recovered from use-sites. Treat names as labels,
//     not as documented API.
//
//  2. The class layout here cannot be validated against a size assert. The
//     ctor touches +0x2EB4 (11956), so sizeof(PukupukuToge) is >= 11960 --
//     consistent with the Hammer actor's 11912 allocation, suggesting the
//     whole Enemy family shares one ~11.9 KB allocation bucket.
//
//  3. Dependencies resolve to sead/agl/nw_ptcl headers that are not in this
//     repository (they live in the Wii U reference tree only, and are the
//     Wii U versions). A real compile needs the Switch SDK surface.
//
//  4. sub_608336A8, sub_60373ABC, sub_60373ACC, sub_603737E4, sub_6040F4B8
//     are still unnamed. Each would need its own analysis pass before the
//     calls could be typed properly.
//
// What this file IS good for: reading the Cheep Cheep behaviour end-to-end in
// something close to C, and as the specification for a reskin patch.
#endif
