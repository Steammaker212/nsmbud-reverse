// Planned by scripts/ida/plan_types.py; applied to IDA by apply_types.py.

struct BanzaiBill
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0x10];
  _DWORD field_14;  // 0x14
  _DWORD field_18;  // 0x18
  _BYTE gap_1C[0x34];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x20];
  float field_74;  // 0x74
  _QWORD field_78;  // 0x78
  _BYTE gap_80[0x1C];
  _DWORD field_9C;  // 0x9C
  _DWORD field_A0;  // 0xA0
  _BYTE gap_A4[0x18];
  ActiveCollider activeCollider_BC;  // 0xBC
  float field_1EC;  // 0x1EC
  _DWORD field_1F0;  // 0x1F0
  _BYTE gap_1F4[0x15D0];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0x30];
  _DWORD field_1804;  // 0x1804
  _BYTE gap_1808[0x84];
  _DWORD field_188C;  // 0x188C
  _BYTE gap_1890[0xC];
  _BYTE field_189C;  // 0x189C
  _BYTE gap_189D[0x3];
  _DWORD field_18A0;  // 0x18A0
  _DWORD field_18A4;  // 0x18A4
  _DWORD field_18A8;  // 0x18A8
  _BYTE gap_18AC[0x1C];
  _WORD field_18C8;  // 0x18C8
  _BYTE gap_18CA[0xE];
  _DWORD field_18D8;  // 0x18D8
  _DWORD field_18DC;  // 0x18DC
  ActiveCollider activeCollider_18E0;  // 0x18E0
  _BYTE gap_1A10[0x4];
  ActiveCollider activeCollider_1A14;  // 0x1A14
  ActiveCollider activeCollider_1B44;  // 0x1B44
  _BYTE gap_1C74[0x10];
  _DWORD field_1C84;  // 0x1C84
  _BYTE gap_1C88[0x30];
  _DWORD field_1CB8;  // 0x1CB8
  _BYTE gap_1CBC[0x64];
  _DWORD field_1D20;  // 0x1D20
  _BYTE gap_1D24[0x64];
  LightSource lightSource_1D88;  // 0x1D88
  Vec3 vec3_1DD0;  // 0x1DD0
  _BYTE gap_1DDC[0x4];
  _DWORD field_1DE0;  // 0x1DE0
  _DWORD field_1DE4;  // 0x1DE4
  _BYTE gap_1DE8[0x1518];
  _DWORD field_3300;  // 0x3300
};

struct BigBoo
{
  _BYTE gap_0[0x14];
  _DWORD field_14;  // 0x14
  _BYTE gap_18[0x3E];
  _BYTE field_56;  // 0x56
  _BYTE gap_57[0x15];
  float field_6C;  // 0x6C
  float field_70;  // 0x70
  _BYTE gap_74[0x74];
  _DWORD field_E8;  // 0xE8
  _BYTE gap_EC[0x44];
  float field_130;  // 0x130
  float field_134;  // 0x134
  _BYTE gap_138[0x104];
  float field_23C;  // 0x23C
  float field_240;  // 0x240
  _BYTE gap_244[0x1580];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0xCC];
  _DWORD field_18A0;  // 0x18A0
  _BYTE gap_18A4[0x4];
  ActiveCollider activeCollider_18A8;  // 0x18A8
  Vec3 vec3_19D8;  // 0x19D8
  float field_19E4;  // 0x19E4
  float field_19E8;  // 0x19E8
  _BYTE gap_19EC[0x8];
  _DWORD field_19F4;  // 0x19F4
  _DWORD field_19F8;  // 0x19F8
  _DWORD field_19FC;  // 0x19FC
  _DWORD field_1A00;  // 0x1A00
  _BYTE gap_1A04[0x10];
  _WORD field_1A14;  // 0x1A14
  _BYTE gap_1A16[0x2];
  _DWORD field_1A18;  // 0x1A18
  _BYTE field_1A1C;  // 0x1A1C
  _BYTE gap_1A1D[0x3];
  _DWORD field_1A20;  // 0x1A20
  _BYTE gap_1A24[0x64];
  _DWORD field_1A88;  // 0x1A88
  _BYTE gap_1A8C[0x64];
  _DWORD field_1AF0;  // 0x1AF0
  _DWORD field_1AF4;  // 0x1AF4
  _BYTE gap_1AF8[0x50];
  float field_1B48;  // 0x1B48
  float field_1B4C;  // 0x1B4C
  _BYTE gap_1B50[0x10];
  LightSource lightSource_1B60;  // 0x1B60
  _BYTE field_1BA8;  // 0x1BA8
  _BYTE field_1BA9;  // 0x1BA9
  _BYTE gap_1BAA[0xE];
  ActorScaler actorScaler_1BB8;  // 0x1BB8
};

struct BlockCoinBase
{
  MultiStateActor base;  // 0x0, base class (first ctor call)
  _BYTE gap_17D8[0x10];
  ColliderBase colliderBase_17E8;  // 0x17E8
  _BYTE gap_193C[0x150];
  _DWORD field_1A8C;  // 0x1A8C
  _BYTE gap_1A90[0xC];
  _DWORD field_1A9C;  // 0x1A9C
  _BYTE gap_1AA0[0x21];
  _BYTE field_1AC1;  // 0x1AC1
  _BYTE field_1AC2;  // 0x1AC2
  _BYTE gap_1AC3[0x5];
  _DWORD field_1AC8;  // 0x1AC8
  _BYTE gap_1ACC[0x4];
  _DWORD field_1AD0;  // 0x1AD0
  _BYTE field_1AD4;  // 0x1AD4
  _BYTE gap_1AD5[0xA];
  _BYTE field_1ADF;  // 0x1ADF
  _DWORD field_1AE0;  // 0x1AE0
  _DWORD field_1AE4;  // 0x1AE4
  _DWORD field_1AE8;  // 0x1AE8
  _DWORD field_1AEC;  // 0x1AEC
  _BYTE gap_1AF0[0x4];
  _DWORD field_1AF4;  // 0x1AF4
  _BYTE gap_1AF8[0x38];
  _BYTE field_1B30;  // 0x1B30
  _BYTE gap_1B31[0x3];
  _DWORD field_1B34;  // 0x1B34
  _BYTE gap_1B38[0x8];
};

struct BobOmb
{
  CarryableEnemy base;  // 0x0, base class (first ctor call)
  _BYTE gap_18CE[0x2];
  _DWORD field_18D0;  // 0x18D0
  _BYTE gap_18D4[0x4];
  _DWORD field_18D8;  // 0x18D8
  _WORD field_18DC;  // 0x18DC
  _BYTE gap_18DE[0x4A];
  _DWORD field_1928;  // 0x1928
  _BYTE gap_192C[0xC];
  _DWORD field_1938;  // 0x1938
  _BYTE gap_193C[0x8];
  _BYTE field_1944;  // 0x1944
  _BYTE field_1945;  // 0x1945
  _BYTE gap_1946[0x12];
  _DWORD field_1958;  // 0x1958
  RevealMaskRelated revealMaskRelated_195C;  // 0x195C
  _BYTE gap_1984[0x48];
  _DWORD field_19CC;  // 0x19CC
  _BYTE gap_19D0[0x8C];
  _DWORD field_1A5C;  // 0x1A5C
  _DWORD field_1A60;  // 0x1A60
  ActiveCollider activeCollider_1A64;  // 0x1A64
  _BYTE field_1B94;  // 0x1B94
  _BYTE gap_1B95[0xB];
};

struct BooCircle
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0x4];
  _DWORD field_8;  // 0x8
  _BYTE gap_C[0x8];
  _DWORD field_14;  // 0x14
  _BYTE gap_18[0x4];
  _BYTE field_1C;  // 0x1C
  _BYTE gap_1D[0x39];
  _BYTE field_56;  // 0x56
  _BYTE gap_57[0x15];
  float field_6C;  // 0x6C
  float field_70;  // 0x70
  float field_74;  // 0x74
  _BYTE gap_78[0x174C];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0x16C];
  _DWORD field_1940;  // 0x1940
  _BYTE gap_1944[0x1C];
  _DWORD field_1960;  // 0x1960
};

struct BoomBoomBase
{
  BossBase base;  // 0x0, base class (first ctor call)
  _DWORD field_1BB4;  // 0x1BB4
  _DWORD field_1BB8;  // 0x1BB8
  _BYTE gap_1BBC[0x4];
  _DWORD field_1BC0;  // 0x1BC0
  float field_1BC4;  // 0x1BC4
  float field_1BC8;  // 0x1BC8
  _BYTE gap_1BCC[0x18];
  _DWORD field_1BE4;  // 0x1BE4
  _DWORD field_1BE8;  // 0x1BE8
  _BYTE gap_1BEC[0x38];
  _DWORD field_1C24;  // 0x1C24
  _BYTE gap_1C28[0x8];
  float field_1C30;  // 0x1C30
  float field_1C34;  // 0x1C34
  _BYTE gap_1C38[0x14];
  _DWORD field_1C4C;  // 0x1C4C
  _BYTE gap_1C50[0x4];
  EffectWrapper effectWrapper_1C54;  // 0x1C54
  _DWORD field_1CBC;  // 0x1CBC
  _BYTE gap_1CC0[0x64];
  EffectData effectData_1D24;  // 0x1D24
  _BYTE field_1D64;  // 0x1D64
  _BYTE gap_1D65[0x1A3];
};

struct BoomBoomW1
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0x4C];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x10];
  _DWORD field_64;  // 0x64
  _DWORD field_68;  // 0x68
  Vec3 vec3_6C;  // 0x6C
  float field_78;  // 0x78
  _DWORD field_7C;  // 0x7C
  _BYTE gap_80[0x4];
  _DWORD field_84;  // 0x84
  _DWORD field_88;  // 0x88
  _BYTE gap_8C[0xAAC];
  _BYTE field_B38;  // 0xB38
  _BYTE gap_B39[0xD4B];
  _WORD field_1884;  // 0x1884
  _BYTE gap_1886[0x39A];
  _DWORD field_1C20;  // 0x1C20
  _DWORD field_1C24;  // 0x1C24
  _DWORD field_1C28;  // 0x1C28
  _BYTE gap_1C2C[0x270];
  _DWORD field_1E9C;  // 0x1E9C
  _BYTE gap_1EA0[0xC];
  _DWORD field_1EAC;  // 0x1EAC
  float field_1EB0;  // 0x1EB0
  _BYTE gap_1EB4[0x40];
  float field_1EF4;  // 0x1EF4
  _BYTE gap_1EF8[0x18];
  _DWORD field_1F10;  // 0x1F10
  _DWORD field_1F14;  // 0x1F14
  _BYTE gap_1F18[0x1AD];
  _BYTE field_20C5;  // 0x20C5
};

struct BoomerangBro
{
  _BYTE gap_0[0x8];
  _DWORD field_8;  // 0x8
  _DWORD field_C;  // 0xC
  _BYTE gap_10[0x40];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x18];
  float field_6C;  // 0x6C
  float field_70;  // 0x70
  _BYTE gap_74[0x1838];
  float field_18AC;  // 0x18AC
  _BYTE gap_18B0[0xC];
  float field_18BC;  // 0x18BC
  _BYTE gap_18C0[0x1C];
  float field_18DC;  // 0x18DC
  _BYTE gap_18E0[0xC];
  float field_18EC;  // 0x18EC
  _BYTE gap_18F0[0xA4];
  _DWORD field_1994;  // 0x1994
  _BYTE gap_1998[0x38];
  _DWORD field_19D0;  // 0x19D0
  _BYTE gap_19D4[0x4];
  _DWORD field_19D8;  // 0x19D8
  _BYTE gap_19DC[0x1580];
  ActiveCollider activeCollider_2F5C;  // 0x2F5C
  _BYTE gap_308C[0x2C];
  _DWORD field_30B8;  // 0x30B8
};

struct Bowser
{
  BossBase base;  // 0x0, base class (first ctor call)
  _DWORD field_1BB4;  // 0x1BB4
  _DWORD field_1BB8;  // 0x1BB8
  _DWORD field_1BBC;  // 0x1BBC
  _BYTE gap_1BC0[0x4];
  _DWORD field_1BC4;  // 0x1BC4
  _BYTE gap_1BC8[0x4];
  _DWORD field_1BCC;  // 0x1BCC
  _DWORD field_1BD0;  // 0x1BD0
  _BYTE gap_1BD4[0x4];
  _DWORD field_1BD8;  // 0x1BD8
  _BYTE gap_1BDC[0x16];
  _BYTE field_1BF2;  // 0x1BF2
  _BYTE gap_1BF3[0x75];
  _DWORD field_1C68;  // 0x1C68
  _BYTE gap_1C6C[0x14];
  _DWORD field_1C80;  // 0x1C80
  _BYTE gap_1C84[0x64];
  _DWORD field_1CE8;  // 0x1CE8
  _BYTE gap_1CEC[0x14];
  _DWORD field_1D00;  // 0x1D00
  _BYTE gap_1D04[0x13C];
  float field_1E40;  // 0x1E40
  float field_1E44;  // 0x1E44
  float field_1E48;  // 0x1E48
  _DWORD field_1E4C;  // 0x1E4C
  _DWORD field_1E50;  // 0x1E50
  _BYTE gap_1E54[0x34];
  _DWORD field_1E88;  // 0x1E88
  _BYTE gap_1E8C[0x1A4];
  ActiveCollider activeCollider_2030;  // 0x2030
  ActiveCollider activeCollider_2160;  // 0x2160
  ActiveCollider activeCollider_2290;  // 0x2290
  ActiveCollider activeCollider_23C0;  // 0x23C0
  ActiveCollider activeCollider_24F0;  // 0x24F0
  _BYTE gap_2620[0x8];
};

struct BowserJrBase
{
  BossBase base;  // 0x0, base class (first ctor call)
  _BYTE gap_1BB4[0x4];
  _DWORD field_1BB8;  // 0x1BB8
  _BYTE gap_1BBC[0x4];
  _DWORD field_1BC0;  // 0x1BC0
  _BYTE gap_1BC4[0x3C];
  float field_1C00;  // 0x1C00
  _BYTE gap_1C04[0x48];
  _DWORD field_1C4C;  // 0x1C4C
  _BYTE gap_1C50[0x11];
  _BYTE field_1C61;  // 0x1C61
  _BYTE field_1C62;  // 0x1C62
  _BYTE gap_1C63[0x1];
  _DWORD field_1C64;  // 0x1C64
  _BYTE gap_1C68[0x64];
  _DWORD field_1CCC;  // 0x1CCC
  _BYTE gap_1CD0[0xE8];
};

struct BrickBlockHuge
{
  _BYTE gap_0[0x1B];
  _BYTE field_1B;  // 0x1B
  _BYTE gap_1C[0x3A];
  _BYTE field_56;  // 0x56
  _BYTE gap_57[0x15];
  _DWORD field_6C;  // 0x6C
  float field_70;  // 0x70
  _DWORD field_74;  // 0x74
  _BYTE gap_78[0x18];
  Vec3 vec3_90;  // 0x90
  _BYTE gap_9C[0x158];
  _DWORD field_1F4;  // 0x1F4
  _DWORD field_1F8;  // 0x1F8
  _DWORD field_1FC;  // 0x1FC
  _DWORD field_200;  // 0x200
  _DWORD field_204;  // 0x204
  _DWORD field_208;  // 0x208
  _DWORD field_20C;  // 0x20C
  _DWORD field_210;  // 0x210
  _BYTE gap_214[0x15B0];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0x14];
  ColliderBase colliderBase_17E8;  // 0x17E8
  _BYTE gap_193C[0x13C];
  _DWORD field_1A78;  // 0x1A78
  _DWORD field_1A7C;  // 0x1A7C
  _DWORD field_1A80;  // 0x1A80
  _DWORD field_1A84;  // 0x1A84
  _BYTE gap_1A88[0x4];
  float field_1A8C;  // 0x1A8C
  _BYTE gap_1A90[0x38];
  _DWORD field_1AC8;  // 0x1AC8
  _BYTE gap_1ACC[0x4];
  _DWORD field_1AD0;  // 0x1AD0
  _BYTE field_1AD4;  // 0x1AD4
  _BYTE gap_1AD5[0x7];
  _BYTE field_1ADC;  // 0x1ADC
  _BYTE gap_1ADD[0x5B];
  _DWORD field_1B38;  // 0x1B38
  _DWORD field_1B3C;  // 0x1B3C
  _DWORD field_1B40;  // 0x1B40
  _BYTE gap_1B44[0x4];
  float field_1B48;  // 0x1B48
  _BYTE gap_1B4C[0x124];
  _DWORD field_1C70;  // 0x1C70
  _DWORD field_1C74;  // 0x1C74
  _DWORD field_1C78;  // 0x1C78
  _BYTE gap_1C7C[0x4];
  _DWORD field_1C80;  // 0x1C80
  _BYTE gap_1C84[0x34];
  _DWORD field_1CB8;  // 0x1CB8
  _DWORD field_1CBC;  // 0x1CBC
  _DWORD field_1CC0;  // 0x1CC0
  _DWORD field_1CC4;  // 0x1CC4
  _DWORD field_1CC8;  // 0x1CC8
  _BYTE gap_1CCC[0x4];
  _BYTE field_1CD0;  // 0x1CD0
};

struct ChallengeResultScene
{
  _DWORD field_0;  // 0x0
  StateExecuter stateExecuter_4;  // 0x4
  StateMgr stateMgr_14;  // 0x14
  sead_IDisposer sead_IDisposer_24;  // 0x24
  _BYTE gap_34[0x190];
  _DWORD field_1C4;  // 0x1C4
  StateExecuter stateExecuter_1C8;  // 0x1C8
  StateMgr stateMgr_1D8;  // 0x1D8
  sead_IDisposer sead_IDisposer_1E8;  // 0x1E8
  _DWORD field_1F8;  // 0x1F8
  _DWORD field_1FC;  // 0x1FC
  _DWORD field_200;  // 0x200
  _DWORD field_204;  // 0x204
  _DWORD field_208;  // 0x208
  _DWORD field_20C;  // 0x20C
  _DWORD field_210;  // 0x210
  _DWORD field_214;  // 0x214
  _DWORD field_218;  // 0x218
  _BYTE gap_21C[0x10];
  sead_IDisposer sead_IDisposer_22C;  // 0x22C
  _DWORD field_23C;  // 0x23C
  _DWORD field_240;  // 0x240
  _DWORD field_244;  // 0x244
  _DWORD field_248;  // 0x248
  _DWORD field_24C;  // 0x24C
  _DWORD field_250;  // 0x250
  _DWORD field_254;  // 0x254
  _DWORD field_258;  // 0x258
  _DWORD field_25C;  // 0x25C
  _BYTE gap_260[0x10];
  sead_IDisposer sead_IDisposer_270;  // 0x270
  _DWORD field_280;  // 0x280
  _DWORD field_284;  // 0x284
  _DWORD field_288;  // 0x288
  _DWORD field_28C;  // 0x28C
  _DWORD field_290;  // 0x290
  _DWORD field_294;  // 0x294
  _DWORD field_298;  // 0x298
  _DWORD field_29C;  // 0x29C
  _DWORD field_2A0;  // 0x2A0
  _BYTE gap_2A4[0xB48];
  _DWORD field_DEC;  // 0xDEC
  _DWORD field_DF0;  // 0xDF0
  _DWORD field_DF4;  // 0xDF4
  _DWORD field_DF8;  // 0xDF8
  _BYTE field_DFC;  // 0xDFC
  _BYTE gap_DFD[0x3];
  _DWORD field_E00;  // 0xE00
  _DWORD field_E04;  // 0xE04
  _DWORD field_E08;  // 0xE08
  _DWORD field_E0C;  // 0xE0C
  _BYTE field_E10;  // 0xE10
  _BYTE gap_E11[0x3];
  _DWORD field_E14;  // 0xE14
  _DWORD field_E18;  // 0xE18
  _DWORD field_E1C;  // 0xE1C
  _DWORD field_E20;  // 0xE20
  _BYTE field_E24;  // 0xE24
  _BYTE gap_E25[0x3];
  _DWORD field_E28;  // 0xE28
  _DWORD field_E2C;  // 0xE2C
  _DWORD field_E30;  // 0xE30
  _DWORD field_E34;  // 0xE34
  _BYTE field_E38;  // 0xE38
  _BYTE gap_E39[0x3];
  _DWORD field_E3C;  // 0xE3C
  _DWORD field_E40;  // 0xE40
  _DWORD field_E44;  // 0xE44
  _DWORD field_E48;  // 0xE48
  _BYTE field_E4C;  // 0xE4C
  _BYTE gap_E4D[0x3];
  _DWORD field_E50;  // 0xE50
  _DWORD field_E54;  // 0xE54
  _DWORD field_E58;  // 0xE58
  _DWORD field_E5C;  // 0xE5C
  _BYTE field_E60;  // 0xE60
  _BYTE gap_E61[0x3];
  _DWORD field_E64;  // 0xE64
  _DWORD field_E68;  // 0xE68
  _DWORD field_E6C;  // 0xE6C
  _DWORD field_E70;  // 0xE70
  _BYTE field_E74;  // 0xE74
  _BYTE gap_E75[0x3];
  _DWORD field_E78;  // 0xE78
  _DWORD field_E7C;  // 0xE7C
  _DWORD field_E80;  // 0xE80
  _DWORD field_E84;  // 0xE84
  _BYTE field_E88;  // 0xE88
  _BYTE gap_E89[0x3];
  _DWORD field_E8C;  // 0xE8C
  _DWORD field_E90;  // 0xE90
  _DWORD field_E94;  // 0xE94
  _DWORD field_E98;  // 0xE98
  _BYTE field_E9C;  // 0xE9C
  _BYTE gap_E9D[0x3];
  _DWORD field_EA0;  // 0xEA0
  _DWORD field_EA4;  // 0xEA4
  _DWORD field_EA8;  // 0xEA8
  _DWORD field_EAC;  // 0xEAC
  _BYTE field_EB0;  // 0xEB0
  _BYTE gap_EB1[0x3];
  _DWORD field_EB4;  // 0xEB4
  _DWORD field_EB8;  // 0xEB8
  _DWORD field_EBC;  // 0xEBC
  _DWORD field_EC0;  // 0xEC0
  _BYTE field_EC4;  // 0xEC4
  _BYTE gap_EC5[0x203];
  _DWORD field_10C8;  // 0x10C8
  _DWORD field_10CC;  // 0x10CC
  _DWORD field_10D0;  // 0x10D0
  _DWORD field_10D4;  // 0x10D4
  _WORD field_10D8;  // 0x10D8
  _BYTE field_10DA;  // 0x10DA
  _BYTE gap_10DB[0x1];
  _DWORD field_10DC;  // 0x10DC
  _WORD field_10E0;  // 0x10E0
  _BYTE gap_10E2[0xB9E];
  sead_IDisposer sead_IDisposer_1C80;  // 0x1C80
  _BYTE gap_1C90[0xDD4];
  _DWORD field_2A64;  // 0x2A64
  _BYTE gap_2A68[0x4];
};

struct DryBones
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0x4C];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0xC];
  _DWORD field_60;  // 0x60
  _DWORD field_64;  // 0x64
  _BYTE gap_68[0x4];
  _DWORD field_6C;  // 0x6C
  float field_70;  // 0x70
  _DWORD field_74;  // 0x74
  _BYTE gap_78[0x4];
  float field_7C;  // 0x7C
  _BYTE gap_80[0x8];
  _DWORD field_88;  // 0x88
  _BYTE gap_8C[0x14];
  _DWORD field_A0;  // 0xA0
  _BYTE gap_A4[0x18];
  ActiveCollider activeCollider_BC;  // 0xBC
  _BYTE gap_1EC[0x5C];
  float field_248;  // 0x248
  _BYTE gap_24C[0x3C];
  _BYTE field_288;  // 0x288
  _BYTE gap_289[0x368];
  StateMgr stateMgr_5F1;  // 0x5F1
  _BYTE gap_601[0x11C3];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0x34];
  _DWORD field_1808;  // 0x1808
  _BYTE gap_180C[0x40];
  _BYTE field_184C;  // 0x184C
  _BYTE gap_184D[0x4F];
  _DWORD field_189C;  // 0x189C
  _BYTE gap_18A0[0x3C];
  _DWORD field_18DC;  // 0x18DC
  _BYTE gap_18E0[0x2C];
  _DWORD field_190C;  // 0x190C
  float field_1910;  // 0x1910
  _DWORD field_1914;  // 0x1914
  _BYTE gap_1918[0x40];
  _DWORD field_1958;  // 0x1958
  _BYTE gap_195C[0xA0];
  ActiveCollider activeCollider_19FC;  // 0x19FC
  ActiveCollider activeCollider_1B2C;  // 0x1B2C
  ActiveCollider activeCollider_1C5C;  // 0x1C5C
  _BYTE gap_1D8C[0x28];
  _DWORD field_1DB4;  // 0x1DB4
  _DWORD field_1DB8;  // 0x1DB8
  _DWORD field_1DBC;  // 0x1DBC
  _BYTE gap_1DC0[0x4];
  _DWORD field_1DC4;  // 0x1DC4
  _DWORD field_1DC8;  // 0x1DC8
  _DWORD field_1DCC;  // 0x1DCC
  _DWORD field_1DD0;  // 0x1DD0
  _BYTE gap_1DD4[0x6];
  _WORD field_1DDA;  // 0x1DDA
  _WORD field_1DDC;  // 0x1DDC
  _BYTE gap_1DDE[0x2];
  _DWORD field_1DE0;  // 0x1DE0
  _BYTE gap_1DE4[0x7];
  _BYTE field_1DEB;  // 0x1DEB
  _BYTE field_1DEC;  // 0x1DEC
  _BYTE field_1DED;  // 0x1DED
  _BYTE gap_1DEE[0x2];
  _BYTE field_1DF0;  // 0x1DF0
  _BYTE gap_1DF1[0x5];
  _BYTE field_1DF6;  // 0x1DF6
  _BYTE gap_1DF7[0x2];
  _BYTE field_1DF9;  // 0x1DF9
  _BYTE field_1DFA;  // 0x1DFA
};

struct FinalBowser
{
  BossBase base;  // 0x0, base class (first ctor call)
  StageActor stageActor_1BB4;  // 0x1BB4
  _BYTE gap_1E38[0xBC];
  ActiveCollider activeCollider_1EF4;  // 0x1EF4
  ActiveCollider activeCollider_2024;  // 0x2024
  ActiveCollider activeCollider_2154;  // 0x2154
  ActiveCollider activeCollider_2284;  // 0x2284
  ActiveCollider activeCollider_23B4;  // 0x23B4
  ActiveCollider activeCollider_24E4;  // 0x24E4
  ActiveCollider activeCollider_2614;  // 0x2614
  ActiveCollider activeCollider_2744;  // 0x2744
  ActiveCollider activeCollider_2874;  // 0x2874
  ActiveCollider activeCollider_29A4;  // 0x29A4
  ActiveCollider activeCollider_2AD4;  // 0x2AD4
  ActiveCollider activeCollider_2C04;  // 0x2C04
  _BYTE gap_2D34[0x3024];
  ColliderBase colliderBase_5D58;  // 0x5D58
  _BYTE gap_5EAC[0x3C];
  ColliderBase colliderBase_5EE8;  // 0x5EE8
  _BYTE gap_603C[0x3C];
  ColliderBase colliderBase_6078;  // 0x6078
  _BYTE gap_61CC[0x158];
  _DWORD field_6324;  // 0x6324
  _DWORD field_6328;  // 0x6328
  _BYTE gap_632C[0x64];
  _DWORD field_6390;  // 0x6390
  _BYTE gap_6394[0x128];
  _DWORD field_64BC;  // 0x64BC
  _BYTE gap_64C0[0x64];
  _BYTE field_6524;  // 0x6524
  _BYTE gap_6525[0x3];
  _DWORD field_6528;  // 0x6528
  _BYTE gap_652C[0x64];
  _DWORD field_6590;  // 0x6590
  _BYTE gap_6594[0x64];
  _DWORD field_65F8;  // 0x65F8
  _BYTE gap_65FC[0x78];
  _DWORD field_6674;  // 0x6674
  _BYTE gap_6678[0x14];
  _DWORD field_668C;  // 0x668C
  _BYTE gap_6690[0x64];
  _DWORD field_66F4;  // 0x66F4
  _BYTE gap_66F8[0x14];
  _DWORD field_670C;  // 0x670C
  _BYTE gap_6710[0x160];
};

struct FireBros
{
  _BYTE gap_0[0x14];
  _DWORD field_14;  // 0x14
  _BYTE gap_18[0x38];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x1848];
  _BYTE field_189C;  // 0x189C
  _BYTE gap_189D[0x3];
  _BYTE field_18A0;  // 0x18A0
  _BYTE gap_18A1[0x7];
  _QWORD field_18A8;  // 0x18A8
  _BYTE field_18B0;  // 0x18B0
  _BYTE gap_18B1[0x7];
  _QWORD field_18B8;  // 0x18B8
  _BYTE field_18C0;  // 0x18C0
  _BYTE gap_18C1[0x7];
  _QWORD field_18C8;  // 0x18C8
  _BYTE gap_18D0[0xC0];
  _DWORD field_1990;  // 0x1990
  _DWORD field_1994;  // 0x1994
  _BYTE gap_1998[0x40];
  _DWORD field_19D8;  // 0x19D8
  _BYTE gap_19DC[0x1580];
  ActiveCollider activeCollider_2F5C;  // 0x2F5C
};

struct FireSnake
{
  Enemy base;  // 0x0, base class (first ctor call)
  _DWORD field_189C;  // 0x189C
  _BYTE field_18A0;  // 0x18A0
  _BYTE gap_18A1[0x1EF];
  _DWORD field_1A90;  // 0x1A90
  _DWORD field_1A94;  // 0x1A94
  _DWORD field_1A98;  // 0x1A98
  _DWORD field_1A9C;  // 0x1A9C
  RevealMaskRelated revealMaskRelated_1AA0;  // 0x1AA0
  LightSource lightSource_1AC8;  // 0x1AC8
  _BYTE gap_1B10[0x30];
  _DWORD field_1B40;  // 0x1B40
  _BYTE gap_1B44[0xF8];
  _DWORD field_1C3C;  // 0x1C3C
  _DWORD field_1C40;  // 0x1C40
  _DWORD field_1C44;  // 0x1C44
  _BYTE gap_1C48[0x8];
  float field_1C50;  // 0x1C50
  float field_1C54;  // 0x1C54
  _DWORD field_1C58;  // 0x1C58
  float field_1C5C;  // 0x1C5C
  float field_1C60;  // 0x1C60
  _DWORD field_1C64;  // 0x1C64
  _DWORD field_1C68;  // 0x1C68
  _DWORD field_1C6C;  // 0x1C6C
  _DWORD field_1C70;  // 0x1C70
  _BYTE gap_1C74[0xC];
  ActorScaler actorScaler_1C80;  // 0x1C80
  ActiveCollider activeCollider_1CA0;  // 0x1CA0
  _BYTE gap_1DD0[0x8];
};

struct FloatingBubble
{
  _BYTE gap_0[0x14];
  _DWORD field_14;  // 0x14
  _DWORD field_18;  // 0x18
  _BYTE field_1C;  // 0x1C
  _BYTE gap_1D[0x4F];
  float field_6C;  // 0x6C
  float field_70;  // 0x70
  _DWORD field_74;  // 0x74
  _BYTE gap_78[0x18];
  _DWORD field_90;  // 0x90
  _BYTE gap_94[0x160];
  _DWORD field_1F4;  // 0x1F4
  _DWORD field_1F8;  // 0x1F8
  _DWORD field_1FC;  // 0x1FC
  _DWORD field_200;  // 0x200
  _BYTE gap_204[0x15C0];
  StateMgr stateMgr_17C4;  // 0x17C4
  _DWORD field_17D4;  // 0x17D4
  ColliderBase colliderBase_17D8;  // 0x17D8
  _BYTE gap_192C[0x3C];
  ColliderBase colliderBase_1968;  // 0x1968
  _BYTE gap_1ABC[0x3C];
  float field_1AF8;  // 0x1AF8
  float field_1AFC;  // 0x1AFC
  float field_1B00;  // 0x1B00
  float field_1B04;  // 0x1B04
  float field_1B08;  // 0x1B08
  float field_1B0C;  // 0x1B0C
  _BYTE field_1B10;  // 0x1B10
  _BYTE field_1B11;  // 0x1B11
  _BYTE field_1B12;  // 0x1B12
  _BYTE gap_1B13[0x1];
  _DWORD field_1B14;  // 0x1B14
  float field_1B18;  // 0x1B18
  float field_1B1C;  // 0x1B1C
  _DWORD field_1B20;  // 0x1B20
  _BYTE gap_1B24[0x4];
  _DWORD field_1B28;  // 0x1B28
  _DWORD field_1B2C;  // 0x1B2C
  _BYTE gap_1B30[0x4];
  _DWORD field_1B34;  // 0x1B34
};

struct Fuzzy
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0x13];
  _BYTE field_17;  // 0x17
  _BYTE gap_18[0x3];
  _BYTE field_1B;  // 0x1B
  _BYTE gap_1C[0x34];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x2];
  _BYTE field_56;  // 0x56
  _BYTE gap_57[0x15];
  _DWORD field_6C;  // 0x6C
  _DWORD field_70;  // 0x70
  _DWORD field_74;  // 0x74
  _DWORD field_78;  // 0x78
  _DWORD field_7C;  // 0x7C
  _DWORD field_80;  // 0x80
  _BYTE gap_84[0xC];
  _DWORD field_90;  // 0x90
  _DWORD field_94;  // 0x94
  _DWORD field_98;  // 0x98
  _DWORD field_9C;  // 0x9C
  _DWORD field_A0;  // 0xA0
  _DWORD field_A4;  // 0xA4
  _BYTE gap_A8[0x14];
  ActiveCollider activeCollider_BC;  // 0xBC
  _DWORD field_1EC;  // 0x1EC
  _DWORD field_1F0;  // 0x1F0
  _DWORD field_1F4;  // 0x1F4
  _DWORD field_1F8;  // 0x1F8
  _DWORD field_1FC;  // 0x1FC
  _DWORD field_200;  // 0x200
  _DWORD field_204;  // 0x204
  _DWORD field_208;  // 0x208
  _DWORD field_20C;  // 0x20C
  _DWORD field_210;  // 0x210
  _BYTE gap_214[0x2];
  _BYTE field_216;  // 0x216
  _BYTE gap_217[0x4];
  _BYTE field_21B;  // 0x21B
  _BYTE gap_21C[0x20];
  _DWORD field_23C;  // 0x23C
  _DWORD field_240;  // 0x240
  _DWORD field_244;  // 0x244
  _BYTE gap_248[0x24];
  _DWORD field_26C;  // 0x26C
  _DWORD field_270;  // 0x270
  _BYTE gap_274[0x14];
  CollisionMgr collisionMgr_288;  // 0x288
  _BYTE gap_1770[0x38];
  _BYTE field_17A8;  // 0x17A8
  _BYTE gap_17A9[0x1B];
  StateMgr stateMgr_17C4;  // 0x17C4
  _DWORD field_17D4;  // 0x17D4
  _BYTE gap_17D8[0x2C];
  _DWORD field_1804;  // 0x1804
  EnemyFreezeMgr enemyFreezeMgr_1808;  // 0x1808
  _BYTE gap_1855[0xF];
  _DWORD field_1864;  // 0x1864
  _BYTE gap_1868[0x18];
  _BYTE field_1880;  // 0x1880
  _BYTE gap_1881[0x23];
  _DWORD field_18A4;  // 0x18A4
  _BYTE gap_18A8[0x4];
  LineFollower lineFollower_18AC;  // 0x18AC
  _DWORD field_193C;  // 0x193C
  _DWORD field_1940;  // 0x1940
  _DWORD field_1944;  // 0x1944
  _BYTE field_1948;  // 0x1948
  _BYTE gap_1949[0x3];
  _DWORD field_194C;  // 0x194C
  _DWORD field_1950;  // 0x1950
  _BYTE gap_1954[0x4];
  _DWORD field_1958;  // 0x1958
  _BYTE field_195C;  // 0x195C
  _BYTE gap_195D[0x3];
  float field_1960;  // 0x1960
  _DWORD field_1964;  // 0x1964
  _DWORD field_1968;  // 0x1968
  _BYTE gap_196C[0x4];
  _DWORD field_1970;  // 0x1970
  _BYTE gap_1974[0x8];
  _DWORD field_197C;  // 0x197C
  _BYTE gap_1980[0x4];
  Vec3 vec3_1984;  // 0x1984
  _DWORD field_1990;  // 0x1990
  _BYTE gap_1994[0x1C];
  _DWORD field_19B0;  // 0x19B0
  _BYTE gap_19B4[0x2C];
  _DWORD field_19E0;  // 0x19E0
  _BYTE gap_19E4[0x4];
  ActorScaler actorScaler_19E8;  // 0x19E8
  CollisionMgr collisionMgr_1A08;  // 0x1A08
  _DWORD field_2EF0;  // 0x2EF0
  _BYTE gap_2EF4[0x64];
  ActiveCollider activeCollider_2F58;  // 0x2F58
};

struct GameOverScene
{
  _BYTE gap_0[0x4];
  _DWORD field_4;  // 0x4
  StateExecuter stateExecuter_8;  // 0x8
  StateMgr stateMgr_18;  // 0x18
  sead_IDisposer sead_IDisposer_28;  // 0x28
  _BYTE gap_38[0x88];
  _DWORD field_C0;  // 0xC0
  StateExecuter stateExecuter_C4;  // 0xC4
  StateMgr stateMgr_D4;  // 0xD4
  sead_IDisposer sead_IDisposer_E4;  // 0xE4
  _DWORD field_F4;  // 0xF4
  _DWORD field_F8;  // 0xF8
  _DWORD field_FC;  // 0xFC
  _DWORD field_100;  // 0x100
  _DWORD field_104;  // 0x104
  _DWORD field_108;  // 0x108
  _DWORD field_10C;  // 0x10C
  _DWORD field_110;  // 0x110
  _DWORD field_114;  // 0x114
  _BYTE gap_118[0xCD8];
  _DWORD field_DF0;  // 0xDF0
  _DWORD field_DF4;  // 0xDF4
  _DWORD field_DF8;  // 0xDF8
  _DWORD field_DFC;  // 0xDFC
  _BYTE field_E00;  // 0xE00
  _BYTE gap_E01[0x3];
  _DWORD field_E04;  // 0xE04
  _DWORD field_E08;  // 0xE08
  _DWORD field_E0C;  // 0xE0C
  _DWORD field_E10;  // 0xE10
  _BYTE field_E14;  // 0xE14
  _BYTE gap_E15[0x3];
  _DWORD field_E18;  // 0xE18
  _DWORD field_E1C;  // 0xE1C
  _DWORD field_E20;  // 0xE20
  _DWORD field_E24;  // 0xE24
  _BYTE field_E28;  // 0xE28
  _BYTE gap_E29[0x3];
  _DWORD field_E2C;  // 0xE2C
  _DWORD field_E30;  // 0xE30
  _DWORD field_E34;  // 0xE34
  _DWORD field_E38;  // 0xE38
  _BYTE field_E3C;  // 0xE3C
  _BYTE gap_E3D[0x41EB];
  _DWORD field_5028;  // 0x5028
  _BYTE field_502C;  // 0x502C
  _BYTE gap_502D[0x12B];
  _DWORD field_5158;  // 0x5158
};

struct GameSetupScene
{
  _BYTE gap_0[0x4];
  StateExecuter stateExecuter_4;  // 0x4
  StateMgr stateMgr_14;  // 0x14
  sead_IDisposer sead_IDisposer_24;  // 0x24
  _BYTE gap_34[0x8C];
  _BYTE field_C0;  // 0xC0
  _BYTE gap_C1[0x3];
  _DWORD field_C4;  // 0xC4
  StateExecuter stateExecuter_C8;  // 0xC8
  StateMgr stateMgr_D8;  // 0xD8
  sead_IDisposer sead_IDisposer_E8;  // 0xE8
  _DWORD field_F8;  // 0xF8
  _DWORD field_FC;  // 0xFC
  _DWORD field_100;  // 0x100
  _DWORD field_104;  // 0x104
  _DWORD field_108;  // 0x108
  _DWORD field_10C;  // 0x10C
  _DWORD field_110;  // 0x110
  _DWORD field_114;  // 0x114
  _DWORD field_118;  // 0x118
  _BYTE gap_11C[0x10];
  sead_IDisposer sead_IDisposer_12C;  // 0x12C
  _DWORD field_13C;  // 0x13C
  _DWORD field_140;  // 0x140
  _DWORD field_144;  // 0x144
  _DWORD field_148;  // 0x148
  _DWORD field_14C;  // 0x14C
  _DWORD field_150;  // 0x150
  _DWORD field_154;  // 0x154
  _DWORD field_158;  // 0x158
  _DWORD field_15C;  // 0x15C
  _BYTE gap_160[0x10];
  sead_IDisposer sead_IDisposer_170;  // 0x170
  _DWORD field_180;  // 0x180
  _DWORD field_184;  // 0x184
  _DWORD field_188;  // 0x188
  _DWORD field_18C;  // 0x18C
  _DWORD field_190;  // 0x190
  _DWORD field_194;  // 0x194
  _DWORD field_198;  // 0x198
  _DWORD field_19C;  // 0x19C
  _DWORD field_1A0;  // 0x1A0
  _BYTE gap_1A4[0x10];
  sead_IDisposer sead_IDisposer_1B4;  // 0x1B4
  _DWORD field_1C4;  // 0x1C4
  _DWORD field_1C8;  // 0x1C8
  _DWORD field_1CC;  // 0x1CC
  _DWORD field_1D0;  // 0x1D0
  _DWORD field_1D4;  // 0x1D4
  _DWORD field_1D8;  // 0x1D8
  _DWORD field_1DC;  // 0x1DC
  _DWORD field_1E0;  // 0x1E0
  _DWORD field_1E4;  // 0x1E4
  _BYTE gap_1E8[0x10];
  _DWORD field_1F8;  // 0x1F8
  _DWORD field_1FC;  // 0x1FC
  _DWORD field_200;  // 0x200
  _DWORD field_204;  // 0x204
  _DWORD field_208;  // 0x208
  _DWORD field_20C;  // 0x20C
  _DWORD field_210;  // 0x210
  _DWORD field_214;  // 0x214
  _DWORD field_218;  // 0x218
  _DWORD field_21C;  // 0x21C
  _DWORD field_220;  // 0x220
  _DWORD field_224;  // 0x224
  _DWORD field_228;  // 0x228
  _DWORD field_22C;  // 0x22C
  _DWORD field_230;  // 0x230
  _DWORD field_234;  // 0x234
  _DWORD field_238;  // 0x238
  _DWORD field_23C;  // 0x23C
  _DWORD field_240;  // 0x240
  _DWORD field_244;  // 0x244
  _DWORD field_248;  // 0x248
  _DWORD field_24C;  // 0x24C
  _BYTE gap_250[0xB7C];
  _DWORD field_DCC;  // 0xDCC
  _DWORD field_DD0;  // 0xDD0
  _DWORD field_DD4;  // 0xDD4
  _DWORD field_DD8;  // 0xDD8
  _BYTE field_DDC;  // 0xDDC
  _BYTE gap_DDD[0x3];
  _DWORD field_DE0;  // 0xDE0
  _DWORD field_DE4;  // 0xDE4
  _DWORD field_DE8;  // 0xDE8
  _DWORD field_DEC;  // 0xDEC
  _DWORD field_DF0;  // 0xDF0
  _DWORD field_DF4;  // 0xDF4
  _DWORD field_DF8;  // 0xDF8
  _DWORD field_DFC;  // 0xDFC
  _DWORD field_E00;  // 0xE00
  _DWORD field_E04;  // 0xE04
  _DWORD field_E08;  // 0xE08
  _DWORD field_E0C;  // 0xE0C
  _DWORD field_E10;  // 0xE10
  _DWORD field_E14;  // 0xE14
  _BYTE field_E18;  // 0xE18
  _BYTE gap_E19[0x3];
  _DWORD field_E1C;  // 0xE1C
  _DWORD field_E20;  // 0xE20
  _DWORD field_E24;  // 0xE24
  _DWORD field_E28;  // 0xE28
  _DWORD field_E2C;  // 0xE2C
  _DWORD field_E30;  // 0xE30
  _DWORD field_E34;  // 0xE34
  _DWORD field_E38;  // 0xE38
  _DWORD field_E3C;  // 0xE3C
  _BYTE gap_E40[0x7E8];
  _DWORD field_1628;  // 0x1628
  _DWORD field_162C;  // 0x162C
  _DWORD field_1630;  // 0x1630
  _DWORD field_1634;  // 0x1634
  _DWORD field_1638;  // 0x1638
  _DWORD field_163C;  // 0x163C
  _DWORD field_1640;  // 0x1640
  _BYTE gap_1644[0x1704];
  _DWORD field_2D48;  // 0x2D48
  _BYTE gap_2D4C[0x6B0];
  _BYTE field_33FC;  // 0x33FC
  _BYTE field_33FD;  // 0x33FD
  _BYTE field_33FE;  // 0x33FE
  _BYTE gap_33FF[0x1];
  _DWORD field_3400;  // 0x3400
  _BYTE gap_3404[0x1578];
  _DWORD field_497C;  // 0x497C
  _DWORD field_4980;  // 0x4980
  _DWORD field_4984;  // 0x4984
  _DWORD field_4988;  // 0x4988
  _BYTE field_498C;  // 0x498C
  _BYTE gap_498D[0xBB3B];
  _WORD field_104C8;  // 0x104C8
  _BYTE field_104CA;  // 0x104CA
  _BYTE gap_104CB[0x1];
};

struct GiantWiggler
{
  Enemy base;  // 0x0, base class (first ctor call)
  _DWORD field_189C;  // 0x189C
  _DWORD field_18A0;  // 0x18A0
  _DWORD field_18A4;  // 0x18A4
  _DWORD field_18A8;  // 0x18A8
  _DWORD field_18AC;  // 0x18AC
  _BYTE gap_18B0[0x4];
  float field_18B4;  // 0x18B4
  float field_18B8;  // 0x18B8
  _BYTE gap_18BC[0x3C];
  _DWORD field_18F8;  // 0x18F8
  _BYTE gap_18FC[0x64];
  _BYTE field_1960;  // 0x1960
  _BYTE gap_1961[0x3];
  _DWORD field_1964;  // 0x1964
  _BYTE gap_1968[0x34];
  _DWORD field_199C;  // 0x199C
  _DWORD field_19A0;  // 0x19A0
  _BYTE gap_19A4[0xF00];
  ActiveCollider activeCollider_28A4;  // 0x28A4
  ActiveCollider activeCollider_29D4;  // 0x29D4
  ActiveCollider activeCollider_2B04;  // 0x2B04
  ActiveCollider activeCollider_2C34;  // 0x2C34
  ActiveCollider activeCollider_2D64;  // 0x2D64
  ActiveCollider activeCollider_2E94;  // 0x2E94
  ActiveCollider activeCollider_2FC4;  // 0x2FC4
  ActiveCollider activeCollider_30F4;  // 0x30F4
  ActiveCollider activeCollider_3224;  // 0x3224
  ActiveCollider activeCollider_3354;  // 0x3354
  _BYTE gap_3484[0x4];
};

struct Goomba
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0x10];
  _DWORD field_14;  // 0x14
  _BYTE gap_18[0x20];
  _DWORD field_38;  // 0x38
  _BYTE gap_3C[0x14];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x2];
  _BYTE field_56;  // 0x56
  _BYTE field_57;  // 0x57
  _BYTE gap_58[0x14];
  Vec3 vec3_6C;  // 0x6C
  _DWORD field_78;  // 0x78
  _DWORD field_7C;  // 0x7C
  _BYTE gap_80[0x10];
  float field_90;  // 0x90
  float field_94;  // 0x94
  float field_98;  // 0x98
  _BYTE gap_9C[0x4];
  _DWORD field_A0;  // 0xA0
  _BYTE gap_A4[0x18];
  ActiveCollider activeCollider_BC;  // 0xBC
  float field_1EC;  // 0x1EC
  _DWORD field_1F0;  // 0x1F0
  float field_1F4;  // 0x1F4
  float field_1F8;  // 0x1F8
  float field_1FC;  // 0x1FC
  _DWORD field_200;  // 0x200
  _BYTE gap_204[0x38];
  float field_23C;  // 0x23C
  float field_240;  // 0x240
  float field_244;  // 0x244
  _BYTE gap_248[0x24];
  _DWORD field_26C;  // 0x26C
  _DWORD field_270;  // 0x270
  _BYTE gap_274[0x14];
  _BYTE field_288;  // 0x288
  _BYTE gap_289[0x8AF];
  _BYTE field_B38;  // 0xB38
  _BYTE gap_B39[0x147];
  _DWORD field_C80;  // 0xC80
  _BYTE gap_C84[0xB24];
  _DWORD field_17A8;  // 0x17A8
  _BYTE gap_17AC[0x18];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0x30];
  _DWORD field_1804;  // 0x1804
  EnemyFreezeMgr enemyFreezeMgr_1808;  // 0x1808
  _BYTE gap_1855[0xF];
  _DWORD field_1864;  // 0x1864
  _BYTE gap_1868[0x84];
  ActiveCollider activeCollider_18EC;  // 0x18EC
  _BYTE gap_1A1C[0x11];
  _BYTE field_1A2D;  // 0x1A2D
  _BYTE field_1A2E;  // 0x1A2E
  _BYTE gap_1A2F[0x1];
  _BYTE field_1A30;  // 0x1A30
  _BYTE field_1A31;  // 0x1A31
  _BYTE gap_1A32[0x6];
  float field_1A38;  // 0x1A38
  _BYTE gap_1A3C[0x78];
  _BYTE field_1AB4;  // 0x1AB4
  _BYTE gap_1AB5[0x2];
  _BYTE field_1AB7;  // 0x1AB7
  _BYTE field_1AB8;  // 0x1AB8
  _BYTE gap_1AB9[0x13];
  _DWORD field_1ACC;  // 0x1ACC
  _BYTE field_1AD0;  // 0x1AD0
  _BYTE gap_1AD1[0xF];
  _DWORD field_1AE0;  // 0x1AE0
};

struct GoombaBase
{
  Enemy base;  // 0x0, base class (first ctor call)
  _DWORD field_189C;  // 0x189C
  _DWORD field_18A0;  // 0x18A0
  _DWORD field_18A4;  // 0x18A4
  _BYTE gap_18A8[0x40];
  _DWORD field_18E8;  // 0x18E8
  ActiveCollider activeCollider_18EC;  // 0x18EC
  _DWORD field_1A1C;  // 0x1A1C
  _DWORD field_1A20;  // 0x1A20
  _DWORD field_1A24;  // 0x1A24
  _DWORD field_1A28;  // 0x1A28
  _BYTE field_1A2C;  // 0x1A2C
  _BYTE field_1A2D;  // 0x1A2D
  _BYTE field_1A2E;  // 0x1A2E
  _BYTE field_1A2F;  // 0x1A2F
  _BYTE field_1A30;  // 0x1A30
  _BYTE field_1A31;  // 0x1A31
  _BYTE field_1A32;  // 0x1A32
  _BYTE field_1A33;  // 0x1A33
  _BYTE field_1A34;  // 0x1A34
  _BYTE gap_1A35[0x3];
  _DWORD field_1A38;  // 0x1A38
  _BYTE gap_1A3C[0x48];
  ActorScaler actorScaler_1A84;  // 0x1A84
  _DWORD field_1AA4;  // 0x1AA4
  _BYTE gap_1AA8[0x18];
};

struct HammerBros
{
  _BYTE gap_0[0x14];
  _BYTE field_14;  // 0x14
  _BYTE gap_15[0x41];
  _BYTE field_56;  // 0x56
  _BYTE gap_57[0x15];
  _DWORD field_6C;  // 0x6C
  _DWORD field_70;  // 0x70
  _DWORD field_74;  // 0x74
  _DWORD field_78;  // 0x78
  _DWORD field_7C;  // 0x7C
  _DWORD field_80;  // 0x80
  _BYTE gap_84[0x1C4];
  _DWORD field_248;  // 0x248
  _DWORD field_24C;  // 0x24C
  _DWORD field_250;  // 0x250
  _BYTE gap_254[0x3D4];
  float32x4_t float32x4_t_628;  // 0x628
  _BYTE gap_638[0x500];
  _DWORD field_B38;  // 0xB38
  _BYTE gap_B3C[0xC88];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0x78];
  _BYTE field_184C;  // 0x184C
  _BYTE gap_184D[0x6];
  _BYTE field_1853;  // 0x1853
  _BYTE gap_1854[0x3C];
  _BYTE field_1890;  // 0x1890
  _BYTE gap_1891[0xB];
  _DWORD field_189C;  // 0x189C
  _BYTE gap_18A0[0xF0];
  _DWORD field_1990;  // 0x1990
  _DWORD field_1994;  // 0x1994
  _BYTE gap_1998[0x38];
  _DWORD field_19D0;  // 0x19D0
  _BYTE gap_19D4[0x4];
  _DWORD field_19D8;  // 0x19D8
  _BYTE gap_19DC[0x88];
  _DWORD field_1A64;  // 0x1A64
  _BYTE gap_1A68[0x14F4];
  ActiveCollider activeCollider_2F5C;  // 0x2F5C
  _BYTE gap_308C[0x28];
  _DWORD field_30B4;  // 0x30B4
  _DWORD field_30B8;  // 0x30B8
  _DWORD field_30BC;  // 0x30BC
  _DWORD field_30C0;  // 0x30C0
  _DWORD field_30C4;  // 0x30C4
  _DWORD field_30C8;  // 0x30C8
};

struct IceActor
{
  _BYTE gap_0[0x4];
  _DWORD field_4;  // 0x4
  _DWORD field_8;  // 0x8
  _DWORD field_C;  // 0xC
  _BYTE gap_10[0x28];
  _DWORD field_38;  // 0x38
  _BYTE gap_3C[0x1A];
  _BYTE field_56;  // 0x56
  _BYTE gap_57[0x15];
  _DWORD field_6C;  // 0x6C
  float field_70;  // 0x70
  _DWORD field_74;  // 0x74
  _BYTE gap_78[0x2C];
  _DWORD field_A4;  // 0xA4
  _BYTE gap_A8[0x58];
  _DWORD field_100;  // 0x100
  _BYTE gap_104[0x2C];
  _DWORD field_130;  // 0x130
  float field_134;  // 0x134
  float field_138;  // 0x138
  float field_13C;  // 0x13C
  _BYTE gap_140[0x8];
  _DWORD field_148;  // 0x148
  _BYTE gap_14C[0xF0];
  _DWORD field_23C;  // 0x23C
  float field_240;  // 0x240
  _DWORD field_244;  // 0x244
  _DWORD field_248;  // 0x248
  float field_24C;  // 0x24C
  _DWORD field_250;  // 0x250
  _BYTE gap_254[0xC];
  _DWORD field_260;  // 0x260
  float field_264;  // 0x264
  _DWORD field_268;  // 0x268
  _BYTE gap_26C[0x1558];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0x4];
  ColliderBase colliderBase_17D8;  // 0x17D8
  _BYTE gap_192C[0x140];
  _DWORD field_1A6C;  // 0x1A6C
  _DWORD field_1A70;  // 0x1A70
  float field_1A74;  // 0x1A74
  float field_1A78;  // 0x1A78
  _BYTE field_1A7C;  // 0x1A7C
  _BYTE gap_1A7D[0x267];
  _DWORD field_1CE4;  // 0x1CE4
  float field_1CE8;  // 0x1CE8
  float field_1CEC;  // 0x1CEC
  float field_1CF0;  // 0x1CF0
  float field_1CF4;  // 0x1CF4
  float field_1CF8;  // 0x1CF8
  _BYTE gap_1CFC[0x6F];
  _BYTE field_1D6B;  // 0x1D6B
  _BYTE gap_1D6C[0x1];
  _BYTE field_1D6D;  // 0x1D6D
  _BYTE field_1D6E;  // 0x1D6E
};

struct IceBro
{
  _BYTE gap_0[0x8];
  _DWORD field_8;  // 0x8
  _BYTE gap_C[0x44];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x1770];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0xD8];
  float field_18AC;  // 0x18AC
  _BYTE gap_18B0[0xC];
  float field_18BC;  // 0x18BC
  _BYTE gap_18C0[0x8];
  _QWORD field_18C8;  // 0x18C8
  _BYTE gap_18D0[0xC0];
  _DWORD field_1990;  // 0x1990
  _DWORD field_1994;  // 0x1994
  _BYTE gap_1998[0x40];
  _DWORD field_19D8;  // 0x19D8
  _BYTE gap_19DC[0x1580];
  ActiveCollider activeCollider_2F5C;  // 0x2F5C
};

struct Iggy
{
  _BYTE gap_0[0x50];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x10];
  _DWORD field_64;  // 0x64
  _DWORD field_68;  // 0x68
  Vec3 vec3_6C;  // 0x6C
  _DWORD field_78;  // 0x78
  _DWORD field_7C;  // 0x7C
  _DWORD field_80;  // 0x80
  float field_84;  // 0x84
  _DWORD field_88;  // 0x88
  _BYTE gap_8C[0x4];
  _DWORD field_90;  // 0x90
  _DWORD field_94;  // 0x94
  _DWORD field_98;  // 0x98
  _BYTE gap_9C[0x4];
  _DWORD field_A0;  // 0xA0
  _DWORD field_A4;  // 0xA4
  _BYTE gap_A8[0x14];
  ActiveCollider activeCollider_BC;  // 0xBC
  _DWORD field_1EC;  // 0x1EC
  _DWORD field_1F0;  // 0x1F0
  _DWORD field_1F4;  // 0x1F4
  _DWORD field_1F8;  // 0x1F8
  _BYTE gap_1FC[0x40];
  _DWORD field_23C;  // 0x23C
  _DWORD field_240;  // 0x240
  _DWORD field_244;  // 0x244
  _BYTE gap_248[0x40];
  CollisionMgr collisionMgr_288;  // 0x288
  _BYTE gap_1770[0x54];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0x24];
  _BYTE field_17F8;  // 0x17F8
  _BYTE gap_17F9[0x53];
  _BYTE field_184C;  // 0x184C
  _BYTE gap_184D[0x37];
  _WORD field_1884;  // 0x1884
  _BYTE gap_1886[0x22];
  _BYTE field_18A8;  // 0x18A8
  _BYTE field_18A9;  // 0x18A9
  _BYTE gap_18AA[0x17A];
  float field_1A24;  // 0x1A24
  float field_1A28;  // 0x1A28
  float field_1A2C;  // 0x1A2C
  _BYTE gap_1A30[0x84];
  _DWORD field_1AB4;  // 0x1AB4
  _DWORD field_1AB8;  // 0x1AB8
  _DWORD field_1ABC;  // 0x1ABC
  _DWORD field_1AC0;  // 0x1AC0
  _BYTE gap_1AC4[0xF0];
  _DWORD field_1BB4;  // 0x1BB4
  _DWORD field_1BB8;  // 0x1BB8
  _DWORD field_1BBC;  // 0x1BBC
  _DWORD field_1BC0;  // 0x1BC0
  _DWORD field_1BC4;  // 0x1BC4
  _DWORD field_1BC8;  // 0x1BC8
  _DWORD field_1BCC;  // 0x1BCC
  _DWORD field_1BD0;  // 0x1BD0
  _DWORD field_1BD4;  // 0x1BD4
  _BYTE gap_1BD8[0x8];
  _DWORD field_1BE0;  // 0x1BE0
  _QWORD field_1BE4;  // 0x1BE4
  _DWORD field_1BEC;  // 0x1BEC
  _BYTE gap_1BF0[0x4];
  _QWORD field_1BF4;  // 0x1BF4
  _DWORD field_1BFC;  // 0x1BFC
  _DWORD field_1C00;  // 0x1C00
  _BYTE gap_1C04[0x4];
  _DWORD field_1C08;  // 0x1C08
  _BYTE gap_1C0C[0x134];
  _DWORD field_1D40;  // 0x1D40
  _DWORD field_1D44;  // 0x1D44
  _DWORD field_1D48;  // 0x1D48
  _BYTE gap_1D4C[0xFC];
  _DWORD field_1E48;  // 0x1E48
  _BYTE gap_1E4C[0xC];
  _DWORD field_1E58;  // 0x1E58
  _DWORD field_1E5C;  // 0x1E5C
  _BYTE gap_1E60[0x18];
  _DWORD field_1E78;  // 0x1E78
  _BYTE gap_1E7C[0x138];
  _DWORD field_1FB4;  // 0x1FB4
  _BYTE gap_1FB8[0x10];
  _BYTE field_1FC8;  // 0x1FC8
  _BYTE gap_1FC9[0xB];
  float field_1FD4;  // 0x1FD4
  float field_1FD8;  // 0x1FD8
  float field_1FDC;  // 0x1FDC
  _BYTE field_1FE0;  // 0x1FE0
  _BYTE gap_1FE1[0x3];
  float field_1FE4;  // 0x1FE4
  float field_1FE8;  // 0x1FE8
  float field_1FEC;  // 0x1FEC
  float field_1FF0;  // 0x1FF0
  float field_1FF4;  // 0x1FF4
  _DWORD field_1FF8;  // 0x1FF8
  float field_1FFC;  // 0x1FFC
  _DWORD field_2000;  // 0x2000
  _BYTE gap_2004[0xA];
  _BYTE field_200E;  // 0x200E
  _BYTE gap_200F[0x1];
  float field_2010;  // 0x2010
  float field_2014;  // 0x2014
  _DWORD field_2018;  // 0x2018
  _DWORD field_201C;  // 0x201C
  _BYTE gap_2020[0x68];
  EffectWrapper effectWrapper_2088;  // 0x2088
};

struct Item
{
  _BYTE gap_0[0x17];
  _BYTE field_17;  // 0x17
  _BYTE gap_18[0x38];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x2];
  _BYTE field_56;  // 0x56
  _BYTE gap_57[0xD];
  _DWORD field_64;  // 0x64
  _BYTE gap_68[0x4];
  float field_6C;  // 0x6C
  float field_70;  // 0x70
  _DWORD field_74;  // 0x74
  _DWORD field_78;  // 0x78
  _DWORD field_7C;  // 0x7C
  _DWORD field_80;  // 0x80
  _DWORD field_84;  // 0x84
  _DWORD field_88;  // 0x88
  _DWORD field_8C;  // 0x8C
  _BYTE gap_90[0x1718];
  _BYTE field_17A8;  // 0x17A8
  _BYTE gap_17A9[0x2F];
  _DWORD field_17D8;  // 0x17D8
  _DWORD field_17DC;  // 0x17DC
  _BYTE gap_17E0[0x1C];
  _DWORD field_17FC;  // 0x17FC
  _BYTE gap_1800[0x18];
  _DWORD field_1818;  // 0x1818
  _DWORD field_181C;  // 0x181C
  _BYTE gap_1820[0x4];
  _DWORD field_1824;  // 0x1824
  _BYTE gap_1828[0x4];
  _DWORD field_182C;  // 0x182C
  _BYTE gap_1830[0x18];
  _DWORD field_1848;  // 0x1848
  _BYTE gap_184C[0x4];
  _DWORD field_1850;  // 0x1850
  _DWORD field_1854;  // 0x1854
  _BYTE gap_1858[0x1AC];
  float field_1A04;  // 0x1A04
};

struct Kanibo
{
  Enemy base;  // 0x0, base class (first ctor call)
  _BYTE gap_189C[0xC];
  float field_18A8;  // 0x18A8
  _BYTE gap_18AC[0x1C];
  _DWORD field_18C8;  // 0x18C8
  _BYTE gap_18CC[0x58];
  ActorScaler actorScaler_1924;  // 0x1924
};

struct KaniboTama
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0xF];
  _BYTE field_13;  // 0x13
  _BYTE gap_14[0x3C];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x2];
  _BYTE field_56;  // 0x56
  _BYTE gap_57[0x9];
  _QWORD field_60;  // 0x60
  _BYTE gap_68[0x4];
  Vec3 vec3_6C;  // 0x6C
  float field_78;  // 0x78
  Enemy enemy_7C;  // 0x7C
};

struct KoopaTroopa
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0xC];
  float field_10;  // 0x10
  _DWORD field_14;  // 0x14
  _DWORD field_18;  // 0x18
  _BYTE gap_1C[0x34];
  _DWORD field_50;  // 0x50
  _BYTE field_54;  // 0x54
  _BYTE gap_55[0x1];
  _BYTE field_56;  // 0x56
  _BYTE field_57;  // 0x57
  _BYTE gap_58[0x14];
  _DWORD field_6C;  // 0x6C
  float field_70;  // 0x70
  float field_74;  // 0x74
  _DWORD field_78;  // 0x78
  _BYTE gap_7C[0x14];
  float field_90;  // 0x90
  float field_94;  // 0x94
  float field_98;  // 0x98
  _DWORD field_9C;  // 0x9C
  _DWORD field_A0;  // 0xA0
  _BYTE gap_A4[0x18];
  _DWORD field_BC;  // 0xBC
  _BYTE gap_C0[0x12C];
  float field_1EC;  // 0x1EC
  _DWORD field_1F0;  // 0x1F0
  float field_1F4;  // 0x1F4
  _DWORD field_1F8;  // 0x1F8
  _BYTE gap_1FC[0x40];
  float field_23C;  // 0x23C
  float field_240;  // 0x240
  float field_244;  // 0x244
  _BYTE gap_248[0x34];
  _DWORD field_27C;  // 0x27C
  _BYTE gap_280[0x8];
  _BYTE field_288;  // 0x288
  _BYTE gap_289[0x8AF];
  _DWORD field_B38;  // 0xB38
  _BYTE gap_B3C[0x74];
  _BYTE field_BB0;  // 0xBB0
  _BYTE gap_BB1[0x3];
  _BYTE field_BB4;  // 0xBB4
  _BYTE gap_BB5[0x3];
  _BYTE field_BB8;  // 0xBB8
  _BYTE gap_BB9[0x27];
  _BYTE field_BE0;  // 0xBE0
  _BYTE gap_BE1[0x2F];
  _BYTE field_C10;  // 0xC10
  _BYTE gap_C11[0x6F];
  _DWORD field_C80;  // 0xC80
  _BYTE gap_C84[0xAC0];
  _DWORD field_1744;  // 0x1744
  _BYTE gap_1748[0x7C];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0x28];
  _DWORD field_17FC;  // 0x17FC
  _BYTE gap_1800[0x4];
  _DWORD field_1804;  // 0x1804
  _DWORD field_1808;  // 0x1808
  _BYTE gap_180C[0xC4];
  _DWORD field_18D0;  // 0x18D0
  _BYTE gap_18D4[0x24];
  _BYTE field_18F8;  // 0x18F8
  _BYTE gap_18F9[0x53];
  _BYTE field_194C;  // 0x194C
  _BYTE gap_194D[0x1];
  _BYTE field_194E;  // 0x194E
  _BYTE gap_194F[0x2];
  _BYTE field_1951;  // 0x1951
  _BYTE gap_1952[0x16];
  _DWORD field_1968;  // 0x1968
  _BYTE gap_196C[0x33];
  _BYTE field_199F;  // 0x199F
  _BYTE field_19A0;  // 0x19A0
  _BYTE gap_19A1[0x103];
  _DWORD field_1AA4;  // 0x1AA4
  _DWORD field_1AA8;  // 0x1AA8
  _DWORD field_1AAC;  // 0x1AAC
  _BYTE gap_1AB0[0xC];
  float field_1ABC;  // 0x1ABC
  _DWORD field_1AC0;  // 0x1AC0
  _BYTE gap_1AC4[0xC];
  _DWORD field_1AD0;  // 0x1AD0
  _BYTE gap_1AD4[0x74];
  _DWORD field_1B48;  // 0x1B48
  _DWORD field_1B4C;  // 0x1B4C
  _BYTE gap_1B50[0x1E4];
  _DWORD field_1D34;  // 0x1D34
  _BYTE gap_1D38[0x4];
  _DWORD field_1D3C;  // 0x1D3C
  _BYTE gap_1D40[0x4];
  _DWORD field_1D44;  // 0x1D44
};

struct KoopalingBase
{
  BossBase base;  // 0x0, base class (first ctor call)
  _DWORD field_1BB4;  // 0x1BB4
  _DWORD field_1BB8;  // 0x1BB8
  _BYTE gap_1BBC[0x4];
  _DWORD field_1BC0;  // 0x1BC0
  _DWORD field_1BC4;  // 0x1BC4
  _DWORD field_1BC8;  // 0x1BC8
  _DWORD field_1BCC;  // 0x1BCC
  _DWORD field_1BD0;  // 0x1BD0
  _DWORD field_1BD4;  // 0x1BD4
  _DWORD field_1BD8;  // 0x1BD8
  _BYTE gap_1BDC[0x4];
  _DWORD field_1BE0;  // 0x1BE0
  _BYTE gap_1BE4[0x4];
  _DWORD field_1BE8;  // 0x1BE8
  _DWORD field_1BEC;  // 0x1BEC
  _DWORD field_1BF0;  // 0x1BF0
  _BYTE gap_1BF4[0x4];
  float field_1BF8;  // 0x1BF8
  _DWORD field_1BFC;  // 0x1BFC
  _DWORD field_1C00;  // 0x1C00
  _DWORD field_1C04;  // 0x1C04
  _DWORD field_1C08;  // 0x1C08
  _DWORD field_1C0C;  // 0x1C0C
  ActiveCollider activeCollider_1C10;  // 0x1C10
  float field_1D40;  // 0x1D40
  float field_1D44;  // 0x1D44
  _DWORD field_1D48;  // 0x1D48
  _DWORD field_1D4C;  // 0x1D4C
  _DWORD field_1D50;  // 0x1D50
  _BYTE gap_1D54[0x64];
  _DWORD field_1DB8;  // 0x1DB8
  _BYTE gap_1DBC[0x64];
  _DWORD field_1E20;  // 0x1E20
  _DWORD field_1E24;  // 0x1E24
  _DWORD field_1E28;  // 0x1E28
  _DWORD field_1E2C;  // 0x1E2C
  float field_1E30;  // 0x1E30
  float field_1E34;  // 0x1E34
  float field_1E38;  // 0x1E38
  _BYTE gap_1E3C[0x4];
  _DWORD field_1E40;  // 0x1E40
  float field_1E44;  // 0x1E44
  _DWORD field_1E48;  // 0x1E48
  _DWORD field_1E4C;  // 0x1E4C
  _DWORD field_1E50;  // 0x1E50
  _BYTE gap_1E54[0x4];
  _DWORD field_1E58;  // 0x1E58
  _DWORD field_1E5C;  // 0x1E5C
  _DWORD field_1E60;  // 0x1E60
  _DWORD field_1E64;  // 0x1E64
  _DWORD field_1E68;  // 0x1E68
  _DWORD field_1E6C;  // 0x1E6C
  _DWORD field_1E70;  // 0x1E70
  _DWORD field_1E74;  // 0x1E74
  _DWORD field_1E78;  // 0x1E78
  _DWORD field_1E7C;  // 0x1E7C
  _BYTE gap_1E80[0x64];
  _DWORD field_1EE4;  // 0x1EE4
  _BYTE gap_1EE8[0x64];
  _DWORD field_1F4C;  // 0x1F4C
  _BYTE gap_1F50[0x64];
  _DWORD field_1FB4;  // 0x1FB4
  _BYTE gap_1FB8[0x18];
};

struct LargeGoomba
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0x4];
  _DWORD field_8;  // 0x8
  _BYTE gap_C[0x8];
  _DWORD field_14;  // 0x14
  _BYTE gap_18[0xC];
  _DWORD field_24;  // 0x24
  _BYTE gap_28[0x4];
  _DWORD field_2C;  // 0x2C
  _BYTE gap_30[0x20];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x2];
  _BYTE field_56;  // 0x56
  _BYTE field_57;  // 0x57
  _BYTE gap_58[0x10];
  float field_68;  // 0x68
  Vec3 vec3_6C;  // 0x6C
  _DWORD field_78;  // 0x78
  _DWORD field_7C;  // 0x7C
  _DWORD field_80;  // 0x80
  _DWORD field_84;  // 0x84
  _DWORD field_88;  // 0x88
  _BYTE gap_8C[0x4];
  _DWORD field_90;  // 0x90
  _DWORD field_94;  // 0x94
  _DWORD field_98;  // 0x98
  _BYTE gap_9C[0x4];
  _DWORD field_A0;  // 0xA0
  _BYTE gap_A4[0x18];
  ActiveCollider activeCollider_BC;  // 0xBC
  _BYTE gap_1EC[0x8];
  _DWORD field_1F4;  // 0x1F4
  _DWORD field_1F8;  // 0x1F8
  _DWORD field_1FC;  // 0x1FC
  _DWORD field_200;  // 0x200
  _BYTE gap_204[0x13];
  _BYTE field_217;  // 0x217
  _BYTE field_218;  // 0x218
  _BYTE gap_219[0x1F];
  _DWORD field_238;  // 0x238
  _DWORD field_23C;  // 0x23C
  _DWORD field_240;  // 0x240
  _DWORD field_244;  // 0x244
  _DWORD field_248;  // 0x248
  _BYTE gap_24C[0x20];
  _DWORD field_26C;  // 0x26C
  _DWORD field_270;  // 0x270
  _BYTE gap_274[0x14];
  CollisionMgr collisionMgr_288;  // 0x288
  _BYTE gap_1770[0x38];
  _BYTE field_17A8;  // 0x17A8
  _BYTE gap_17A9[0x2];
  _BYTE field_17AB;  // 0x17AB
  _BYTE gap_17AC[0x18];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0x34];
  EnemyFreezeMgr enemyFreezeMgr_1808;  // 0x1808
  _BYTE gap_1855[0xF];
  _DWORD field_1864;  // 0x1864
  _BYTE gap_1868[0x18];
  _BYTE field_1880;  // 0x1880
  _BYTE gap_1881[0x3];
  _WORD field_1884;  // 0x1884
  _BYTE gap_1886[0x16];
  _DWORD field_189C;  // 0x189C
  _BYTE gap_18A0[0x4];
  _DWORD field_18A4;  // 0x18A4
  _BYTE gap_18A8[0x8];
  _DWORD field_18B0;  // 0x18B0
  _BYTE gap_18B4[0x1C];
  _DWORD field_18D0;  // 0x18D0
  _DWORD field_18D4;  // 0x18D4
  _BYTE gap_18D8[0xC];
  float field_18E4;  // 0x18E4
  float field_18E8;  // 0x18E8
  _BYTE gap_18EC[0x8];
  _DWORD field_18F4;  // 0x18F4
  _DWORD field_18F8;  // 0x18F8
  _BYTE field_18FC;  // 0x18FC
  _BYTE field_18FD;  // 0x18FD
  _BYTE gap_18FE[0x1];
  _BYTE field_18FF;  // 0x18FF
  _DWORD field_1900;  // 0x1900
  _DWORD field_1904;  // 0x1904
  _BYTE gap_1908[0x4];
  _DWORD field_190C;  // 0x190C
  _BYTE gap_1910[0x4];
  _DWORD field_1914;  // 0x1914
  _DWORD field_1918;  // 0x1918
  _DWORD field_191C;  // 0x191C
  _BYTE gap_1920[0x4];
  _BYTE field_1924;  // 0x1924
  _BYTE gap_1925[0x13];
  _DWORD field_1938;  // 0x1938
  _BYTE gap_193C[0x2C];
  _DWORD field_1968;  // 0x1968
  _BYTE gap_196C[0x4];
  _DWORD field_1970;  // 0x1970
  _BYTE gap_1974[0x64];
  ActiveCollider activeCollider_19D8;  // 0x19D8
  ActorScaler actorScaler_1B08;  // 0x1B08
  _BYTE gap_1B28[0x4];
  _DWORD field_1B2C;  // 0x1B2C
};

struct Lava
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0x11];
  _BYTE field_15;  // 0x15
  _BYTE gap_16[0x2];
  _DWORD field_18;  // 0x18
  _BYTE gap_1C[0x30];
  _DWORD field_4C;  // 0x4C
  _BYTE gap_50[0x1C];
  float field_6C;  // 0x6C
  float field_70;  // 0x70
  _DWORD field_74;  // 0x74
  _BYTE gap_78[0x174];
  float field_1EC;  // 0x1EC
  _DWORD field_1F0;  // 0x1F0
  float field_1F4;  // 0x1F4
  float field_1F8;  // 0x1F8
  float field_1FC;  // 0x1FC
  _DWORD field_200;  // 0x200
  _BYTE gap_204[0x15C0];
  _DWORD field_17C4;  // 0x17C4
  _BYTE gap_17C8[0x30];
  ColliderBase colliderBase_17F8;  // 0x17F8
  _BYTE gap_194C[0x164];
  float field_1AB0;  // 0x1AB0
  _BYTE gap_1AB4[0x10];
  float field_1AC4;  // 0x1AC4
  _BYTE gap_1AC8[0x14];
  float field_1ADC;  // 0x1ADC
  _BYTE gap_1AE0[0x14];
  _DWORD field_1AF4;  // 0x1AF4
  _BYTE gap_1AF8[0xFF48];
  StageActor stageActor_11A40;  // 0x11A40
};

struct LavaGeyser
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0x10];
  _DWORD field_14;  // 0x14
  _BYTE gap_18[0x54];
  _DWORD field_6C;  // 0x6C
  _DWORD field_70;  // 0x70
  _DWORD field_74;  // 0x74
  _BYTE gap_78[0x18];
  _DWORD field_90;  // 0x90
  _DWORD field_94;  // 0x94
  _DWORD field_98;  // 0x98
  _DWORD field_9C;  // 0x9C
  _DWORD field_A0;  // 0xA0
  _DWORD field_A4;  // 0xA4
  _BYTE gap_A8[0x14];
  ActiveCollider activeCollider_BC;  // 0xBC
  _DWORD field_1EC;  // 0x1EC
  _DWORD field_1F0;  // 0x1F0
  _DWORD field_1F4;  // 0x1F4
  _DWORD field_1F8;  // 0x1F8
  _DWORD field_1FC;  // 0x1FC
  _DWORD field_200;  // 0x200
  _DWORD field_204;  // 0x204
  _DWORD field_208;  // 0x208
  _DWORD field_20C;  // 0x20C
  _DWORD field_210;  // 0x210
  _BYTE gap_214[0x168C];
  float field_18A0;  // 0x18A0
  float field_18A4;  // 0x18A4
  _DWORD field_18A8;  // 0x18A8
  _DWORD field_18AC;  // 0x18AC
  _DWORD field_18B0;  // 0x18B0
  float field_18B4;  // 0x18B4
  _DWORD field_18B8;  // 0x18B8
  _BYTE gap_18BC[0x8];
  float field_18C4;  // 0x18C4
  _DWORD field_18C8;  // 0x18C8
  _BYTE gap_18CC[0xC];
  float field_18D8;  // 0x18D8
  float field_18DC;  // 0x18DC
  float field_18E0;  // 0x18E0
  _DWORD field_18E4;  // 0x18E4
  float field_18E8;  // 0x18E8
  _DWORD field_18EC;  // 0x18EC
  _BYTE gap_18F0[0xC];
  float field_18FC;  // 0x18FC
  _BYTE field_1900;  // 0x1900
  _BYTE gap_1901[0x3];
  ActiveCollider activeCollider_1904;  // 0x1904
  ActiveCollider activeCollider_1A34;  // 0x1A34
  Vec3 vec3_1B64;  // 0x1B64
  Vec3 vec3_1B70;  // 0x1B70
  EffectWrapper effectWrapper_1B7C;  // 0x1B7C
  _DWORD field_1BE4;  // 0x1BE4
  _BYTE gap_1BE8[0x64];
  EffectWrapper effectWrapper_1C4C;  // 0x1C4C
  _DWORD field_1CB4;  // 0x1CB4
  _BYTE gap_1CB8[0x64];
  _DWORD field_1D1C;  // 0x1D1C
};

struct LightMask
{
  _DWORD field_0;  // 0x0
  _DWORD field_4;  // 0x4
  _DWORD field_8;  // 0x8
  float field_C;  // 0xC
  float field_10;  // 0x10
  float field_14;  // 0x14
  _DWORD field_18;  // 0x18
  _DWORD field_1C;  // 0x1C
  _DWORD field_20;  // 0x20
  _DWORD field_24;  // 0x24
};

struct MaskManager
{
  _BYTE gap_0[0x10];
  _DWORD field_10;  // 0x10
  _DWORD field_14;  // 0x14
  _DWORD field_18;  // 0x18
  RevealMaskRelated revealMaskRelated_1C;  // 0x1C
  RevealMaskRelated revealMaskRelated_44;  // 0x44
  _DWORD field_6C;  // 0x6C
  _DWORD field_70;  // 0x70
  _DWORD field_74;  // 0x74
  _DWORD field_78;  // 0x78
  _DWORD field_7C;  // 0x7C
  _DWORD field_80;  // 0x80
  _DWORD field_84;  // 0x84
  _DWORD field_88;  // 0x88
  _BYTE gap_8C[0xAC];
  _DWORD field_138;  // 0x138
  _DWORD field_13C;  // 0x13C
  _DWORD field_140;  // 0x140
  _DWORD field_144;  // 0x144
  _DWORD field_148;  // 0x148
  _DWORD field_14C;  // 0x14C
  _DWORD field_150;  // 0x150
  _DWORD field_154;  // 0x154
  _BYTE gap_158[0x1];
  _BYTE field_159;  // 0x159
  _BYTE gap_15A[0x2];
  RevealMaskRelated revealMaskRelated_15C;  // 0x15C
  RevealMaskRelated revealMaskRelated_184;  // 0x184
  _DWORD field_1AC;  // 0x1AC
  _DWORD field_1B0;  // 0x1B0
  _DWORD field_1B4;  // 0x1B4
  _DWORD field_1B8;  // 0x1B8
  _DWORD field_1BC;  // 0x1BC
  _DWORD field_1C0;  // 0x1C0
  _DWORD field_1C4;  // 0x1C4
  _DWORD field_1C8;  // 0x1C8
  _BYTE gap_1CC[0xAC];
  _DWORD field_278;  // 0x278
  _DWORD field_27C;  // 0x27C
  _DWORD field_280;  // 0x280
  _DWORD field_284;  // 0x284
  _DWORD field_288;  // 0x288
  _DWORD field_28C;  // 0x28C
  _DWORD field_290;  // 0x290
  _DWORD field_294;  // 0x294
  _BYTE gap_298[0x1];
  _BYTE field_299;  // 0x299
  _BYTE gap_29A[0x2];
  RevealMaskRelated revealMaskRelated_29C;  // 0x29C
  RevealMaskRelated revealMaskRelated_2C4;  // 0x2C4
  _DWORD field_2EC;  // 0x2EC
  _DWORD field_2F0;  // 0x2F0
  _DWORD field_2F4;  // 0x2F4
  _DWORD field_2F8;  // 0x2F8
  _DWORD field_2FC;  // 0x2FC
  _DWORD field_300;  // 0x300
  _DWORD field_304;  // 0x304
  _DWORD field_308;  // 0x308
  _BYTE gap_30C[0xAC];
  _DWORD field_3B8;  // 0x3B8
  _DWORD field_3BC;  // 0x3BC
  _DWORD field_3C0;  // 0x3C0
  _DWORD field_3C4;  // 0x3C4
  _DWORD field_3C8;  // 0x3C8
  _DWORD field_3CC;  // 0x3CC
  _DWORD field_3D0;  // 0x3D0
  _DWORD field_3D4;  // 0x3D4
  _BYTE gap_3D8[0x1];
  _BYTE field_3D9;  // 0x3D9
  _BYTE gap_3DA[0x2];
  RevealMaskRelated revealMaskRelated_3DC;  // 0x3DC
  RevealMaskRelated revealMaskRelated_404;  // 0x404
  _DWORD field_42C;  // 0x42C
  _DWORD field_430;  // 0x430
  _DWORD field_434;  // 0x434
  _DWORD field_438;  // 0x438
  _DWORD field_43C;  // 0x43C
  _DWORD field_440;  // 0x440
  _DWORD field_444;  // 0x444
  _DWORD field_448;  // 0x448
  _BYTE gap_44C[0xAC];
  _DWORD field_4F8;  // 0x4F8
  _DWORD field_4FC;  // 0x4FC
  _DWORD field_500;  // 0x500
  _DWORD field_504;  // 0x504
  _DWORD field_508;  // 0x508
  _DWORD field_50C;  // 0x50C
  _BYTE gap_510[0x9];
  _BYTE field_519;  // 0x519
  _BYTE gap_51A[0x1E];
  RevealMaskRelated revealMaskRelated_538;  // 0x538
  RevealMaskRelated revealMaskRelated_560;  // 0x560
  _BYTE gap_588[0xB0];
  _DWORD field_638;  // 0x638
  _DWORD field_63C;  // 0x63C
  _DWORD field_640;  // 0x640
  _DWORD field_644;  // 0x644
  _DWORD field_648;  // 0x648
  _DWORD field_64C;  // 0x64C
  _BYTE gap_650[0x9];
  _BYTE field_659;  // 0x659
  _BYTE gap_65A[0x1E];
  RevealMaskRelated revealMaskRelated_678;  // 0x678
  RevealMaskRelated revealMaskRelated_6A0;  // 0x6A0
  _BYTE gap_6C8[0xB0];
  _DWORD field_778;  // 0x778
  _DWORD field_77C;  // 0x77C
  _DWORD field_780;  // 0x780
  _DWORD field_784;  // 0x784
  _DWORD field_788;  // 0x788
  _DWORD field_78C;  // 0x78C
  _BYTE gap_790[0x9];
  _BYTE field_799;  // 0x799
  _BYTE gap_79A[0x1E];
  RevealMaskRelated revealMaskRelated_7B8;  // 0x7B8
  RevealMaskRelated revealMaskRelated_7E0;  // 0x7E0
  _BYTE gap_808[0xB0];
  _DWORD field_8B8;  // 0x8B8
  _DWORD field_8BC;  // 0x8BC
  _DWORD field_8C0;  // 0x8C0
  _DWORD field_8C4;  // 0x8C4
  _DWORD field_8C8;  // 0x8C8
  _DWORD field_8CC;  // 0x8CC
  _BYTE gap_8D0[0x9];
  _BYTE field_8D9;  // 0x8D9
  _BYTE gap_8DA[0x1E];
  RevealMaskRelated revealMaskRelated_8F8;  // 0x8F8
  RevealMaskRelated revealMaskRelated_920;  // 0x920
  _BYTE gap_948[0xB0];
  _DWORD field_9F8;  // 0x9F8
  _DWORD field_9FC;  // 0x9FC
  _DWORD field_A00;  // 0xA00
  _DWORD field_A04;  // 0xA04
  _DWORD field_A08;  // 0xA08
  _DWORD field_A0C;  // 0xA0C
  _BYTE gap_A10[0x9];
  _BYTE field_A19;  // 0xA19
};

struct MovementBlockCoinBase
{
  BlockCoinBase base;  // 0x0, base class (first ctor call)
  _DWORD field_1B40;  // 0x1B40
  _DWORD field_1B44;  // 0x1B44
  _DWORD field_1B48;  // 0x1B48
  _DWORD field_1B4C;  // 0x1B4C
  MovementHandler movementHandler_1B50;  // 0x1B50
  _BYTE gap_1C48[0x28];
  _DWORD field_1C70;  // 0x1C70
  _DWORD field_1C74;  // 0x1C74
  _DWORD field_1C78;  // 0x1C78
  _BYTE field_1C7C;  // 0x1C7C
  _BYTE gap_1C7D[0x3];
  _DWORD field_1C80;  // 0x1C80
  _DWORD field_1C84;  // 0x1C84
  _DWORD field_1C88;  // 0x1C88
  _DWORD field_1C8C;  // 0x1C8C
  _BYTE field_1C90;  // 0x1C90
  _BYTE gap_1C91[0x3];
  _DWORD field_1C94;  // 0x1C94
  _BYTE field_1C98;  // 0x1C98
  _BYTE field_1C99;  // 0x1C99
  _BYTE gap_1C9A[0x2];
  _DWORD field_1C9C;  // 0x1C9C
  _DWORD field_1CA0;  // 0x1CA0
  _BYTE gap_1CA4[0x2];
  _WORD field_1CA6;  // 0x1CA6
  _DWORD field_1CA8;  // 0x1CA8
  _BYTE field_1CAC;  // 0x1CAC
  _BYTE gap_1CAD[0x3];
  _DWORD field_1CB0;  // 0x1CB0
};

struct ParaGoomba
{
  float field_0;  // 0x0
  _BYTE gap_4[0x10];
  _DWORD field_14;  // 0x14
  _BYTE gap_18[0x38];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x18];
  Vec3 vec3_6C;  // 0x6C
  _DWORD field_78;  // 0x78
  _DWORD field_7C;  // 0x7C
  _BYTE gap_80[0x20];
  _DWORD field_A0;  // 0xA0
  _BYTE gap_A4[0xD4];
  float field_178;  // 0x178
  _BYTE gap_17C[0x70];
  _DWORD field_1EC;  // 0x1EC
  _DWORD field_1F0;  // 0x1F0
  _DWORD field_1F4;  // 0x1F4
  _DWORD field_1F8;  // 0x1F8
  _BYTE gap_1FC[0x40];
  _DWORD field_23C;  // 0x23C
  _DWORD field_240;  // 0x240
  _DWORD field_244;  // 0x244
  _BYTE gap_248[0x24];
  _DWORD field_26C;  // 0x26C
  _DWORD field_270;  // 0x270
  _BYTE gap_274[0x14];
  CollisionMgr collisionMgr_288;  // 0x288
  _BYTE gap_1770[0x38];
  _BYTE field_17A8;  // 0x17A8
  _BYTE gap_17A9[0x1B];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0x34];
  EnemyFreezeMgr enemyFreezeMgr_1808;  // 0x1808
  _BYTE gap_1855[0xF];
  _DWORD field_1864;  // 0x1864
  _BYTE gap_1868[0x28];
  _BYTE field_1890;  // 0x1890
  _BYTE gap_1891[0xB];
  _DWORD field_189C;  // 0x189C
  _DWORD field_18A0;  // 0x18A0
  _DWORD field_18A4;  // 0x18A4
  _BYTE gap_18A8[0x40];
  _DWORD field_18E8;  // 0x18E8
  ActiveCollider activeCollider_18EC;  // 0x18EC
  _BYTE gap_1A1C[0x16];
  _BYTE field_1A32;  // 0x1A32
  _BYTE gap_1A33[0x19];
  _DWORD field_1A4C;  // 0x1A4C
  _BYTE gap_1A50[0x2C];
  _DWORD field_1A7C;  // 0x1A7C
  _BYTE gap_1A80[0x2C];
  Vec3 vec3_1AAC;  // 0x1AAC
  _BYTE gap_1AB8[0x3];
  _BYTE field_1ABB;  // 0x1ABB
  _BYTE field_1ABC;  // 0x1ABC
};

struct PlantFireball
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0x12];
  _BYTE field_16;  // 0x16
  _BYTE gap_17[0x5];
  _DWORD field_1C;  // 0x1C
  _BYTE gap_20[0x30];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x18];
  Vec3 vec3_6C;  // 0x6C
  _BYTE gap_78[0x18];
  float field_90;  // 0x90
  float field_94;  // 0x94
  float field_98;  // 0x98
  _BYTE gap_9C[0x20];
  ActiveCollider activeCollider_BC;  // 0xBC
  _BYTE gap_1EC[0x9C];
  CollisionMgr collisionMgr_288;  // 0x288
  _BYTE gap_1770[0xF0];
  _BYTE field_1860;  // 0x1860
  _BYTE gap_1861[0x7];
  Vec3i vec3i_1868;  // 0x1868
  EffectWrapper effectWrapper_1874;  // 0x1874
  LightSource lightSource_18DC;  // 0x18DC
  ActiveCollider activeCollider_1924;  // 0x1924
  _BYTE gap_1A54[0x20];
  _DWORD field_1A74;  // 0x1A74
  _DWORD field_1A78;  // 0x1A78
};

struct PlayerBase
{
  StageActor base;  // 0x0, base class (first ctor call)
  _DWORD field_284;  // 0x284
  _DWORD field_288;  // 0x288
  _DWORD field_28C;  // 0x28C
  _DWORD field_290;  // 0x290
  _DWORD field_294;  // 0x294
  _DWORD field_298;  // 0x298
  _DWORD field_29C;  // 0x29C
  _DWORD field_2A0;  // 0x2A0
  _DWORD field_2A4;  // 0x2A4
  _DWORD field_2A8;  // 0x2A8
  _DWORD field_2AC;  // 0x2AC
  _BYTE field_2B0;  // 0x2B0
  _BYTE gap_2B1[0x88];
  _BYTE field_339;  // 0x339
  _BYTE gap_33A[0xE];
  MovingSoundActor movingSoundActor_348;  // 0x348
  _DWORD field_47C;  // 0x47C
  _DWORD field_480;  // 0x480
  _BYTE field_484;  // 0x484
  _BYTE field_485;  // 0x485
  _BYTE gap_486[0x2];
  PlayerLookTarget playerLookTarget_488;  // 0x488
  _BYTE gap_4B4[0x1];
  _BYTE field_4B5;  // 0x4B5
  _BYTE field_4B6;  // 0x4B6
  _BYTE gap_4B7[0x2];
  _BYTE field_4B9;  // 0x4B9
  _BYTE gap_4BA[0x1];
  _BYTE field_4BB;  // 0x4BB
  _BYTE gap_4BC[0x2];
  _BYTE field_4BE;  // 0x4BE
  _BYTE gap_4BF[0x3];
  _BYTE field_4C2;  // 0x4C2
  _BYTE gap_4C3[0x1];
  _DWORD field_4C4;  // 0x4C4
  _BYTE gap_4C8[0x3];
  _BYTE field_4CB;  // 0x4CB
  _BYTE gap_4CC[0x1];
  _BYTE field_4CD;  // 0x4CD
  _BYTE gap_4CE[0x1];
  _BYTE field_4CF;  // 0x4CF
  _BYTE gap_4D0[0x2];
  _BYTE field_4D2;  // 0x4D2
  _BYTE gap_4D3[0x2];
  _BYTE field_4D5;  // 0x4D5
  _BYTE field_4D6;  // 0x4D6
  _BYTE field_4D7;  // 0x4D7
  _DWORD field_4D8;  // 0x4D8
  _DWORD field_4DC;  // 0x4DC
  _DWORD field_4E0;  // 0x4E0
  float field_4E4;  // 0x4E4
  float field_4E8;  // 0x4E8
  float field_4EC;  // 0x4EC
  _BYTE gap_4F0[0x20];
  _BYTE field_510;  // 0x510
  _BYTE gap_511[0x3];
  _DWORD field_514;  // 0x514
  _DWORD field_518;  // 0x518
  _DWORD field_51C;  // 0x51C
  _WORD field_520;  // 0x520
  _BYTE field_522;  // 0x522
  _BYTE gap_523[0x1];
  _DWORD field_524;  // 0x524
  _DWORD mMode;  // 0x528  docs/HAMMER_POWERUP_REPORT.md:23,765 (power-up state; ==2 is Fire)
  _BYTE gap_52C[0x4];
  CollisionMgr collisionMgr_530;  // 0x530
  _BYTE gap_1A18[0xDC];
  _BYTE field_1AF4;  // 0x1AF4
  _BYTE gap_1AF5[0x3];
  _DWORD field_1AF8;  // 0x1AF8
  _DWORD field_1AFC;  // 0x1AFC
  _BYTE gap_1B00[0x34];
  _DWORD field_1B34;  // 0x1B34
  _BYTE gap_1B38[0x50];
  _DWORD field_1B88;  // 0x1B88
  _DWORD field_1B8C;  // 0x1B8C
  _BYTE gap_1B90[0x50];
  ActiveCollider activeCollider_1BE0;  // 0x1BE0
  ActiveCollider activeCollider_1D10;  // 0x1D10
  ActiveCollider activeCollider_1E40;  // 0x1E40
  ActiveCollider activeCollider_1F70;  // 0x1F70
  ActiveCollider activeCollider_20A0;  // 0x20A0
  ActiveCollider activeCollider_21D0;  // 0x21D0
  ActiveCollider activeCollider_2300;  // 0x2300
  ActiveCollider activeCollider_2430;  // 0x2430
  _BYTE gap_2560[0x80];
  _DWORD field_25E0;  // 0x25E0
  _BYTE gap_25E4[0xC];
  _DWORD field_25F0;  // 0x25F0
  _BYTE gap_25F4[0x24];
  _DWORD field_2618;  // 0x2618
  _DWORD field_261C;  // 0x261C
  _DWORD field_2620;  // 0x2620
  _BYTE gap_2624[0x98];
  StateMgr stateMgr_26BC;  // 0x26BC
  _DWORD field_26CC;  // 0x26CC
  _DWORD field_26D0;  // 0x26D0
  _DWORD field_26D4;  // 0x26D4
  _DWORD field_26D8;  // 0x26D8
  _DWORD field_26DC;  // 0x26DC
  _DWORD field_26E0;  // 0x26E0
  _BYTE gap_26E4[0x14];
  _DWORD field_26F8;  // 0x26F8
  _BYTE gap_26FC[0x2C];
  _DWORD field_2728;  // 0x2728
  _DWORD field_272C;  // 0x272C
  _BYTE gap_2730[0x8];
  _DWORD field_2738;  // 0x2738
  _BYTE gap_273C[0x64];
  _DWORD field_27A0;  // 0x27A0
  _BYTE gap_27A4[0x64];
  _DWORD field_2808;  // 0x2808
  _BYTE gap_280C[0x64];
  _DWORD field_2870;  // 0x2870
  _BYTE gap_2874[0x64];
  _DWORD field_28D8;  // 0x28D8
  _BYTE gap_28DC[0xC8];
  _DWORD field_29A4;  // 0x29A4
  _BYTE gap_29A8[0x64];
  _DWORD field_2A0C;  // 0x2A0C
  _BYTE gap_2A10[0xF0];
  _DWORD field_2B00;  // 0x2B00
  _BYTE gap_2B04[0x140];
  StateMgr stateMgr_2C44;  // 0x2C44
};

struct PlayerStates
{
  _BYTE gap_0[0x4];
  StateExecuter stateExecuter_4;  // 0x4
  StateMgr stateMgr_14;  // 0x14
  _DWORD field_24;  // 0x24
  _DWORD field_28;  // 0x28
  _DWORD field_2C;  // 0x2C
  _DWORD field_30;  // 0x30
  _DWORD field_34;  // 0x34
  _DWORD field_38;  // 0x38
  _DWORD field_3C;  // 0x3C
  _BYTE gap_40[0x10];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x4];
  _DWORD field_58;  // 0x58
  _DWORD field_5C;  // 0x5C
  _DWORD field_60;  // 0x60
  _BYTE field_64;  // 0x64
  _BYTE gap_65[0x3];
  _DWORD field_68;  // 0x68
  _DWORD field_6C;  // 0x6C
  _DWORD field_70;  // 0x70
  _DWORD field_74;  // 0x74
  _DWORD field_78;  // 0x78
  _DWORD field_7C;  // 0x7C
  _DWORD field_80;  // 0x80
  _DWORD field_84;  // 0x84
  EffectWrapper effectWrapper_88;  // 0x88
  _BYTE gap_F0[0x728];
  _DWORD field_818;  // 0x818
  _BYTE gap_81C[0x1A4A14];
  _DWORD field_1A5230;  // 0x1A5230
  _BYTE gap_1A5234[0xC];
  _DWORD field_1A5240;  // 0x1A5240
  _BYTE gap_1A5244[0xEBC];
  _BYTE field_1A6100;  // 0x1A6100
};

struct Poison
{
  _BYTE gap_0[0x15];
  _BYTE field_15;  // 0x15
  _BYTE gap_16[0x36];
  _DWORD field_4C;  // 0x4C
  _BYTE gap_50[0x1C];
  float field_6C;  // 0x6C
  float field_70;  // 0x70
  _DWORD field_74;  // 0x74
  _BYTE gap_78[0x174];
  float field_1EC;  // 0x1EC
  float field_1F0;  // 0x1F0
  float field_1F4;  // 0x1F4
  float field_1F8;  // 0x1F8
  float field_1FC;  // 0x1FC
  float field_200;  // 0x200
  _BYTE gap_204[0x15C0];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0x24];
  ColliderBase colliderBase_17F8;  // 0x17F8
  _BYTE gap_194C[0x164];
  float field_1AB0;  // 0x1AB0
  _DWORD field_1AB4;  // 0x1AB4
  _BYTE gap_1AB8[0x4];
  float field_1ABC;  // 0x1ABC
  _BYTE gap_1AC0[0x4];
  float field_1AC4;  // 0x1AC4
  float field_1AC8;  // 0x1AC8
  _BYTE gap_1ACC[0xC];
  _DWORD field_1AD8;  // 0x1AD8
  float field_1ADC;  // 0x1ADC
  _BYTE gap_1AE0[0xD];
  _BYTE field_1AED;  // 0x1AED
  _BYTE field_1AEE;  // 0x1AEE
  _BYTE gap_1AEF[0x5];
  _DWORD field_1AF4;  // 0x1AF4
  _BYTE gap_1AF8[0xFF48];
  StageActor stageActor_11A40;  // 0x11A40
};

struct Pokey
{
  _BYTE gap_0[0x50];
  _DWORD field_50;  // 0x50
  _BYTE field_54;  // 0x54
  _BYTE gap_55[0x17];
  float field_6C;  // 0x6C
  float field_70;  // 0x70
  float field_74;  // 0x74
  float field_78;  // 0x78
  _BYTE gap_7C[0x40];
  ActiveCollider activeCollider_BC;  // 0xBC
  _BYTE gap_1EC[0x38];
  _DWORD field_224;  // 0x224
  _BYTE gap_228[0x910];
  _DWORD field_B38;  // 0xB38
  _BYTE gap_B3C[0xD58];
  _DWORD field_1894;  // 0x1894
  _BYTE gap_1898[0x4];
  _DWORD field_189C;  // 0x189C
  _DWORD field_18A0;  // 0x18A0
  _BYTE gap_18A4[0x10];
  _DWORD field_18B4;  // 0x18B4
  _DWORD field_18B8;  // 0x18B8
  _BYTE gap_18BC[0x1C];
  _DWORD field_18D8;  // 0x18D8
  _DWORD field_18DC;  // 0x18DC
  _BYTE field_18E0;  // 0x18E0
  _BYTE field_18E1;  // 0x18E1
  _BYTE gap_18E2[0x2];
  float field_18E4;  // 0x18E4
  _BYTE gap_18E8[0x18];
  _DWORD field_1900;  // 0x1900
  _BYTE gap_1904[0x4];
  StageActor stageActor_1908;  // 0x1908
};

struct PowBlock
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0xC];
  float field_10;  // 0x10
  _DWORD field_14;  // 0x14
  float field_18;  // 0x18
  _BYTE gap_1C[0x34];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x18];
  float field_6C;  // 0x6C
  float field_70;  // 0x70
  _DWORD field_74;  // 0x74
  _DWORD field_78;  // 0x78
  _DWORD field_7C;  // 0x7C
  _DWORD field_80;  // 0x80
  _BYTE gap_84[0x18];
  _DWORD field_9C;  // 0x9C
  _BYTE gap_A0[0x2];
  StateMethodExecuter stateMethodExecuter_A2;  // 0xA2
  _BYTE gap_AE[0xE];
  ActiveCollider activeCollider_BC;  // 0xBC
  _DWORD field_1EC;  // 0x1EC
  _DWORD field_1F0;  // 0x1F0
  _BYTE gap_1F4[0x48];
  float field_23C;  // 0x23C
  _DWORD field_240;  // 0x240
  _BYTE gap_244[0x28];
  _DWORD field_26C;  // 0x26C
  _BYTE gap_270[0x18];
  CollisionMgr collisionMgr_288;  // 0x288
  _BYTE gap_1770[0x54];
  StateMgr stateMgr_17C4;  // 0x17C4
  _DWORD field_17D4;  // 0x17D4
  _BYTE gap_17D8[0x8];
  _BYTE field_17E0;  // 0x17E0
  _BYTE gap_17E1[0x3];
  _DWORD field_17E4;  // 0x17E4
  _BYTE gap_17E8[0x4];
  _DWORD field_17EC;  // 0x17EC
  _BYTE gap_17F0[0x10];
  _DWORD field_1800;  // 0x1800
  _DWORD field_1804;  // 0x1804
  _BYTE gap_1808[0x10];
  ColliderBase colliderBase_1818;  // 0x1818
  _BYTE gap_196C[0x13C];
  float field_1AA8;  // 0x1AA8
  float field_1AAC;  // 0x1AAC
  _BYTE gap_1AB0[0x4];
  _DWORD field_1AB4;  // 0x1AB4
  _DWORD field_1AB8;  // 0x1AB8
  _DWORD field_1ABC;  // 0x1ABC
};

struct Quicksand
{
  _BYTE gap_0[0x15];
  _BYTE field_15;  // 0x15
  _BYTE gap_16[0x5];
  _BYTE field_1B;  // 0x1B
  _BYTE gap_1C[0x30];
  _DWORD field_4C;  // 0x4C
  _BYTE gap_50[0x20];
  float field_70;  // 0x70
  _BYTE gap_74[0x178];
  float field_1EC;  // 0x1EC
  float field_1F0;  // 0x1F0
  float field_1F4;  // 0x1F4
  float field_1F8;  // 0x1F8
  float field_1FC;  // 0x1FC
  float field_200;  // 0x200
  _BYTE gap_204[0x15EC];
  float field_17F0;  // 0x17F0
  _BYTE gap_17F4[0x4];
  ColliderBase colliderBase_17F8;  // 0x17F8
  _BYTE gap_194C[0x13C];
  ShapedColliderInfo shapedColliderInfo_1A88;  // 0x1A88
  _BYTE gap_1AAC[0x4];
  float field_1AB0;  // 0x1AB0
  _DWORD field_1AB4;  // 0x1AB4
  _BYTE gap_1AB8[0xC];
  _DWORD field_1AC4;  // 0x1AC4
  float field_1AC8;  // 0x1AC8
  float field_1ACC;  // 0x1ACC
  _BYTE gap_1AD0[0x1D];
  _BYTE field_1AED;  // 0x1AED
  _BYTE field_1AEE;  // 0x1AEE
  _BYTE gap_1AEF[0x5];
  _DWORD field_1AF4;  // 0x1AF4
  _BYTE gap_1AF8[0xC];
  float field_1B04;  // 0x1B04
  _BYTE gap_1B08[0xFF38];
  StageActor stageActor_11A40;  // 0x11A40
};

struct RedCoin
{
  _BYTE gap_0[0x16];
  _BYTE field_16;  // 0x16
  _BYTE gap_17[0x1];
  _DWORD field_18;  // 0x18
  _BYTE gap_1C[0x38];
  _BYTE field_54;  // 0x54
  _BYTE gap_55[0x17];
  Vec3 vec3_6C;  // 0x6C
  _BYTE gap_78[0x2C];
  _DWORD field_A4;  // 0xA4
  _BYTE gap_A8[0x144];
  _DWORD field_1EC;  // 0x1EC
  _DWORD field_1F0;  // 0x1F0
  _DWORD field_1F4;  // 0x1F4
  _DWORD field_1F8;  // 0x1F8
  _DWORD field_1FC;  // 0x1FC
  _DWORD field_200;  // 0x200
  _BYTE gap_204[0x17];
  _BYTE field_21B;  // 0x21B
  _BYTE field_21C;  // 0x21C
  _BYTE gap_21D[0x15A7];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0x4];
  _DWORD field_17D8;  // 0x17D8
  _BYTE gap_17DC[0x4];
  ColliderBase colliderBase_17E0;  // 0x17E0
  _BYTE gap_1934[0x164];
  MovementHandler movementHandler_1A98;  // 0x1A98
  _DWORD field_1B90;  // 0x1B90
  _DWORD field_1B94;  // 0x1B94
  _DWORD field_1B98;  // 0x1B98
  _DWORD field_1B9C;  // 0x1B9C
  _DWORD field_1BA0;  // 0x1BA0
  _DWORD field_1BA4;  // 0x1BA4
  _BYTE field_1BA8;  // 0x1BA8
  _BYTE gap_1BA9[0x7];
  _BYTE field_1BB0;  // 0x1BB0
  _BYTE gap_1BB1[0x3];
  _DWORD field_1BB4;  // 0x1BB4
  _BYTE gap_1BB8[0x1];
  _BYTE field_1BB9;  // 0x1BB9
  _BYTE gap_1BBA[0x2];
  _DWORD field_1BBC;  // 0x1BBC
  _BYTE gap_1BC0[0x20];
  RevealMaskRelated revealMaskRelated_1BE0;  // 0x1BE0
};

struct RiverPiranha
{
  _BYTE gap_0[0x8];
  _DWORD field_8;  // 0x8
  _BYTE gap_C[0x44];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x2];
  _BYTE field_56;  // 0x56
  _BYTE field_57;  // 0x57
  _BYTE gap_58[0xC];
  _DWORD field_64;  // 0x64
  _DWORD field_68;  // 0x68
  Vec2 vec2_6C;  // 0x6C
  _DWORD field_74;  // 0x74
  _DWORD field_78;  // 0x78
  _DWORD field_7C;  // 0x7C
  _DWORD field_80;  // 0x80
  _DWORD field_84;  // 0x84
  _DWORD field_88;  // 0x88
  _DWORD field_8C;  // 0x8C
  _DWORD field_90;  // 0x90
  _DWORD field_94;  // 0x94
  _DWORD field_98;  // 0x98
  _BYTE gap_9C[0x4];
  _DWORD field_A0;  // 0xA0
  _BYTE gap_A4[0x18];
  ActiveCollider activeCollider_BC;  // 0xBC
  _DWORD field_1EC;  // 0x1EC
  _DWORD field_1F0;  // 0x1F0
  _BYTE gap_1F4[0x48];
  _DWORD field_23C;  // 0x23C
  _DWORD field_240;  // 0x240
  _DWORD field_244;  // 0x244
  _BYTE gap_248[0x24];
  _DWORD field_26C;  // 0x26C
  _DWORD field_270;  // 0x270
  _BYTE gap_274[0x14];
  CollisionMgr collisionMgr_288;  // 0x288
  _BYTE gap_1770[0x36];
  _BYTE field_17A6;  // 0x17A6
  _BYTE gap_17A7[0x1];
  _BYTE field_17A8;  // 0x17A8
  _BYTE gap_17A9[0x1B];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0x1C];
  _DWORD field_17F0;  // 0x17F0
  _BYTE gap_17F4[0x14];
  EnemyFreezeMgr enemyFreezeMgr_1808;  // 0x1808
  _BYTE gap_1855[0x2F];
  _WORD field_1884;  // 0x1884
  _BYTE gap_1886[0x6];
  _DWORD field_188C;  // 0x188C
  _BYTE gap_1890[0xC];
  _DWORD field_189C;  // 0x189C
  _DWORD field_18A0;  // 0x18A0
  _BYTE gap_18A4[0x18];
  _BYTE field_18BC;  // 0x18BC
  _BYTE gap_18BD[0x7];
  _DWORD field_18C4;  // 0x18C4
  _BYTE gap_18C8[0x10];
  _DWORD field_18D8;  // 0x18D8
  _BYTE gap_18DC[0x4];
  _DWORD field_18E0;  // 0x18E0
  _BYTE gap_18E4[0x64];
  _DWORD field_1948;  // 0x1948
  _BYTE gap_194C[0x80];
  _DWORD field_19CC;  // 0x19CC
  _BYTE gap_19D0[0x2C];
  _DWORD field_19FC;  // 0x19FC
  _BYTE gap_1A00[0x5];
  _BYTE field_1A05;  // 0x1A05
  _BYTE gap_1A06[0x2];
  _DWORD field_1A08;  // 0x1A08
  _BYTE gap_1A0C[0x4];
  _BYTE field_1A10;  // 0x1A10
  _BYTE gap_1A11[0x3];
  ActiveCollider activeCollider_1A14;  // 0x1A14
  ActorScaler actorScaler_1B44;  // 0x1B44
};

struct RopeLadder
{
  _BYTE gap_0[0x14];
  _DWORD field_14;  // 0x14
  _BYTE gap_18[0x78];
  _DWORD field_90;  // 0x90
  _DWORD field_94;  // 0x94
  _DWORD field_98;  // 0x98
  _BYTE gap_9C[0x8];
  _DWORD field_A4;  // 0xA4
  _BYTE gap_A8[0x144];
  _DWORD field_1EC;  // 0x1EC
  _DWORD field_1F0;  // 0x1F0
  _DWORD field_1F4;  // 0x1F4
  _DWORD field_1F8;  // 0x1F8
  _BYTE gap_1FC[0x8];
  _DWORD field_204;  // 0x204
  _DWORD field_208;  // 0x208
  _DWORD field_20C;  // 0x20C
  _DWORD field_210;  // 0x210
  _BYTE gap_214[0x70];
  _DWORD field_284;  // 0x284
  ColliderBase colliderBase_288;  // 0x288
  _BYTE gap_3DC[0x4];
  _DWORD field_3E0;  // 0x3E0
  _BYTE gap_3E4[0x24];
  _DWORD field_408;  // 0x408
  _BYTE gap_40C[0xF1];
  _BYTE field_4FD;  // 0x4FD
};

struct STRM
{
  _BYTE gap_0[0x2E];
  _BYTE field_2E;  // 0x2E
  _BYTE gap_2F[0x15];
  _DWORD field_44;  // 0x44
  _BYTE gap_48[0x74];
  _BYTE field_BC;  // 0xBC
  _BYTE gap_BD[0xFF];
  _DWORD field_1BC;  // 0x1BC
  _BYTE field_1C0;  // 0x1C0
  _BYTE gap_1C1[0xCF];
  _DWORD field_290;  // 0x290
};

struct ShellEnemy
{
  CarryableEnemy base;  // 0x0, base class (first ctor call)
  _BYTE gap_18CE[0x2];
  _DWORD field_18D0;  // 0x18D0
  _DWORD field_18D4;  // 0x18D4
  _DWORD field_18D8;  // 0x18D8
  _DWORD field_18DC;  // 0x18DC
  _DWORD field_18E0;  // 0x18E0
  _DWORD field_18E4;  // 0x18E4
  _DWORD field_18E8;  // 0x18E8
  _DWORD field_18EC;  // 0x18EC
  _WORD field_18F0;  // 0x18F0
  _BYTE field_18F2;  // 0x18F2
  _BYTE gap_18F3[0x1];
  _DWORD field_18F4;  // 0x18F4
  _BYTE field_18F8;  // 0x18F8
  _BYTE field_18F9;  // 0x18F9
  _BYTE gap_18FA[0x2];
  _DWORD field_18FC;  // 0x18FC
  _DWORD field_1900;  // 0x1900
  _DWORD field_1904;  // 0x1904
  _BYTE field_1908;  // 0x1908
  _BYTE field_1909;  // 0x1909
  _BYTE field_190A;  // 0x190A
  _BYTE gap_190B[0x9];
  _DWORD field_1914;  // 0x1914
  _DWORD field_1918;  // 0x1918
  _BYTE gap_191C[0x4];
  _DWORD field_1920;  // 0x1920
  _DWORD field_1924;  // 0x1924
  _BYTE gap_1928[0x74];
  _BYTE field_199C;  // 0x199C
  _BYTE gap_199D[0x3];
  _DWORD field_19A0;  // 0x19A0
  _BYTE gap_19A4[0x14];
  _BYTE field_19B8;  // 0x19B8
  _BYTE gap_19B9[0x17];
  _BYTE field_19D0;  // 0x19D0
  _BYTE field_19D1;  // 0x19D1
  _BYTE field_19D2;  // 0x19D2
  _BYTE field_19D3;  // 0x19D3
  _DWORD field_19D4;  // 0x19D4
  _BYTE gap_19D8[0x64];
  _DWORD field_1A3C;  // 0x1A3C
  _BYTE gap_1A40[0x310];
};

struct SkeletalAnim
{
  _BYTE gap_0[0x4];
  ModelAnimation modelAnimation_4;  // 0x4
  _DWORD field_20;  // 0x20
  _DWORD field_24;  // 0x24
  _DWORD field_28;  // 0x28
  _DWORD field_2C;  // 0x2C
  _BYTE gap_30[0xC];
  _WORD field_3C;  // 0x3C
  _BYTE gap_3E[0x2];
  _WORD field_40;  // 0x40
  _BYTE gap_42[0x2];
  _DWORD field_44;  // 0x44
  _DWORD field_48;  // 0x48
  _BYTE gap_4C[0x30];
  _DWORD field_7C;  // 0x7C
  _DWORD field_80;  // 0x80
  _DWORD field_84;  // 0x84
  _DWORD field_88;  // 0x88
};

struct SledgeBro
{
  Enemy base;  // 0x0, base class (first ctor call)
  _BYTE gap_189C[0x10];
  _DWORD field_18AC;  // 0x18AC
  _BYTE gap_18B0[0x10];
  CollisionMgr_Sensor collisionMgr_Sensor_18C0;  // 0x18C0
  CollisionMgr_Sensor collisionMgr_Sensor_18CC;  // 0x18CC
  ActiveCollider activeCollider_18D8;  // 0x18D8
  _BYTE gap_1A08[0x4];
  _DWORD field_1A0C;  // 0x1A0C
  _BYTE field_1A10;  // 0x1A10
  _BYTE field_1A11;  // 0x1A11
  _BYTE gap_1A12[0x2];
  _DWORD field_1A14;  // 0x1A14
  _BYTE field_1A18;  // 0x1A18
  _BYTE field_1A19;  // 0x1A19
  _BYTE field_1A1A;  // 0x1A1A
  _BYTE field_1A1B;  // 0x1A1B
  _DWORD field_1A1C;  // 0x1A1C
  _DWORD field_1A20;  // 0x1A20
  _DWORD field_1A24;  // 0x1A24
  _DWORD field_1A28;  // 0x1A28
  _DWORD field_1A2C;  // 0x1A2C
  _DWORD field_1A30;  // 0x1A30
  _DWORD field_1A34;  // 0x1A34
  _DWORD field_1A38;  // 0x1A38
  _DWORD field_1A3C;  // 0x1A3C
  _DWORD field_1A40;  // 0x1A40
  _DWORD field_1A44;  // 0x1A44
  _DWORD field_1A48;  // 0x1A48
  _BYTE gap_1A4C[0xC];
  _DWORD field_1A58;  // 0x1A58
  _DWORD field_1A5C;  // 0x1A5C
  _DWORD field_1A60;  // 0x1A60
  _BYTE gap_1A64[0x60];
  _DWORD field_1AC4;  // 0x1AC4
  _DWORD field_1AC8;  // 0x1AC8
  _BYTE gap_1ACC[0x8];
  _DWORD field_1AD4;  // 0x1AD4
  _BYTE gap_1AD8[0x64];
  _DWORD field_1B3C;  // 0x1B3C
  _BYTE gap_1B40[0x64];
  ActiveCollider activeCollider_1BA4;  // 0x1BA4
  _BYTE gap_1CD4[0x8];
  _QWORD field_1CDC;  // 0x1CDC
  _DWORD field_1CE4;  // 0x1CE4
  _BYTE gap_1CE8[0x18];
};

struct SoundSystem
{
  _BYTE gap_0[0x4];
  _DWORD field_4;  // 0x4
  _DWORD field_8;  // 0x8
  _DWORD field_C;  // 0xC
  _BYTE gap_10[0x4];
  sead_ListNode sead_ListNode_14;  // 0x14
  _DWORD field_1C;  // 0x1C
  _DWORD field_20;  // 0x20
  _BYTE gap_24[0x8];
  _BYTE field_2C;  // 0x2C
  _BYTE field_2D;  // 0x2D
  _BYTE gap_2E[0x1];
  _BYTE field_2F;  // 0x2F
  _BYTE gap_30[0x2C];
  _DWORD field_5C;  // 0x5C
  _DWORD field_60;  // 0x60
  _DWORD field_64;  // 0x64
  _QWORD field_68;  // 0x68
  _DWORD field_70;  // 0x70
  _DWORD field_74;  // 0x74
  _BYTE field_78;  // 0x78
  _BYTE field_79;  // 0x79
  _BYTE gap_7A[0x6];
  _QWORD field_80;  // 0x80
  _DWORD field_88;  // 0x88
  _BYTE field_8C;  // 0x8C
  _BYTE gap_8D[0x1];
  _WORD field_8E;  // 0x8E
  _BYTE field_90;  // 0x90
  _BYTE field_91;  // 0x91
  _BYTE field_92;  // 0x92
  _BYTE gap_93[0x1];
  _DWORD field_94;  // 0x94
  _DWORD field_98;  // 0x98
  _BYTE gap_9C[0x8];
  _DWORD field_A4;  // 0xA4
  _DWORD field_A8;  // 0xA8
  _DWORD field_AC;  // 0xAC
  _BYTE field_B0;  // 0xB0
  _BYTE gap_B1[0x3];
  _DWORD field_B4;  // 0xB4
  _BYTE field_B8;  // 0xB8
  _BYTE gap_B9[0x7];
  _BYTE field_C0;  // 0xC0
  _BYTE gap_C1[0x3];
  _DWORD field_C4;  // 0xC4
  _BYTE gap_C8[0x70];
  _WORD field_138;  // 0x138
  _BYTE field_13A;  // 0x13A
};

struct SpinningStar
{
  _BYTE gap_0[0x4];
  float field_4;  // 0x4
  float field_8;  // 0x8
  _DWORD field_C;  // 0xC
  _BYTE field_10;  // 0x10
  _BYTE gap_11[0x6];
  _BYTE field_17;  // 0x17
  _BYTE gap_18[0x54];
  float field_6C;  // 0x6C
  float field_70;  // 0x70
  float field_74;  // 0x74
  _BYTE gap_78[0x18];
  _DWORD field_90;  // 0x90
  _DWORD field_94;  // 0x94
  _DWORD field_98;  // 0x98
  _BYTE gap_9C[0x8];
  _DWORD field_A4;  // 0xA4
  _BYTE gap_A8[0x144];
  _DWORD field_1EC;  // 0x1EC
  _DWORD field_1F0;  // 0x1F0
  _BYTE gap_1F4[0x15D0];
  StateMgr stateMgr_17C4;  // 0x17C4
  float field_17D4;  // 0x17D4
  float field_17D8;  // 0x17D8
  _BYTE gap_17DC[0x4];
  float field_17E0;  // 0x17E0
  _BYTE gap_17E4[0x8];
  _DWORD field_17EC;  // 0x17EC
  _BYTE gap_17F0[0x8];
  ColliderBase colliderBase_17F8;  // 0x17F8
  _BYTE gap_194C[0x454];
  _DWORD field_1DA0;  // 0x1DA0
  _DWORD field_1DA4;  // 0x1DA4
  _DWORD field_1DA8;  // 0x1DA8
  _BYTE gap_1DAC[0xC];
  _WORD field_1DB8;  // 0x1DB8
  _WORD field_1DBA;  // 0x1DBA
  _WORD field_1DBC;  // 0x1DBC
  _WORD field_1DBE;  // 0x1DBE
  _WORD field_1DC0;  // 0x1DC0
  _BYTE field_1DC2;  // 0x1DC2
  _BYTE field_1DC3;  // 0x1DC3
  _BYTE field_1DC4;  // 0x1DC4
  _BYTE field_1DC5;  // 0x1DC5
  _BYTE field_1DC6;  // 0x1DC6
  _BYTE gap_1DC7[0x2];
  _BYTE field_1DC9;  // 0x1DC9
};

struct StoneEye
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0x10];
  _DWORD field_14;  // 0x14
  _BYTE gap_18[0x2];
  _BYTE field_1A;  // 0x1A
  _BYTE gap_1B[0x51];
  _DWORD field_6C;  // 0x6C
  _DWORD field_70;  // 0x70
  _DWORD field_74;  // 0x74
  _BYTE gap_78[0x18];
  _DWORD field_90;  // 0x90
  _DWORD field_94;  // 0x94
  _DWORD field_98;  // 0x98
  _BYTE gap_9C[0x4];
  _DWORD field_A0;  // 0xA0
  _DWORD field_A4;  // 0xA4
  _BYTE gap_A8[0x154];
  _DWORD field_1FC;  // 0x1FC
  _DWORD field_200;  // 0x200
  _BYTE gap_204[0x3ED];
  StateMgr stateMgr_5F1;  // 0x5F1
  _BYTE gap_601[0x11C3];
  _DWORD field_17C4;  // 0x17C4
  _BYTE gap_17C8[0x40];
  _DWORD field_1808;  // 0x1808
  float field_180C;  // 0x180C
  _BYTE field_1810;  // 0x1810
  _BYTE field_1811;  // 0x1811
  _BYTE gap_1812[0x2];
  _DWORD field_1814;  // 0x1814
  _DWORD field_1818;  // 0x1818
  _BYTE gap_181C[0x18];
  _DWORD field_1834;  // 0x1834
  float field_1838;  // 0x1838
  _DWORD field_183C;  // 0x183C
  _DWORD field_1840;  // 0x1840
  _DWORD field_1844;  // 0x1844
  _DWORD field_1848;  // 0x1848
  _DWORD field_184C;  // 0x184C
  _BYTE gap_1850[0x68];
  ColliderBase colliderBase_18B8;  // 0x18B8
  _BYTE gap_1A0C[0x58];
  float field_1A64;  // 0x1A64
  float field_1A68;  // 0x1A68
  _BYTE gap_1A6C[0x8];
  _DWORD field_1A74;  // 0x1A74
  _DWORD field_1A78;  // 0x1A78
  _DWORD field_1A7C;  // 0x1A7C
  _BYTE gap_1A80[0x4];
  _DWORD field_1A84;  // 0x1A84
  _DWORD field_1A88;  // 0x1A88
  _DWORD field_1A8C;  // 0x1A8C
  _DWORD field_1A90;  // 0x1A90
  _DWORD field_1A94;  // 0x1A94
  _BYTE gap_1A98[0x4];
  _DWORD field_1A9C;  // 0x1A9C
  _DWORD field_1AA0;  // 0x1AA0
  _DWORD field_1AA4;  // 0x1AA4
  _BYTE gap_1AA8[0x1];
  _BYTE field_1AA9;  // 0x1AA9
  _BYTE field_1AAA;  // 0x1AAA
  _BYTE gap_1AAB[0x4];
  _BYTE field_1AAF;  // 0x1AAF
  _BYTE gap_1AB0[0x1];
  _BYTE field_1AB1;  // 0x1AB1
};

struct SumoBroLightning
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0x10];
  _DWORD field_14;  // 0x14
  _BYTE gap_18[0x3E];
  _BYTE field_56;  // 0x56
  _BYTE gap_57[0xD];
  float field_64;  // 0x64
  _BYTE gap_68[0x4];
  _DWORD field_6C;  // 0x6C
  float field_70;  // 0x70
  float field_74;  // 0x74
  _BYTE gap_78[0x4];
  float field_7C;  // 0x7C
  _BYTE gap_80[0x8];
  float field_88;  // 0x88
  _BYTE gap_8C[0x28];
  _DWORD field_B4;  // 0xB4
  _BYTE gap_B8[0x4];
  _DWORD field_BC;  // 0xBC
  _BYTE gap_C0[0x1C8];
  _BYTE field_288;  // 0x288
  _BYTE gap_289[0x8AF];
  _BYTE field_B38;  // 0xB38
  _BYTE gap_B39[0x133];
  _DWORD field_C6C;  // 0xC6C
  _BYTE gap_C70[0x4];
  _DWORD field_C74;  // 0xC74
  _BYTE gap_C78[0x4];
  _DWORD field_C7C;  // 0xC7C
  _BYTE gap_C80[0x4];
  _DWORD field_C84;  // 0xC84
  _BYTE gap_C88[0xB3C];
  _DWORD field_17C4;  // 0x17C4
  _BYTE gap_17C8[0x190];
  _DWORD field_1958;  // 0x1958
};

struct SumoBrosBoss
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0x4C];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x10];
  _DWORD field_64;  // 0x64
  _DWORD field_68;  // 0x68
  Vec3 vec3_6C;  // 0x6C
  _DWORD field_78;  // 0x78
  _DWORD field_7C;  // 0x7C
  _DWORD field_80;  // 0x80
  _DWORD field_84;  // 0x84
  _DWORD field_88;  // 0x88
  _DWORD field_8C;  // 0x8C
  float field_90;  // 0x90
  float field_94;  // 0x94
  float field_98;  // 0x98
  _DWORD field_9C;  // 0x9C
  _DWORD field_A0;  // 0xA0
  _BYTE gap_A4[0x18];
  ActiveCollider activeCollider_BC;  // 0xBC
  _BYTE gap_1EC[0x38];
  _DWORD field_224;  // 0x224
  _BYTE gap_228[0x60];
  CollisionMgr collisionMgr_288;  // 0x288
  _BYTE gap_1770[0x54];
  StateMgr stateMgr_17C4;  // 0x17C4
  _DWORD field_17D4;  // 0x17D4
  _DWORD field_17D8;  // 0x17D8
  _DWORD field_17DC;  // 0x17DC
  _DWORD field_17E0;  // 0x17E0
  _DWORD field_17E4;  // 0x17E4
  _BYTE gap_17E8[0x8];
  _DWORD field_17F0;  // 0x17F0
  _BYTE gap_17F4[0x90];
  _WORD field_1884;  // 0x1884
  _WORD field_1886;  // 0x1886
  _BYTE gap_1888[0x14];
  _DWORD field_189C;  // 0x189C
  _DWORD field_18A0;  // 0x18A0
  _DWORD field_18A4;  // 0x18A4
  _BYTE field_18A8;  // 0x18A8
  _BYTE field_18A9;  // 0x18A9
  _BYTE gap_18AA[0x17A];
  float field_1A24;  // 0x1A24
  float field_1A28;  // 0x1A28
  float field_1A2C;  // 0x1A2C
  _BYTE gap_1A30[0x10];
  ActiveCollider activeCollider_1A40;  // 0x1A40
  _BYTE gap_1B70[0x4];
  _DWORD field_1B74;  // 0x1B74
  float field_1B78;  // 0x1B78
  _DWORD field_1B7C;  // 0x1B7C
  _DWORD field_1B80;  // 0x1B80
  _DWORD field_1B84;  // 0x1B84
  _DWORD field_1B88;  // 0x1B88
  _DWORD field_1B8C;  // 0x1B8C
  _DWORD field_1B90;  // 0x1B90
  _DWORD field_1B94;  // 0x1B94
  _DWORD field_1B98;  // 0x1B98
  _DWORD field_1B9C;  // 0x1B9C
  _DWORD field_1BA0;  // 0x1BA0
  _DWORD field_1BA4;  // 0x1BA4
  _DWORD field_1BA8;  // 0x1BA8
  _DWORD field_1BAC;  // 0x1BAC
  _DWORD field_1BB0;  // 0x1BB0
  _BYTE gap_1BB4[0x4];
  _DWORD field_1BB8;  // 0x1BB8
  _DWORD field_1BBC;  // 0x1BBC
  _DWORD field_1BC0;  // 0x1BC0
  _DWORD field_1BC4;  // 0x1BC4
  _BYTE gap_1BC8[0x64];
  _DWORD field_1C2C;  // 0x1C2C
  _BYTE gap_1C30[0x64];
  _DWORD field_1C94;  // 0x1C94
  _BYTE gap_1C98[0x3C];
  _DWORD field_1CD4;  // 0x1CD4
  _BYTE gap_1CD8[0x18];
  _DWORD field_1CF0;  // 0x1CF0
  _BYTE gap_1CF4[0xC];
  _WORD field_1D00;  // 0x1D00
  _BYTE field_1D02;  // 0x1D02
  _BYTE field_1D03;  // 0x1D03
  _BYTE gap_1D04[0x5];
  _BYTE field_1D09;  // 0x1D09
  _BYTE field_1D0A;  // 0x1D0A
  _BYTE gap_1D0B[0x1];
  _BYTE field_1D0C;  // 0x1D0C
  _BYTE field_1D0D;  // 0x1D0D
  _BYTE field_1D0E;  // 0x1D0E
  _BYTE field_1D0F;  // 0x1D0F
  _BYTE gap_1D10[0x2];
  _BYTE field_1D12;  // 0x1D12
};

struct SwingingCollider
{
  ColliderBase base;  // 0x0, base class (first ctor call)
  _BYTE gap_154[0x2C];
  _DWORD field_180;  // 0x180
  _BYTE gap_184[0x4];
  _DWORD field_188;  // 0x188
  _BYTE gap_18C[0x18];
  float field_1A4;  // 0x1A4
  float field_1A8;  // 0x1A8
};

struct TerrainActor
{
  MultiStateActor base;  // 0x0, base class (first ctor call)
  _BYTE gap_17D8[0x8];
  _DWORD field_17E0;  // 0x17E0
  _DWORD field_17E4;  // 0x17E4
  _DWORD field_17E8;  // 0x17E8
  _DWORD field_17EC;  // 0x17EC
  _DWORD field_17F0;  // 0x17F0
  _DWORD field_17F4;  // 0x17F4
  ColliderBase colliderBase_17F8;  // 0x17F8
  _BYTE gap_194C[0x168];
  _DWORD field_1AB4;  // 0x1AB4
  _BYTE gap_1AB8[0x4];
  float field_1ABC;  // 0x1ABC
  _BYTE gap_1AC0[0x8];
  float field_1AC8;  // 0x1AC8
  float field_1ACC;  // 0x1ACC
  _BYTE gap_1AD0[0x4];
  float field_1AD4;  // 0x1AD4
  float field_1AD8;  // 0x1AD8
  float field_1ADC;  // 0x1ADC
  _BYTE gap_1AE0[0xA];
  _WORD field_1AEA;  // 0x1AEA
  _BYTE field_1AEC;  // 0x1AEC
  _BYTE field_1AED;  // 0x1AED
  _BYTE field_1AEE;  // 0x1AEE
  _BYTE gap_1AEF[0x5];
  _DWORD field_1AF4;  // 0x1AF4
  _BYTE gap_1AF8[0xC];
  float field_1B04;  // 0x1B04
  _BYTE gap_1B08[0xFF38];
  StageActor stageActor_11A40;  // 0x11A40
};

struct TerrainEffects
{
  _BYTE gap_0[0x4];
  _DWORD field_4;  // 0x4
  _DWORD field_8;  // 0x8
  _DWORD field_C;  // 0xC
  _DWORD field_10;  // 0x10
  _DWORD field_14;  // 0x14
  _DWORD field_18;  // 0x18
  _DWORD field_1C;  // 0x1C
  float field_20;  // 0x20
  _DWORD field_24;  // 0x24
  _DWORD field_28;  // 0x28
  _DWORD field_2C;  // 0x2C
  _BYTE gap_30[0x4];
  _DWORD field_34;  // 0x34
  _BYTE gap_38[0x4];
  _DWORD field_3C;  // 0x3C
  _BYTE gap_40[0x4];
  _DWORD field_44;  // 0x44
  _BYTE gap_48[0x4];
  _DWORD field_4C;  // 0x4C
  _BYTE gap_50[0x4];
  _DWORD field_54;  // 0x54
  _BYTE gap_58[0x4];
  float field_5C;  // 0x5C
  _BYTE gap_60[0x4];
  _DWORD field_64;  // 0x64
  _BYTE gap_68[0x4];
  _DWORD field_6C;  // 0x6C
  _BYTE gap_70[0x4];
  _DWORD field_74;  // 0x74
  _BYTE gap_78[0x4];
  _DWORD field_7C;  // 0x7C
  _BYTE gap_80[0x4];
  _DWORD field_84;  // 0x84
  _BYTE gap_88[0x4];
  float field_8C;  // 0x8C
  float field_90;  // 0x90
  _DWORD field_94;  // 0x94
  _DWORD field_98;  // 0x98
  _DWORD field_9C;  // 0x9C
  _DWORD field_A0;  // 0xA0
  _DWORD field_A4;  // 0xA4
  _DWORD field_A8;  // 0xA8
  _DWORD field_AC;  // 0xAC
  _DWORD field_B0;  // 0xB0
  _DWORD field_B4;  // 0xB4
  _DWORD field_B8;  // 0xB8
  _DWORD field_BC;  // 0xBC
  _DWORD field_C0;  // 0xC0
  _DWORD field_C4;  // 0xC4
  _DWORD field_C8;  // 0xC8
  _DWORD field_CC;  // 0xCC
  _BYTE gap_D0[0x8];
  _DWORD field_D8;  // 0xD8
  _DWORD field_DC;  // 0xDC
  float field_E0;  // 0xE0
  float field_E4;  // 0xE4
  _BYTE field_E8;  // 0xE8
  _BYTE field_E9;  // 0xE9
  _BYTE gap_EA[0x2];
  _DWORD field_EC;  // 0xEC
  _DWORD field_F0;  // 0xF0
  _DWORD field_F4;  // 0xF4
  _DWORD field_F8;  // 0xF8
  _DWORD field_FC;  // 0xFC
  _DWORD field_100;  // 0x100
  _BYTE gap_104[0xF8F4];
  _DWORD field_F9F8;  // 0xF9F8
  _BYTE gap_F9FC[0x548];
  _DWORD field_FF44;  // 0xFF44
  _DWORD field_FF48;  // 0xFF48
  _BYTE gap_FF4C[0xC358];
  _DWORD field_1C2A4;  // 0x1C2A4
  _DWORD field_1C2A8;  // 0x1C2A8
  _WORD field_1C2AC;  // 0x1C2AC
  _WORD field_1C2AE;  // 0x1C2AE
};

struct Thwomp
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0xF];
  _BYTE field_13;  // 0x13
  _DWORD field_14;  // 0x14
  _BYTE gap_18[0x38];
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x10];
  float field_64;  // 0x64
  _BYTE gap_68[0x4];
  _DWORD field_6C;  // 0x6C
  _DWORD field_70;  // 0x70
  _DWORD field_74;  // 0x74
  _BYTE gap_78[0x4];
  _DWORD field_7C;  // 0x7C
  _BYTE gap_80[0x4];
  float field_84;  // 0x84
  _DWORD field_88;  // 0x88
  float field_8C;  // 0x8C
  _BYTE gap_90[0xC];
  _DWORD field_9C;  // 0x9C
  _DWORD field_A0;  // 0xA0
  _DWORD field_A4;  // 0xA4
  _BYTE gap_A8[0x14];
  _DWORD field_BC;  // 0xBC
  _BYTE gap_C0[0x134];
  float field_1F4;  // 0x1F4
  float field_1F8;  // 0x1F8
  float field_1FC;  // 0x1FC
  _DWORD field_200;  // 0x200
  _BYTE gap_204[0x38];
  float field_23C;  // 0x23C
  float field_240;  // 0x240
  float field_244;  // 0x244
  _BYTE gap_248[0x24];
  _DWORD field_26C;  // 0x26C
  _DWORD field_270;  // 0x270
  _BYTE gap_274[0x14];
  _BYTE field_288;  // 0x288
  _BYTE gap_289[0x153B];
  StateMgr stateMgr_17C4;  // 0x17C4
  _BYTE gap_17D4[0xB0];
  _WORD field_1884;  // 0x1884
  _BYTE gap_1886[0x1A];
  _DWORD field_18A0;  // 0x18A0
  _BYTE gap_18A4[0x10];
  float field_18B4;  // 0x18B4
  _BYTE gap_18B8[0x4];
  float field_18BC;  // 0x18BC
  float field_18C0;  // 0x18C0
  _DWORD field_18C4;  // 0x18C4
  _DWORD field_18C8;  // 0x18C8
  _DWORD field_18CC;  // 0x18CC
  _DWORD field_18D0;  // 0x18D0
  _BYTE gap_18D4[0x64];
  ActiveCollider activeCollider_1938;  // 0x1938
};

struct TileGod
{
  _DWORD field_0;  // 0x0
  _BYTE gap_4[0xF];
  _BYTE field_13;  // 0x13
  _DWORD field_14;  // 0x14
  _DWORD field_18;  // 0x18
  _BYTE gap_1C[0x50];
  float field_6C;  // 0x6C
  float field_70;  // 0x70
  _BYTE gap_74[0x1A7];
  _BYTE field_21B;  // 0x21B
  _BYTE field_21C;  // 0x21C
  _BYTE gap_21D[0x15BB];
  _DWORD field_17D8;  // 0x17D8
  _DWORD field_17DC;  // 0x17DC
  _DWORD field_17E0;  // 0x17E0
  _DWORD field_17E4;  // 0x17E4
  _DWORD field_17E8;  // 0x17E8
  _DWORD field_17EC;  // 0x17EC
  _DWORD field_17F0;  // 0x17F0
  _DWORD field_17F4;  // 0x17F4
  _BYTE field_17F8;  // 0x17F8
};

struct Water
{
  _BYTE gap_0[0x15];
  _BYTE field_15;  // 0x15
  _BYTE gap_16[0x5E];
  _DWORD field_74;  // 0x74
  _BYTE gap_78[0x177C];
  _DWORD field_17F4;  // 0x17F4
  ColliderBase colliderBase_17F8;  // 0x17F8
  _BYTE gap_194C[0x168];
  _DWORD field_1AB4;  // 0x1AB4
  _BYTE gap_1AB8[0x36];
  _BYTE field_1AEE;  // 0x1AEE
  _BYTE gap_1AEF[0x5];
  _DWORD field_1AF4;  // 0x1AF4
  _BYTE gap_1AF8[0xFF48];
  StageActor stageActor_11A40;  // 0x11A40
};

struct nn__atk__SoundActor
{
  _BYTE gap_0[0x4];
  _DWORD field_4;  // 0x4
  _BYTE gap_8[0x40];
  _DWORD field_48;  // 0x48
  _DWORD field_4C;  // 0x4C
  _DWORD field_50;  // 0x50
  _DWORD field_54;  // 0x54
  _DWORD field_58;  // 0x58
  _DWORD field_5C;  // 0x5C
  _DWORD field_60;  // 0x60
  _DWORD field_64;  // 0x64
  _DWORD field_68;  // 0x68
  _DWORD field_6C;  // 0x6C
  _DWORD field_70;  // 0x70
  _BYTE field_74;  // 0x74
  _BYTE field_75;  // 0x75
};

struct nn__g3d__SkeletalAnimObj
{
  _BYTE gap_0[0x20];
  _DWORD field_20;  // 0x20
  _DWORD field_24;  // 0x24
  _DWORD field_28;  // 0x28
  _DWORD field_2C;  // 0x2C
  _BYTE gap_30[0xC];
  _WORD field_3C;  // 0x3C
  _BYTE gap_3E[0x6];
  _DWORD field_44;  // 0x44
  _BYTE gap_48[0x8];
  _DWORD field_50;  // 0x50
};

struct sead__Heap
{
  _BYTE gap_0[0x10];
  _DWORD field_10;  // 0x10
  _DWORD field_14;  // 0x14
  _DWORD field_18;  // 0x18
  _DWORD field_1C;  // 0x1C
  _DWORD field_20;  // 0x20
  _DWORD field_24;  // 0x24
  _DWORD field_28;  // 0x28
  _DWORD field_2C;  // 0x2C
  _DWORD field_30;  // 0x30
  _DWORD field_34;  // 0x34
  _DWORD field_38;  // 0x38
  _DWORD field_3C;  // 0x3C
  sead_ListNode sead_ListNode_40;  // 0x40
  _DWORD field_48;  // 0x48
  _DWORD field_4C;  // 0x4C
  _DWORD field_50;  // 0x50
  _BYTE gap_54[0x24];
  _WORD field_78;  // 0x78
  _WORD field_7A;  // 0x7A
};

struct BlockBase
{
  MovementBlockCoinBase base;  // 0x0, base class (first ctor call)
  _BYTE gap_1CB4[0x14];
  _DWORD field_1CC8;  // 0x1CC8
  _DWORD field_1CCC;  // 0x1CCC
  _BYTE gap_1CD0[0x1];
  _BYTE field_1CD1;  // 0x1CD1
  _BYTE gap_1CD2[0x2];
  _DWORD field_1CD4;  // 0x1CD4
  _BYTE field_1CD8;  // 0x1CD8
  _BYTE field_1CD9;  // 0x1CD9
  _BYTE gap_1CDA[0x6];
};

struct CoinBase
{
  MovementBlockCoinBase base;  // 0x0, base class (first ctor call)
  _BYTE gap_1CB4[0x4];
  _DWORD field_1CB8;  // 0x1CB8
  _DWORD field_1CBC;  // 0x1CBC
  _DWORD field_1CC0;  // 0x1CC0
  _DWORD field_1CC4;  // 0x1CC4
  _DWORD field_1CC8;  // 0x1CC8
  _DWORD field_1CCC;  // 0x1CCC
  _WORD field_1CD0;  // 0x1CD0
  _BYTE gap_1CD2[0x2];
  _DWORD field_1CD4;  // 0x1CD4
  _DWORD field_1CD8;  // 0x1CD8
  _DWORD field_1CDC;  // 0x1CDC
  _DWORD field_1CE0;  // 0x1CE0
  _DWORD field_1CE4;  // 0x1CE4
  _BYTE gap_1CE8[0x2];
  _BYTE field_1CEA;  // 0x1CEA
  _BYTE gap_1CEB[0x1];
  _BYTE field_1CEC;  // 0x1CEC
  _BYTE gap_1CED[0x3];
  _BYTE field_1CF0;  // 0x1CF0
  _BYTE gap_1CF1[0x3];
  _DWORD field_1CF4;  // 0x1CF4
  _DWORD field_1CF8;  // 0x1CF8
  _DWORD field_1CFC;  // 0x1CFC
  _DWORD field_1D00;  // 0x1D00
  _BYTE gap_1D04[0x20];
  _DWORD field_1D24;  // 0x1D24
  _BYTE field_1D28;  // 0x1D28
  _BYTE field_1D29;  // 0x1D29
  _BYTE field_1D2A;  // 0x1D2A
  _BYTE gap_1D2B[0x1];
  _DWORD field_1D2C;  // 0x1D2C
  _DWORD field_1D30;  // 0x1D30
  _DWORD field_1D34;  // 0x1D34
  _BYTE field_1D38;  // 0x1D38
  _BYTE gap_1D39[0x7];
};

struct Player
{
  PlayerBase base;  // 0x0, base class (first ctor call)
  _BYTE gap_2C54[0xC];
  _DWORD field_2C60;  // 0x2C60
  _BYTE gap_2C64[0x14];
  _DWORD mModePrev;  // 0x2C78  README.md player field list
  _DWORD mModeNext;  // 0x2C7C  docs/HAMMER_POWERUP_REPORT.md:432 (written by sub_607A27A8)
  float field_2C80;  // 0x2C80
  float field_2C84;  // 0x2C84
  _BYTE gap_2C88[0x54];
  _DWORD field_2CDC;  // 0x2CDC
  _BYTE gap_2CE0[0x1F4];
  _DWORD field_2ED4;  // 0x2ED4
  _BYTE gap_2ED8[0x8];
  float field_2EE0;  // 0x2EE0
  _BYTE gap_2EE4[0x18];
  float field_2EFC;  // 0x2EFC
  _BYTE gap_2F00[0x28];
  _DWORD field_2F28;  // 0x2F28
  _BYTE gap_2F2C[0x50];
  float field_2F7C;  // 0x2F7C
  _BYTE gap_2F80[0x27C];
  _DWORD field_31FC;  // 0x31FC
  _BYTE gap_3200[0x75];
  _BYTE field_3275;  // 0x3275
  _BYTE field_3276;  // 0x3276
  _BYTE gap_3277[0x1];
  _DWORD field_3278;  // 0x3278
  _DWORD field_327C;  // 0x327C
  _BYTE gap_3280[0x794];
  _DWORD field_3A14;  // 0x3A14
  _DWORD field_3A18;  // 0x3A18
  EffectWrapper effectWrapper_3A1C;  // 0x3A1C
  _BYTE gap_3A84[0x58];
  _DWORD field_3ADC;  // 0x3ADC
  _BYTE gap_3AE0[0x4];
  _BYTE field_3AE4;  // 0x3AE4
  _BYTE gap_3AE5[0x13];
};

