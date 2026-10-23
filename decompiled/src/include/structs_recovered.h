/* structs_recovered.h -- layouts rebuilt from Hex-Rays field offsets.
 *
 * Every member offset here is the offset the decompiler printed, so the
 * layout is measured rather than assumed. Gap padding is explicit.
 * Types with no observed member access are not defined.
 */
#ifndef NSMBUDX_STRUCTS_RECOVERED_H
#define NSMBUDX_STRUCTS_RECOVERED_H

#ifndef NSMBUDX_LAYOUT_ACTIVECOLLIDER
#define NSMBUDX_LAYOUT_ACTIVECOLLIDER
typedef struct ActiveCollider {
    unsigned char field_0[4];
    unsigned char _pad_4[64];
    unsigned char field_44[4];
    unsigned char _pad_48[4];
    unsigned char field_4C[4];
    unsigned char field_50[4];
    unsigned char field_54[4];
    unsigned char field_58[4];
    unsigned char field_5C[4];
    unsigned char field_60[4];
    unsigned char field_64[4];
    unsigned char field_68[4];
    unsigned char field_6C[4];
    unsigned char field_6D[4];
    unsigned char field_6E[4];
    unsigned char field_70[4];
    unsigned char _pad_74[60];
    unsigned char field_B0[4];
} ActiveCollider;
#endif

#ifndef NSMBUDX_LAYOUT_ACTIVECOLLIDERINFO
#define NSMBUDX_LAYOUT_ACTIVECOLLIDERINFO
typedef struct ActiveColliderInfo {
    unsigned char _pad_0[16];
    unsigned char field_10[4];
    unsigned char field_14[4];
} ActiveColliderInfo;
#endif

#ifndef NSMBUDX_LAYOUT_ACTIVECOLLIDERMGR
#define NSMBUDX_LAYOUT_ACTIVECOLLIDERMGR
typedef struct ActiveColliderMgr {
    unsigned char field_0[4];
} ActiveColliderMgr;
#endif

#ifndef NSMBUDX_LAYOUT_ACTOR
#define NSMBUDX_LAYOUT_ACTOR
typedef struct Actor {
    unsigned char _pad_0[16];
    unsigned char field_10[4];
    unsigned char field_11[4];
    unsigned char field_12[4];
    unsigned char _pad_16[10];
    unsigned char field_20[4];
    unsigned char _pad_24[8];
    unsigned char field_2C[4];
    unsigned char field_30[4];
    unsigned char field_34[4];
    unsigned char _pad_38[4];
    unsigned char field_3C[4];
    unsigned char field_40[4];
    unsigned char field_44[4];
    unsigned char field_48[4];
    unsigned char field_4C[4];
} Actor;
#endif

#ifndef NSMBUDX_LAYOUT_ACTORBUILDINFO
#define NSMBUDX_LAYOUT_ACTORBUILDINFO
typedef struct ActorBuildInfo {
    unsigned char _pad_0[28];
    unsigned char field_1C[4];
    unsigned char field_20[4];
    unsigned char _pad_24[4];
    unsigned char field_28[4];
} ActorBuildInfo;
#endif

#ifndef NSMBUDX_LAYOUT_ACTORINFO
#define NSMBUDX_LAYOUT_ACTORINFO
typedef struct ActorInfo {
    unsigned char field_0[4];
    unsigned char _pad_4[4];
    unsigned char field_8[4];
    unsigned char field_C[4];
    unsigned char field_10[4];
    unsigned char field_14[4];
    unsigned char field_18[4];
    unsigned char field_1A[4];
    unsigned char field_1C[4];
    unsigned char field_1E[4];
    unsigned char field_20[4];
} ActorInfo;
#endif

#ifndef NSMBUDX_LAYOUT_ACTORSCALER
#define NSMBUDX_LAYOUT_ACTORSCALER
typedef struct ActorScaler {
    unsigned char _pad_0[16];
    unsigned char field_10[4];
    unsigned char field_14[4];
    unsigned char field_18[4];
} ActorScaler;
#endif

#ifndef NSMBUDX_LAYOUT_AMP
#define NSMBUDX_LAYOUT_AMP
typedef struct Amp {
    unsigned char field_0[4];
    unsigned char _pad_4[6420];
    unsigned char field_1918[4];
    unsigned char field_191C[4];
    unsigned char field_1920[4];
    unsigned char _pad_1924[32];
    unsigned char field_1944[4];
    unsigned char _pad_1948[108];
    unsigned char field_19B4[4];
    unsigned char _pad_19B8[300];
    unsigned char field_1AE4[4];
    unsigned char field_1AE8[4];
    unsigned char field_1AEC[4];
    unsigned char field_1AF0[4];
    unsigned char field_1AF4[4];
    unsigned char field_1AF8[4];
    unsigned char field_1AFC[4];
    unsigned char field_1B00[4];
    unsigned char field_1B04[4];
    unsigned char field_1B08[4];
    unsigned char field_1B0C[4];
} Amp;
#endif

#ifndef NSMBUDX_LAYOUT_BOSSBASE
#define NSMBUDX_LAYOUT_BOSSBASE
typedef struct BossBase {
    unsigned char field_0[4];
    unsigned char _pad_4[6296];
    unsigned char field_189C[4];
    unsigned char field_18A0[4];
    unsigned char field_18A4[4];
    unsigned char _pad_18A8[4];
    unsigned char field_18AC[4];
    unsigned char field_18B0[4];
    unsigned char field_18B4[4];
    unsigned char field_18B8[4];
    unsigned char _pad_18BC[308];
    unsigned char field_19F0[4];
    unsigned char _pad_19F4[380];
    unsigned char field_1B70[4];
} BossBase;
#endif

#ifndef NSMBUDX_LAYOUT_BULLETBILLTEMP
#define NSMBUDX_LAYOUT_BULLETBILLTEMP
typedef struct BulletBillTemp {
    unsigned char field_0[4];
    unsigned char _pad_4[6296];
    unsigned char field_189C[4];
} BulletBillTemp;
#endif

#ifndef NSMBUDX_LAYOUT_CARRYABLEENEMY
#define NSMBUDX_LAYOUT_CARRYABLEENEMY
typedef struct CarryableEnemy {
    unsigned char field_0[4];
    unsigned char _pad_4[6296];
    unsigned char field_189C[4];
    unsigned char _pad_18A0[40];
    unsigned char field_18C8[4];
    unsigned char field_18CC[4];
} CarryableEnemy;
#endif

#ifndef NSMBUDX_LAYOUT_CIRCULARCOLLIDER
#define NSMBUDX_LAYOUT_CIRCULARCOLLIDER
typedef struct CircularCollider {
    unsigned char field_0[4];
} CircularCollider;
#endif

#ifndef NSMBUDX_LAYOUT_COLLIDERBASE
#define NSMBUDX_LAYOUT_COLLIDERBASE
typedef struct ColliderBase {
    unsigned char field_0[4];
    unsigned char _pad_4[108];
    unsigned char field_70[4];
    unsigned char field_74[4];
    unsigned char field_78[4];
    unsigned char field_7C[4];
    unsigned char field_80[4];
    unsigned char _pad_84[8];
    unsigned char field_8C[4];
    unsigned char _pad_90[4];
    unsigned char field_94[4];
    unsigned char _pad_98[36];
    unsigned char field_BC[4];
    unsigned char field_C0[4];
    unsigned char _pad_C4[24];
    unsigned char field_DC[4];
    unsigned char field_E0[4];
    unsigned char field_E4[4];
    unsigned char field_E8[4];
    unsigned char field_EC[4];
    unsigned char field_F0[4];
    unsigned char _pad_F4[4];
    unsigned char field_F8[4];
    unsigned char field_FC[4];
    unsigned char field_100[4];
    unsigned char field_104[4];
    unsigned char field_108[4];
    unsigned char field_10C[4];
    unsigned char field_110[4];
    unsigned char field_114[4];
    unsigned char field_118[4];
    unsigned char field_11C[4];
    unsigned char field_120[4];
    unsigned char field_124[4];
    unsigned char _pad_128[8];
    unsigned char field_130[4];
    unsigned char field_134[4];
} ColliderBase;
#endif

#ifndef NSMBUDX_LAYOUT_COLLIDERMGR
#define NSMBUDX_LAYOUT_COLLIDERMGR
typedef struct ColliderMgr {
    unsigned char field_0[4];
} ColliderMgr;
#endif

#ifndef NSMBUDX_LAYOUT_COLLIDERNODE
#define NSMBUDX_LAYOUT_COLLIDERNODE
typedef struct ColliderNode {
    unsigned char field_0[4];
    unsigned char field_4[4];
    unsigned char _pad_8[12];
    unsigned char field_14[4];
    unsigned char field_18[4];
    unsigned char field_1C[4];
} ColliderNode;
#endif

#ifndef NSMBUDX_LAYOUT_COLLIDERNODEUNK1
#define NSMBUDX_LAYOUT_COLLIDERNODEUNK1
typedef struct ColliderNodeUnk1 {
    unsigned char field_0[4];
    unsigned char field_4[4];
    unsigned char field_8[4];
    unsigned char field_C[4];
} ColliderNodeUnk1;
#endif

#ifndef NSMBUDX_LAYOUT_COLLISIONACTOR
#define NSMBUDX_LAYOUT_COLLISIONACTOR
typedef struct CollisionActor {
    unsigned char field_0[4];
    unsigned char _pad_4[5996];
    unsigned char field_1770[4];
    unsigned char field_1774[4];
    unsigned char field_1778[4];
    unsigned char field_177C[4];
    unsigned char field_1780[4];
    unsigned char field_1784[4];
    unsigned char field_1788[4];
    unsigned char field_178C[4];
    unsigned char field_1790[4];
    unsigned char field_1794[4];
    unsigned char field_1798[4];
    unsigned char field_179C[4];
    unsigned char field_17A0[4];
    unsigned char field_17A4[4];
    unsigned char field_17A5[4];
    unsigned char field_17A6[4];
    unsigned char field_17A7[4];
    unsigned char field_17A8[4];
    unsigned char field_17AC[4];
} CollisionActor;
#endif

#ifndef NSMBUDX_LAYOUT_COLLISIONMGR
#define NSMBUDX_LAYOUT_COLLISIONMGR
typedef struct CollisionMgr {
    unsigned char _pad_0[2560];
    unsigned char field_A00[4];
    unsigned char _pad_A04[23];
    unsigned char field_A1B[4];
} CollisionMgr;
#endif

#ifndef NSMBUDX_LAYOUT_COOLIGANSUNGLASSES
#define NSMBUDX_LAYOUT_COOLIGANSUNGLASSES
typedef struct CooliganSunglasses {
    unsigned char field_0[4];
    unsigned char _pad_4[644];
    unsigned char field_288[4];
    unsigned char field_28C[4];
    unsigned char _pad_290[4];
    unsigned char field_294[4];
    unsigned char field_298[4];
    unsigned char field_29C[4];
    unsigned char _pad_2A0[4];
    unsigned char field_2A4[4];
    unsigned char field_2A8[4];
    unsigned char field_2AC[4];
    unsigned char _pad_2B0[4];
    unsigned char field_2B4[4];
    unsigned char field_2B8[4];
    unsigned char field_2BC[4];
    unsigned char _pad_2C0[4];
    unsigned char field_2C4[4];
    unsigned char _pad_2C8[4];
    unsigned char field_2CC[4];
    unsigned char _pad_2D0[4];
    unsigned char field_2D4[4];
    unsigned char _pad_2D8[4];
    unsigned char field_2DC[4];
    unsigned char _pad_2E0[4];
    unsigned char field_2E4[4];
} CooliganSunglasses;
#endif

#ifndef NSMBUDX_LAYOUT_EFFECTDATA
#define NSMBUDX_LAYOUT_EFFECTDATA
typedef struct EffectData {
    unsigned char _pad_0[48];
    unsigned char field_30[4];
    unsigned char field_34[4];
    unsigned char field_38[4];
    unsigned char field_3C[4];
} EffectData;
#endif

#ifndef NSMBUDX_LAYOUT_EFFECTWRAPPER
#define NSMBUDX_LAYOUT_EFFECTWRAPPER
typedef struct EffectWrapper {
    unsigned char field_0[4];
    unsigned char _pad_4[76];
    unsigned char field_50[4];
    unsigned char field_54[4];
    unsigned char field_58[4];
    unsigned char field_5C[4];
    unsigned char _pad_60[4];
    unsigned char field_64[4];
} EffectWrapper;
#endif

#ifndef NSMBUDX_LAYOUT_ENEMY
#define NSMBUDX_LAYOUT_ENEMY
typedef struct Enemy {
    unsigned char field_0[4];
    unsigned char _pad_4[6100];
    unsigned char field_17D8[4];
    unsigned char field_17DC[4];
    unsigned char field_17E0[4];
    unsigned char field_17E4[4];
    unsigned char field_17E8[4];
    unsigned char field_17EC[4];
    unsigned char field_17F0[4];
    unsigned char field_17F4[4];
    unsigned char field_17F8[4];
    unsigned char field_17FC[4];
    unsigned char field_17FE[4];
    unsigned char field_1800[4];
    unsigned char field_1802[4];
    unsigned char field_1804[4];
    unsigned char _pad_1808[80];
    unsigned char field_1858[4];
    unsigned char _pad_185C[12];
    unsigned char field_1868[4];
    unsigned char _pad_186C[8];
    unsigned char field_1874[4];
    unsigned char field_1878[4];
    unsigned char field_187C[4];
    unsigned char field_1880[4];
    unsigned char field_1884[4];
    unsigned char field_1888[4];
    unsigned char field_188C[4];
    unsigned char field_1890[4];
    unsigned char field_1894[4];
    unsigned char field_1898[4];
    unsigned char field_1899[4];
    unsigned char field_189A[4];
} Enemy;
#endif

#ifndef NSMBUDX_LAYOUT_ENEMYFREEZEMGR
#define NSMBUDX_LAYOUT_ENEMYFREEZEMGR
typedef struct EnemyFreezeMgr {
    unsigned char _pad_0[52];
    unsigned char field_34[4];
    unsigned char field_35[4];
    unsigned char field_36[4];
    unsigned char field_38[4];
    unsigned char _pad_3C[4];
    unsigned char field_40[4];
    unsigned char field_42[4];
    unsigned char field_44[4];
    unsigned char field_46[4];
    unsigned char field_48[4];
    unsigned char field_49[4];
    unsigned char field_4A[4];
    unsigned char field_4B[4];
    unsigned char field_4C[4];
} EnemyFreezeMgr;
#endif

#ifndef NSMBUDX_LAYOUT_ENEMYFREEZEMGR_FLAGS
#define NSMBUDX_LAYOUT_ENEMYFREEZEMGR_FLAGS
typedef struct EnemyFreezeMgr_Flags {
    unsigned char field_0[4];
    unsigned char field_1[4];
    unsigned char field_2[4];
} EnemyFreezeMgr_Flags;
#endif

#ifndef NSMBUDX_LAYOUT_FIREBALLBASE
#define NSMBUDX_LAYOUT_FIREBALLBASE
typedef struct FireballBase {
    unsigned char field_0[4];
    unsigned char _pad_4[6136];
    unsigned char field_17FC[4];
    unsigned char field_1800[4];
    unsigned char _pad_1804[8];
    unsigned char field_180C[4];
    unsigned char field_1810[4];
    unsigned char _pad_1814[16];
    unsigned char field_1824[4];
    unsigned char _pad_1828[24];
    unsigned char field_1840[4];
    unsigned char field_1844[4];
    unsigned char field_1848[4];
    unsigned char field_184C[4];
    unsigned char _pad_1850[4];
    unsigned char field_1854[4];
    unsigned char field_1858[4];
    unsigned char field_185C[4];
    unsigned char field_1860[4];
    unsigned char field_1864[4];
    unsigned char field_1868[4];
    unsigned char field_186C[4];
    unsigned char field_1870[4];
    unsigned char _pad_1874[176];
    unsigned char field_1924[4];
    unsigned char _pad_1928[300];
    unsigned char field_1A54[4];
    unsigned char field_1A58[4];
    unsigned char field_1A5C[4];
    unsigned char field_1A60[4];
    unsigned char field_1A64[4];
} FireballBase;
#endif

#ifndef NSMBUDX_LAYOUT_FIXEDICICLE
#define NSMBUDX_LAYOUT_FIXEDICICLE
typedef struct FixedIcicle {
    unsigned char field_0[4];
    unsigned char _pad_4[6296];
    unsigned char field_189C[4];
    unsigned char _pad_18A0[308];
    unsigned char field_19D4[4];
} FixedIcicle;
#endif

#ifndef NSMBUDX_LAYOUT_LIGHTSOURCE
#define NSMBUDX_LAYOUT_LIGHTSOURCE
typedef struct LightSource {
    unsigned char field_0[4];
    unsigned char _pad_4[12];
    unsigned char field_10[4];
    unsigned char field_14[4];
    unsigned char _pad_18[12];
    unsigned char field_24[4];
    unsigned char _pad_28[4];
    unsigned char field_2C[4];
    unsigned char field_30[4];
    unsigned char field_34[4];
    unsigned char field_38[4];
    unsigned char field_3C[4];
    unsigned char field_40[4];
    unsigned char field_44[4];
} LightSource;
#endif

#ifndef NSMBUDX_LAYOUT_LINEFOLLOWER
#define NSMBUDX_LAYOUT_LINEFOLLOWER
typedef struct LineFollower {
    unsigned char _pad_0[36];
    unsigned char field_24[4];
} LineFollower;
#endif

#ifndef NSMBUDX_LAYOUT_MODELANIMATION
#define NSMBUDX_LAYOUT_MODELANIMATION
typedef struct ModelAnimation {
    unsigned char field_0[4];
    unsigned char field_4[4];
    unsigned char _pad_8[8];
    unsigned char field_10[4];
    unsigned char field_14[4];
    unsigned char field_18[4];
} ModelAnimation;
#endif

#ifndef NSMBUDX_LAYOUT_MOVEMENTHANDLER
#define NSMBUDX_LAYOUT_MOVEMENTHANDLER
typedef struct MovementHandler {
    unsigned char _pad_0[12];
    unsigned char field_C[4];
    unsigned char _pad_10[8];
    unsigned char field_18[4];
    unsigned char field_1C[4];
    unsigned char field_20[4];
    unsigned char field_24[4];
    unsigned char field_28[4];
    unsigned char field_2C[4];
    unsigned char field_30[4];
    unsigned char field_34[4];
    unsigned char field_38[4];
    unsigned char field_3C[4];
    unsigned char field_40[4];
    unsigned char field_44[4];
    unsigned char _pad_48[8];
    unsigned char field_50[4];
    unsigned char field_54[4];
    unsigned char field_58[4];
    unsigned char field_5C[4];
    unsigned char _pad_60[8];
    unsigned char field_68[4];
    unsigned char field_6C[4];
    unsigned char field_70[4];
    unsigned char field_74[4];
    unsigned char field_78[4];
    unsigned char field_7C[4];
    unsigned char field_80[4];
    unsigned char field_84[4];
    unsigned char field_85[4];
    unsigned char field_86[4];
    unsigned char field_87[4];
    unsigned char field_89[4];
    unsigned char field_8C[4];
    unsigned char _pad_90[12];
    unsigned char field_9C[4];
    unsigned char field_A0[4];
    unsigned char field_A4[4];
    unsigned char field_A8[4];
    unsigned char field_AC[4];
    unsigned char field_B0[4];
    unsigned char field_B4[4];
    unsigned char field_B8[4];
    unsigned char field_BC[4];
    unsigned char field_C0[4];
    unsigned char _pad_C4[12];
    unsigned char field_D0[4];
} MovementHandler;
#endif

#ifndef NSMBUDX_LAYOUT_MOVINGSOUNDACTOR
#define NSMBUDX_LAYOUT_MOVINGSOUNDACTOR
typedef struct MovingSoundActor {
    unsigned char field_0[4];
    unsigned char _pad_4[136];
    unsigned char field_8C[4];
    unsigned char field_90[4];
    unsigned char field_94[4];
    unsigned char field_98[4];
    unsigned char _pad_9C[144];
    unsigned char field_12C[4];
} MovingSoundActor;
#endif

#ifndef NSMBUDX_LAYOUT_MULTISTATEACTOR
#define NSMBUDX_LAYOUT_MULTISTATEACTOR
typedef struct MultiStateActor {
    unsigned char field_0[4];
    unsigned char _pad_4[6096];
    unsigned char field_17D4[4];
} MultiStateActor;
#endif

#ifndef NSMBUDX_LAYOUT_PLAYERLOOKTARGET
#define NSMBUDX_LAYOUT_PLAYERLOOKTARGET
typedef struct PlayerLookTarget {
    unsigned char field_0[4];
    unsigned char _pad_4[24];
    unsigned char field_1C[4];
    unsigned char field_20[4];
    unsigned char field_24[4];
    unsigned char field_28[4];
} PlayerLookTarget;
#endif

#ifndef NSMBUDX_LAYOUT_RECTCOLLIDER
#define NSMBUDX_LAYOUT_RECTCOLLIDER
typedef struct RectCollider {
    unsigned char field_0[4];
    unsigned char _pad_4[360];
    unsigned char field_16C[4];
    unsigned char field_170[4];
    unsigned char field_174[4];
    unsigned char field_178[4];
    unsigned char field_17C[4];
    unsigned char field_180[4];
    unsigned char field_184[4];
    unsigned char field_188[4];
} RectCollider;
#endif

#ifndef NSMBUDX_LAYOUT_REVEALMASKRELATED
#define NSMBUDX_LAYOUT_REVEALMASKRELATED
typedef struct RevealMaskRelated {
    unsigned char _pad_0[4];
    unsigned char field_4[4];
    unsigned char field_8[4];
    unsigned char _pad_C[12];
    unsigned char field_18[4];
    unsigned char field_1C[4];
    unsigned char _pad_20[4];
    unsigned char field_24[4];
} RevealMaskRelated;
#endif

#ifndef NSMBUDX_LAYOUT_ROLLINGHILL
#define NSMBUDX_LAYOUT_ROLLINGHILL
typedef struct RollingHill {
    unsigned char field_0[4];
    unsigned char _pad_4[1048];
    unsigned char field_41C[4];
    unsigned char field_420[4];
    unsigned char field_424[4];
    unsigned char field_428[4];
    unsigned char _pad_42C[12];
    unsigned char field_438[4];
} RollingHill;
#endif

#ifndef NSMBUDX_LAYOUT_SEAWEED
#define NSMBUDX_LAYOUT_SEAWEED
typedef struct Seaweed {
    unsigned char field_0[4];
} Seaweed;
#endif

#ifndef NSMBUDX_LAYOUT_SHAPEDCOLLIDER
#define NSMBUDX_LAYOUT_SHAPEDCOLLIDER
typedef struct ShapedCollider {
    unsigned char field_0[4];
    unsigned char _pad_4[340];
    unsigned char field_158[4];
    unsigned char field_15C[4];
    unsigned char field_160[4];
    unsigned char field_164[4];
    unsigned char field_168[4];
} ShapedCollider;
#endif

#ifndef NSMBUDX_LAYOUT_SHAPEDCOLLIDERINFO
#define NSMBUDX_LAYOUT_SHAPEDCOLLIDERINFO
typedef struct ShapedColliderInfo {
    unsigned char _pad_0[8];
    unsigned char field_8[4];
    unsigned char field_C[4];
} ShapedColliderInfo;
#endif

#ifndef NSMBUDX_LAYOUT_SOLIDONTOPCOLLIDER
#define NSMBUDX_LAYOUT_SOLIDONTOPCOLLIDER
typedef struct SolidOnTopCollider {
    unsigned char field_0[4];
    unsigned char _pad_4[340];
    unsigned char field_158[4];
    unsigned char field_15C[4];
    unsigned char field_160[4];
    unsigned char field_164[4];
    unsigned char field_168[4];
    unsigned char field_16C[4];
} SolidOnTopCollider;
#endif

#ifndef NSMBUDX_LAYOUT_SOUNDACTOR
#define NSMBUDX_LAYOUT_SOUNDACTOR
typedef struct SoundActor {
    unsigned char field_0[4];
    unsigned char _pad_4[120];
    unsigned char field_7C[4];
    unsigned char field_80[4];
    unsigned char field_84[4];
    unsigned char field_88[4];
} SoundActor;
#endif

#ifndef NSMBUDX_LAYOUT_STAGEACTOR
#define NSMBUDX_LAYOUT_STAGEACTOR
typedef struct StageActor {
    unsigned char field_0[4];
    unsigned char _pad_4[82];
    unsigned char field_56[4];
    unsigned char field_57[4];
    unsigned char field_58[4];
    unsigned char field_5C[4];
    unsigned char field_60[4];
    unsigned char field_64[4];
    unsigned char _pad_68[64];
    unsigned char field_A8[4];
    unsigned char field_AC[4];
    unsigned char field_B0[4];
    unsigned char field_B4[4];
    unsigned char field_B8[4];
    unsigned char _pad_BC[304];
    unsigned char field_1EC[4];
    unsigned char field_1F0[4];
    unsigned char field_1F4[4];
    unsigned char field_1F8[4];
    unsigned char field_1FC[4];
    unsigned char field_200[4];
    unsigned char field_204[4];
    unsigned char field_208[4];
    unsigned char field_20C[4];
    unsigned char field_210[4];
    unsigned char _pad_214[2];
    unsigned char field_216[4];
    unsigned char field_217[4];
    unsigned char field_218[4];
    unsigned char field_219[4];
    unsigned char field_21A[4];
    unsigned char field_21E[4];
    unsigned char field_220[4];
    unsigned char field_224[4];
    unsigned char field_228[4];
    unsigned char field_22C[4];
    unsigned char field_230[4];
    unsigned char field_234[4];
    unsigned char _pad_238[16];
    unsigned char field_248[4];
    unsigned char _pad_24C[8];
    unsigned char field_254[4];
    unsigned char _pad_258[8];
    unsigned char field_260[4];
    unsigned char _pad_264[8];
    unsigned char field_26C[4];
    unsigned char field_270[4];
    unsigned char field_274[4];
    unsigned char field_278[4];
    unsigned char field_27C[4];
    unsigned char field_280[4];
} StageActor;
#endif

#ifndef NSMBUDX_LAYOUT_STARCOIN
#define NSMBUDX_LAYOUT_STARCOIN
typedef struct StarCoin {
    unsigned char field_0[4];
    unsigned char _pad_4[6184];
    unsigned char field_182C[4];
    unsigned char field_1830[4];
    unsigned char field_1834[4];
} StarCoin;
#endif

#ifndef NSMBUDX_LAYOUT_STARCOINBASE
#define NSMBUDX_LAYOUT_STARCOINBASE
typedef struct StarCoinBase {
    unsigned char field_0[4];
    unsigned char _pad_4[6104];
    unsigned char field_17DC[4];
    unsigned char _pad_17E0[52];
    unsigned char field_1814[4];
    unsigned char field_1815[4];
    unsigned char field_1818[4];
    unsigned char field_181C[4];
    unsigned char field_1820[4];
    unsigned char field_1824[4];
    unsigned char field_1828[4];
} StarCoinBase;
#endif

#ifndef NSMBUDX_LAYOUT_STATE
#define NSMBUDX_LAYOUT_STATE
typedef struct State {
    unsigned char field_0[4];
} State;
#endif

#ifndef NSMBUDX_LAYOUT_STATEACTOR
#define NSMBUDX_LAYOUT_STATEACTOR
typedef struct StateActor {
    unsigned char field_0[4];
} StateActor;
#endif

#ifndef NSMBUDX_LAYOUT_STATEVIRTUAL
#define NSMBUDX_LAYOUT_STATEVIRTUAL
typedef struct StateVirtual {
    unsigned char field_0[4];
} StateVirtual;
#endif

#ifndef NSMBUDX_LAYOUT_TILECHECK
#define NSMBUDX_LAYOUT_TILECHECK
typedef struct TileCheck {
    unsigned char field_0[4];
    unsigned char field_1[4];
    unsigned char field_2[4];
    unsigned char field_3[4];
    unsigned char field_4[4];
    unsigned char field_8[4];
    unsigned char field_C[4];
    unsigned char field_10[4];
    unsigned char field_14[4];
    unsigned char field_18[4];
    unsigned char field_1C[4];
    unsigned char field_20[4];
    unsigned char _pad_24[36];
    unsigned char field_48[4];
} TileCheck;
#endif

#ifndef NSMBUDX_LAYOUT_TILECHECK_PARAM
#define NSMBUDX_LAYOUT_TILECHECK_PARAM
typedef struct TileCheck_Param {
    unsigned char field_0[4];
    unsigned char field_1[4];
    unsigned char field_2[4];
    unsigned char field_3[4];
    unsigned char field_4[4];
    unsigned char field_8[4];
} TileCheck_Param;
#endif

#ifndef NSMBUDX_LAYOUT_USERINFO
#define NSMBUDX_LAYOUT_USERINFO
typedef struct UserInfo {
    unsigned char field_0[4];
    unsigned char _pad_4[12];
    unsigned char field_10[4];
} UserInfo;
#endif

#ifndef NSMBUDX_LAYOUT_SEAD_IDISPOSER
#define NSMBUDX_LAYOUT_SEAD_IDISPOSER
typedef struct sead_IDisposer {
    unsigned char _pad_0[8];
    unsigned char field_8[4];
    unsigned char field_C[4];
} sead_IDisposer;
#endif

#endif /* NSMBUDX_STRUCTS_RECOVERED_H */