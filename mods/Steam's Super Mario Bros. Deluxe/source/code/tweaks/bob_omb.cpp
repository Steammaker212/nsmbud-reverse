#include "actors/enemy.h"

class BobOmb : public Enemy     // actually inherits CarryableEnemy
{
public:
    void decideFirstStateCustom();
    void checkColliderAddTimer();

    u8 _unk189C[0x18DC-0x189C];
    u16 flags;                  // 18DC
    u8 _unk18DE[0x1928-0x18DE];
    u32 type;                   // 1928
    u8 _unk192C[0x1938-0x192C];
    u32 fuseTimer;              // 1938
    u8 _unk193C[0x1BA0-0x193C];

    DECLARE_STATE(BobOmb, Kicked);

    static const u16 fuseTimes[8];


    // Game API: generated from symbols/ (addresses there); types are ABI-exact.
public:
    BobOmb() = default;  // keeps the implicit default constructor
    BobOmb(void*);  // 0x0025cebc C1/C2
    void* create();  // 0x0025a014 [hook]
    void setupModel();  // 0x0025d3c8 [hook]
    s32 decideFirstState();  // 0x0025d528 [hook]
    s32 onCreate_helper();  // 0x0025d704 [hook]
    void vf65(s32, s32);  // 0x0025e45c [hook]
    void* vf156(s32);  // 0x0025e718 [hook]
    s32 vf158(s32);  // 0x0025e874 [hook]
    s32 vf94(s32);  // 0x0025e91c [hook]
    s32 vf159(s32, s32);  // 0x0025e9ec [hook]
    s32 vf67(s32, void*);  // 0x0025ec94 [hook]
    s32 vf73(s32, s32);  // 0x0025ee10 [hook]
    s32 vf74(s32, s32);  // 0x0025ef5c [hook]
    s32 vf79(s32, s32);  // 0x0025efc4 [hook]
    s32 vf82(s32, s32);  // 0x0025f188 [hook]
    s32 vf80(s32, s32);  // 0x0025f29c [hook]
    s32 vf71();  // 0x0025f32c [hook]
    s32 vf64(void*, s32);  // 0x0025f338 [hook]
    s32 vf55();  // 0x0025f7b8 [hook]
    s32 vf32();  // 0x0025f7d8 [hook]
    s32 vf162(s32, s32);  // 0x0025f9bc [hook]
    s32 vf168();  // 0x002602e8 [hook]
    s32 vf169();  // 0x00260428 [hook]
    s32 vf165();  // 0x00260684 [hook]
    u32 vf167();  // 0x00260724 [hook]
    s32 vf166();  // 0x0026074c [hook]
    s32 vf171();  // 0x00260844 [hook]
    s32 vf173();  // 0x00260964 [hook]
    s32 vf172();  // 0x0026097c [hook]
    s32 vf153();  // 0x00260c10 [hook]
    s32 vf155();  // 0x00260c28 [hook]
    s32 vf114();  // 0x00260c50 [hook]
    s32 vf26();  // 0x00260c84 [hook]
    s32 vf27(void*);  // 0x00260cd0 [hook]
    s32 vf28(void*);  // 0x00260cfc [hook]
    s32 vf30(void*);  // 0x00260d28 [hook]
    s32 vf174(s32, void*);  // 0x00260d54 [hook]
    bool vf46(f32);  // 0x00261000 [hook]
    s32 vf49();  // 0x00261020 [hook]
    s32 vf163();  // 0x002610e4 [hook]
    bool vf0(void*);  // 0x00261114 [hook]
    void* vf1();  // 0x0026128c [hook]
    void vf3();  // 0x00261300 [hook]
    s32 onDelete_helper();  // 0x00271e38 [hook]
};

const u16 BobOmb::fuseTimes[8] = { 240, 180, 120, 90, 60, 45, 30, 15 };


void BobOmb::decideFirstStateCustom()
{
    if (type == 7)
    {
        if ((settings2 >> 8) & 0xFF)
            removeActiveColliders();

        flags |= 4; // Mark as ignited, Todo: start red flashing
        fuseTimer = fuseTimes[(settings2 >> 4) & 0xF];
        direction = settings2 & 1;
        doStateChange(&StateID_Kicked);
    }
}

void BobOmb::checkColliderAddTimer()
{
    u32 collisionAddTimer = (settings2 >> 8) & 0xFF;

    if (collisionAddTimer > 0)
    {
        if (--collisionAddTimer == 0)
        {
            addActiveColliders();
            settings2 &= 0xFFFF00FF;
        }
        else
            settings2 = (settings2 & 0xFFFF00FF) | (collisionAddTimer << 8);
    }
}
