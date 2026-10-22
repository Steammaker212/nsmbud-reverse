/* NSMBU Deluxe (Switch) v1.0.0 -- recovered struct layouts
 *
 * GENERATED from constructor evidence. Two independent channels back every member:
 *
 *   A) STORES.  A `STR/STRH/STRB Rt,[this,#off]` in a class's constructor proves a
 *      field at #off, with width fixed by the store instruction. `this` is tracked
 *      as a live register alias, so stores to other objects are rejected.
 *
 *   B) SUB-OBJECTS.  An in-place construction
 *          MOVW R0,#off ; ADD R0,Rthis,R0 ; BL X::X
 *      proves a member of type X at #off. Where two such constructions are
 *      adjacent, the gap yields X's SIZE -- which is how ActiveCollider is pinned
 *      at 0x130 from 20 independent boundaries.
 *
 * Three honesty notes:
 *
 *  1. Field WIDTH is exact; the TYPE is not. `uint32_t` means "4-byte field", not
 *     "an int32". Read these as offsets, not types.
 *
 *  2. Coverage is deliberately INCOMPLETE. Offsets reached in ways the tracker
 *     cannot follow are omitted rather than guessed. Missing fields are acceptable;
 *     invented ones are not.
 *
 *  3. Classes marked VALIDATED were checked against offsets established by hand
 *     independently of this extraction.
 *
 * Do not edit by hand. Regenerate with .rea/ida_structs3.py, .rea/ida_subobjs.py,
 * then this script.
 */
#pragma once

#include <stdint.h>

/* RVAs are image-relative: VA = 0x60000000 + RVA */

/* ---- size-known opaque sub-object types ---- */
/*
 * Sizes come from adjacent in-place constructions, e.g. ActiveCollider at
 * FireballBase+0x1924 with the next sub-object at +0x1A54 gives 0x130,
 * confirmed by 20 independent boundaries. Contents not recovered.
 */
typedef struct CircularCollider { uint8_t _opaque[0x190]; } CircularCollider;
typedef struct LightMask { uint8_t _opaque[0x28]; } LightMask;
typedef struct LightSource { uint8_t _opaque[0x48]; } LightSource;
typedef struct PlayerLookTarget { uint8_t _opaque[0x2c]; } PlayerLookTarget;

/* ---- recovered class layouts ---- */

/* ActiveCollider -- 14 member(s) proven
 *
 * Derived from: ActiveCollider_ctor
 */
typedef struct ActiveCollider {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0010[0xC];
    uint32_t field_0010;   /* +0x0010 */
    uint32_t field_0014;   /* +0x0014 */
    uint32_t field_0018;   /* +0x0018 */
    uint32_t field_001C;   /* +0x001C */
    uint32_t field_0020;   /* +0x0020 */
    uint32_t field_0024;   /* +0x0024 */
    uint32_t field_0028;   /* +0x0028 */
    uint32_t field_002C;   /* +0x002C */
    uint32_t field_0030;   /* +0x0030 */
    uint32_t field_0034;   /* +0x0034 */
    uint8_t  _pad_006C[0x34];
    uint8_t field_006C;   /* +0x006C */
    uint8_t field_006D;   /* +0x006D */
    uint8_t field_006E;   /* +0x006E */
    /* struct size >= 0x6f (111) */
    uint8_t _pad_to_sizeof[0xBE];   /* +0x072 .. total 0x130, matches main.i64 sizeof */
} ActiveCollider;

/* Actor -- 25 member(s) proven
 *
 * Derived from: _ZN5ActorC1EPK14ActorBuildInfo
 */
typedef struct Actor {
    uint32_t field_0000;   /* +0x0000 */
    uint32_t field_0004;   /* +0x0004 */
    uint32_t field_0008;   /* +0x0008 */
    uint32_t field_000C;   /* +0x000C */
    uint8_t field_0010;   /* +0x0010 */
    uint8_t field_0011;   /* +0x0011 */
    uint8_t field_0012;   /* +0x0012 */
    uint8_t field_0013;   /* +0x0013 */
    uint32_t field_0014;   /* +0x0014 */
    uint32_t field_0018;   /* +0x0018 */
    uint8_t field_001C;   /* +0x001C */
    uint8_t field_001D;   /* +0x001D */
    uint8_t field_001E;   /* +0x001E */
    uint8_t  _pad_0020[0x1];
    uint32_t field_0020;   /* +0x0020 */
    uint32_t field_0024;   /* +0x0024 */
    uint32_t field_0028;   /* +0x0028 */
    uint32_t field_002C;   /* +0x002C */
    uint32_t field_0030;   /* +0x0030 */
    uint32_t field_0034;   /* +0x0034 */
    uint32_t field_0038;   /* +0x0038 */
    uint32_t field_003C;   /* +0x003C */
    uint32_t field_0040;   /* +0x0040 */
    uint32_t field_0044;   /* +0x0044 */
    uint32_t field_0048;   /* +0x0048 */
    uint32_t field_004C;   /* +0x004C */
    /* struct size >= 0x50 (80) */
} Actor;

/* BasicSoundActor -- 59 member(s) proven
 *
 * Derived from: BasicSoundActor_ctor
 */
typedef struct BasicSoundActor {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0078[0x74];
    uint32_t field_0078;   /* +0x0078 */
    uint8_t  _pad_0080[0x4];
    uint32_t field_0080;   /* +0x0080 */
    uint8_t  _pad_008C[0x8];
    uint32_t field_008C;   /* +0x008C */
    uint32_t field_0090;   /* +0x0090 */
    uint8_t  _pad_0098[0x4];
    uint32_t field_0098;   /* +0x0098 */
    uint32_t field_009C;   /* +0x009C */
    uint32_t field_00A0;   /* +0x00A0 */
    uint32_t field_00A4;   /* +0x00A4 */
    uint8_t  _pad_00AC[0x4];
    uint32_t field_00AC;   /* +0x00AC */
    uint32_t field_00B0;   /* +0x00B0 */
    uint32_t field_00B4;   /* +0x00B4 */
    uint32_t field_00B8;   /* +0x00B8 */
    uint8_t  _pad_00C0[0x4];
    uint32_t field_00C0;   /* +0x00C0 */
    uint32_t field_00C4;   /* +0x00C4 */
    uint32_t field_00C8;   /* +0x00C8 */
    uint32_t field_00CC;   /* +0x00CC */
    uint8_t  _pad_00D4[0x4];
    uint32_t field_00D4;   /* +0x00D4 */
    uint32_t field_00D8;   /* +0x00D8 */
    uint32_t field_00DC;   /* +0x00DC */
    uint32_t field_00E0;   /* +0x00E0 */
    uint8_t  _pad_00E8[0x4];
    uint32_t field_00E8;   /* +0x00E8 */
    uint32_t field_00EC;   /* +0x00EC */
    uint32_t field_00F0;   /* +0x00F0 */
    uint32_t field_00F4;   /* +0x00F4 */
    uint8_t  _pad_00FC[0x4];
    uint32_t field_00FC;   /* +0x00FC */
    uint32_t field_0100;   /* +0x0100 */
    uint32_t field_0104;   /* +0x0104 */
    uint32_t field_0108;   /* +0x0108 */
    uint8_t  _pad_0110[0x4];
    uint32_t field_0110;   /* +0x0110 */
    uint32_t field_0114;   /* +0x0114 */
    uint32_t field_0118;   /* +0x0118 */
    uint32_t field_011C;   /* +0x011C */
    uint8_t  _pad_0124[0x4];
    uint32_t field_0124;   /* +0x0124 */
    uint32_t field_0128;   /* +0x0128 */
    uint32_t field_012C;   /* +0x012C */
    uint32_t field_0130;   /* +0x0130 */
    uint8_t  _pad_0138[0x4];
    uint32_t field_0138;   /* +0x0138 */
    uint32_t field_013C;   /* +0x013C */
    uint32_t field_0140;   /* +0x0140 */
    uint32_t field_0144;   /* +0x0144 */
    uint8_t  _pad_014C[0x4];
    uint32_t field_014C;   /* +0x014C */
    uint32_t field_0150;   /* +0x0150 */
    uint32_t field_0154;   /* +0x0154 */
    uint32_t field_0158;   /* +0x0158 */
    uint8_t  _pad_0160[0x4];
    uint32_t field_0160;   /* +0x0160 */
    uint32_t field_0164;   /* +0x0164 */
    uint32_t field_0168;   /* +0x0168 */
    uint32_t field_016C;   /* +0x016C */
    uint8_t  _pad_0174[0x4];
    uint32_t field_0174;   /* +0x0174 */
    uint32_t field_0178;   /* +0x0178 */
    uint32_t field_017C;   /* +0x017C */
    uint32_t field_0180;   /* +0x0180 */
    uint8_t  _pad_0188[0x4];
    uint32_t field_0188;   /* +0x0188 */
    uint32_t field_018C;   /* +0x018C */
    uint32_t field_0190;   /* +0x0190 */
    uint32_t field_0194;   /* +0x0194 */
    uint8_t  _pad_019C[0x4];
    uint32_t field_019C;   /* +0x019C */
    uint32_t field_01A0;   /* +0x01A0 */
    /* struct size >= 0x1a4 (420) */
} BasicSoundActor;

/* BlockBase -- 4 member(s) proven
 *
 * Derived from: _ZN9BlockBaseC2EPK14ActorBuildInfo
 */
typedef struct BlockBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_1CD4[0x1CD0];
    uint32_t field_1CD4;   /* +0x1CD4 */
    uint8_t field_1CD8;   /* +0x1CD8 */
    uint8_t field_1CD9;   /* +0x1CD9 */
    /* struct size >= 0x1cda (7386) */
} BlockBase;

/* BoomBoomBase -- 34 member(s) proven
 *
 * Derived from: _ZN12BoomBoomBaseC2EPK14ActorBuildInfo
 */
typedef struct BoomBoomBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_1BB4[0x1BB0];
    uint32_t field_1BB4;   /* +0x1BB4 */
    uint32_t field_1BB8;   /* +0x1BB8 */
    uint32_t field_1BBC;   /* +0x1BBC */
    uint32_t field_1BC0;   /* +0x1BC0 */
    uint32_t field_1BC4;   /* +0x1BC4 */
    uint32_t field_1BC8;   /* +0x1BC8 */
    uint32_t field_1BCC;   /* +0x1BCC */
    uint32_t field_1BD0;   /* +0x1BD0 */
    uint32_t field_1BD4;   /* +0x1BD4 */
    uint32_t field_1BD8;   /* +0x1BD8 */
    uint32_t field_1BDC;   /* +0x1BDC */
    uint32_t field_1BE0;   /* +0x1BE0 */
    uint32_t field_1BE4;   /* +0x1BE4 */
    uint32_t field_1BE8;   /* +0x1BE8 */
    uint32_t field_1BEC;   /* +0x1BEC */
    uint32_t field_1BF0;   /* +0x1BF0 */
    uint32_t field_1BF4;   /* +0x1BF4 */
    uint32_t field_1BF8;   /* +0x1BF8 */
    uint32_t field_1BFC;   /* +0x1BFC */
    uint32_t field_1C00;   /* +0x1C00 */
    uint32_t field_1C04;   /* +0x1C04 */
    uint32_t field_1C08;   /* +0x1C08 */
    uint32_t field_1C0C;   /* +0x1C0C */
    uint32_t field_1C10;   /* +0x1C10 */
    uint32_t field_1C14;   /* +0x1C14 */
    uint32_t field_1C18;   /* +0x1C18 */
    uint32_t field_1C1C;   /* +0x1C1C */
    uint32_t field_1C20;   /* +0x1C20 */
    uint8_t  _pad_1C54[0x30];
    uint32_t field_1C54;   /* +0x1C54 */
    uint8_t  _pad_1CBC[0x64];
    uint32_t field_1CBC;   /* +0x1CBC */
    uint8_t  _pad_1D5C[0x9C];
    uint32_t field_1D5C;   /* +0x1D5C */
    uint8_t  _pad_1D64[0x4];
    uint8_t field_1D64;   /* +0x1D64 */
    uint8_t  _pad_1D68[0x3];
    uint32_t field_1D68;   /* +0x1D68 */
    /* struct size >= 0x1d6c (7532) */
} BoomBoomBase;

/* BootScene -- 23 member(s) proven
 *
 * Derived from: BootScene_ctor
 */
typedef struct BootScene {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_00C0[0xBC];
    uint32_t field_00C0;   /* +0x00C0 */
    uint8_t  _pad_00E4[0x20];
    uint32_t field_00E4;   /* +0x00E4 */
    uint8_t  _pad_00F4[0xC];
    uint32_t field_00F4;   /* +0x00F4 */
    uint32_t field_00F8;   /* +0x00F8 */
    uint32_t field_00FC;   /* +0x00FC */
    uint32_t field_0100;   /* +0x0100 */
    uint32_t field_0104;   /* +0x0104 */
    uint32_t field_0108;   /* +0x0108 */
    uint32_t field_010C;   /* +0x010C */
    uint32_t field_0110;   /* +0x0110 */
    uint32_t field_0114;   /* +0x0114 */
    uint8_t  _pad_0128[0x10];
    uint32_t field_0128;   /* +0x0128 */
    uint8_t  _pad_0138[0xC];
    uint32_t field_0138;   /* +0x0138 */
    uint32_t field_013C;   /* +0x013C */
    uint32_t field_0140;   /* +0x0140 */
    uint32_t field_0144;   /* +0x0144 */
    uint32_t field_0148;   /* +0x0148 */
    uint8_t  _pad_0150[0x4];
    uint32_t field_0150;   /* +0x0150 */
    uint32_t field_0154;   /* +0x0154 */
    uint32_t field_0158;   /* +0x0158 */
    uint8_t  _pad_0160[0x4];
    uint8_t field_0160;   /* +0x0160 */
    uint8_t  _pad_0F70[0xE0F];
    uint8_t field_0F70;   /* +0x0F70 */
    /* struct size >= 0xf71 (3953) */
} BootScene;

/* BossBase -- 20 member(s) proven
 *
 * Derived from: _ZN8BossBaseC2EPK14ActorBuildInfo
 */
typedef struct BossBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_189C[0x1898];
    uint32_t field_189C;   /* +0x189C */
    uint32_t field_18A0;   /* +0x18A0 */
    uint32_t field_18A4;   /* +0x18A4 */
    uint16_t field_18A8;   /* +0x18A8 */
    uint8_t  _pad_18AC[0x2];
    uint32_t field_18AC;   /* +0x18AC */
    uint32_t field_18B0;   /* +0x18B0 */
    uint32_t field_18B4;   /* +0x18B4 */
    uint32_t field_18B8;   /* +0x18B8 */
    uint32_t field_18BC;   /* +0x18BC */
    uint8_t  _pad_19F0[0x130];
    uint16_t field_19F0;   /* +0x19F0 */
    uint8_t  _pad_1A20[0x2E];
    uint32_t field_1A20;   /* +0x1A20 */
    uint32_t field_1A24;   /* +0x1A24 */
    uint32_t field_1A28;   /* +0x1A28 */
    uint32_t field_1A2C;   /* +0x1A2C */
    uint32_t field_1A30;   /* +0x1A30 */
    uint32_t field_1A34;   /* +0x1A34 */
    uint32_t field_1A38;   /* +0x1A38 */
    uint32_t field_1A3C;   /* +0x1A3C */
    uint8_t  _pad_1B70[0x130];
    uint32_t field_1B70;   /* +0x1B70 */
    /* struct size >= 0x1b74 (7028) */
    uint8_t _pad_to_sizeof[0x40];   /* +0x1B74 .. total 0x1BB4, matches main.i64 sizeof */
} BossBase;

/* Bowser -- 103 member(s) proven
 *
 * Derived from: _ZN6BowserC1EPK14ActorBuildInfo
 */
typedef struct Bowser {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_1BB4[0x1BB0];
    uint32_t field_1BB4;   /* +0x1BB4 */
    uint32_t field_1BB8;   /* +0x1BB8 */
    uint32_t field_1BBC;   /* +0x1BBC */
    uint32_t field_1BC0;   /* +0x1BC0 */
    uint32_t field_1BC4;   /* +0x1BC4 */
    uint32_t field_1BC8;   /* +0x1BC8 */
    uint32_t field_1BCC;   /* +0x1BCC */
    uint32_t field_1BD0;   /* +0x1BD0 */
    uint32_t field_1BD4;   /* +0x1BD4 */
    uint32_t field_1BD8;   /* +0x1BD8 */
    uint8_t field_1BDC;   /* +0x1BDC */
    uint8_t  _pad_1BE0[0x3];
    uint32_t field_1BE0;   /* +0x1BE0 */
    uint32_t field_1BE4;   /* +0x1BE4 */
    uint32_t field_1BE8;   /* +0x1BE8 */
    uint32_t field_1BEC;   /* +0x1BEC */
    uint16_t field_1BF0;   /* +0x1BF0 */
    uint8_t field_1BF2;   /* +0x1BF2 */
    uint8_t  _pad_1BF4[0x1];
    uint32_t field_1BF4;   /* +0x1BF4 */
    uint32_t field_1BF8;   /* +0x1BF8 */
    uint32_t field_1BFC;   /* +0x1BFC */
    uint32_t field_1C00;   /* +0x1C00 */
    uint8_t  _pad_1E38[0x234];
    uint32_t field_1E38;   /* +0x1E38 */
    uint8_t  _pad_1E40[0x4];
    uint32_t field_1E40;   /* +0x1E40 */
    uint32_t field_1E44;   /* +0x1E44 */
    uint32_t field_1E48;   /* +0x1E48 */
    uint32_t field_1E4C;   /* +0x1E4C */
    uint32_t field_1E50;   /* +0x1E50 */
    uint32_t field_1E54;   /* +0x1E54 */
    uint32_t field_1E58;   /* +0x1E58 */
    uint32_t field_1E5C;   /* +0x1E5C */
    uint32_t field_1E60;   /* +0x1E60 */
    uint32_t field_1E64;   /* +0x1E64 */
    uint32_t field_1E68;   /* +0x1E68 */
    uint32_t field_1E6C;   /* +0x1E6C */
    uint32_t field_1E70;   /* +0x1E70 */
    uint32_t field_1E74;   /* +0x1E74 */
    uint32_t field_1E78;   /* +0x1E78 */
    uint32_t field_1E7C;   /* +0x1E7C */
    uint32_t field_1E80;   /* +0x1E80 */
    uint32_t field_1E84;   /* +0x1E84 */
    uint32_t field_1E88;   /* +0x1E88 */
    uint8_t  _pad_1F24[0x98];
    uint32_t field_1F24;   /* +0x1F24 */
    uint32_t field_1F28;   /* +0x1F28 */
    uint8_t  _pad_1F30[0x4];
    uint32_t field_1F30;   /* +0x1F30 */
    uint32_t field_1F34;   /* +0x1F34 */
    uint32_t field_1F38;   /* +0x1F38 */
    uint32_t field_1F3C;   /* +0x1F3C */
    uint32_t field_1F40;   /* +0x1F40 */
    uint32_t field_1F44;   /* +0x1F44 */
    uint32_t field_1F48;   /* +0x1F48 */
    uint8_t  _pad_1F50[0x4];
    uint32_t field_1F50;   /* +0x1F50 */
    uint32_t field_1F54;   /* +0x1F54 */
    uint32_t field_1F58;   /* +0x1F58 */
    uint32_t field_1F5C;   /* +0x1F5C */
    uint32_t field_1F60;   /* +0x1F60 */
    uint32_t field_1F64;   /* +0x1F64 */
    uint32_t field_1F68;   /* +0x1F68 */
    uint8_t  _pad_1F70[0x4];
    uint32_t field_1F70;   /* +0x1F70 */
    uint32_t field_1F74;   /* +0x1F74 */
    uint32_t field_1F78;   /* +0x1F78 */
    uint32_t field_1F7C;   /* +0x1F7C */
    uint32_t field_1F80;   /* +0x1F80 */
    uint32_t field_1F84;   /* +0x1F84 */
    uint32_t field_1F88;   /* +0x1F88 */
    uint8_t  _pad_1F90[0x4];
    uint32_t field_1F90;   /* +0x1F90 */
    uint32_t field_1F94;   /* +0x1F94 */
    uint32_t field_1F98;   /* +0x1F98 */
    uint32_t field_1F9C;   /* +0x1F9C */
    uint32_t field_1FA0;   /* +0x1FA0 */
    uint32_t field_1FA4;   /* +0x1FA4 */
    uint32_t field_1FA8;   /* +0x1FA8 */
    uint8_t  _pad_1FB0[0x4];
    uint32_t field_1FB0;   /* +0x1FB0 */
    uint32_t field_1FB4;   /* +0x1FB4 */
    uint32_t field_1FB8;   /* +0x1FB8 */
    uint32_t field_1FBC;   /* +0x1FBC */
    uint32_t field_1FC0;   /* +0x1FC0 */
    uint32_t field_1FC4;   /* +0x1FC4 */
    uint32_t field_1FC8;   /* +0x1FC8 */
    uint8_t  _pad_1FD0[0x4];
    uint32_t field_1FD0;   /* +0x1FD0 */
    uint32_t field_1FD4;   /* +0x1FD4 */
    uint32_t field_1FD8;   /* +0x1FD8 */
    uint32_t field_1FDC;   /* +0x1FDC */
    uint32_t field_1FE0;   /* +0x1FE0 */
    uint32_t field_1FE4;   /* +0x1FE4 */
    uint32_t field_1FE8;   /* +0x1FE8 */
    uint8_t  _pad_1FF0[0x4];
    uint32_t field_1FF0;   /* +0x1FF0 */
    uint32_t field_1FF4;   /* +0x1FF4 */
    uint32_t field_1FF8;   /* +0x1FF8 */
    uint32_t field_1FFC;   /* +0x1FFC */
    uint32_t field_2000;   /* +0x2000 */
    uint32_t field_2004;   /* +0x2004 */
    uint32_t field_2008;   /* +0x2008 */
    uint8_t  _pad_2010[0x4];
    uint32_t field_2010;   /* +0x2010 */
    uint32_t field_2014;   /* +0x2014 */
    uint32_t field_2018;   /* +0x2018 */
    uint32_t field_201C;   /* +0x201C */
    uint32_t field_2020;   /* +0x2020 */
    uint32_t field_2024;   /* +0x2024 */
    uint32_t field_2028;   /* +0x2028 */
    uint32_t field_202C;   /* +0x202C */
    uint8_t  _pad_2620[0x5F0];
    uint32_t field_2620;   /* +0x2620 */
    uint32_t field_2624;   /* +0x2624 */
    /* struct size >= 0x2628 (9768) */
} Bowser;

/* BowserJrBase -- 15 member(s) proven
 *
 * Derived from: _ZN12BowserJrBaseC2EPK14ActorBuildInfo
 */
typedef struct BowserJrBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_1A10[0x1A0C];
    uint32_t field_1A10;   /* +0x1A10 */
    uint8_t  _pad_1C48[0x234];
    uint32_t field_1C48;   /* +0x1C48 */
    uint32_t field_1C4C;   /* +0x1C4C */
    uint8_t field_1C50;   /* +0x1C50 */
    uint8_t  _pad_1C54[0x3];
    uint32_t field_1C54;   /* +0x1C54 */
    uint8_t  _pad_1C5C[0x4];
    uint32_t field_1C5C;   /* +0x1C5C */
    uint16_t field_1C60;   /* +0x1C60 */
    uint8_t field_1C62;   /* +0x1C62 */
    uint8_t  _pad_1C64[0x1];
    uint32_t field_1C64;   /* +0x1C64 */
    uint8_t  _pad_1CCC[0x64];
    uint32_t field_1CCC;   /* +0x1CCC */
    uint8_t  _pad_1D68[0x98];
    uint32_t field_1D68;   /* +0x1D68 */
    uint32_t field_1D6C;   /* +0x1D6C */
    uint8_t  _pad_1DA8[0x38];
    uint32_t field_1DA8;   /* +0x1DA8 */
    uint32_t field_1DAC;   /* +0x1DAC */
    /* struct size >= 0x1db0 (7600) */
} BowserJrBase;

/* CalculateTask -- 17 member(s) proven
 *
 * Derived from: _ZN4sead13CalculateTaskC2ERKNS_16TaskConstructArgEPKc
 */
typedef struct CalculateTask {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0020[0x1C];
    uint32_t field_0020;   /* +0x0020 */
    uint32_t field_0024;   /* +0x0024 */
    uint32_t field_0028;   /* +0x0028 */
    uint32_t field_002C;   /* +0x002C */
    uint32_t field_0030;   /* +0x0030 */
    uint32_t field_0034;   /* +0x0034 */
    uint32_t field_0038;   /* +0x0038 */
    uint32_t field_003C;   /* +0x003C */
    uint8_t  _pad_0044[0x4];
    uint32_t field_0044;   /* +0x0044 */
    uint32_t field_0048;   /* +0x0048 */
    uint32_t field_004C;   /* +0x004C */
    uint8_t  _pad_009C[0x4C];
    uint32_t field_009C;   /* +0x009C */
    uint32_t field_00A0;   /* +0x00A0 */
    uint32_t field_00A4;   /* +0x00A4 */
    uint32_t field_00A8;   /* +0x00A8 */
    uint8_t  _pad_00B4[0x8];
    uint32_t field_00B4;   /* +0x00B4 */
    /* struct size >= 0xb8 (184) */
} CalculateTask;

/* ChallengeResultScene -- 33 member(s) proven
 *
 * Derived from: ChallengeResultScene_ctor
 */
typedef struct ChallengeResultScene {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_01C4[0x1C0];
    uint32_t field_01C4;   /* +0x01C4 */
    uint8_t  _pad_01E8[0x20];
    uint32_t field_01E8;   /* +0x01E8 */
    uint8_t  _pad_01F8[0xC];
    uint32_t field_01F8;   /* +0x01F8 */
    uint32_t field_01FC;   /* +0x01FC */
    uint32_t field_0200;   /* +0x0200 */
    uint32_t field_0204;   /* +0x0204 */
    uint32_t field_0208;   /* +0x0208 */
    uint32_t field_020C;   /* +0x020C */
    uint32_t field_0210;   /* +0x0210 */
    uint32_t field_0214;   /* +0x0214 */
    uint32_t field_0218;   /* +0x0218 */
    uint8_t  _pad_022C[0x10];
    uint32_t field_022C;   /* +0x022C */
    uint8_t  _pad_023C[0xC];
    uint32_t field_023C;   /* +0x023C */
    uint32_t field_0240;   /* +0x0240 */
    uint32_t field_0244;   /* +0x0244 */
    uint32_t field_0248;   /* +0x0248 */
    uint32_t field_024C;   /* +0x024C */
    uint32_t field_0250;   /* +0x0250 */
    uint32_t field_0254;   /* +0x0254 */
    uint32_t field_0258;   /* +0x0258 */
    uint32_t field_025C;   /* +0x025C */
    uint8_t  _pad_0270[0x10];
    uint32_t field_0270;   /* +0x0270 */
    uint8_t  _pad_0280[0xC];
    uint32_t field_0280;   /* +0x0280 */
    uint32_t field_0284;   /* +0x0284 */
    uint32_t field_0288;   /* +0x0288 */
    uint32_t field_028C;   /* +0x028C */
    uint32_t field_0290;   /* +0x0290 */
    uint32_t field_0294;   /* +0x0294 */
    uint32_t field_0298;   /* +0x0298 */
    uint32_t field_029C;   /* +0x029C */
    uint32_t field_02A0;   /* +0x02A0 */
    uint8_t  _pad_2A64[0x27C0];
    uint32_t field_2A64;   /* +0x2A64 */
    /* struct size >= 0x2a68 (10856) */
} ChallengeResultScene;

/* ChallengeRetryScene -- 13 member(s) proven
 *
 * Derived from: ChallengeRetryScene_ctor
 */
typedef struct ChallengeRetryScene {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_01C4[0x1C0];
    uint32_t field_01C4;   /* +0x01C4 */
    uint8_t  _pad_01E8[0x20];
    uint32_t field_01E8;   /* +0x01E8 */
    uint8_t  _pad_01F8[0xC];
    uint32_t field_01F8;   /* +0x01F8 */
    uint32_t field_01FC;   /* +0x01FC */
    uint32_t field_0200;   /* +0x0200 */
    uint32_t field_0204;   /* +0x0204 */
    uint32_t field_0208;   /* +0x0208 */
    uint32_t field_020C;   /* +0x020C */
    uint32_t field_0210;   /* +0x0210 */
    uint32_t field_0214;   /* +0x0214 */
    uint32_t field_0218;   /* +0x0218 */
    uint8_t  _pad_0D78[0xB5C];
    uint32_t field_0D78;   /* +0x0D78 */
    /* struct size >= 0xd7c (3452) */
} ChallengeRetryScene;

/* CoinBase -- 32 member(s) proven
 *
 * Derived from: _ZN8CoinBaseC2EPK14ActorBuildInfo
 */
typedef struct CoinBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_009C[0x98];
    uint32_t field_009C;   /* +0x009C */
    uint32_t field_00A0;   /* +0x00A0 */
    uint32_t field_00A4;   /* +0x00A4 */
    uint8_t  _pad_1C80[0x1BD8];
    uint32_t field_1C80;   /* +0x1C80 */
    uint8_t  _pad_1CB8[0x34];
    uint32_t field_1CB8;   /* +0x1CB8 */
    uint32_t field_1CBC;   /* +0x1CBC */
    uint32_t field_1CC0;   /* +0x1CC0 */
    uint32_t field_1CC4;   /* +0x1CC4 */
    uint32_t field_1CC8;   /* +0x1CC8 */
    uint32_t field_1CCC;   /* +0x1CCC */
    uint16_t field_1CD0;   /* +0x1CD0 */
    uint8_t  _pad_1CD4[0x2];
    uint32_t field_1CD4;   /* +0x1CD4 */
    uint32_t field_1CD8;   /* +0x1CD8 */
    uint32_t field_1CDC;   /* +0x1CDC */
    uint32_t field_1CE0;   /* +0x1CE0 */
    uint32_t field_1CE4;   /* +0x1CE4 */
    uint32_t field_1CE8;   /* +0x1CE8 */
    uint8_t field_1CEC;   /* +0x1CEC */
    uint8_t  _pad_1CF0[0x3];
    uint8_t field_1CF0;   /* +0x1CF0 */
    uint8_t  _pad_1CF4[0x3];
    uint32_t field_1CF4;   /* +0x1CF4 */
    uint32_t field_1CF8;   /* +0x1CF8 */
    uint32_t field_1CFC;   /* +0x1CFC */
    uint32_t field_1D00;   /* +0x1D00 */
    uint8_t  _pad_1D24[0x20];
    uint32_t field_1D24;   /* +0x1D24 */
    uint8_t field_1D28;   /* +0x1D28 */
    uint8_t field_1D29;   /* +0x1D29 */
    uint8_t field_1D2A;   /* +0x1D2A */
    uint8_t  _pad_1D2C[0x1];
    uint32_t field_1D2C;   /* +0x1D2C */
    uint32_t field_1D30;   /* +0x1D30 */
    uint32_t field_1D34;   /* +0x1D34 */
    uint8_t field_1D38;   /* +0x1D38 */
    /* struct size >= 0x1d39 (7481) */
} CoinBase;

/* ColliderBase -- 46 member(s) proven
 *
 * Derived from: ColliderBase_ctor
 */
typedef struct ColliderBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0010[0xC];
    uint32_t field_0010;   /* +0x0010 */
    uint32_t field_0014;   /* +0x0014 */
    uint32_t field_0018;   /* +0x0018 */
    uint32_t field_001C;   /* +0x001C */
    uint32_t field_0020;   /* +0x0020 */
    uint32_t field_0024;   /* +0x0024 */
    uint32_t field_0028;   /* +0x0028 */
    uint32_t field_002C;   /* +0x002C */
    uint32_t field_0030;   /* +0x0030 */
    uint32_t field_0034;   /* +0x0034 */
    uint32_t field_0038;   /* +0x0038 */
    uint32_t field_003C;   /* +0x003C */
    uint32_t field_0040;   /* +0x0040 */
    uint32_t field_0044;   /* +0x0044 */
    uint32_t field_0048;   /* +0x0048 */
    uint32_t field_004C;   /* +0x004C */
    uint32_t field_0050;   /* +0x0050 */
    uint32_t field_0054;   /* +0x0054 */
    uint32_t field_0058;   /* +0x0058 */
    uint32_t field_005C;   /* +0x005C */
    uint32_t field_0060;   /* +0x0060 */
    uint32_t field_0064;   /* +0x0064 */
    uint32_t field_0068;   /* +0x0068 */
    uint32_t field_006C;   /* +0x006C */
    uint32_t field_0070;   /* +0x0070 */
    uint32_t field_0074;   /* +0x0074 */
    uint32_t field_0078;   /* +0x0078 */
    uint32_t field_007C;   /* +0x007C */
    uint8_t  _pad_00E0[0x60];
    uint32_t field_00E0;   /* +0x00E0 */
    uint32_t field_00E4;   /* +0x00E4 */
    uint32_t field_00E8;   /* +0x00E8 */
    uint32_t field_00EC;   /* +0x00EC */
    uint32_t field_00F0;   /* +0x00F0 */
    uint32_t field_00F4;   /* +0x00F4 */
    uint32_t field_00F8;   /* +0x00F8 */
    uint32_t field_00FC;   /* +0x00FC */
    uint32_t field_0100;   /* +0x0100 */
    uint32_t field_0104;   /* +0x0104 */
    uint32_t field_0108;   /* +0x0108 */
    uint32_t field_010C;   /* +0x010C */
    uint32_t field_0110;   /* +0x0110 */
    uint32_t field_0114;   /* +0x0114 */
    uint32_t field_0118;   /* +0x0118 */
    uint32_t field_011C;   /* +0x011C */
    uint32_t field_0120;   /* +0x0120 */
    /* struct size >= 0x124 (292) */
    uint8_t _pad_to_sizeof[0x30];   /* +0x124 .. total 0x154, matches main.i64 sizeof */
} ColliderBase;

/* ColliderNode -- 4 member(s) proven
 *
 * Derived from: ColliderNode_ctor
 */
typedef struct ColliderNode {
    uint16_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0014[0x12];
    uint32_t field_0014;   /* +0x0014 */
    uint32_t field_0018;   /* +0x0018 */
    uint32_t field_001C;   /* +0x001C */
    /* struct size >= 0x20 (32) */
} ColliderNode;

/* ColliderNodeUnk1 -- 4 member(s) proven
 *
 * Derived from: ColliderNodeUnk1_ctor
 */
typedef struct ColliderNodeUnk1 {
    uint32_t field_0000;   /* +0x0000 */
    uint32_t field_0004;   /* +0x0004 */
    uint32_t field_0008;   /* +0x0008 */
    uint32_t field_000C;   /* +0x000C */
    /* struct size >= 0x10 (16) */
} ColliderNodeUnk1;

/* CollisionActor -- 16 member(s) proven
 *
 * Derived from: _ZN14CollisionActorC2EPK14ActorBuildInfo
 */
typedef struct CollisionActor {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_1770[0x176C];
    uint32_t field_1770;   /* +0x1770 */
    uint32_t field_1774;   /* +0x1774 */
    uint32_t field_1778;   /* +0x1778 */
    uint8_t field_177C;   /* +0x177C */
    uint8_t  _pad_1780[0x3];
    uint32_t field_1780;   /* +0x1780 */
    uint32_t field_1784;   /* +0x1784 */
    uint32_t field_1788;   /* +0x1788 */
    uint8_t  _pad_1790[0x4];
    uint32_t field_1790;   /* +0x1790 */
    uint32_t field_1794;   /* +0x1794 */
    uint32_t field_1798;   /* +0x1798 */
    uint32_t field_179C;   /* +0x179C */
    uint32_t field_17A0;   /* +0x17A0 */
    uint32_t field_17A4;   /* +0x17A4 */
    uint32_t field_17A8;   /* +0x17A8 */
    uint32_t field_17AC;   /* +0x17AC */
    /* struct size >= 0x17b0 (6064) */
} CollisionActor;

/* CourseSelectTask -- 73 member(s) proven
 *
 * Derived from: CourseSelectTask_ctor
 */
typedef struct CourseSelectTask {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_00C0[0xBC];
    uint8_t field_00C0;   /* +0x00C0 */
    uint8_t  _pad_00D0[0xF];
    uint32_t field_00D0;   /* +0x00D0 */
    uint8_t  _pad_00F4[0x20];
    uint32_t field_00F4;   /* +0x00F4 */
    uint8_t  _pad_0104[0xC];
    uint32_t field_0104;   /* +0x0104 */
    uint32_t field_0108;   /* +0x0108 */
    uint32_t field_010C;   /* +0x010C */
    uint32_t field_0110;   /* +0x0110 */
    uint32_t field_0114;   /* +0x0114 */
    uint32_t field_0118;   /* +0x0118 */
    uint32_t field_011C;   /* +0x011C */
    uint32_t field_0120;   /* +0x0120 */
    uint32_t field_0124;   /* +0x0124 */
    uint8_t  _pad_0138[0x10];
    uint32_t field_0138;   /* +0x0138 */
    uint8_t  _pad_0148[0xC];
    uint32_t field_0148;   /* +0x0148 */
    uint32_t field_014C;   /* +0x014C */
    uint32_t field_0150;   /* +0x0150 */
    uint32_t field_0154;   /* +0x0154 */
    uint32_t field_0158;   /* +0x0158 */
    uint32_t field_015C;   /* +0x015C */
    uint32_t field_0160;   /* +0x0160 */
    uint32_t field_0164;   /* +0x0164 */
    uint32_t field_0168;   /* +0x0168 */
    uint8_t  _pad_017C[0x10];
    uint32_t field_017C;   /* +0x017C */
    uint8_t  _pad_018C[0xC];
    uint32_t field_018C;   /* +0x018C */
    uint32_t field_0190;   /* +0x0190 */
    uint32_t field_0194;   /* +0x0194 */
    uint32_t field_0198;   /* +0x0198 */
    uint32_t field_019C;   /* +0x019C */
    uint32_t field_01A0;   /* +0x01A0 */
    uint32_t field_01A4;   /* +0x01A4 */
    uint32_t field_01A8;   /* +0x01A8 */
    uint32_t field_01AC;   /* +0x01AC */
    uint8_t  _pad_01C0[0x10];
    uint32_t field_01C0;   /* +0x01C0 */
    uint8_t  _pad_01D0[0xC];
    uint32_t field_01D0;   /* +0x01D0 */
    uint32_t field_01D4;   /* +0x01D4 */
    uint32_t field_01D8;   /* +0x01D8 */
    uint32_t field_01DC;   /* +0x01DC */
    uint32_t field_01E0;   /* +0x01E0 */
    uint32_t field_01E4;   /* +0x01E4 */
    uint32_t field_01E8;   /* +0x01E8 */
    uint32_t field_01EC;   /* +0x01EC */
    uint32_t field_01F0;   /* +0x01F0 */
    uint8_t  _pad_0204[0x10];
    uint32_t field_0204;   /* +0x0204 */
    uint8_t  _pad_0214[0xC];
    uint32_t field_0214;   /* +0x0214 */
    uint32_t field_0218;   /* +0x0218 */
    uint32_t field_021C;   /* +0x021C */
    uint32_t field_0220;   /* +0x0220 */
    uint32_t field_0224;   /* +0x0224 */
    uint32_t field_0228;   /* +0x0228 */
    uint32_t field_022C;   /* +0x022C */
    uint32_t field_0230;   /* +0x0230 */
    uint32_t field_0234;   /* +0x0234 */
    uint8_t  _pad_0248[0x10];
    uint32_t field_0248;   /* +0x0248 */
    uint8_t  _pad_0258[0xC];
    uint32_t field_0258;   /* +0x0258 */
    uint32_t field_025C;   /* +0x025C */
    uint32_t field_0260;   /* +0x0260 */
    uint32_t field_0264;   /* +0x0264 */
    uint32_t field_0268;   /* +0x0268 */
    uint32_t field_026C;   /* +0x026C */
    uint32_t field_0270;   /* +0x0270 */
    uint32_t field_0274;   /* +0x0274 */
    uint32_t field_0278;   /* +0x0278 */
    uint8_t  _pad_0C78[0x9FC];
    uint32_t field_0C78;   /* +0x0C78 */
    uint8_t  _pad_0C80[0x4];
    uint32_t field_0C80;   /* +0x0C80 */
    uint32_t field_0C84;   /* +0x0C84 */
    uint8_t  _pad_0C90[0x8];
    uint32_t field_0C90;   /* +0x0C90 */
    uint8_t  _pad_0C98[0x4];
    uint16_t field_0C98;   /* +0x0C98 */
    uint8_t field_0C9A;   /* +0x0C9A */
    uint8_t  _pad_0C9C[0x1];
    uint8_t field_0C9C;   /* +0x0C9C */
    uint8_t field_0C9D;   /* +0x0C9D */
    uint8_t field_0C9E;   /* +0x0C9E */
    uint8_t field_0C9F;   /* +0x0C9F */
    /* struct size >= 0xca0 (3232) */
} CourseSelectTask;

/* DarkCloudDemoScene -- 25 member(s) proven
 *
 * Derived from: DarkCloudDemoScene_ctor
 */
typedef struct DarkCloudDemoScene {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_00C0[0xBC];
    uint32_t field_00C0;   /* +0x00C0 */
    uint8_t  _pad_00D0[0xC];
    uint32_t field_00D0;   /* +0x00D0 */
    uint32_t field_00D4;   /* +0x00D4 */
    uint32_t field_00D8;   /* +0x00D8 */
    uint32_t field_00DC;   /* +0x00DC */
    uint32_t field_00E0;   /* +0x00E0 */
    uint32_t field_00E4;   /* +0x00E4 */
    uint32_t field_00E8;   /* +0x00E8 */
    uint32_t field_00EC;   /* +0x00EC */
    uint32_t field_00F0;   /* +0x00F0 */
    uint8_t  _pad_0104[0x10];
    uint32_t field_0104;   /* +0x0104 */
    uint8_t  _pad_08EC[0x7E4];
    uint32_t field_08EC;   /* +0x08EC */
    uint8_t  _pad_0920[0x30];
    uint32_t field_0920;   /* +0x0920 */
    uint32_t field_0924;   /* +0x0924 */
    uint32_t field_0928;   /* +0x0928 */
    uint32_t field_092C;   /* +0x092C */
    uint32_t field_0930;   /* +0x0930 */
    uint32_t field_0934;   /* +0x0934 */
    uint32_t field_0938;   /* +0x0938 */
    uint32_t field_093C;   /* +0x093C */
    uint32_t field_0940;   /* +0x0940 */
    uint8_t  _pad_09FC[0xB8];
    uint32_t field_09FC;   /* +0x09FC */
    uint32_t field_0A00;   /* +0x0A00 */
    uint32_t field_0A04;   /* +0x0A04 */
    /* struct size >= 0xa08 (2568) */
} DarkCloudDemoScene;

/* DemoScene -- 71 member(s) proven
 *
 * Derived from: DemoScene_ctor
 */
typedef struct DemoScene {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_00C0[0xBC];
    uint32_t field_00C0;   /* +0x00C0 */
    uint8_t  _pad_00D0[0xC];
    uint32_t field_00D0;   /* +0x00D0 */
    uint32_t field_00D4;   /* +0x00D4 */
    uint32_t field_00D8;   /* +0x00D8 */
    uint32_t field_00DC;   /* +0x00DC */
    uint32_t field_00E0;   /* +0x00E0 */
    uint32_t field_00E4;   /* +0x00E4 */
    uint32_t field_00E8;   /* +0x00E8 */
    uint32_t field_00EC;   /* +0x00EC */
    uint32_t field_00F0;   /* +0x00F0 */
    uint8_t  _pad_0104[0x10];
    uint32_t field_0104;   /* +0x0104 */
    uint8_t  _pad_0114[0xC];
    uint32_t field_0114;   /* +0x0114 */
    uint32_t field_0118;   /* +0x0118 */
    uint32_t field_011C;   /* +0x011C */
    uint8_t  _pad_012C[0xC];
    uint32_t field_012C;   /* +0x012C */
    uint32_t field_0130;   /* +0x0130 */
    uint32_t field_0134;   /* +0x0134 */
    uint8_t  _pad_0148[0x10];
    uint32_t field_0148;   /* +0x0148 */
    uint8_t  _pad_0158[0xC];
    uint32_t field_0158;   /* +0x0158 */
    uint32_t field_015C;   /* +0x015C */
    uint32_t field_0160;   /* +0x0160 */
    uint8_t  _pad_0170[0xC];
    uint32_t field_0170;   /* +0x0170 */
    uint32_t field_0174;   /* +0x0174 */
    uint32_t field_0178;   /* +0x0178 */
    uint8_t  _pad_018C[0x10];
    uint32_t field_018C;   /* +0x018C */
    uint8_t  _pad_019C[0xC];
    uint32_t field_019C;   /* +0x019C */
    uint32_t field_01A0;   /* +0x01A0 */
    uint32_t field_01A4;   /* +0x01A4 */
    uint8_t  _pad_01B4[0xC];
    uint32_t field_01B4;   /* +0x01B4 */
    uint32_t field_01B8;   /* +0x01B8 */
    uint32_t field_01BC;   /* +0x01BC */
    uint8_t  _pad_01D0[0x10];
    uint32_t field_01D0;   /* +0x01D0 */
    uint8_t  _pad_01E0[0xC];
    uint32_t field_01E0;   /* +0x01E0 */
    uint32_t field_01E4;   /* +0x01E4 */
    uint32_t field_01E8;   /* +0x01E8 */
    uint8_t  _pad_01F8[0xC];
    uint32_t field_01F8;   /* +0x01F8 */
    uint32_t field_01FC;   /* +0x01FC */
    uint32_t field_0200;   /* +0x0200 */
    uint8_t  _pad_0214[0x10];
    uint32_t field_0214;   /* +0x0214 */
    uint8_t  _pad_0224[0xC];
    uint32_t field_0224;   /* +0x0224 */
    uint32_t field_0228;   /* +0x0228 */
    uint32_t field_022C;   /* +0x022C */
    uint8_t  _pad_023C[0xC];
    uint32_t field_023C;   /* +0x023C */
    uint32_t field_0240;   /* +0x0240 */
    uint32_t field_0244;   /* +0x0244 */
    uint8_t  _pad_0258[0x10];
    uint32_t field_0258;   /* +0x0258 */
    uint8_t  _pad_0B44[0x8E8];
    uint32_t field_0B44;   /* +0x0B44 */
    uint8_t  _pad_0B78[0x30];
    uint32_t field_0B78;   /* +0x0B78 */
    uint32_t field_0B7C;   /* +0x0B7C */
    uint32_t field_0B80;   /* +0x0B80 */
    uint32_t field_0B84;   /* +0x0B84 */
    uint32_t field_0B88;   /* +0x0B88 */
    uint32_t field_0B8C;   /* +0x0B8C */
    uint32_t field_0B90;   /* +0x0B90 */
    uint32_t field_0B94;   /* +0x0B94 */
    uint32_t field_0B98;   /* +0x0B98 */
    uint8_t  _pad_0D58[0x1BC];
    uint32_t field_0D58;   /* +0x0D58 */
    uint32_t field_0D5C;   /* +0x0D5C */
    uint8_t  _pad_0F60[0x200];
    uint32_t field_0F60;   /* +0x0F60 */
    uint32_t field_0F64;   /* +0x0F64 */
    uint8_t  _pad_0F74[0xC];
    uint32_t field_0F74;   /* +0x0F74 */
    uint32_t field_0F78;   /* +0x0F78 */
    uint32_t field_0F7C;   /* +0x0F7C */
    uint32_t field_0F80;   /* +0x0F80 */
    uint32_t field_0F84;   /* +0x0F84 */
    uint32_t field_0F88;   /* +0x0F88 */
    uint32_t field_0F8C;   /* +0x0F8C */
    uint32_t field_0F90;   /* +0x0F90 */
    uint32_t field_0F94;   /* +0x0F94 */
    uint8_t  _pad_512C[0x4194];
    uint32_t field_512C;   /* +0x512C */
    /* struct size >= 0x5130 (20784) */
} DemoScene;

/* EffectData -- 4 member(s) proven
 *
 * Derived from: EffectData_ctor
 */
typedef struct EffectData {
    uint8_t  _pad_0030[0x30];
    uint8_t field_0030;   /* +0x0030 */
    uint8_t  _pad_0034[0x3];
    uint32_t field_0034;   /* +0x0034 */
    uint32_t field_0038;   /* +0x0038 */
    uint32_t field_003C;   /* +0x003C */
    /* struct size >= 0x40 (64) */
} EffectData;

/* EffectWrapper -- 6 member(s) proven
 *
 * Derived from: EffectWrapper_ctor
 */
typedef struct EffectWrapper {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0044[0x40];
    uint32_t field_0044;   /* +0x0044 */
    uint32_t field_0048;   /* +0x0048 */
    uint8_t  _pad_0050[0x4];
    uint32_t field_0050;   /* +0x0050 */
    uint32_t field_0054;   /* +0x0054 */
    uint8_t  _pad_0064[0xC];
    uint8_t field_0064;   /* +0x0064 */
    /* struct size >= 0x65 (101) */
} EffectWrapper;

/* Enemy -- 24 member(s) proven
 *
 * Derived from: Enemy_ctor, _ZN5EnemyC2EPK14ActorBuildInfo
 */
typedef struct Enemy {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0064[0x60];
    uint32_t field_0064;   /* +0x0064 */
    uint8_t  _pad_0084[0x1C];
    uint32_t field_0084;   /* +0x0084 */
    uint32_t field_0088;   /* +0x0088 */
    uint32_t field_008C;   /* +0x008C */
    uint8_t  _pad_0215[0x185];
    uint8_t field_0215;   /* +0x0215 */
    uint8_t  _pad_0280[0x6A];
    uint32_t field_0280;   /* +0x0280 */
    uint8_t  _pad_17F8[0x1574];
    uint8_t field_17F8;   /* +0x17F8 */
    uint8_t  _pad_17FC[0x3];
    uint16_t field_17FC;   /* +0x17FC */
    uint16_t field_17FE;   /* +0x17FE */
    uint16_t field_1800;   /* +0x1800 */
    uint16_t field_1802;   /* +0x1802 */
    uint32_t field_1804;   /* +0x1804 */
    uint8_t  sub_1808[0x4];   /* +0x1808 sub-object EnemyFreezeMgr, size not established */
    uint8_t  _pad_1878[0x6C];
    uint32_t field_1878;   /* +0x1878 */
    uint32_t field_187C;   /* +0x187C */
    uint8_t field_1880;   /* +0x1880 */
    uint8_t  _pad_1884[0x3];
    uint32_t field_1884;   /* +0x1884 */
    uint32_t field_1888;   /* +0x1888 */
    uint32_t field_188C;   /* +0x188C */
    uint8_t field_1890;   /* +0x1890 */
    uint8_t  _pad_1898[0x7];
    uint8_t field_1898;   /* +0x1898 */
    uint8_t field_1899;   /* +0x1899 */
    uint8_t field_189A;   /* +0x189A */
    /* struct size >= 0x189b (6299) */
    uint8_t _pad_to_sizeof[0x1];   /* +0x189B .. total 0x189C, matches main.i64 sizeof */
} Enemy;

/* EnemyFreezeMgr -- 13 member(s) proven
 *
 * Derived from: EnemyFreezeMgr_ctor
 */
typedef struct EnemyFreezeMgr {
    uint8_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0036[0x35];
    uint8_t field_0036;   /* +0x0036 */
    uint8_t  _pad_0038[0x1];
    uint32_t field_0038;   /* +0x0038 */
    uint32_t field_003C;   /* +0x003C */
    uint16_t field_0040;   /* +0x0040 */
    uint16_t field_0042;   /* +0x0042 */
    uint16_t field_0044;   /* +0x0044 */
    uint16_t field_0046;   /* +0x0046 */
    uint8_t field_0048;   /* +0x0048 */
    uint8_t field_0049;   /* +0x0049 */
    uint8_t field_004A;   /* +0x004A */
    uint8_t field_004B;   /* +0x004B */
    uint8_t field_004C;   /* +0x004C */
    /* struct size >= 0x4d (77) */
} EnemyFreezeMgr;

/* FaderTaskBase -- 45 member(s) proven
 *
 * Derived from: _ZN4sead13FaderTaskBaseC2ERKNS_16TaskConstructArgEPKc
 */
typedef struct FaderTaskBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0020[0x1C];
    uint32_t field_0020;   /* +0x0020 */
    uint32_t field_0024;   /* +0x0024 */
    uint32_t field_0028;   /* +0x0028 */
    uint32_t field_002C;   /* +0x002C */
    uint32_t field_0030;   /* +0x0030 */
    uint32_t field_0034;   /* +0x0034 */
    uint32_t field_0038;   /* +0x0038 */
    uint32_t field_003C;   /* +0x003C */
    uint8_t  _pad_0044[0x4];
    uint32_t field_0044;   /* +0x0044 */
    uint32_t field_0048;   /* +0x0048 */
    uint32_t field_004C;   /* +0x004C */
    uint32_t field_0050;   /* +0x0050 */
    uint32_t field_0054;   /* +0x0054 */
    uint32_t field_0058;   /* +0x0058 */
    uint32_t field_005C;   /* +0x005C */
    uint32_t field_0060;   /* +0x0060 */
    uint8_t field_0064;   /* +0x0064 */
    uint8_t  _pad_0068[0x3];
    uint32_t field_0068;   /* +0x0068 */
    uint8_t  _pad_0070[0x4];
    uint32_t field_0070;   /* +0x0070 */
    uint8_t  _pad_00F8[0x84];
    uint32_t field_00F8;   /* +0x00F8 */
    uint32_t field_00FC;   /* +0x00FC */
    uint8_t  _pad_010C[0xC];
    uint32_t field_010C;   /* +0x010C */
    uint32_t field_0110;   /* +0x0110 */
    uint32_t field_0114;   /* +0x0114 */
    uint32_t field_0118;   /* +0x0118 */
    uint32_t field_011C;   /* +0x011C */
    uint8_t  _pad_0124[0x4];
    uint32_t field_0124;   /* +0x0124 */
    uint32_t field_0128;   /* +0x0128 */
    uint32_t field_012C;   /* +0x012C */
    uint8_t  _pad_0134[0x4];
    uint8_t field_0134;   /* +0x0134 */
    uint8_t  _pad_0158[0x23];
    uint32_t field_0158;   /* +0x0158 */
    uint8_t  _pad_0160[0x4];
    uint32_t field_0160;   /* +0x0160 */
    uint32_t field_0164;   /* +0x0164 */
    uint32_t field_0168;   /* +0x0168 */
    uint32_t field_016C;   /* +0x016C */
    uint32_t field_0170;   /* +0x0170 */
    uint32_t field_0174;   /* +0x0174 */
    uint8_t  _pad_017C[0x4];
    uint32_t field_017C;   /* +0x017C */
    uint32_t field_0180;   /* +0x0180 */
    uint32_t field_0184;   /* +0x0184 */
    uint8_t  _pad_01B4[0x2C];
    uint32_t field_01B4;   /* +0x01B4 */
    uint32_t field_01B8;   /* +0x01B8 */
    uint32_t field_01BC;   /* +0x01BC */
    uint32_t field_01C0;   /* +0x01C0 */
    /* struct size >= 0x1c4 (452) */
} FaderTaskBase;

/* FileDeviceMgr -- 11 member(s) proven
 *
 * Derived from: _ZN4sead13FileDeviceMgrC2Ev, _ZN4sead13FileDeviceMgrC2Ev_helper
 */
typedef struct FileDeviceMgr {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0008[0x4];
    uint32_t field_0008;   /* +0x0008 */
    uint8_t  _pad_0010[0x4];
    uint32_t field_0010;   /* +0x0010 */
    uint32_t field_0014;   /* +0x0014 */
    uint32_t field_0018;   /* +0x0018 */
    uint32_t field_001C;   /* +0x001C */
    uint32_t field_0020;   /* +0x0020 */
    uint32_t field_0024;   /* +0x0024 */
    uint8_t field_0028;   /* +0x0028 */
    uint8_t  _pad_002C[0x3];
    uint8_t field_002C;   /* +0x002C */
    uint8_t  _pad_0050[0x23];
    uint32_t field_0050;   /* +0x0050 */
    /* struct size >= 0x54 (84) */
} FileDeviceMgr;

/* FinalBowser -- 99 member(s) proven
 *
 * Derived from: _ZN11FinalBowserC1EPK14ActorBuildInfo
 */
typedef struct FinalBowser {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_1BB4[0x1BB0];
    uint32_t field_1BB4;   /* +0x1BB4 */
    uint8_t  _pad_1BC8[0x10];
    uint32_t field_1BC8;   /* +0x1BC8 */
    uint32_t field_1BCC;   /* +0x1BCC */
    uint32_t field_1BD0;   /* +0x1BD0 */
    uint32_t field_1BD4;   /* +0x1BD4 */
    uint32_t field_1BD8;   /* +0x1BD8 */
    uint32_t field_1BDC;   /* +0x1BDC */
    uint32_t field_1BE0;   /* +0x1BE0 */
    uint32_t field_1BE4;   /* +0x1BE4 */
    uint32_t field_1BE8;   /* +0x1BE8 */
    uint8_t  _pad_1BF0[0x4];
    uint32_t field_1BF0;   /* +0x1BF0 */
    uint32_t field_1BF4;   /* +0x1BF4 */
    uint32_t field_1BF8;   /* +0x1BF8 */
    uint32_t field_1BFC;   /* +0x1BFC */
    uint32_t field_1C00;   /* +0x1C00 */
    uint32_t field_1C04;   /* +0x1C04 */
    uint8_t  _pad_1C0C[0x4];
    uint32_t field_1C0C;   /* +0x1C0C */
    uint32_t field_1C10;   /* +0x1C10 */
    uint32_t field_1C14;   /* +0x1C14 */
    uint32_t field_1C18;   /* +0x1C18 */
    uint32_t field_1C1C;   /* +0x1C1C */
    uint32_t field_1C20;   /* +0x1C20 */
    uint8_t  _pad_1C28[0x4];
    uint32_t field_1C28;   /* +0x1C28 */
    uint32_t field_1C2C;   /* +0x1C2C */
    uint32_t field_1C30;   /* +0x1C30 */
    uint32_t field_1C34;   /* +0x1C34 */
    uint32_t field_1C38;   /* +0x1C38 */
    uint32_t field_1C3C;   /* +0x1C3C */
    uint8_t  _pad_1C44[0x4];
    uint32_t field_1C44;   /* +0x1C44 */
    uint32_t field_1C48;   /* +0x1C48 */
    uint32_t field_1C4C;   /* +0x1C4C */
    uint32_t field_1C50;   /* +0x1C50 */
    uint32_t field_1C54;   /* +0x1C54 */
    uint32_t field_1C58;   /* +0x1C58 */
    uint8_t  _pad_1C60[0x4];
    uint32_t field_1C60;   /* +0x1C60 */
    uint32_t field_1C64;   /* +0x1C64 */
    uint32_t field_1C68;   /* +0x1C68 */
    uint32_t field_1C6C;   /* +0x1C6C */
    uint32_t field_1C70;   /* +0x1C70 */
    uint32_t field_1C74;   /* +0x1C74 */
    uint8_t  _pad_1C7C[0x4];
    uint32_t field_1C7C;   /* +0x1C7C */
    uint32_t field_1C80;   /* +0x1C80 */
    uint32_t field_1C84;   /* +0x1C84 */
    uint32_t field_1C88;   /* +0x1C88 */
    uint32_t field_1C8C;   /* +0x1C8C */
    uint32_t field_1C90;   /* +0x1C90 */
    uint8_t  _pad_1C98[0x4];
    uint32_t field_1C98;   /* +0x1C98 */
    uint32_t field_1C9C;   /* +0x1C9C */
    uint32_t field_1CA0;   /* +0x1CA0 */
    uint32_t field_1CA4;   /* +0x1CA4 */
    uint32_t field_1CA8;   /* +0x1CA8 */
    uint32_t field_1CAC;   /* +0x1CAC */
    uint8_t  _pad_1CB4[0x4];
    uint32_t field_1CB4;   /* +0x1CB4 */
    uint32_t field_1CB8;   /* +0x1CB8 */
    uint32_t field_1CBC;   /* +0x1CBC */
    uint32_t field_1CC0;   /* +0x1CC0 */
    uint32_t field_1CC4;   /* +0x1CC4 */
    uint32_t field_1CC8;   /* +0x1CC8 */
    uint8_t  _pad_6078[0x43AC];
    uint32_t field_6078;   /* +0x6078 */
    uint8_t  _pad_6308[0x28C];
    uint8_t field_6308;   /* +0x6308 */
    uint8_t  _pad_630C[0x3];
    uint32_t field_630C;   /* +0x630C */
    uint32_t field_6310;   /* +0x6310 */
    uint16_t field_6314;   /* +0x6314 */
    uint8_t field_6316;   /* +0x6316 */
    uint8_t  _pad_6318[0x1];
    uint32_t field_6318;   /* +0x6318 */
    uint32_t field_631C;   /* +0x631C */
    uint32_t field_6320;   /* +0x6320 */
    uint32_t field_6324;   /* +0x6324 */
    uint32_t field_6328;   /* +0x6328 */
    uint8_t  _pad_6390[0x64];
    uint32_t field_6390;   /* +0x6390 */
    uint8_t  _pad_63F8[0x64];
    uint32_t field_63F8;   /* +0x63F8 */
    uint8_t  _pad_6430[0x34];
    uint32_t field_6430;   /* +0x6430 */
    uint32_t field_6434;   /* +0x6434 */
    uint8_t  _pad_6470[0x38];
    uint32_t field_6470;   /* +0x6470 */
    uint32_t field_6474;   /* +0x6474 */
    uint8_t  _pad_64B0[0x38];
    uint32_t field_64B0;   /* +0x64B0 */
    uint32_t field_64B4;   /* +0x64B4 */
    uint8_t  _pad_64BC[0x4];
    uint32_t field_64BC;   /* +0x64BC */
    uint8_t  _pad_6524[0x64];
    uint8_t field_6524;   /* +0x6524 */
    uint8_t  _pad_6528[0x3];
    uint32_t field_6528;   /* +0x6528 */
    uint8_t  _pad_6590[0x64];
    uint32_t field_6590;   /* +0x6590 */
    uint8_t  _pad_65F8[0x64];
    uint32_t field_65F8;   /* +0x65F8 */
    uint32_t field_65FC;   /* +0x65FC */
    uint32_t field_6600;   /* +0x6600 */
    uint32_t field_6604;   /* +0x6604 */
    uint32_t field_6608;   /* +0x6608 */
    uint32_t field_660C;   /* +0x660C */
    uint8_t  _pad_6844[0x234];
    uint32_t field_6844;   /* +0x6844 */
    uint32_t field_6848;   /* +0x6848 */
    uint32_t field_684C;   /* +0x684C */
    uint32_t field_6850;   /* +0x6850 */
    uint32_t field_6854;   /* +0x6854 */
    uint32_t field_6858;   /* +0x6858 */
    uint32_t field_685C;   /* +0x685C */
    uint32_t field_6860;   /* +0x6860 */
    uint32_t field_6864;   /* +0x6864 */
    uint32_t field_6868;   /* +0x6868 */
    uint32_t field_686C;   /* +0x686C */
    /* struct size >= 0x6870 (26736) */
} FinalBowser;

/* FireSnake -- 41 member(s) proven
 *
 * Derived from: FireSnake_ctor
 */
typedef struct FireSnake {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_189C[0x1898];
    uint32_t field_189C;   /* +0x189C */
    uint8_t field_18A0;   /* +0x18A0 */
    uint8_t  _pad_18B0[0xF];
    uint32_t field_18B0;   /* +0x18B0 */
    uint8_t  _pad_1A90[0x1DC];
    uint32_t field_1A90;   /* +0x1A90 */
    uint32_t field_1A94;   /* +0x1A94 */
    uint32_t field_1A98;   /* +0x1A98 */
    uint32_t field_1A9C;   /* +0x1A9C */
    uint8_t  _pad_1B10[0x70];
    uint32_t field_1B10;   /* +0x1B10 */
    uint32_t field_1B14;   /* +0x1B14 */
    uint32_t field_1B18;   /* +0x1B18 */
    uint32_t field_1B1C;   /* +0x1B1C */
    uint32_t field_1B20;   /* +0x1B20 */
    uint32_t field_1B24;   /* +0x1B24 */
    uint32_t field_1B28;   /* +0x1B28 */
    uint32_t field_1B2C;   /* +0x1B2C */
    uint32_t field_1B30;   /* +0x1B30 */
    uint32_t field_1B34;   /* +0x1B34 */
    uint32_t field_1B38;   /* +0x1B38 */
    uint32_t field_1B3C;   /* +0x1B3C */
    uint32_t field_1B40;   /* +0x1B40 */
    uint8_t  _pad_1BDC[0x98];
    uint32_t field_1BDC;   /* +0x1BDC */
    uint32_t field_1BE0;   /* +0x1BE0 */
    uint8_t  _pad_1BE8[0x4];
    uint32_t field_1BE8;   /* +0x1BE8 */
    uint8_t  _pad_1C0C[0x20];
    uint32_t field_1C0C;   /* +0x1C0C */
    uint8_t  _pad_1C3C[0x2C];
    uint32_t field_1C3C;   /* +0x1C3C */
    uint32_t field_1C40;   /* +0x1C40 */
    uint32_t field_1C44;   /* +0x1C44 */
    uint32_t field_1C48;   /* +0x1C48 */
    uint8_t  _pad_1C74[0x28];
    uint8_t field_1C74;   /* +0x1C74 */
    uint8_t  _pad_1C78[0x3];
    uint32_t field_1C78;   /* +0x1C78 */
    uint32_t field_1C7C;   /* +0x1C7C */
    uint32_t field_1C80;   /* +0x1C80 */
    uint32_t field_1C84;   /* +0x1C84 */
    uint32_t field_1C88;   /* +0x1C88 */
    uint32_t field_1C8C;   /* +0x1C8C */
    uint32_t field_1C90;   /* +0x1C90 */
    uint32_t field_1C94;   /* +0x1C94 */
    uint32_t field_1C98;   /* +0x1C98 */
    uint32_t field_1C9C;   /* +0x1C9C */
    uint8_t  _pad_1DD0[0x130];
    uint32_t field_1DD0;   /* +0x1DD0 */
    /* struct size >= 0x1dd4 (7636) */
} FireSnake;

/* GameOverScene -- 13 member(s) proven
 *
 * Derived from: GameOverScene_ctor
 */
typedef struct GameOverScene {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_00C0[0xBC];
    uint32_t field_00C0;   /* +0x00C0 */
    uint8_t  _pad_00E4[0x20];
    uint32_t field_00E4;   /* +0x00E4 */
    uint8_t  _pad_00F4[0xC];
    uint32_t field_00F4;   /* +0x00F4 */
    uint32_t field_00F8;   /* +0x00F8 */
    uint32_t field_00FC;   /* +0x00FC */
    uint32_t field_0100;   /* +0x0100 */
    uint32_t field_0104;   /* +0x0104 */
    uint32_t field_0108;   /* +0x0108 */
    uint32_t field_010C;   /* +0x010C */
    uint32_t field_0110;   /* +0x0110 */
    uint32_t field_0114;   /* +0x0114 */
    uint8_t  _pad_5158[0x5040];
    uint32_t field_5158;   /* +0x5158 */
    /* struct size >= 0x515c (20828) */
} GameOverScene;

/* GameSetupScene -- 46 member(s) proven
 *
 * Derived from: GameSetupScene_ctor
 */
typedef struct GameSetupScene {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_00C0[0xBC];
    uint8_t field_00C0;   /* +0x00C0 */
    uint8_t  _pad_00C4[0x3];
    uint32_t field_00C4;   /* +0x00C4 */
    uint8_t  _pad_00E8[0x20];
    uint32_t field_00E8;   /* +0x00E8 */
    uint8_t  _pad_00F8[0xC];
    uint32_t field_00F8;   /* +0x00F8 */
    uint32_t field_00FC;   /* +0x00FC */
    uint32_t field_0100;   /* +0x0100 */
    uint32_t field_0104;   /* +0x0104 */
    uint32_t field_0108;   /* +0x0108 */
    uint32_t field_010C;   /* +0x010C */
    uint32_t field_0110;   /* +0x0110 */
    uint32_t field_0114;   /* +0x0114 */
    uint32_t field_0118;   /* +0x0118 */
    uint8_t  _pad_012C[0x10];
    uint32_t field_012C;   /* +0x012C */
    uint8_t  _pad_0148[0x18];
    uint32_t field_0148;   /* +0x0148 */
    uint32_t field_014C;   /* +0x014C */
    uint32_t field_0150;   /* +0x0150 */
    uint32_t field_0154;   /* +0x0154 */
    uint32_t field_0158;   /* +0x0158 */
    uint32_t field_015C;   /* +0x015C */
    uint8_t  _pad_0170[0x10];
    uint32_t field_0170;   /* +0x0170 */
    uint8_t  _pad_018C[0x18];
    uint32_t field_018C;   /* +0x018C */
    uint32_t field_0190;   /* +0x0190 */
    uint32_t field_0194;   /* +0x0194 */
    uint32_t field_0198;   /* +0x0198 */
    uint32_t field_019C;   /* +0x019C */
    uint32_t field_01A0;   /* +0x01A0 */
    uint8_t  _pad_01B4[0x10];
    uint32_t field_01B4;   /* +0x01B4 */
    uint8_t  _pad_01D0[0x18];
    uint32_t field_01D0;   /* +0x01D0 */
    uint32_t field_01D4;   /* +0x01D4 */
    uint32_t field_01D8;   /* +0x01D8 */
    uint32_t field_01DC;   /* +0x01DC */
    uint32_t field_01E0;   /* +0x01E0 */
    uint32_t field_01E4;   /* +0x01E4 */
    uint8_t  _pad_01F8[0x10];
    uint32_t field_01F8;   /* +0x01F8 */
    uint8_t  _pad_022C[0x30];
    uint32_t field_022C;   /* +0x022C */
    uint32_t field_0230;   /* +0x0230 */
    uint32_t field_0234;   /* +0x0234 */
    uint32_t field_0238;   /* +0x0238 */
    uint32_t field_023C;   /* +0x023C */
    uint32_t field_0240;   /* +0x0240 */
    uint32_t field_0244;   /* +0x0244 */
    uint32_t field_0248;   /* +0x0248 */
    uint32_t field_024C;   /* +0x024C */
    uint8_t  _pad_104C8[0x10278];
    uint16_t field_104C8;   /* +0x104C8 */
    uint8_t field_104CA;   /* +0x104CA */
    /* struct size >= 0x104cb (66763) */
} GameSetupScene;

/* Heap -- 20 member(s) proven
 *
 * Derived from: _ZN4sead4HeapC2ERKNS_14SafeStringBaseIcEEPS0_PvmNS0_13HeapDirectionEb
 */
typedef struct Heap {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0010[0xC];
    uint32_t field_0010;   /* +0x0010 */
    uint32_t field_0014;   /* +0x0014 */
    uint32_t field_0018;   /* +0x0018 */
    uint32_t field_001C;   /* +0x001C */
    uint32_t field_0020;   /* +0x0020 */
    uint32_t field_0024;   /* +0x0024 */
    uint32_t field_0028;   /* +0x0028 */
    uint32_t field_002C;   /* +0x002C */
    uint32_t field_0030;   /* +0x0030 */
    uint32_t field_0034;   /* +0x0034 */
    uint32_t field_0038;   /* +0x0038 */
    uint32_t field_003C;   /* +0x003C */
    uint32_t field_0040;   /* +0x0040 */
    uint32_t field_0044;   /* +0x0044 */
    uint32_t field_0048;   /* +0x0048 */
    uint32_t field_004C;   /* +0x004C */
    uint32_t field_0050;   /* +0x0050 */
    uint8_t  _pad_0078[0x24];
    uint16_t field_0078;   /* +0x0078 */
    uint16_t field_007A;   /* +0x007A */
    /* struct size >= 0x7c (124) */
} Heap;

/* LineFollower -- 4 member(s) proven
 *
 * Derived from: LineFollower_ctor
 */
typedef struct LineFollower {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0008[0x4];
    uint32_t field_0008;   /* +0x0008 */
    uint32_t field_000C;   /* +0x000C */
    uint32_t field_0010;   /* +0x0010 */
    /* struct size >= 0x14 (20) */
    uint8_t _pad_to_sizeof[0x7C];   /* +0x014 .. total 0x90, matches main.i64 sizeof */
} LineFollower;

/* MaskManager -- 59 member(s) proven
 *
 * Derived from: MaskManager_ctor
 */
typedef struct MaskManager {
    uint8_t  _pad_0010[0x10];
    uint32_t field_0010;   /* +0x0010 */
    uint8_t field_0014;   /* +0x0014 */
    uint8_t  _pad_0018[0x3];
    uint32_t field_0018;   /* +0x0018 */
    uint8_t  _pad_0138[0x11C];
    uint32_t field_0138;   /* +0x0138 */
    uint32_t field_013C;   /* +0x013C */
    uint32_t field_0140;   /* +0x0140 */
    uint32_t field_0144;   /* +0x0144 */
    uint32_t field_0148;   /* +0x0148 */
    uint32_t field_014C;   /* +0x014C */
    uint8_t  _pad_0158[0x8];
    uint16_t field_0158;   /* +0x0158 */
    uint8_t  _pad_0278[0x11E];
    uint32_t field_0278;   /* +0x0278 */
    uint32_t field_027C;   /* +0x027C */
    uint32_t field_0280;   /* +0x0280 */
    uint32_t field_0284;   /* +0x0284 */
    uint32_t field_0288;   /* +0x0288 */
    uint32_t field_028C;   /* +0x028C */
    uint8_t  _pad_0298[0x8];
    uint16_t field_0298;   /* +0x0298 */
    uint8_t  _pad_03B8[0x11E];
    uint32_t field_03B8;   /* +0x03B8 */
    uint32_t field_03BC;   /* +0x03BC */
    uint32_t field_03C0;   /* +0x03C0 */
    uint32_t field_03C4;   /* +0x03C4 */
    uint32_t field_03C8;   /* +0x03C8 */
    uint32_t field_03CC;   /* +0x03CC */
    uint8_t  _pad_03D8[0x8];
    uint16_t field_03D8;   /* +0x03D8 */
    uint8_t  _pad_04F8[0x11E];
    uint32_t field_04F8;   /* +0x04F8 */
    uint32_t field_04FC;   /* +0x04FC */
    uint32_t field_0500;   /* +0x0500 */
    uint32_t field_0504;   /* +0x0504 */
    uint32_t field_0508;   /* +0x0508 */
    uint32_t field_050C;   /* +0x050C */
    uint8_t  _pad_0518[0x8];
    uint16_t field_0518;   /* +0x0518 */
    uint8_t  _pad_0638[0x11E];
    uint32_t field_0638;   /* +0x0638 */
    uint32_t field_063C;   /* +0x063C */
    uint32_t field_0640;   /* +0x0640 */
    uint32_t field_0644;   /* +0x0644 */
    uint32_t field_0648;   /* +0x0648 */
    uint32_t field_064C;   /* +0x064C */
    uint8_t  _pad_0658[0x8];
    uint16_t field_0658;   /* +0x0658 */
    uint8_t  _pad_0778[0x11E];
    uint32_t field_0778;   /* +0x0778 */
    uint32_t field_077C;   /* +0x077C */
    uint32_t field_0780;   /* +0x0780 */
    uint32_t field_0784;   /* +0x0784 */
    uint32_t field_0788;   /* +0x0788 */
    uint32_t field_078C;   /* +0x078C */
    uint8_t  _pad_0798[0x8];
    uint16_t field_0798;   /* +0x0798 */
    uint8_t  _pad_08B8[0x11E];
    uint32_t field_08B8;   /* +0x08B8 */
    uint32_t field_08BC;   /* +0x08BC */
    uint32_t field_08C0;   /* +0x08C0 */
    uint32_t field_08C4;   /* +0x08C4 */
    uint32_t field_08C8;   /* +0x08C8 */
    uint32_t field_08CC;   /* +0x08CC */
    uint8_t  _pad_08D8[0x8];
    uint16_t field_08D8;   /* +0x08D8 */
    uint8_t  _pad_09F8[0x11E];
    uint32_t field_09F8;   /* +0x09F8 */
    uint32_t field_09FC;   /* +0x09FC */
    uint32_t field_0A00;   /* +0x0A00 */
    uint32_t field_0A04;   /* +0x0A04 */
    uint32_t field_0A08;   /* +0x0A08 */
    uint32_t field_0A0C;   /* +0x0A0C */
    uint8_t  _pad_0A18[0x8];
    uint16_t field_0A18;   /* +0x0A18 */
    /* struct size >= 0xa1a (2586) */
} MaskManager;

/* ModelBase -- 4 member(s) proven
 *
 * Derived from: ModelBase_ctor
 */
typedef struct ModelBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0010[0xC];
    uint32_t field_0010;   /* +0x0010 */
    uint8_t  _pad_0020[0xC];
    uint32_t field_0020;   /* +0x0020 */
    uint32_t field_0024;   /* +0x0024 */
    /* struct size >= 0x28 (40) */
} ModelBase;

/* MovementBlockCoinBase -- 25 member(s) proven
 *
 * Derived from: MovementBlockCoinBase_ctor, _ZN21MovementBlockCoinBaseC2EPK14ActorBuildInfo
 */
typedef struct MovementBlockCoinBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_1B38[0x1B34];
    uint32_t field_1B38;   /* +0x1B38 */
    uint32_t field_1B3C;   /* +0x1B3C */
    uint32_t field_1B40;   /* +0x1B40 */
    uint32_t field_1B44;   /* +0x1B44 */
    uint8_t  _pad_1B4C[0x4];
    uint32_t field_1B4C;   /* +0x1B4C */
    uint8_t  sub_1B50[0x4];   /* +0x1B50 sub-object MovementHandler, size not established */
    uint8_t  _pad_1C70[0x11C];
    uint32_t field_1C70;   /* +0x1C70 */
    uint32_t field_1C74;   /* +0x1C74 */
    uint32_t field_1C78;   /* +0x1C78 */
    uint8_t field_1C7C;   /* +0x1C7C */
    uint8_t  _pad_1C80[0x3];
    uint32_t field_1C80;   /* +0x1C80 */
    uint32_t field_1C84;   /* +0x1C84 */
    uint32_t field_1C88;   /* +0x1C88 */
    uint32_t field_1C8C;   /* +0x1C8C */
    uint8_t field_1C90;   /* +0x1C90 */
    uint8_t  _pad_1C94[0x3];
    uint32_t field_1C94;   /* +0x1C94 */
    uint8_t field_1C98;   /* +0x1C98 */
    uint8_t field_1C99;   /* +0x1C99 */
    uint8_t  _pad_1C9C[0x2];
    uint32_t field_1C9C;   /* +0x1C9C */
    uint32_t field_1CA0;   /* +0x1CA0 */
    uint32_t field_1CA4;   /* +0x1CA4 */
    uint32_t field_1CA8;   /* +0x1CA8 */
    uint8_t field_1CAC;   /* +0x1CAC */
    uint8_t  _pad_1CB0[0x3];
    uint32_t field_1CB0;   /* +0x1CB0 */
    /* struct size >= 0x1cb4 (7348) */
} MovementBlockCoinBase;

/* MovementHandler -- 13 member(s) proven
 *
 * Derived from: _ZN15MovementHandlerC1Ev
 */
typedef struct MovementHandler {
    uint8_t  _pad_0038[0x38];
    uint32_t field_0038;   /* +0x0038 */
    uint8_t  _pad_0050[0x14];
    uint32_t field_0050;   /* +0x0050 */
    uint8_t  _pad_0074[0x20];
    uint32_t field_0074;   /* +0x0074 */
    uint32_t field_0078;   /* +0x0078 */
    uint32_t field_007C;   /* +0x007C */
    uint32_t field_0080;   /* +0x0080 */
    uint8_t  _pad_00A0[0x1C];
    uint32_t field_00A0;   /* +0x00A0 */
    uint32_t field_00A4;   /* +0x00A4 */
    uint32_t field_00A8;   /* +0x00A8 */
    uint8_t  _pad_00D4[0x28];
    uint32_t field_00D4;   /* +0x00D4 */
    uint8_t  _pad_00DC[0x4];
    uint32_t field_00DC;   /* +0x00DC */
    uint32_t field_00E0;   /* +0x00E0 */
    uint32_t field_00E4;   /* +0x00E4 */
    /* struct size >= 0xe8 (232) */
    uint8_t _pad_to_sizeof[0x10];   /* +0x0E8 .. total 0xF8, matches main.i64 sizeof */
} MovementHandler;

/* MovingSoundActor -- 25 member(s) proven
 *
 * Derived from: MovingSoundActor_ctor
 */
typedef struct MovingSoundActor {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0078[0x74];
    uint32_t field_0078;   /* +0x0078 */
    uint8_t  _pad_0080[0x4];
    uint32_t field_0080;   /* +0x0080 */
    uint8_t  _pad_008C[0x8];
    uint32_t field_008C;   /* +0x008C */
    uint32_t field_0090;   /* +0x0090 */
    uint32_t field_0094;   /* +0x0094 */
    uint32_t field_0098;   /* +0x0098 */
    uint32_t field_009C;   /* +0x009C */
    uint8_t  _pad_00AC[0xC];
    uint32_t field_00AC;   /* +0x00AC */
    uint32_t field_00B0;   /* +0x00B0 */
    uint32_t field_00B4;   /* +0x00B4 */
    uint8_t  _pad_00C4[0xC];
    uint32_t field_00C4;   /* +0x00C4 */
    uint32_t field_00C8;   /* +0x00C8 */
    uint32_t field_00CC;   /* +0x00CC */
    uint8_t  _pad_00DC[0xC];
    uint32_t field_00DC;   /* +0x00DC */
    uint32_t field_00E0;   /* +0x00E0 */
    uint32_t field_00E4;   /* +0x00E4 */
    uint8_t  _pad_00F4[0xC];
    uint32_t field_00F4;   /* +0x00F4 */
    uint32_t field_00F8;   /* +0x00F8 */
    uint32_t field_00FC;   /* +0x00FC */
    uint8_t  _pad_010C[0xC];
    uint32_t field_010C;   /* +0x010C */
    uint32_t field_0110;   /* +0x0110 */
    uint32_t field_0114;   /* +0x0114 */
    uint8_t  _pad_0124[0xC];
    uint32_t field_0124;   /* +0x0124 */
    uint32_t field_0128;   /* +0x0128 */
    /* struct size >= 0x12c (300) */
    uint8_t _pad_to_sizeof[0x8];   /* +0x12C .. total 0x134, matches main.i64 sizeof */
} MovingSoundActor;

/* MultiPlayCourseSelectScene -- 44 member(s) proven
 *
 * Derived from: MultiPlayCourseSelectScene_ctor
 */
typedef struct MultiPlayCourseSelectScene {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_00C0[0xBC];
    uint32_t field_00C0;   /* +0x00C0 */
    uint8_t  _pad_00E4[0x20];
    uint32_t field_00E4;   /* +0x00E4 */
    uint8_t  _pad_00F4[0xC];
    uint32_t field_00F4;   /* +0x00F4 */
    uint32_t field_00F8;   /* +0x00F8 */
    uint32_t field_00FC;   /* +0x00FC */
    uint32_t field_0100;   /* +0x0100 */
    uint32_t field_0104;   /* +0x0104 */
    uint32_t field_0108;   /* +0x0108 */
    uint32_t field_010C;   /* +0x010C */
    uint32_t field_0110;   /* +0x0110 */
    uint32_t field_0114;   /* +0x0114 */
    uint8_t  _pad_0128[0x10];
    uint32_t field_0128;   /* +0x0128 */
    uint8_t  _pad_0144[0x18];
    uint32_t field_0144;   /* +0x0144 */
    uint32_t field_0148;   /* +0x0148 */
    uint32_t field_014C;   /* +0x014C */
    uint32_t field_0150;   /* +0x0150 */
    uint32_t field_0154;   /* +0x0154 */
    uint32_t field_0158;   /* +0x0158 */
    uint8_t  _pad_016C[0x10];
    uint32_t field_016C;   /* +0x016C */
    uint8_t  _pad_0188[0x18];
    uint32_t field_0188;   /* +0x0188 */
    uint32_t field_018C;   /* +0x018C */
    uint32_t field_0190;   /* +0x0190 */
    uint32_t field_0194;   /* +0x0194 */
    uint32_t field_0198;   /* +0x0198 */
    uint32_t field_019C;   /* +0x019C */
    uint8_t  _pad_01B0[0x10];
    uint32_t field_01B0;   /* +0x01B0 */
    uint8_t  _pad_01CC[0x18];
    uint32_t field_01CC;   /* +0x01CC */
    uint32_t field_01D0;   /* +0x01D0 */
    uint32_t field_01D4;   /* +0x01D4 */
    uint32_t field_01D8;   /* +0x01D8 */
    uint32_t field_01DC;   /* +0x01DC */
    uint32_t field_01E0;   /* +0x01E0 */
    uint8_t  _pad_01F4[0x10];
    uint32_t field_01F4;   /* +0x01F4 */
    uint8_t  _pad_0228[0x30];
    uint32_t field_0228;   /* +0x0228 */
    uint32_t field_022C;   /* +0x022C */
    uint32_t field_0230;   /* +0x0230 */
    uint32_t field_0234;   /* +0x0234 */
    uint32_t field_0238;   /* +0x0238 */
    uint32_t field_023C;   /* +0x023C */
    uint32_t field_0240;   /* +0x0240 */
    uint32_t field_0244;   /* +0x0244 */
    uint32_t field_0248;   /* +0x0248 */
    uint8_t  _pad_05B4[0x368];
    uint32_t field_05B4;   /* +0x05B4 */
    /* struct size >= 0x5b8 (1464) */
} MultiPlayCourseSelectScene;

/* MultiStateActor -- 4 member(s) proven
 *
 * Derived from: _ZN15MultiStateActorC2EPK14ActorBuildInfo
 */
typedef struct MultiStateActor {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_17BC[0x17B8];
    uint32_t field_17BC;   /* +0x17BC */
    uint32_t field_17C0;   /* +0x17C0 */
    uint8_t  _pad_17D4[0x10];
    uint32_t field_17D4;   /* +0x17D4 */
    /* struct size >= 0x17d8 (6104) */
} MultiStateActor;

/* NinJoyNpadDevice -- 23 member(s) proven
 *
 * Derived from: NinJoyNpadDevice_ctor, _ZN4sead16NinJoyNpadDeviceC1EPNS_13ControllerMgrEPNS_4HeapE
 */
typedef struct NinJoyNpadDevice {
    uint32_t field_0000;   /* +0x0000 */
    uint32_t field_0004;   /* +0x0004 */
    uint32_t field_0008;   /* +0x0008 */
    uint32_t field_000C;   /* +0x000C */
    uint32_t field_0010;   /* +0x0010 */
    uint32_t field_0014;   /* +0x0014 */
    uint32_t field_0018;   /* +0x0018 */
    uint32_t field_001C;   /* +0x001C */
    uint32_t field_0020;   /* +0x0020 */
    uint32_t field_0024;   /* +0x0024 */
    uint32_t field_0028;   /* +0x0028 */
    uint32_t field_002C;   /* +0x002C */
    uint32_t field_0030;   /* +0x0030 */
    uint32_t field_0034;   /* +0x0034 */
    uint32_t field_0038;   /* +0x0038 */
    uint32_t field_003C;   /* +0x003C */
    uint8_t  _pad_8398[0x8358];
    uint32_t field_8398;   /* +0x8398 */
    uint8_t  _pad_83B0[0x14];
    uint32_t field_83B0;   /* +0x83B0 */
    uint8_t  _pad_8428[0x74];
    uint32_t field_8428;   /* +0x8428 */
    uint32_t field_842C;   /* +0x842C */
    uint32_t field_8430;   /* +0x8430 */
    uint32_t field_8434;   /* +0x8434 */
    uint8_t  _pad_8578[0x140];
    uint8_t  sub_8578[0x4];   /* +0x8578 sub-object CriticalSection, size not established */
    /* struct size >= 0x857c (34172) */
} NinJoyNpadDevice;

/* Player -- 149 member(s) proven
 *
 * Derived from: Player_ctor
 */
typedef struct Player {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0050[0x4C];
    uint32_t field_0050;   /* +0x0050 */
    uint8_t field_0054;   /* +0x0054 */
    uint8_t  _pad_0215[0x1C0];
    uint8_t field_0215;   /* +0x0215 */
    uint8_t  _pad_0288[0x72];
    uint32_t field_0288;   /* +0x0288 */
    uint8_t  _pad_0520[0x294];
    uint8_t field_0520;   /* +0x0520 */
    uint8_t  _pad_0524[0x3];
    uint32_t field_0524;   /* +0x0524 */
    uint32_t field_0528;   /* +0x0528 */
    uint8_t  _pad_2CA4[0x2778];
    uint32_t field_2CA4;   /* +0x2CA4 */
    uint32_t field_2CA8;   /* +0x2CA8 */
    uint32_t field_2CAC;   /* +0x2CAC */
    uint32_t field_2CB0;   /* +0x2CB0 */
    uint32_t field_2CB4;   /* +0x2CB4 */
    uint32_t field_2CB8;   /* +0x2CB8 */
    uint8_t  _pad_2CCC[0x10];
    uint32_t field_2CCC;   /* +0x2CCC */
    uint32_t field_2CD0;   /* +0x2CD0 */
    uint32_t field_2CD4;   /* +0x2CD4 */
    uint32_t field_2CD8;   /* +0x2CD8 */
    uint32_t field_2CDC;   /* +0x2CDC */
    uint8_t  _pad_2EA4[0x1C4];
    uint32_t field_2EA4;   /* +0x2EA4 */
    uint32_t field_2EA8;   /* +0x2EA8 */
    uint8_t field_2EAC;   /* +0x2EAC */
    uint8_t  _pad_2EB0[0x3];
    uint32_t field_2EB0;   /* +0x2EB0 */
    uint8_t  _pad_2EE0[0x2C];
    uint32_t field_2EE0;   /* +0x2EE0 */
    uint8_t field_2EE4;   /* +0x2EE4 */
    uint8_t  _pad_2EE8[0x3];
    uint32_t field_2EE8;   /* +0x2EE8 */
    uint8_t field_2EEC;   /* +0x2EEC */
    uint8_t field_2EED;   /* +0x2EED */
    uint8_t  _pad_2EF0[0x2];
    uint32_t field_2EF0;   /* +0x2EF0 */
    uint32_t field_2EF4;   /* +0x2EF4 */
    uint32_t field_2EF8;   /* +0x2EF8 */
    uint32_t field_2EFC;   /* +0x2EFC */
    uint32_t field_2F00;   /* +0x2F00 */
    uint32_t field_2F04;   /* +0x2F04 */
    uint32_t field_2F08;   /* +0x2F08 */
    uint32_t field_2F0C;   /* +0x2F0C */
    uint32_t field_2F10;   /* +0x2F10 */
    uint8_t field_2F14;   /* +0x2F14 */
    uint8_t  _pad_2F18[0x3];
    uint32_t field_2F18;   /* +0x2F18 */
    uint32_t field_2F1C;   /* +0x2F1C */
    uint32_t field_2F20;   /* +0x2F20 */
    uint8_t field_2F24;   /* +0x2F24 */
    uint8_t  _pad_2F68[0x43];
    uint32_t field_2F68;   /* +0x2F68 */
    uint32_t field_2F6C;   /* +0x2F6C */
    uint32_t field_2F70;   /* +0x2F70 */
    uint32_t field_2F74;   /* +0x2F74 */
    uint32_t field_2F78;   /* +0x2F78 */
    uint32_t field_2F7C;   /* +0x2F7C */
    uint32_t field_2F80;   /* +0x2F80 */
    uint32_t field_2F84;   /* +0x2F84 */
    uint32_t field_2F88;   /* +0x2F88 */
    uint8_t field_2F8C;   /* +0x2F8C */
    uint8_t  _pad_2F90[0x3];
    uint32_t field_2F90;   /* +0x2F90 */
    uint32_t field_2F94;   /* +0x2F94 */
    uint32_t field_2F98;   /* +0x2F98 */
    uint32_t field_2F9C;   /* +0x2F9C */
    uint8_t field_2FA0;   /* +0x2FA0 */
    uint8_t  _pad_2FF4[0x53];
    uint32_t field_2FF4;   /* +0x2FF4 */
    uint8_t  _pad_305C[0x64];
    uint32_t field_305C;   /* +0x305C */
    uint32_t field_3060;   /* +0x3060 */
    uint32_t field_3064;   /* +0x3064 */
    uint8_t field_3068;   /* +0x3068 */
    uint8_t  _pad_30A8[0x3F];
    uint32_t field_30A8;   /* +0x30A8 */
    uint32_t field_30AC;   /* +0x30AC */
    uint32_t field_30B0;   /* +0x30B0 */
    uint32_t field_30B4;   /* +0x30B4 */
    uint8_t  _pad_311C[0x64];
    uint32_t field_311C;   /* +0x311C */
    uint8_t  _pad_3184[0x64];
    uint32_t field_3184;   /* +0x3184 */
    uint32_t field_3188;   /* +0x3188 */
    uint8_t  _pad_31F0[0x64];
    uint32_t field_31F0;   /* +0x31F0 */
    uint32_t field_31F4;   /* +0x31F4 */
    uint32_t field_31F8;   /* +0x31F8 */
    uint32_t field_31FC;   /* +0x31FC */
    uint32_t field_3200;   /* +0x3200 */
    uint32_t field_3204;   /* +0x3204 */
    uint8_t field_3208;   /* +0x3208 */
    uint8_t  _pad_320C[0x3];
    uint32_t field_320C;   /* +0x320C */
    uint32_t field_3210;   /* +0x3210 */
    uint16_t field_3214;   /* +0x3214 */
    uint8_t  _pad_3260[0x4A];
    uint32_t field_3260;   /* +0x3260 */
    uint32_t field_3264;   /* +0x3264 */
    uint32_t field_3268;   /* +0x3268 */
    uint32_t field_326C;   /* +0x326C */
    uint32_t field_3270;   /* +0x3270 */
    uint16_t field_3274;   /* +0x3274 */
    uint8_t field_3276;   /* +0x3276 */
    uint8_t  _pad_3278[0x1];
    uint32_t field_3278;   /* +0x3278 */
    uint32_t field_327C;   /* +0x327C */
    uint32_t field_3280;   /* +0x3280 */
    uint8_t  _pad_32A8[0x24];
    uint32_t field_32A8;   /* +0x32A8 */
    uint32_t field_32AC;   /* +0x32AC */
    uint8_t field_32B0;   /* +0x32B0 */
    uint8_t  _pad_32B4[0x3];
    uint32_t field_32B4;   /* +0x32B4 */
    uint32_t field_32B8;   /* +0x32B8 */
    uint32_t field_32BC;   /* +0x32BC */
    uint32_t field_32C0;   /* +0x32C0 */
    uint32_t field_32C4;   /* +0x32C4 */
    uint32_t field_32C8;   /* +0x32C8 */
    uint8_t  _pad_32FC[0x30];
    uint32_t field_32FC;   /* +0x32FC */
    uint32_t field_3300;   /* +0x3300 */
    uint8_t field_3304;   /* +0x3304 */
    uint8_t  _pad_333C[0x37];
    uint32_t field_333C;   /* +0x333C */
    uint32_t field_3340;   /* +0x3340 */
    uint8_t  _pad_337C[0x38];
    uint32_t field_337C;   /* +0x337C */
    uint32_t field_3380;   /* +0x3380 */
    uint8_t  _pad_33BC[0x38];
    uint32_t field_33BC;   /* +0x33BC */
    uint32_t field_33C0;   /* +0x33C0 */
    uint8_t  _pad_33C8[0x4];
    uint32_t field_33C8;   /* +0x33C8 */
    uint8_t  _pad_3430[0x64];
    uint32_t field_3430;   /* +0x3430 */
    uint8_t  _pad_3498[0x64];
    uint32_t field_3498;   /* +0x3498 */
    uint8_t  _pad_3500[0x64];
    uint32_t field_3500;   /* +0x3500 */
    uint8_t  _pad_3568[0x64];
    uint32_t field_3568;   /* +0x3568 */
    uint8_t  _pad_3604[0x98];
    uint32_t field_3604;   /* +0x3604 */
    uint32_t field_3608;   /* +0x3608 */
    uint8_t  _pad_3644[0x38];
    uint32_t field_3644;   /* +0x3644 */
    uint32_t field_3648;   /* +0x3648 */
    uint8_t  _pad_3650[0x4];
    uint32_t field_3650;   /* +0x3650 */
    uint8_t  _pad_36B8[0x64];
    uint32_t field_36B8;   /* +0x36B8 */
    uint8_t  _pad_3724[0x68];
    uint32_t field_3724;   /* +0x3724 */
    uint8_t  _pad_378C[0x64];
    uint32_t field_378C;   /* +0x378C */
    uint8_t  _pad_37F4[0x64];
    uint32_t field_37F4;   /* +0x37F4 */
    uint8_t  _pad_385C[0x64];
    uint32_t field_385C;   /* +0x385C */
    uint8_t  _pad_38C4[0x64];
    uint32_t field_38C4;   /* +0x38C4 */
    uint8_t  _pad_38D0[0x8];
    uint32_t field_38D0;   /* +0x38D0 */
    uint32_t field_38D4;   /* +0x38D4 */
    uint8_t  _pad_393C[0x64];
    uint32_t field_393C;   /* +0x393C */
    uint32_t field_3940;   /* +0x3940 */
    uint8_t  _pad_39A8[0x64];
    uint32_t field_39A8;   /* +0x39A8 */
    uint32_t field_39AC;   /* +0x39AC */
    uint8_t  _pad_3A14[0x64];
    uint32_t field_3A14;   /* +0x3A14 */
    uint32_t field_3A18;   /* +0x3A18 */
    uint32_t field_3A1C;   /* +0x3A1C */
    uint8_t  _pad_3A98[0x78];
    uint32_t field_3A98;   /* +0x3A98 */
    uint32_t field_3A9C;   /* +0x3A9C */
    uint8_t  _pad_3AAC[0xC];
    uint8_t field_3AAC;   /* +0x3AAC */
    uint8_t  _pad_3AB0[0x3];
    uint32_t field_3AB0;   /* +0x3AB0 */
    uint32_t field_3AB4;   /* +0x3AB4 */
    uint8_t  _pad_3ACC[0x14];
    uint16_t field_3ACC;   /* +0x3ACC */
    uint8_t  _pad_3AD0[0x2];
    uint32_t field_3AD0;   /* +0x3AD0 */
    uint32_t field_3AD4;   /* +0x3AD4 */
    uint32_t field_3AD8;   /* +0x3AD8 */
    uint32_t field_3ADC;   /* +0x3ADC */
    uint32_t field_3AE0;   /* +0x3AE0 */
    uint8_t field_3AE4;   /* +0x3AE4 */
    uint8_t field_3AE5;   /* +0x3AE5 */
    uint8_t  _pad_3AE8[0x2];
    uint32_t field_3AE8;   /* +0x3AE8 */
    uint32_t field_3AEC;   /* +0x3AEC */
    uint32_t field_3AF0;   /* +0x3AF0 */
    uint32_t field_3AF4;   /* +0x3AF4 */
    /* struct size >= 0x3af8 (15096) */
} Player;

/* PlayerBase -- 108 member(s) proven   VALIDATED against hand-established offsets
 *
 * Derived from: PlayerBase_ctor
 */
typedef struct PlayerBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0284[0x280];
    uint32_t field_0284;   /* +0x0284 */
    uint32_t field_0288;   /* +0x0288 */
    uint32_t field_028C;   /* +0x028C */
    uint32_t field_0290;   /* +0x0290 */
    uint32_t field_0294;   /* +0x0294 */
    uint32_t field_0298;   /* +0x0298 */
    uint32_t field_029C;   /* +0x029C */
    uint8_t  _pad_0348[0xA8];
    uint32_t field_0348;   /* +0x0348 */
    uint8_t  _pad_047C[0x130];
    uint32_t field_047C;   /* +0x047C */
    uint32_t field_0480;   /* +0x0480 */
    uint8_t field_0484;   /* +0x0484 */
    uint8_t field_0485;   /* +0x0485 */
    uint8_t  _pad_04DC[0x56];
    uint32_t field_04DC;   /* +0x04DC */
    uint8_t  _pad_0514[0x34];
    uint32_t field_0514;   /* +0x0514 */
    uint32_t field_0518;   /* +0x0518 */
    uint32_t field_051C;   /* +0x051C */
    uint16_t field_0520;   /* +0x0520 */
    uint8_t field_0522;   /* +0x0522 */
    uint8_t  _pad_0524[0x1];
    uint32_t field_0524;   /* +0x0524 */
    uint32_t field_0528;   /* +0x0528 */
    uint8_t  _pad_1B34[0x1608];
    uint32_t field_1B34;   /* +0x1B34 */
    uint8_t  _pad_1B9C[0x64];
    uint32_t field_1B9C;   /* +0x1B9C */
    uint8_t field_1BA0;   /* +0x1BA0 */
    uint8_t  _pad_1BA4[0x3];
    uint32_t field_1BA4;   /* +0x1BA4 */
    uint32_t field_1BA8;   /* +0x1BA8 */
    uint32_t field_1BAC;   /* +0x1BAC */
    uint32_t field_1BB0;   /* +0x1BB0 */
    uint32_t field_1BB4;   /* +0x1BB4 */
    uint8_t  _pad_1BBC[0x4];
    uint32_t field_1BBC;   /* +0x1BBC */
    uint32_t field_1BC0;   /* +0x1BC0 */
    uint32_t field_1BC4;   /* +0x1BC4 */
    uint32_t field_1BC8;   /* +0x1BC8 */
    uint32_t field_1BCC;   /* +0x1BCC */
    uint32_t field_1BD0;   /* +0x1BD0 */
    uint32_t field_1BD4;   /* +0x1BD4 */
    uint32_t field_1BD8;   /* +0x1BD8 */
    uint32_t field_1BDC;   /* +0x1BDC */
    uint8_t  _pad_2560[0x980];
    uint32_t field_2560;   /* +0x2560 */
    uint8_t  _pad_25AC[0x48];
    uint32_t field_25AC;   /* +0x25AC */
    uint32_t field_25B0;   /* +0x25B0 */
    uint32_t field_25B4;   /* +0x25B4 */
    uint32_t field_25B8;   /* +0x25B8 */
    uint8_t  _pad_25C4[0x8];
    uint32_t field_25C4;   /* +0x25C4 */
    uint32_t field_25C8;   /* +0x25C8 */
    uint32_t field_25CC;   /* +0x25CC */
    uint8_t  _pad_2618[0x48];
    uint32_t field_2618;   /* +0x2618 */
    uint32_t field_261C;   /* +0x261C */
    uint32_t field_2620;   /* +0x2620 */
    uint8_t field_2624;   /* +0x2624 */
    uint8_t  _pad_2628[0x3];
    uint32_t field_2628;   /* +0x2628 */
    uint32_t field_262C;   /* +0x262C */
    uint32_t field_2630;   /* +0x2630 */
    uint32_t field_2634;   /* +0x2634 */
    uint32_t field_2638;   /* +0x2638 */
    uint32_t field_263C;   /* +0x263C */
    uint32_t field_2640;   /* +0x2640 */
    uint8_t  _pad_2650[0xC];
    uint32_t field_2650;   /* +0x2650 */
    uint32_t field_2654;   /* +0x2654 */
    uint8_t field_2658;   /* +0x2658 */
    uint8_t  _pad_265C[0x3];
    uint32_t field_265C;   /* +0x265C */
    uint8_t  _pad_2680[0x20];
    uint32_t field_2680;   /* +0x2680 */
    uint32_t field_2684;   /* +0x2684 */
    uint32_t field_2688;   /* +0x2688 */
    uint32_t field_268C;   /* +0x268C */
    uint32_t field_2690;   /* +0x2690 */
    uint32_t field_2694;   /* +0x2694 */
    uint8_t field_2698;   /* +0x2698 */
    uint8_t  _pad_269C[0x3];
    uint32_t field_269C;   /* +0x269C */
    uint32_t field_26A0;   /* +0x26A0 */
    uint8_t field_26A4;   /* +0x26A4 */
    uint8_t  _pad_26B0[0xB];
    uint32_t field_26B0;   /* +0x26B0 */
    uint32_t field_26B4;   /* +0x26B4 */
    uint32_t field_26B8;   /* +0x26B8 */
    uint8_t  _pad_2720[0x64];
    uint32_t field_2720;   /* +0x2720 */
    uint32_t field_2724;   /* +0x2724 */
    uint32_t field_2728;   /* +0x2728 */
    uint32_t field_272C;   /* +0x272C */
    uint32_t field_2730;   /* +0x2730 */
    uint32_t field_2734;   /* +0x2734 */
    uint32_t field_2738;   /* +0x2738 */
    uint8_t  _pad_27A0[0x64];
    uint32_t field_27A0;   /* +0x27A0 */
    uint8_t  _pad_2808[0x64];
    uint32_t field_2808;   /* +0x2808 */
    uint8_t  _pad_2870[0x64];
    uint32_t field_2870;   /* +0x2870 */
    uint8_t  _pad_28D8[0x64];
    uint32_t field_28D8;   /* +0x28D8 */
    uint8_t  _pad_2974[0x98];
    uint32_t field_2974;   /* +0x2974 */
    uint32_t field_2978;   /* +0x2978 */
    uint8_t  _pad_29A4[0x28];
    uint32_t field_29A4;   /* +0x29A4 */
    uint8_t  _pad_2A0C[0x64];
    uint32_t field_2A0C;   /* +0x2A0C */
    uint8_t  _pad_2AA8[0x98];
    uint32_t field_2AA8;   /* +0x2AA8 */
    uint32_t field_2AAC;   /* +0x2AAC */
    uint8_t  _pad_2AE8[0x38];
    uint32_t field_2AE8;   /* +0x2AE8 */
    uint32_t field_2AEC;   /* +0x2AEC */
    uint8_t  _pad_2AF4[0x4];
    uint32_t field_2AF4;   /* +0x2AF4 */
    uint8_t field_2AF8;   /* +0x2AF8 */
    uint8_t field_2AF9;   /* +0x2AF9 */
    uint8_t  _pad_2AFC[0x2];
    uint32_t field_2AFC;   /* +0x2AFC */
    uint32_t field_2B00;   /* +0x2B00 */
    uint8_t  _pad_2BA8[0xA4];
    uint32_t field_2BA8;   /* +0x2BA8 */
    uint8_t  _pad_2BE4[0x38];
    uint32_t field_2BE4;   /* +0x2BE4 */
    uint32_t field_2BE8;   /* +0x2BE8 */
    uint8_t  _pad_2C24[0x38];
    uint32_t field_2C24;   /* +0x2C24 */
    uint32_t field_2C28;   /* +0x2C28 */
    uint8_t  _pad_2C38[0xC];
    uint32_t field_2C38;   /* +0x2C38 */
    uint32_t field_2C3C;   /* +0x2C3C */
    uint32_t field_2C40;   /* +0x2C40 */
    uint8_t  _pad_2C54[0x10];
    uint32_t field_2C54;   /* +0x2C54 */
    uint8_t field_2C58;   /* +0x2C58 */
    /* struct size >= 0x2c59 (11353) */
} PlayerBase;

/* RectCollider -- 24 member(s) proven
 *
 * Derived from: RectCollider_ctor
 */
typedef struct RectCollider {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0170[0x16C];
    uint32_t field_0170;   /* +0x0170 */
    uint32_t field_0174;   /* +0x0174 */
    uint32_t field_0178;   /* +0x0178 */
    uint32_t field_017C;   /* +0x017C */
    uint32_t field_0180;   /* +0x0180 */
    uint32_t field_0184;   /* +0x0184 */
    uint32_t field_0188;   /* +0x0188 */
    uint8_t  _pad_01A8[0x1C];
    uint32_t field_01A8;   /* +0x01A8 */
    uint32_t field_01AC;   /* +0x01AC */
    uint8_t  _pad_01C8[0x18];
    uint32_t field_01C8;   /* +0x01C8 */
    uint32_t field_01CC;   /* +0x01CC */
    uint8_t  _pad_01E8[0x18];
    uint32_t field_01E8;   /* +0x01E8 */
    uint32_t field_01EC;   /* +0x01EC */
    uint8_t  _pad_0208[0x18];
    uint32_t field_0208;   /* +0x0208 */
    uint32_t field_020C;   /* +0x020C */
    uint8_t  _pad_0228[0x18];
    uint32_t field_0228;   /* +0x0228 */
    uint32_t field_022C;   /* +0x022C */
    uint8_t  _pad_0248[0x18];
    uint32_t field_0248;   /* +0x0248 */
    uint32_t field_024C;   /* +0x024C */
    uint8_t  _pad_0268[0x18];
    uint32_t field_0268;   /* +0x0268 */
    uint32_t field_026C;   /* +0x026C */
    uint8_t  _pad_0288[0x18];
    uint32_t field_0288;   /* +0x0288 */
    uint32_t field_028C;   /* +0x028C */
    /* struct size >= 0x290 (656) */
} RectCollider;

/* ResourceMgr -- 8 member(s) proven
 *
 * Derived from: _ZN4sead11ResourceMgrC2Ev
 */
typedef struct ResourceMgr {
    uint8_t  _pad_0010[0x10];
    uint32_t field_0010;   /* +0x0010 */
    uint32_t field_0014;   /* +0x0014 */
    uint32_t field_0018;   /* +0x0018 */
    uint32_t field_001C;   /* +0x001C */
    uint32_t field_0020;   /* +0x0020 */
    uint32_t field_0024;   /* +0x0024 */
    uint32_t field_0028;   /* +0x0028 */
    uint32_t field_002C;   /* +0x002C */
    /* struct size >= 0x30 (48) */
} ResourceMgr;

/* ResultScene -- 83 member(s) proven
 *
 * Derived from: ResultScene_ctor
 */
typedef struct ResultScene {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_00C0[0xBC];
    uint32_t field_00C0;   /* +0x00C0 */
    uint8_t  _pad_00E4[0x20];
    uint32_t field_00E4;   /* +0x00E4 */
    uint8_t  _pad_00F4[0xC];
    uint32_t field_00F4;   /* +0x00F4 */
    uint32_t field_00F8;   /* +0x00F8 */
    uint32_t field_00FC;   /* +0x00FC */
    uint32_t field_0100;   /* +0x0100 */
    uint32_t field_0104;   /* +0x0104 */
    uint32_t field_0108;   /* +0x0108 */
    uint32_t field_010C;   /* +0x010C */
    uint32_t field_0110;   /* +0x0110 */
    uint32_t field_0114;   /* +0x0114 */
    uint8_t  _pad_0128[0x10];
    uint32_t field_0128;   /* +0x0128 */
    uint8_t  _pad_0138[0xC];
    uint32_t field_0138;   /* +0x0138 */
    uint32_t field_013C;   /* +0x013C */
    uint32_t field_0140;   /* +0x0140 */
    uint32_t field_0144;   /* +0x0144 */
    uint32_t field_0148;   /* +0x0148 */
    uint32_t field_014C;   /* +0x014C */
    uint32_t field_0150;   /* +0x0150 */
    uint32_t field_0154;   /* +0x0154 */
    uint32_t field_0158;   /* +0x0158 */
    uint8_t  _pad_016C[0x10];
    uint32_t field_016C;   /* +0x016C */
    uint8_t  _pad_017C[0xC];
    uint32_t field_017C;   /* +0x017C */
    uint32_t field_0180;   /* +0x0180 */
    uint32_t field_0184;   /* +0x0184 */
    uint32_t field_0188;   /* +0x0188 */
    uint32_t field_018C;   /* +0x018C */
    uint32_t field_0190;   /* +0x0190 */
    uint32_t field_0194;   /* +0x0194 */
    uint32_t field_0198;   /* +0x0198 */
    uint32_t field_019C;   /* +0x019C */
    uint8_t  _pad_01B0[0x10];
    uint32_t field_01B0;   /* +0x01B0 */
    uint8_t  _pad_01C0[0xC];
    uint32_t field_01C0;   /* +0x01C0 */
    uint32_t field_01C4;   /* +0x01C4 */
    uint32_t field_01C8;   /* +0x01C8 */
    uint32_t field_01CC;   /* +0x01CC */
    uint32_t field_01D0;   /* +0x01D0 */
    uint32_t field_01D4;   /* +0x01D4 */
    uint32_t field_01D8;   /* +0x01D8 */
    uint32_t field_01DC;   /* +0x01DC */
    uint32_t field_01E0;   /* +0x01E0 */
    uint8_t  _pad_01F4[0x10];
    uint32_t field_01F4;   /* +0x01F4 */
    uint8_t  _pad_0204[0xC];
    uint32_t field_0204;   /* +0x0204 */
    uint32_t field_0208;   /* +0x0208 */
    uint32_t field_020C;   /* +0x020C */
    uint32_t field_0210;   /* +0x0210 */
    uint32_t field_0214;   /* +0x0214 */
    uint32_t field_0218;   /* +0x0218 */
    uint32_t field_021C;   /* +0x021C */
    uint32_t field_0220;   /* +0x0220 */
    uint32_t field_0224;   /* +0x0224 */
    uint8_t  _pad_0238[0x10];
    uint32_t field_0238;   /* +0x0238 */
    uint8_t  _pad_0248[0xC];
    uint32_t field_0248;   /* +0x0248 */
    uint32_t field_024C;   /* +0x024C */
    uint32_t field_0250;   /* +0x0250 */
    uint32_t field_0254;   /* +0x0254 */
    uint32_t field_0258;   /* +0x0258 */
    uint32_t field_025C;   /* +0x025C */
    uint32_t field_0260;   /* +0x0260 */
    uint32_t field_0264;   /* +0x0264 */
    uint32_t field_0268;   /* +0x0268 */
    uint8_t  _pad_027C[0x10];
    uint32_t field_027C;   /* +0x027C */
    uint8_t  _pad_028C[0xC];
    uint32_t field_028C;   /* +0x028C */
    uint32_t field_0290;   /* +0x0290 */
    uint32_t field_0294;   /* +0x0294 */
    uint32_t field_0298;   /* +0x0298 */
    uint32_t field_029C;   /* +0x029C */
    uint32_t field_02A0;   /* +0x02A0 */
    uint32_t field_02A4;   /* +0x02A4 */
    uint32_t field_02A8;   /* +0x02A8 */
    uint32_t field_02AC;   /* +0x02AC */
    uint8_t  _pad_02C0[0x10];
    uint32_t field_02C0;   /* +0x02C0 */
    uint8_t  _pad_02D0[0xC];
    uint32_t field_02D0;   /* +0x02D0 */
    uint32_t field_02D4;   /* +0x02D4 */
    uint32_t field_02D8;   /* +0x02D8 */
    uint32_t field_02DC;   /* +0x02DC */
    uint32_t field_02E0;   /* +0x02E0 */
    uint32_t field_02E4;   /* +0x02E4 */
    uint32_t field_02E8;   /* +0x02E8 */
    uint32_t field_02EC;   /* +0x02EC */
    uint32_t field_02F0;   /* +0x02F0 */
    uint8_t  _pad_040C[0x118];
    uint32_t field_040C;   /* +0x040C */
    /* struct size >= 0x410 (1040) */
} ResultScene;

/* ShellEnemy -- 54 member(s) proven
 *
 * Derived from: _ZN10ShellEnemyC2EPK14ActorBuildInfo
 */
typedef struct ShellEnemy {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_026C[0x268];
    uint32_t field_026C;   /* +0x026C */
    uint32_t field_0270;   /* +0x0270 */
    uint8_t  _pad_0280[0xC];
    uint32_t field_0280;   /* +0x0280 */
    uint8_t  _pad_1804[0x1580];
    uint32_t field_1804;   /* +0x1804 */
    uint8_t  _pad_1864[0x5C];
    uint32_t field_1864;   /* +0x1864 */
    uint8_t  _pad_187C[0x14];
    uint32_t field_187C;   /* +0x187C */
    uint8_t  _pad_18D0[0x50];
    uint32_t field_18D0;   /* +0x18D0 */
    uint32_t field_18D4;   /* +0x18D4 */
    uint32_t field_18D8;   /* +0x18D8 */
    uint32_t field_18DC;   /* +0x18DC */
    uint32_t field_18E0;   /* +0x18E0 */
    uint32_t field_18E4;   /* +0x18E4 */
    uint32_t field_18E8;   /* +0x18E8 */
    uint32_t field_18EC;   /* +0x18EC */
    uint16_t field_18F0;   /* +0x18F0 */
    uint8_t field_18F2;   /* +0x18F2 */
    uint8_t  _pad_18F4[0x1];
    uint32_t field_18F4;   /* +0x18F4 */
    uint8_t  _pad_18F9[0x1];
    uint8_t field_18F9;   /* +0x18F9 */
    uint8_t  _pad_18FC[0x2];
    uint32_t field_18FC;   /* +0x18FC */
    uint32_t field_1900;   /* +0x1900 */
    uint32_t field_1904;   /* +0x1904 */
    uint16_t field_1908;   /* +0x1908 */
    uint8_t field_190A;   /* +0x190A */
    uint8_t  _pad_190C[0x1];
    uint32_t field_190C;   /* +0x190C */
    uint32_t field_1910;   /* +0x1910 */
    uint32_t field_1914;   /* +0x1914 */
    uint32_t field_1918;   /* +0x1918 */
    uint32_t field_191C;   /* +0x191C */
    uint32_t field_1920;   /* +0x1920 */
    uint32_t field_1924;   /* +0x1924 */
    uint32_t field_1928;   /* +0x1928 */
    uint32_t field_192C;   /* +0x192C */
    uint8_t  _pad_194C[0x1C];
    uint32_t field_194C;   /* +0x194C */
    uint8_t  _pad_196C[0x1C];
    uint32_t field_196C;   /* +0x196C */
    uint8_t  _pad_1974[0x4];
    uint32_t field_1974;   /* +0x1974 */
    uint32_t field_1978;   /* +0x1978 */
    uint8_t  _pad_198C[0x10];
    uint32_t field_198C;   /* +0x198C */
    uint32_t field_1990;   /* +0x1990 */
    uint32_t field_1994;   /* +0x1994 */
    uint32_t field_1998;   /* +0x1998 */
    uint8_t field_199C;   /* +0x199C */
    uint8_t field_199D;   /* +0x199D */
    uint8_t  _pad_19A0[0x2];
    uint32_t field_19A0;   /* +0x19A0 */
    uint8_t field_19A4;   /* +0x19A4 */
    uint8_t  _pad_19A8[0x3];
    uint32_t field_19A8;   /* +0x19A8 */
    uint32_t field_19AC;   /* +0x19AC */
    uint32_t field_19B0;   /* +0x19B0 */
    uint32_t field_19B4;   /* +0x19B4 */
    uint8_t field_19B8;   /* +0x19B8 */
    uint8_t  _pad_19BC[0x3];
    uint32_t field_19BC;   /* +0x19BC */
    uint8_t  _pad_19D0[0x10];
    uint32_t field_19D0;   /* +0x19D0 */
    uint32_t field_19D4;   /* +0x19D4 */
    uint8_t  _pad_1A3C[0x64];
    uint32_t field_1A3C;   /* +0x1A3C */
    /* struct size >= 0x1a40 (6720) */
} ShellEnemy;

/* SoundActor -- 6 member(s) proven
 *
 * Derived from: SoundActor_ctor
 */
typedef struct SoundActor {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0078[0x74];
    uint32_t field_0078;   /* +0x0078 */
    uint32_t field_007C;   /* +0x007C */
    uint32_t field_0080;   /* +0x0080 */
    uint32_t field_0084;   /* +0x0084 */
    uint32_t field_0088;   /* +0x0088 */
    /* struct size >= 0x8c (140) */
} SoundActor;

/* StageActor -- 54 member(s) proven
 *
 * Derived from: _ZN10StageActorC2EPK14ActorBuildInfo
 */
typedef struct StageActor {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0050[0x4C];
    uint32_t field_0050;   /* +0x0050 */
    uint16_t field_0054;   /* +0x0054 */
    uint8_t field_0056;   /* +0x0056 */
    uint8_t field_0057;   /* +0x0057 */
    uint32_t field_0058;   /* +0x0058 */
    uint32_t field_005C;   /* +0x005C */
    uint32_t field_0060;   /* +0x0060 */
    uint32_t field_0064;   /* +0x0064 */
    uint32_t field_0068;   /* +0x0068 */
    uint8_t  _pad_007C[0x10];
    uint32_t field_007C;   /* +0x007C */
    uint32_t field_0080;   /* +0x0080 */
    uint32_t field_0084;   /* +0x0084 */
    uint32_t field_0088;   /* +0x0088 */
    uint32_t field_008C;   /* +0x008C */
    uint32_t field_0090;   /* +0x0090 */
    uint32_t field_0094;   /* +0x0094 */
    uint32_t field_0098;   /* +0x0098 */
    uint32_t field_009C;   /* +0x009C */
    uint32_t field_00A0;   /* +0x00A0 */
    uint32_t field_00A4;   /* +0x00A4 */
    uint32_t field_00A8;   /* +0x00A8 */
    uint32_t field_00AC;   /* +0x00AC */
    uint32_t field_00B0;   /* +0x00B0 */
    uint32_t field_00B4;   /* +0x00B4 */
    uint32_t field_00B8;   /* +0x00B8 */
    uint8_t  _pad_0129[0x6D];
    uint8_t field_0129;   /* +0x0129 */
    uint8_t  _pad_01FC[0xD2];
    uint32_t field_01FC;   /* +0x01FC */
    uint32_t field_0200;   /* +0x0200 */
    uint8_t  _pad_0214[0x10];
    uint8_t field_0214;   /* +0x0214 */
    uint8_t field_0215;   /* +0x0215 */
    uint8_t field_0216;   /* +0x0216 */
    uint8_t field_0217;   /* +0x0217 */
    uint8_t field_0218;   /* +0x0218 */
    uint8_t field_0219;   /* +0x0219 */
    uint8_t field_021A;   /* +0x021A */
    uint8_t field_021B;   /* +0x021B */
    uint8_t field_021C;   /* +0x021C */
    uint8_t  _pad_021E[0x1];
    uint16_t field_021E;   /* +0x021E */
    uint32_t field_0220;   /* +0x0220 */
    uint32_t field_0224;   /* +0x0224 */
    uint8_t field_0228;   /* +0x0228 */
    uint8_t  _pad_022C[0x3];
    uint32_t field_022C;   /* +0x022C */
    uint32_t field_0230;   /* +0x0230 */
    uint32_t field_0234;   /* +0x0234 */
    uint32_t field_0238;   /* +0x0238 */
    uint32_t field_023C;   /* +0x023C */
    uint32_t field_0240;   /* +0x0240 */
    uint32_t field_0244;   /* +0x0244 */
    uint8_t  _pad_0270[0x28];
    uint32_t field_0270;   /* +0x0270 */
    uint32_t field_0274;   /* +0x0274 */
    uint32_t field_0278;   /* +0x0278 */
    uint32_t field_027C;   /* +0x027C */
    uint32_t field_0280;   /* +0x0280 */
    /* struct size >= 0x284 (644) */
} StageActor;

/* StarCoinBase -- 7 member(s) proven
 *
 * Derived from: StarCoinBase_ctor
 */
typedef struct StarCoinBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_1814[0x1810];
    uint8_t field_1814;   /* +0x1814 */
    uint8_t field_1815;   /* +0x1815 */
    uint8_t  _pad_1818[0x2];
    uint32_t field_1818;   /* +0x1818 */
    uint32_t field_181C;   /* +0x181C */
    uint8_t field_1820;   /* +0x1820 */
    uint8_t  _pad_1824[0x3];
    uint32_t field_1824;   /* +0x1824 */
    /* struct size >= 0x1828 (6184) */
    uint8_t _pad_to_sizeof[0x4];   /* +0x1828 .. total 0x182C, matches main.i64 sizeof */
} StarCoinBase;

/* StateActor -- 3 member(s) proven
 *
 * Derived from: StateActor_ctor
 */
typedef struct StateActor {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_17BC[0x17B8];
    uint32_t field_17BC;   /* +0x17BC */
    uint32_t field_17C0;   /* +0x17C0 */
    /* struct size >= 0x17c4 (6084) */
    uint8_t _pad_to_sizeof[0x10];   /* +0x17C4 .. total 0x17D4, matches main.i64 sizeof */
} StateActor;

/* StateMgr -- 4 member(s) proven
 *
 * Derived from: StateMgr_ctor
 */
typedef struct StateMgr {
    uint32_t field_0000;   /* +0x0000 */
    uint32_t field_0004;   /* +0x0004 */
    uint32_t field_0008;   /* +0x0008 */
    uint32_t field_000C;   /* +0x000C */
    /* struct size >= 0x10 (16) */
} StateMgr;

/* TaskBase -- 14 member(s) proven
 *
 * Derived from: _ZN4sead8TaskBaseC2ERKNS_16TaskConstructArgEPKc
 */
typedef struct TaskBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0020[0x1C];
    uint32_t field_0020;   /* +0x0020 */
    uint8_t  _pad_0028[0x4];
    uint32_t field_0028;   /* +0x0028 */
    uint32_t field_002C;   /* +0x002C */
    uint32_t field_0030;   /* +0x0030 */
    uint32_t field_0034;   /* +0x0034 */
    uint32_t field_0038;   /* +0x0038 */
    uint32_t field_003C;   /* +0x003C */
    uint32_t field_0040;   /* +0x0040 */
    uint8_t  _pad_005C[0x18];
    uint32_t field_005C;   /* +0x005C */
    uint32_t field_0060;   /* +0x0060 */
    uint32_t field_0064;   /* +0x0064 */
    uint32_t field_0068;   /* +0x0068 */
    uint32_t field_006C;   /* +0x006C */
    /* struct size >= 0x70 (112) */
} TaskBase;

/* TerrainActor -- 10 member(s) proven
 *
 * Derived from: TerrainActor_ctor
 */
typedef struct TerrainActor {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_17E0[0x17DC];
    uint32_t field_17E0;   /* +0x17E0 */
    uint8_t  _pad_17E8[0x4];
    uint32_t field_17E8;   /* +0x17E8 */
    uint32_t field_17EC;   /* +0x17EC */
    uint32_t field_17F0;   /* +0x17F0 */
    uint32_t field_17F4;   /* +0x17F4 */
    uint32_t field_17F8;   /* +0x17F8 */
    uint8_t  _pad_1AF4[0x2F8];
    uint8_t  sub_1AF4[0x4];   /* +0x1AF4 sub-object TerrainEffects, size not established */
    uint8_t  _pad_11A40[0xFF48];
    uint32_t field_11A40;   /* +0x11A40 */
    uint8_t  _pad_11A50[0xC];
    uint32_t field_11A50;   /* +0x11A50 */
    /* struct size >= 0x11a54 (72276) */
} TerrainActor;

/* TerrainEffects -- 18 member(s) proven
 *
 * Derived from: TerrainEffects_ctor
 */
typedef struct TerrainEffects {
    uint32_t field_0000;   /* +0x0000 */
    uint32_t field_0004;   /* +0x0004 */
    uint8_t  _pad_000C[0x4];
    uint32_t field_000C;   /* +0x000C */
    uint32_t field_0010;   /* +0x0010 */
    uint32_t field_0014;   /* +0x0014 */
    uint8_t  _pad_0024[0xC];
    uint32_t field_0024;   /* +0x0024 */
    uint32_t field_0028;   /* +0x0028 */
    uint32_t field_002C;   /* +0x002C */
    uint8_t  _pad_0094[0x64];
    uint32_t field_0094;   /* +0x0094 */
    uint32_t field_0098;   /* +0x0098 */
    uint32_t field_009C;   /* +0x009C */
    uint32_t field_00A0;   /* +0x00A0 */
    uint8_t  _pad_00E9[0x45];
    uint8_t field_00E9;   /* +0x00E9 */
    uint8_t  _pad_00EC[0x2];
    uint32_t field_00EC;   /* +0x00EC */
    uint8_t  _pad_00FC[0xC];
    uint32_t field_00FC;   /* +0x00FC */
    uint32_t field_0100;   /* +0x0100 */
    uint8_t  _pad_F9F8[0xF8F4];
    uint32_t field_F9F8;   /* +0xF9F8 */
    uint8_t  _pad_FF44[0x548];
    uint32_t field_FF44;   /* +0xFF44 */
    /* struct size >= 0xff48 (65352) */
} TerrainEffects;

/* Thread -- 18 member(s) proven
 *
 * Derived from: _ZN4sead6ThreadC2ERKNS_14SafeStringBaseIcEEPNS_4HeapEiNS_12MessageQueue9BlockTypeElii
 */
typedef struct Thread {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0010[0xC];
    uint32_t field_0010;   /* +0x0010 */
    uint32_t field_0014;   /* +0x0014 */
    uint32_t field_0018;   /* +0x0018 */
    uint8_t  _pad_0050[0x34];
    uint32_t field_0050;   /* +0x0050 */
    uint8_t  _pad_0058[0x4];
    uint32_t field_0058;   /* +0x0058 */
    uint32_t field_005C;   /* +0x005C */
    uint32_t field_0060;   /* +0x0060 */
    uint32_t field_0064;   /* +0x0064 */
    uint8_t  _pad_006C[0x4];
    uint32_t field_006C;   /* +0x006C */
    uint32_t field_0070;   /* +0x0070 */
    uint32_t field_0074;   /* +0x0074 */
    uint32_t field_0078;   /* +0x0078 */
    uint32_t field_007C;   /* +0x007C */
    uint32_t field_0080;   /* +0x0080 */
    uint32_t field_0084;   /* +0x0084 */
    uint32_t field_0088;   /* +0x0088 */
    uint32_t field_008C;   /* +0x008C */
    /* struct size >= 0x90 (144) */
} Thread;

/* TileCheck -- 12 member(s) proven
 *
 * Derived from: TileCheck_ctor
 */
typedef struct TileCheck {
    uint8_t field_0000;   /* +0x0000 */
    uint8_t field_0001;   /* +0x0001 */
    uint8_t field_0002;   /* +0x0002 */
    uint8_t field_0003;   /* +0x0003 */
    uint32_t field_0004;   /* +0x0004 */
    uint32_t field_0008;   /* +0x0008 */
    uint32_t field_000C;   /* +0x000C */
    uint32_t field_0010;   /* +0x0010 */
    uint32_t field_0014;   /* +0x0014 */
    uint32_t field_0018;   /* +0x0018 */
    uint32_t field_001C;   /* +0x001C */
    uint8_t  _pad_0048[0x28];
    uint32_t field_0048;   /* +0x0048 */
    /* struct size >= 0x4c (76) */
} TileCheck;

/* TileMgr -- 268 member(s) proven
 *
 * Derived from: TileMgr_ctor
 */
typedef struct TileMgr {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0014[0x10];
    uint32_t field_0014;   /* +0x0014 */
    uint32_t field_0018;   /* +0x0018 */
    uint32_t field_001C;   /* +0x001C */
    uint32_t field_0020;   /* +0x0020 */
    uint8_t  _pad_2820[0x27FC];
    uint8_t field_2820;   /* +0x2820 */
    uint8_t field_2821;   /* +0x2821 */
    uint8_t  _pad_2824[0x2];
    uint32_t field_2824;   /* +0x2824 */
    uint32_t field_2828;   /* +0x2828 */
    uint32_t field_282C;   /* +0x282C */
    uint32_t field_2830;   /* +0x2830 */
    uint8_t  _pad_2D64[0x530];
    uint32_t field_2D64;   /* +0x2D64 */
    uint8_t  _pad_2D80[0x18];
    uint32_t field_2D80;   /* +0x2D80 */
    uint32_t field_2D84;   /* +0x2D84 */
    uint32_t field_2D88;   /* +0x2D88 */
    uint8_t  _pad_32BC[0x530];
    uint32_t field_32BC;   /* +0x32BC */
    uint8_t  _pad_32D8[0x18];
    uint32_t field_32D8;   /* +0x32D8 */
    uint32_t field_32DC;   /* +0x32DC */
    uint32_t field_32E0;   /* +0x32E0 */
    uint32_t field_32E4;   /* +0x32E4 */
    uint32_t field_32E8;   /* +0x32E8 */
    uint32_t field_32EC;   /* +0x32EC */
    uint32_t field_32F0;   /* +0x32F0 */
    uint8_t  _pad_330C[0x18];
    uint32_t field_330C;   /* +0x330C */
    uint8_t  _pad_3328[0x18];
    uint32_t field_3328;   /* +0x3328 */
    uint8_t  _pad_3344[0x18];
    uint32_t field_3344;   /* +0x3344 */
    uint8_t  _pad_38E8[0x5A0];
    uint32_t field_38E8;   /* +0x38E8 */
    uint32_t field_38EC;   /* +0x38EC */
    uint32_t field_38F0;   /* +0x38F0 */
    uint32_t field_38F4;   /* +0x38F4 */
    uint16_t field_38F8;   /* +0x38F8 */
    uint8_t field_38FA;   /* +0x38FA */
    uint8_t  _pad_38FC[0x1];
    uint32_t field_38FC;   /* +0x38FC */
    uint32_t field_3900;   /* +0x3900 */
    uint32_t field_3904;   /* +0x3904 */
    uint32_t field_3908;   /* +0x3908 */
    uint16_t field_390C;   /* +0x390C */
    uint8_t field_390E;   /* +0x390E */
    uint8_t  _pad_3910[0x1];
    uint32_t field_3910;   /* +0x3910 */
    uint32_t field_3914;   /* +0x3914 */
    uint32_t field_3918;   /* +0x3918 */
    uint32_t field_391C;   /* +0x391C */
    uint16_t field_3920;   /* +0x3920 */
    uint8_t field_3922;   /* +0x3922 */
    uint8_t  _pad_3924[0x1];
    uint32_t field_3924;   /* +0x3924 */
    uint32_t field_3928;   /* +0x3928 */
    uint32_t field_392C;   /* +0x392C */
    uint32_t field_3930;   /* +0x3930 */
    uint16_t field_3934;   /* +0x3934 */
    uint8_t field_3936;   /* +0x3936 */
    uint8_t  _pad_3938[0x1];
    uint32_t field_3938;   /* +0x3938 */
    uint32_t field_393C;   /* +0x393C */
    uint32_t field_3940;   /* +0x3940 */
    uint32_t field_3944;   /* +0x3944 */
    uint16_t field_3948;   /* +0x3948 */
    uint8_t field_394A;   /* +0x394A */
    uint8_t  _pad_394C[0x1];
    uint32_t field_394C;   /* +0x394C */
    uint32_t field_3950;   /* +0x3950 */
    uint32_t field_3954;   /* +0x3954 */
    uint32_t field_3958;   /* +0x3958 */
    uint16_t field_395C;   /* +0x395C */
    uint8_t field_395E;   /* +0x395E */
    uint8_t  _pad_3960[0x1];
    uint32_t field_3960;   /* +0x3960 */
    uint32_t field_3964;   /* +0x3964 */
    uint32_t field_3968;   /* +0x3968 */
    uint32_t field_396C;   /* +0x396C */
    uint16_t field_3970;   /* +0x3970 */
    uint8_t field_3972;   /* +0x3972 */
    uint8_t  _pad_3974[0x1];
    uint32_t field_3974;   /* +0x3974 */
    uint32_t field_3978;   /* +0x3978 */
    uint32_t field_397C;   /* +0x397C */
    uint32_t field_3980;   /* +0x3980 */
    uint16_t field_3984;   /* +0x3984 */
    uint8_t field_3986;   /* +0x3986 */
    uint8_t  _pad_3988[0x1];
    uint32_t field_3988;   /* +0x3988 */
    uint32_t field_398C;   /* +0x398C */
    uint32_t field_3990;   /* +0x3990 */
    uint32_t field_3994;   /* +0x3994 */
    uint16_t field_3998;   /* +0x3998 */
    uint8_t field_399A;   /* +0x399A */
    uint8_t  _pad_399C[0x1];
    uint32_t field_399C;   /* +0x399C */
    uint32_t field_39A0;   /* +0x39A0 */
    uint32_t field_39A4;   /* +0x39A4 */
    uint32_t field_39A8;   /* +0x39A8 */
    uint16_t field_39AC;   /* +0x39AC */
    uint8_t field_39AE;   /* +0x39AE */
    uint8_t  _pad_39B0[0x1];
    uint32_t field_39B0;   /* +0x39B0 */
    uint32_t field_39B4;   /* +0x39B4 */
    uint32_t field_39B8;   /* +0x39B8 */
    uint32_t field_39BC;   /* +0x39BC */
    uint16_t field_39C0;   /* +0x39C0 */
    uint8_t field_39C2;   /* +0x39C2 */
    uint8_t  _pad_39C4[0x1];
    uint32_t field_39C4;   /* +0x39C4 */
    uint32_t field_39C8;   /* +0x39C8 */
    uint32_t field_39CC;   /* +0x39CC */
    uint32_t field_39D0;   /* +0x39D0 */
    uint16_t field_39D4;   /* +0x39D4 */
    uint8_t field_39D6;   /* +0x39D6 */
    uint8_t  _pad_39D8[0x1];
    uint32_t field_39D8;   /* +0x39D8 */
    uint32_t field_39DC;   /* +0x39DC */
    uint32_t field_39E0;   /* +0x39E0 */
    uint32_t field_39E4;   /* +0x39E4 */
    uint16_t field_39E8;   /* +0x39E8 */
    uint8_t field_39EA;   /* +0x39EA */
    uint8_t  _pad_39EC[0x1];
    uint32_t field_39EC;   /* +0x39EC */
    uint32_t field_39F0;   /* +0x39F0 */
    uint32_t field_39F4;   /* +0x39F4 */
    uint32_t field_39F8;   /* +0x39F8 */
    uint16_t field_39FC;   /* +0x39FC */
    uint8_t field_39FE;   /* +0x39FE */
    uint8_t  _pad_3A00[0x1];
    uint32_t field_3A00;   /* +0x3A00 */
    uint32_t field_3A04;   /* +0x3A04 */
    uint32_t field_3A08;   /* +0x3A08 */
    uint32_t field_3A0C;   /* +0x3A0C */
    uint16_t field_3A10;   /* +0x3A10 */
    uint8_t field_3A12;   /* +0x3A12 */
    uint8_t  _pad_3A14[0x1];
    uint32_t field_3A14;   /* +0x3A14 */
    uint32_t field_3A18;   /* +0x3A18 */
    uint32_t field_3A1C;   /* +0x3A1C */
    uint32_t field_3A20;   /* +0x3A20 */
    uint16_t field_3A24;   /* +0x3A24 */
    uint8_t field_3A26;   /* +0x3A26 */
    uint8_t  _pad_3A28[0x1];
    uint32_t field_3A28;   /* +0x3A28 */
    uint32_t field_3A2C;   /* +0x3A2C */
    uint32_t field_3A30;   /* +0x3A30 */
    uint32_t field_3A34;   /* +0x3A34 */
    uint16_t field_3A38;   /* +0x3A38 */
    uint8_t field_3A3A;   /* +0x3A3A */
    uint8_t  _pad_3A3C[0x1];
    uint32_t field_3A3C;   /* +0x3A3C */
    uint32_t field_3A40;   /* +0x3A40 */
    uint32_t field_3A44;   /* +0x3A44 */
    uint32_t field_3A48;   /* +0x3A48 */
    uint16_t field_3A4C;   /* +0x3A4C */
    uint8_t field_3A4E;   /* +0x3A4E */
    uint8_t  _pad_3A50[0x1];
    uint32_t field_3A50;   /* +0x3A50 */
    uint32_t field_3A54;   /* +0x3A54 */
    uint32_t field_3A58;   /* +0x3A58 */
    uint32_t field_3A5C;   /* +0x3A5C */
    uint16_t field_3A60;   /* +0x3A60 */
    uint8_t field_3A62;   /* +0x3A62 */
    uint8_t  _pad_3A64[0x1];
    uint32_t field_3A64;   /* +0x3A64 */
    uint32_t field_3A68;   /* +0x3A68 */
    uint32_t field_3A6C;   /* +0x3A6C */
    uint32_t field_3A70;   /* +0x3A70 */
    uint16_t field_3A74;   /* +0x3A74 */
    uint8_t field_3A76;   /* +0x3A76 */
    uint8_t  _pad_3A78[0x1];
    uint32_t field_3A78;   /* +0x3A78 */
    uint32_t field_3A7C;   /* +0x3A7C */
    uint32_t field_3A80;   /* +0x3A80 */
    uint32_t field_3A84;   /* +0x3A84 */
    uint16_t field_3A88;   /* +0x3A88 */
    uint8_t field_3A8A;   /* +0x3A8A */
    uint8_t  _pad_3A8C[0x1];
    uint32_t field_3A8C;   /* +0x3A8C */
    uint32_t field_3A90;   /* +0x3A90 */
    uint32_t field_3A94;   /* +0x3A94 */
    uint32_t field_3A98;   /* +0x3A98 */
    uint16_t field_3A9C;   /* +0x3A9C */
    uint8_t field_3A9E;   /* +0x3A9E */
    uint8_t  _pad_3AA0[0x1];
    uint32_t field_3AA0;   /* +0x3AA0 */
    uint32_t field_3AA4;   /* +0x3AA4 */
    uint32_t field_3AA8;   /* +0x3AA8 */
    uint32_t field_3AAC;   /* +0x3AAC */
    uint16_t field_3AB0;   /* +0x3AB0 */
    uint8_t field_3AB2;   /* +0x3AB2 */
    uint8_t  _pad_3AB4[0x1];
    uint32_t field_3AB4;   /* +0x3AB4 */
    uint32_t field_3AB8;   /* +0x3AB8 */
    uint32_t field_3ABC;   /* +0x3ABC */
    uint32_t field_3AC0;   /* +0x3AC0 */
    uint16_t field_3AC4;   /* +0x3AC4 */
    uint8_t field_3AC6;   /* +0x3AC6 */
    uint8_t  _pad_3AC8[0x1];
    uint32_t field_3AC8;   /* +0x3AC8 */
    uint32_t field_3ACC;   /* +0x3ACC */
    uint32_t field_3AD0;   /* +0x3AD0 */
    uint32_t field_3AD4;   /* +0x3AD4 */
    uint16_t field_3AD8;   /* +0x3AD8 */
    uint8_t field_3ADA;   /* +0x3ADA */
    uint8_t  _pad_3ADC[0x1];
    uint32_t field_3ADC;   /* +0x3ADC */
    uint32_t field_3AE0;   /* +0x3AE0 */
    uint32_t field_3AE4;   /* +0x3AE4 */
    uint32_t field_3AE8;   /* +0x3AE8 */
    uint16_t field_3AEC;   /* +0x3AEC */
    uint8_t field_3AEE;   /* +0x3AEE */
    uint8_t  _pad_3AF0[0x1];
    uint32_t field_3AF0;   /* +0x3AF0 */
    uint32_t field_3AF4;   /* +0x3AF4 */
    uint32_t field_3AF8;   /* +0x3AF8 */
    uint32_t field_3AFC;   /* +0x3AFC */
    uint16_t field_3B00;   /* +0x3B00 */
    uint8_t field_3B02;   /* +0x3B02 */
    uint8_t  _pad_3B04[0x1];
    uint32_t field_3B04;   /* +0x3B04 */
    uint32_t field_3B08;   /* +0x3B08 */
    uint32_t field_3B0C;   /* +0x3B0C */
    uint32_t field_3B10;   /* +0x3B10 */
    uint16_t field_3B14;   /* +0x3B14 */
    uint8_t field_3B16;   /* +0x3B16 */
    uint8_t  _pad_3B18[0x1];
    uint32_t field_3B18;   /* +0x3B18 */
    uint32_t field_3B1C;   /* +0x3B1C */
    uint32_t field_3B20;   /* +0x3B20 */
    uint32_t field_3B24;   /* +0x3B24 */
    uint16_t field_3B28;   /* +0x3B28 */
    uint8_t field_3B2A;   /* +0x3B2A */
    uint8_t  _pad_3B2C[0x1];
    uint32_t field_3B2C;   /* +0x3B2C */
    uint32_t field_3B30;   /* +0x3B30 */
    uint32_t field_3B34;   /* +0x3B34 */
    uint32_t field_3B38;   /* +0x3B38 */
    uint16_t field_3B3C;   /* +0x3B3C */
    uint8_t field_3B3E;   /* +0x3B3E */
    uint8_t  _pad_3B40[0x1];
    uint32_t field_3B40;   /* +0x3B40 */
    uint32_t field_3B44;   /* +0x3B44 */
    uint32_t field_3B48;   /* +0x3B48 */
    uint32_t field_3B4C;   /* +0x3B4C */
    uint16_t field_3B50;   /* +0x3B50 */
    uint8_t field_3B52;   /* +0x3B52 */
    uint8_t  _pad_3B54[0x1];
    uint32_t field_3B54;   /* +0x3B54 */
    uint32_t field_3B58;   /* +0x3B58 */
    uint32_t field_3B5C;   /* +0x3B5C */
    uint32_t field_3B60;   /* +0x3B60 */
    uint16_t field_3B64;   /* +0x3B64 */
    uint8_t field_3B66;   /* +0x3B66 */
    uint8_t  _pad_3B68[0x1];
    uint32_t field_3B68;   /* +0x3B68 */
    uint32_t field_3B6C;   /* +0x3B6C */
    uint32_t field_3B70;   /* +0x3B70 */
    uint32_t field_3B74;   /* +0x3B74 */
    uint16_t field_3B78;   /* +0x3B78 */
    uint8_t field_3B7A;   /* +0x3B7A */
    uint8_t  _pad_3B7C[0x1];
    uint32_t field_3B7C;   /* +0x3B7C */
    uint32_t field_3B80;   /* +0x3B80 */
    uint32_t field_3B84;   /* +0x3B84 */
    uint32_t field_3B88;   /* +0x3B88 */
    uint16_t field_3B8C;   /* +0x3B8C */
    uint8_t field_3B8E;   /* +0x3B8E */
    uint8_t  _pad_3B90[0x1];
    uint32_t field_3B90;   /* +0x3B90 */
    uint32_t field_3B94;   /* +0x3B94 */
    uint32_t field_3B98;   /* +0x3B98 */
    uint32_t field_3B9C;   /* +0x3B9C */
    uint16_t field_3BA0;   /* +0x3BA0 */
    uint8_t field_3BA2;   /* +0x3BA2 */
    uint8_t  _pad_3BA4[0x1];
    uint32_t field_3BA4;   /* +0x3BA4 */
    uint32_t field_3BA8;   /* +0x3BA8 */
    uint32_t field_3BAC;   /* +0x3BAC */
    uint32_t field_3BB0;   /* +0x3BB0 */
    uint16_t field_3BB4;   /* +0x3BB4 */
    uint8_t field_3BB6;   /* +0x3BB6 */
    uint8_t  _pad_3BB8[0x1];
    uint32_t field_3BB8;   /* +0x3BB8 */
    uint32_t field_3BBC;   /* +0x3BBC */
    uint32_t field_3BC0;   /* +0x3BC0 */
    uint32_t field_3BC4;   /* +0x3BC4 */
    uint16_t field_3BC8;   /* +0x3BC8 */
    uint8_t field_3BCA;   /* +0x3BCA */
    uint8_t  _pad_3BCC[0x1];
    uint32_t field_3BCC;   /* +0x3BCC */
    uint32_t field_3BD0;   /* +0x3BD0 */
    uint32_t field_3BD4;   /* +0x3BD4 */
    uint32_t field_3BD8;   /* +0x3BD8 */
    uint16_t field_3BDC;   /* +0x3BDC */
    uint8_t field_3BDE;   /* +0x3BDE */
    uint8_t  _pad_3BE0[0x1];
    uint32_t field_3BE0;   /* +0x3BE0 */
    uint32_t field_3BE4;   /* +0x3BE4 */
    uint32_t field_3BE8;   /* +0x3BE8 */
    uint32_t field_3BEC;   /* +0x3BEC */
    uint16_t field_3BF0;   /* +0x3BF0 */
    uint8_t field_3BF2;   /* +0x3BF2 */
    uint8_t  _pad_3BF4[0x1];
    uint32_t field_3BF4;   /* +0x3BF4 */
    uint32_t field_3BF8;   /* +0x3BF8 */
    uint32_t field_3BFC;   /* +0x3BFC */
    uint32_t field_3C00;   /* +0x3C00 */
    uint16_t field_3C04;   /* +0x3C04 */
    uint8_t field_3C06;   /* +0x3C06 */
    uint8_t  _pad_3F90[0x389];
    uint16_t field_3F90;   /* +0x3F90 */
    uint8_t field_3F92;   /* +0x3F92 */
    /* struct size >= 0x3f93 (16275) */
} TileMgr;

/* TreeNode -- 4 member(s) proven
 *
 * Derived from: _ZN4sead8TreeNodeC2Ev
 */
typedef struct TreeNode {
    uint32_t field_0000;   /* +0x0000 */
    uint32_t field_0004;   /* +0x0004 */
    uint32_t field_0008;   /* +0x0008 */
    uint32_t field_000C;   /* +0x000C */
    /* struct size >= 0x10 (16) */
} TreeNode;

/* Yoshi -- 24 member(s) proven
 *
 * Derived from: Yoshi_ctor
 */
typedef struct Yoshi {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0215[0x211];
    uint8_t field_0215;   /* +0x0215 */
    uint8_t  _pad_0288[0x72];
    uint32_t field_0288;   /* +0x0288 */
    uint8_t  _pad_2C5C[0x29D0];
    uint32_t field_2C5C;   /* +0x2C5C */
    uint32_t field_2C60;   /* +0x2C60 */
    uint8_t  _pad_2C74[0x10];
    uint32_t field_2C74;   /* +0x2C74 */
    uint8_t  _pad_2C80[0x8];
    uint32_t field_2C80;   /* +0x2C80 */
    uint32_t field_2C84;   /* +0x2C84 */
    uint32_t field_2C88;   /* +0x2C88 */
    uint8_t  _pad_2C9C[0x10];
    uint32_t field_2C9C;   /* +0x2C9C */
    uint8_t  _pad_2CC8[0x28];
    uint32_t field_2CC8;   /* +0x2CC8 */
    uint8_t field_2CCC;   /* +0x2CCC */
    uint8_t  _pad_2CD0[0x3];
    uint32_t field_2CD0;   /* +0x2CD0 */
    uint32_t field_2CD4;   /* +0x2CD4 */
    uint8_t field_2CD8;   /* +0x2CD8 */
    uint8_t  _pad_2CDC[0x3];
    uint32_t field_2CDC;   /* +0x2CDC */
    uint32_t field_2CE0;   /* +0x2CE0 */
    uint8_t field_2CE4;   /* +0x2CE4 */
    uint8_t  _pad_2CE8[0x3];
    uint32_t field_2CE8;   /* +0x2CE8 */
    uint8_t field_2CEC;   /* +0x2CEC */
    uint8_t  _pad_2CF0[0x3];
    uint32_t field_2CF0;   /* +0x2CF0 */
    uint32_t field_2CF4;   /* +0x2CF4 */
    uint8_t  _pad_2D5C[0x64];
    uint32_t field_2D5C;   /* +0x2D5C */
    uint8_t  _pad_2DC4[0x64];
    uint32_t field_2DC4;   /* +0x2DC4 */
    /* struct size >= 0x2dc8 (11720) */
} Yoshi;

/* nn__ui2d__Layout_ -- 14 member(s) proven
 *
 * Derived from: nn__ui2d__Layout__ctor
 */
typedef struct nn__ui2d__Layout_ {
    uint32_t field_0000;   /* +0x0000 */
    uint32_t field_0004;   /* +0x0004 */
    uint32_t field_0008;   /* +0x0008 */
    uint32_t field_000C;   /* +0x000C */
    uint32_t field_0010;   /* +0x0010 */
    uint32_t field_0014;   /* +0x0014 */
    uint32_t field_0018;   /* +0x0018 */
    uint32_t field_001C;   /* +0x001C */
    uint32_t field_0020;   /* +0x0020 */
    uint32_t field_0024;   /* +0x0024 */
    uint32_t field_0028;   /* +0x0028 */
    uint32_t field_002C;   /* +0x002C */
    uint32_t field_0030;   /* +0x0030 */
    uint32_t field_0034;   /* +0x0034 */
    /* struct size >= 0x38 (56) */
} nn__ui2d__Layout_;

/* nn_atk_FsSoundArchive -- 5 member(s) proven
 *
 * Derived from: nn_atk_FsSoundArchive_ctor
 */
typedef struct nn_atk_FsSoundArchive {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0310[0x30C];
    uint8_t field_0310;   /* +0x0310 */
    uint8_t field_0311;   /* +0x0311 */
    uint8_t  _pad_0314[0x2];
    uint32_t field_0314;   /* +0x0314 */
    uint8_t  _pad_0598[0x280];
    uint8_t  sub_0598[0x4];   /* +0x0598 sub-object InitializeMutex, size not established */
    /* struct size >= 0x59c (1436) */
} nn_atk_FsSoundArchive;

/* BobOmb -- 36 member(s) proven
 *
 * Derived from: BobOmb_ctor
 */
typedef struct BobOmb {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_18D0[0x18CC];
    uint32_t field_18D0;   /* +0x18D0 */
    uint32_t field_18D4;   /* +0x18D4 */
    uint32_t field_18D8;   /* +0x18D8 */
    uint16_t field_18DC;   /* +0x18DC */
    uint8_t  _pad_1928[0x4A];
    uint32_t field_1928;   /* +0x1928 */
    uint32_t field_192C;   /* +0x192C */
    uint32_t field_1930;   /* +0x1930 */
    uint32_t field_1934;   /* +0x1934 */
    uint32_t field_1938;   /* +0x1938 */
    uint32_t field_193C;   /* +0x193C */
    uint32_t field_1940;   /* +0x1940 */
    uint16_t field_1944;   /* +0x1944 */
    uint8_t  _pad_1948[0x2];
    uint32_t field_1948;   /* +0x1948 */
    uint32_t field_194C;   /* +0x194C */
    uint32_t field_1950;   /* +0x1950 */
    uint32_t field_1954;   /* +0x1954 */
    uint32_t field_1958;   /* +0x1958 */
    uint8_t  sub_195C[0x28];   /* +0x195C in-place LightMask, sizeof 0x28 */
    uint8_t  sub_1984[0x48];   /* +0x1984 in-place LightSource, sizeof 0x48 */
    uint32_t field_19CC;   /* +0x19CC */
    uint8_t  _pad_1A34[0x64];
    uint32_t field_1A34;   /* +0x1A34 */
    uint32_t field_1A38;   /* +0x1A38 */
    uint32_t field_1A3C;   /* +0x1A3C */
    uint32_t field_1A40;   /* +0x1A40 */
    uint32_t field_1A44;   /* +0x1A44 */
    uint32_t field_1A48;   /* +0x1A48 */
    uint32_t field_1A4C;   /* +0x1A4C */
    uint32_t field_1A50;   /* +0x1A50 */
    uint32_t field_1A54;   /* +0x1A54 */
    uint32_t field_1A58;   /* +0x1A58 */
    uint32_t field_1A5C;   /* +0x1A5C */
    uint32_t field_1A60;   /* +0x1A60 */
    ActiveCollider sub_1A64;   /* +0x1A64 in-place, sizeof 0x130 */
    uint16_t field_1B94;   /* +0x1B94 */
    uint8_t  _pad_1B98[0x2];
    uint32_t field_1B98;   /* +0x1B98 */
    /* struct size >= 0x1b9c (7068) */
} BobOmb;

/* BrosBase -- 25 member(s) proven
 *
 * Derived from: BrosBase_ctor
 */
typedef struct BrosBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_189C[0x1898];
    uint32_t field_189C;   /* +0x189C */
    uint8_t  _pad_19B8[0x118];
    uint32_t field_19B8;   /* +0x19B8 */
    uint32_t field_19BC;   /* +0x19BC */
    uint32_t field_19C0;   /* +0x19C0 */
    uint32_t field_19C4;   /* +0x19C4 */
    uint32_t field_19C8;   /* +0x19C8 */
    uint8_t field_19CC;   /* +0x19CC */
    uint8_t  _pad_19D0[0x3];
    uint32_t field_19D0;   /* +0x19D0 */
    uint8_t field_19D4;   /* +0x19D4 */
    uint8_t  _pad_19D8[0x3];
    uint32_t field_19D8;   /* +0x19D8 */
    uint8_t  _pad_1A64[0x88];
    uint32_t field_1A64;   /* +0x1A64 */
    uint8_t  _pad_2F50[0x14E8];
    uint32_t field_2F50;   /* +0x2F50 */
    uint32_t field_2F54;   /* +0x2F54 */
    uint16_t field_2F58;   /* +0x2F58 */
    uint8_t  _pad_2F5C[0x2];
    ActiveCollider sub_2F5C;   /* +0x2F5C in-place, sizeof 0x130 */
    uint32_t field_308C;   /* +0x308C */
    uint32_t field_3090;   /* +0x3090 */
    uint8_t  _pad_3098[0x4];
    uint32_t field_3098;   /* +0x3098 */
    uint32_t field_309C;   /* +0x309C */
    uint32_t field_30A0;   /* +0x30A0 */
    uint32_t field_30A4;   /* +0x30A4 */
    uint32_t field_30A8;   /* +0x30A8 */
    uint32_t field_30AC;   /* +0x30AC */
    uint16_t field_30B0;   /* +0x30B0 */
    /* struct size >= 0x30b2 (12466) */
    uint8_t _pad_to_sizeof[0x6];   /* +0x30B2 .. total 0x30B8, matches main.i64 sizeof */
} BrosBase;

/* FireballBase -- 23 member(s) proven
 *
 * Derived from: FireballBase_ctor
 */
typedef struct FireballBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_17D4[0x17D0];
    uint8_t  sub_17D4[0x28];   /* +0x17D4 in-place LightMask, sizeof 0x28 */
    uint32_t field_17FC;   /* +0x17FC */
    uint32_t field_1800;   /* +0x1800 */
    uint8_t  _pad_1824[0x20];
    uint32_t field_1824;   /* +0x1824 */
    uint8_t  _pad_1848[0x20];
    uint32_t field_1848;   /* +0x1848 */
    uint32_t field_184C;   /* +0x184C */
    uint8_t  _pad_1854[0x4];
    uint32_t field_1854;   /* +0x1854 */
    uint32_t field_1858;   /* +0x1858 */
    uint32_t field_185C;   /* +0x185C */
    uint8_t field_1860;   /* +0x1860 */
    uint8_t  _pad_1864[0x3];
    uint32_t field_1864;   /* +0x1864 */
    uint32_t field_1868;   /* +0x1868 */
    uint32_t field_186C;   /* +0x186C */
    uint32_t field_1870;   /* +0x1870 */
    uint32_t field_1874;   /* +0x1874 */
    uint8_t  _pad_18DC[0x64];
    uint8_t  sub_18DC[0x48];   /* +0x18DC in-place LightSource, sizeof 0x48 */
    ActiveCollider sub_1924;   /* +0x1924 in-place, sizeof 0x130 */
    uint32_t field_1A54;   /* +0x1A54 */
    uint32_t field_1A58;   /* +0x1A58 */
    uint32_t field_1A5C;   /* +0x1A5C */
    uint32_t field_1A60;   /* +0x1A60 */
    uint32_t field_1A64;   /* +0x1A64 */
    /* struct size >= 0x1a68 (6760) */
} FireballBase;

/* GiantWiggler -- 29 member(s) proven
 *
 * Derived from: GiantWiggler_ctor
 */
typedef struct GiantWiggler {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_18AC[0x18A8];
    uint32_t field_18AC;   /* +0x18AC */
    uint8_t  _pad_1968[0xB8];
    uint32_t field_1968;   /* +0x1968 */
    uint32_t field_196C;   /* +0x196C */
    uint32_t field_1970;   /* +0x1970 */
    uint32_t field_1974;   /* +0x1974 */
    uint32_t field_1978;   /* +0x1978 */
    uint32_t field_197C;   /* +0x197C */
    uint32_t field_1980;   /* +0x1980 */
    uint32_t field_1984;   /* +0x1984 */
    uint32_t field_1988;   /* +0x1988 */
    uint32_t field_198C;   /* +0x198C */
    uint32_t field_1990;   /* +0x1990 */
    uint32_t field_1994;   /* +0x1994 */
    uint8_t  _pad_199C[0x4];
    uint32_t field_199C;   /* +0x199C */
    uint32_t field_19A0;   /* +0x19A0 */
    uint8_t  _pad_19C0[0x1C];
    uint32_t field_19C0;   /* +0x19C0 */
    uint8_t  _pad_19CC[0x8];
    uint32_t field_19CC;   /* +0x19CC */
    uint8_t  _pad_28A4[0xED4];
    ActiveCollider sub_28A4;   /* +0x28A4 in-place, sizeof 0x130 */
    ActiveCollider sub_29D4;   /* +0x29D4 in-place, sizeof 0x130 */
    ActiveCollider sub_2B04;   /* +0x2B04 in-place, sizeof 0x130 */
    ActiveCollider sub_2C34;   /* +0x2C34 in-place, sizeof 0x130 */
    ActiveCollider sub_2D64;   /* +0x2D64 in-place, sizeof 0x130 */
    ActiveCollider sub_2E94;   /* +0x2E94 in-place, sizeof 0x130 */
    ActiveCollider sub_2FC4;   /* +0x2FC4 in-place, sizeof 0x130 */
    ActiveCollider sub_30F4;   /* +0x30F4 in-place, sizeof 0x130 */
    ActiveCollider sub_3224;   /* +0x3224 in-place, sizeof 0x130 */
    ActiveCollider sub_3354;   /* +0x3354 in-place, sizeof 0x130 */
    uint32_t field_3484;   /* +0x3484 */
    /* struct size >= 0x3488 (13448) */
} GiantWiggler;

/* KoopalingBase -- 32 member(s) proven
 *
 * Derived from: KoopalingBase_ctor, _ZN13KoopalingBaseC2EPK14ActorBuildInfo
 */
typedef struct KoopalingBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_1A10[0x1A0C];
    uint32_t field_1A10;   /* +0x1A10 */
    uint8_t  _pad_1BB4[0x1A0];
    uint32_t field_1BB4;   /* +0x1BB4 */
    uint8_t  _pad_1BE0[0x28];
    uint32_t field_1BE0;   /* +0x1BE0 */
    uint8_t  _pad_1BF4[0x10];
    uint32_t field_1BF4;   /* +0x1BF4 */
    uint32_t field_1BF8;   /* +0x1BF8 */
    uint32_t field_1BFC;   /* +0x1BFC */
    uint8_t  _pad_1C08[0x8];
    uint32_t field_1C08;   /* +0x1C08 */
    uint32_t field_1C0C;   /* +0x1C0C */
    ActiveCollider sub_1C10;   /* +0x1C10 in-place, sizeof 0x130 */
    uint32_t field_1D40;   /* +0x1D40 */
    uint32_t field_1D44;   /* +0x1D44 */
    uint32_t field_1D48;   /* +0x1D48 */
    uint32_t field_1D4C;   /* +0x1D4C */
    uint32_t field_1D50;   /* +0x1D50 */
    uint8_t  _pad_1DB8[0x64];
    uint32_t field_1DB8;   /* +0x1DB8 */
    uint8_t  _pad_1E4C[0x90];
    uint32_t field_1E4C;   /* +0x1E4C */
    uint32_t field_1E50;   /* +0x1E50 */
    uint8_t field_1E54;   /* +0x1E54 */
    uint8_t  _pad_1E58[0x3];
    uint32_t field_1E58;   /* +0x1E58 */
    uint32_t field_1E5C;   /* +0x1E5C */
    uint32_t field_1E60;   /* +0x1E60 */
    uint32_t field_1E64;   /* +0x1E64 */
    uint32_t field_1E68;   /* +0x1E68 */
    uint32_t field_1E6C;   /* +0x1E6C */
    uint32_t field_1E70;   /* +0x1E70 */
    uint32_t field_1E74;   /* +0x1E74 */
    uint32_t field_1E78;   /* +0x1E78 */
    uint32_t field_1E7C;   /* +0x1E7C */
    uint8_t  _pad_1EE4[0x64];
    uint32_t field_1EE4;   /* +0x1EE4 */
    uint8_t  _pad_1F4C[0x64];
    uint32_t field_1F4C;   /* +0x1F4C */
    uint8_t  _pad_1FB4[0x64];
    uint32_t field_1FB4;   /* +0x1FB4 */
    /* struct size >= 0x1fb8 (8120) */
} KoopalingBase;

/* SledgeBro -- 21 member(s) proven
 *
 * Derived from: SledgeBro_ctor
 */
typedef struct SledgeBro {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_18D8[0x18D4];
    ActiveCollider sub_18D8;   /* +0x18D8 in-place, sizeof 0x130 */
    uint32_t field_1A08;   /* +0x1A08 */
    uint32_t field_1A0C;   /* +0x1A0C */
    uint16_t field_1A10;   /* +0x1A10 */
    uint8_t  _pad_1A14[0x2];
    uint32_t field_1A14;   /* +0x1A14 */
    uint8_t  _pad_1AC4[0xAC];
    uint32_t field_1AC4;   /* +0x1AC4 */
    uint32_t field_1AC8;   /* +0x1AC8 */
    uint32_t field_1ACC;   /* +0x1ACC */
    uint32_t field_1AD0;   /* +0x1AD0 */
    uint32_t field_1AD4;   /* +0x1AD4 */
    uint8_t  _pad_1B3C[0x64];
    uint32_t field_1B3C;   /* +0x1B3C */
    uint8_t  _pad_1CD4[0x194];
    uint32_t field_1CD4;   /* +0x1CD4 */
    uint32_t field_1CD8;   /* +0x1CD8 */
    uint8_t  _pad_1CE0[0x4];
    uint32_t field_1CE0;   /* +0x1CE0 */
    uint32_t field_1CE4;   /* +0x1CE4 */
    uint32_t field_1CE8;   /* +0x1CE8 */
    uint32_t field_1CEC;   /* +0x1CEC */
    uint32_t field_1CF0;   /* +0x1CF0 */
    uint32_t field_1CF4;   /* +0x1CF4 */
    uint8_t field_1CF8;   /* +0x1CF8 */
    /* struct size >= 0x1cf9 (7417) */
} SledgeBro;

