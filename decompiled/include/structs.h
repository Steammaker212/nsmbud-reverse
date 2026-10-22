/* NSMBU Deluxe (Switch) v1.0.0 -- recovered struct layouts
 *
 * GENERATED from constructor stores. Each field below is backed by a specific
 * `STR/STRH/STRB  Rt, [this, #offset]` in that class's constructor, where `this`
 * was tracked as a live register alias (R0 on entry, propagated through MOV).
 *
 * Two honesty notes that matter:
 *
 *  1. Field WIDTH is known exactly (4 / 2 / 1 from the store instruction). The
 *     TYPE is not. `uint32_t` here means "4-byte field", not "an int32".
 *     Treat every entry as an offset, not a type.
 *
 *  2. Coverage is deliberately INCOMPLETE. Constructors that compute an offset
 *     into a register (e.g. `MOVW R0,#0x17D4; ADD R0,R4,R0; BL ctor`) are not
 *     captured, so classes such as FireballBase appear empty even though their
 *     constructors demonstrably write many fields. Missing fields are acceptable;
 *     invented ones are not, so this under-reports by design.
 *
 * Classes marked VALIDATED were checked against offsets established by hand
 * independently. All unmarked classes are mechanically derived only.
 *
 * Do not edit by hand. Regenerate with .rea/ida_structs2.py + this script.
 */
#pragma once

#include <stdint.h>

/* RVAs are image-relative: VA = 0x60000000 + RVA */

/* CollisionMgr -- 389 proven field(s), sizeof >= 0x1000
 *
 * Derived from: CollisionMgr_ctor
 */
typedef struct CollisionMgr {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0050[0x4C];
    uint32_t field_0050;   /* +0x0050 */
    uint32_t field_0054;   /* +0x0054 */
    uint8_t  _pad_005C[0x4];
    uint32_t field_005C;   /* +0x005C */
    uint32_t field_0060;   /* +0x0060 */
    uint8_t  _pad_0864[0x800];
    uint32_t field_0864;   /* +0x0864 */
    uint32_t field_0868;   /* +0x0868 */
    uint32_t field_086C;   /* +0x086C */
    uint32_t field_0870;   /* +0x0870 */
    uint32_t field_0874;   /* +0x0874 */
    uint32_t field_0878;   /* +0x0878 */
    uint32_t field_087C;   /* +0x087C */
    uint32_t field_0880;   /* +0x0880 */
    uint32_t field_0884;   /* +0x0884 */
    uint32_t field_0888;   /* +0x0888 */
    uint8_t  _pad_08C0[0x34];
    uint32_t field_08C0;   /* +0x08C0 */
    uint32_t field_08C4;   /* +0x08C4 */
    uint32_t field_08C8;   /* +0x08C8 */
    uint32_t field_08CC;   /* +0x08CC */
    uint32_t field_08D0;   /* +0x08D0 */
    uint32_t field_08D4;   /* +0x08D4 */
    uint32_t field_08D8;   /* +0x08D8 */
    uint32_t field_08DC;   /* +0x08DC */
    uint32_t field_08E0;   /* +0x08E0 */
    uint32_t field_08E4;   /* +0x08E4 */
    uint32_t field_08E8;   /* +0x08E8 */
    uint32_t field_08EC;   /* +0x08EC */
    uint32_t field_08F0;   /* +0x08F0 */
    uint32_t field_08F4;   /* +0x08F4 */
    uint32_t field_08F8;   /* +0x08F8 */
    uint32_t field_08FC;   /* +0x08FC */
    uint32_t field_0900;   /* +0x0900 */
    uint32_t field_0904;   /* +0x0904 */
    uint32_t field_0908;   /* +0x0908 */
    uint32_t field_090C;   /* +0x090C */
    uint8_t  _pad_0926[0x16];
    uint8_t field_0926;   /* +0x0926 */
    uint8_t  _pad_092A[0x3];
    uint8_t field_092A;   /* +0x092A */
    uint8_t  _pad_092E[0x3];
    uint8_t field_092E;   /* +0x092E */
    uint8_t  _pad_0A01[0xD2];
    uint8_t field_0A01;   /* +0x0A01 */
    uint8_t  _pad_0A05[0x3];
    uint8_t field_0A05;   /* +0x0A05 */
    uint8_t  _pad_0A09[0x3];
    uint8_t field_0A09;   /* +0x0A09 */
    uint8_t  _pad_0A0D[0x3];
    uint8_t field_0A0D;   /* +0x0A0D */
    uint8_t  _pad_0A11[0x3];
    uint8_t field_0A11;   /* +0x0A11 */
    uint8_t  _pad_0A15[0x3];
    uint8_t field_0A15;   /* +0x0A15 */
    uint8_t  _pad_0A19[0x3];
    uint8_t field_0A19;   /* +0x0A19 */
    uint8_t  _pad_0A1D[0x3];
    uint8_t field_0A1D;   /* +0x0A1D */
    uint8_t  _pad_0A24[0x6];
    uint32_t field_0A24;   /* +0x0A24 */
    uint32_t field_0A28;   /* +0x0A28 */
    uint32_t field_0A2C;   /* +0x0A2C */
    uint32_t field_0A30;   /* +0x0A30 */
    uint32_t field_0A34;   /* +0x0A34 */
    uint32_t field_0A38;   /* +0x0A38 */
    uint32_t field_0A3C;   /* +0x0A3C */
    uint32_t field_0A40;   /* +0x0A40 */
    uint8_t  _pad_0A48[0x4];
    uint32_t field_0A48;   /* +0x0A48 */
    uint32_t field_0A4C;   /* +0x0A4C */
    uint32_t field_0A50;   /* +0x0A50 */
    uint32_t field_0A54;   /* +0x0A54 */
    uint32_t field_0A58;   /* +0x0A58 */
    uint32_t field_0A5C;   /* +0x0A5C */
    uint32_t field_0A60;   /* +0x0A60 */
    uint32_t field_0A64;   /* +0x0A64 */
    uint32_t field_0A68;   /* +0x0A68 */
    uint32_t field_0A6C;   /* +0x0A6C */
    uint32_t field_0A70;   /* +0x0A70 */
    uint32_t field_0A74;   /* +0x0A74 */
    uint32_t field_0A78;   /* +0x0A78 */
    uint8_t  _pad_0A80[0x4];
    uint32_t field_0A80;   /* +0x0A80 */
    uint32_t field_0A84;   /* +0x0A84 */
    uint32_t field_0A88;   /* +0x0A88 */
    uint32_t field_0A8C;   /* +0x0A8C */
    uint32_t field_0A90;   /* +0x0A90 */
    uint32_t field_0A94;   /* +0x0A94 */
    uint32_t field_0A98;   /* +0x0A98 */
    uint32_t field_0A9C;   /* +0x0A9C */
    uint32_t field_0AA0;   /* +0x0AA0 */
    uint32_t field_0AA4;   /* +0x0AA4 */
    uint32_t field_0AA8;   /* +0x0AA8 */
    uint32_t field_0AAC;   /* +0x0AAC */
    uint32_t field_0AB0;   /* +0x0AB0 */
    uint8_t  _pad_0AB8[0x4];
    uint32_t field_0AB8;   /* +0x0AB8 */
    uint32_t field_0ABC;   /* +0x0ABC */
    uint32_t field_0AC0;   /* +0x0AC0 */
    uint32_t field_0AC4;   /* +0x0AC4 */
    uint32_t field_0AC8;   /* +0x0AC8 */
    uint32_t field_0ACC;   /* +0x0ACC */
    uint32_t field_0AD0;   /* +0x0AD0 */
    uint32_t field_0AD4;   /* +0x0AD4 */
    uint32_t field_0AD8;   /* +0x0AD8 */
    uint32_t field_0ADC;   /* +0x0ADC */
    uint32_t field_0AE0;   /* +0x0AE0 */
    uint32_t field_0AE4;   /* +0x0AE4 */
    uint32_t field_0AE8;   /* +0x0AE8 */
    uint8_t  _pad_0AF0[0x4];
    uint32_t field_0AF0;   /* +0x0AF0 */
    uint32_t field_0AF4;   /* +0x0AF4 */
    uint32_t field_0AF8;   /* +0x0AF8 */
    uint32_t field_0AFC;   /* +0x0AFC */
    uint32_t field_0B00;   /* +0x0B00 */
    uint32_t field_0B04;   /* +0x0B04 */
    uint32_t field_0B08;   /* +0x0B08 */
    uint32_t field_0B0C;   /* +0x0B0C */
    uint32_t field_0B10;   /* +0x0B10 */
    uint32_t field_0B14;   /* +0x0B14 */
    uint32_t field_0B18;   /* +0x0B18 */
    uint32_t field_0B1C;   /* +0x0B1C */
    uint32_t field_0B20;   /* +0x0B20 */
    uint8_t  _pad_0B28[0x4];
    uint32_t field_0B28;   /* +0x0B28 */
    uint32_t field_0B2C;   /* +0x0B2C */
    uint32_t field_0B30;   /* +0x0B30 */
    uint32_t field_0B34;   /* +0x0B34 */
    uint32_t field_0B38;   /* +0x0B38 */
    uint32_t field_0B3C;   /* +0x0B3C */
    uint32_t field_0B40;   /* +0x0B40 */
    uint32_t field_0B44;   /* +0x0B44 */
    uint32_t field_0B48;   /* +0x0B48 */
    uint32_t field_0B4C;   /* +0x0B4C */
    uint32_t field_0B50;   /* +0x0B50 */
    uint32_t field_0B54;   /* +0x0B54 */
    uint32_t field_0B58;   /* +0x0B58 */
    uint8_t  _pad_0B60[0x4];
    uint32_t field_0B60;   /* +0x0B60 */
    uint32_t field_0B64;   /* +0x0B64 */
    uint32_t field_0B68;   /* +0x0B68 */
    uint32_t field_0B6C;   /* +0x0B6C */
    uint32_t field_0B70;   /* +0x0B70 */
    uint32_t field_0B74;   /* +0x0B74 */
    uint32_t field_0B78;   /* +0x0B78 */
    uint32_t field_0B7C;   /* +0x0B7C */
    uint32_t field_0B80;   /* +0x0B80 */
    uint32_t field_0B84;   /* +0x0B84 */
    uint32_t field_0B88;   /* +0x0B88 */
    uint32_t field_0B8C;   /* +0x0B8C */
    uint32_t field_0B90;   /* +0x0B90 */
    uint8_t  _pad_0B98[0x4];
    uint32_t field_0B98;   /* +0x0B98 */
    uint32_t field_0B9C;   /* +0x0B9C */
    uint32_t field_0BA0;   /* +0x0BA0 */
    uint32_t field_0BA4;   /* +0x0BA4 */
    uint32_t field_0BA8;   /* +0x0BA8 */
    uint32_t field_0BAC;   /* +0x0BAC */
    uint32_t field_0BB0;   /* +0x0BB0 */
    uint32_t field_0BB4;   /* +0x0BB4 */
    uint32_t field_0BB8;   /* +0x0BB8 */
    uint32_t field_0BBC;   /* +0x0BBC */
    uint32_t field_0BC0;   /* +0x0BC0 */
    uint32_t field_0BC4;   /* +0x0BC4 */
    uint32_t field_0BC8;   /* +0x0BC8 */
    uint8_t  _pad_0BD0[0x4];
    uint32_t field_0BD0;   /* +0x0BD0 */
    uint32_t field_0BD4;   /* +0x0BD4 */
    uint32_t field_0BD8;   /* +0x0BD8 */
    uint32_t field_0BDC;   /* +0x0BDC */
    uint32_t field_0BE0;   /* +0x0BE0 */
    uint32_t field_0BE4;   /* +0x0BE4 */
    uint32_t field_0BE8;   /* +0x0BE8 */
    uint32_t field_0BEC;   /* +0x0BEC */
    uint32_t field_0BF0;   /* +0x0BF0 */
    uint32_t field_0BF4;   /* +0x0BF4 */
    uint32_t field_0BF8;   /* +0x0BF8 */
    uint32_t field_0BFC;   /* +0x0BFC */
    uint32_t field_0C00;   /* +0x0C00 */
    uint8_t  _pad_0C08[0x4];
    uint32_t field_0C08;   /* +0x0C08 */
    uint32_t field_0C0C;   /* +0x0C0C */
    uint32_t field_0C10;   /* +0x0C10 */
    uint32_t field_0C14;   /* +0x0C14 */
    uint32_t field_0C18;   /* +0x0C18 */
    uint32_t field_0C1C;   /* +0x0C1C */
    uint32_t field_0C20;   /* +0x0C20 */
    uint32_t field_0C24;   /* +0x0C24 */
    uint32_t field_0C28;   /* +0x0C28 */
    uint32_t field_0C2C;   /* +0x0C2C */
    uint32_t field_0C30;   /* +0x0C30 */
    uint32_t field_0C34;   /* +0x0C34 */
    uint32_t field_0C38;   /* +0x0C38 */
    uint8_t  _pad_0C40[0x4];
    uint32_t field_0C40;   /* +0x0C40 */
    uint32_t field_0C44;   /* +0x0C44 */
    uint32_t field_0C48;   /* +0x0C48 */
    uint32_t field_0C4C;   /* +0x0C4C */
    uint32_t field_0C50;   /* +0x0C50 */
    uint32_t field_0C54;   /* +0x0C54 */
    uint32_t field_0C58;   /* +0x0C58 */
    uint32_t field_0C5C;   /* +0x0C5C */
    uint32_t field_0C60;   /* +0x0C60 */
    uint32_t field_0C64;   /* +0x0C64 */
    uint32_t field_0C68;   /* +0x0C68 */
    uint32_t field_0C6C;   /* +0x0C6C */
    uint32_t field_0C70;   /* +0x0C70 */
    uint8_t  _pad_0C78[0x4];
    uint32_t field_0C78;   /* +0x0C78 */
    uint32_t field_0C7C;   /* +0x0C7C */
    uint32_t field_0C80;   /* +0x0C80 */
    uint32_t field_0C84;   /* +0x0C84 */
    uint32_t field_0C88;   /* +0x0C88 */
    uint32_t field_0C8C;   /* +0x0C8C */
    uint32_t field_0C90;   /* +0x0C90 */
    uint32_t field_0C94;   /* +0x0C94 */
    uint32_t field_0C98;   /* +0x0C98 */
    uint32_t field_0C9C;   /* +0x0C9C */
    uint32_t field_0CA0;   /* +0x0CA0 */
    uint32_t field_0CA4;   /* +0x0CA4 */
    uint32_t field_0CA8;   /* +0x0CA8 */
    uint8_t  _pad_0CB0[0x4];
    uint32_t field_0CB0;   /* +0x0CB0 */
    uint32_t field_0CB4;   /* +0x0CB4 */
    uint32_t field_0CB8;   /* +0x0CB8 */
    uint32_t field_0CBC;   /* +0x0CBC */
    uint32_t field_0CC0;   /* +0x0CC0 */
    uint32_t field_0CC4;   /* +0x0CC4 */
    uint32_t field_0CC8;   /* +0x0CC8 */
    uint32_t field_0CCC;   /* +0x0CCC */
    uint32_t field_0CD0;   /* +0x0CD0 */
    uint32_t field_0CD4;   /* +0x0CD4 */
    uint32_t field_0CD8;   /* +0x0CD8 */
    uint32_t field_0CDC;   /* +0x0CDC */
    uint32_t field_0CE0;   /* +0x0CE0 */
    uint8_t  _pad_0CE8[0x4];
    uint32_t field_0CE8;   /* +0x0CE8 */
    uint32_t field_0CEC;   /* +0x0CEC */
    uint32_t field_0CF0;   /* +0x0CF0 */
    uint32_t field_0CF4;   /* +0x0CF4 */
    uint32_t field_0CF8;   /* +0x0CF8 */
    uint32_t field_0CFC;   /* +0x0CFC */
    uint32_t field_0D00;   /* +0x0D00 */
    uint32_t field_0D04;   /* +0x0D04 */
    uint32_t field_0D08;   /* +0x0D08 */
    uint32_t field_0D0C;   /* +0x0D0C */
    uint32_t field_0D10;   /* +0x0D10 */
    uint32_t field_0D14;   /* +0x0D14 */
    uint32_t field_0D18;   /* +0x0D18 */
    uint8_t  _pad_0D20[0x4];
    uint32_t field_0D20;   /* +0x0D20 */
    uint32_t field_0D24;   /* +0x0D24 */
    uint32_t field_0D28;   /* +0x0D28 */
    uint32_t field_0D2C;   /* +0x0D2C */
    uint32_t field_0D30;   /* +0x0D30 */
    uint32_t field_0D34;   /* +0x0D34 */
    uint32_t field_0D38;   /* +0x0D38 */
    uint32_t field_0D3C;   /* +0x0D3C */
    uint32_t field_0D40;   /* +0x0D40 */
    uint32_t field_0D44;   /* +0x0D44 */
    uint32_t field_0D48;   /* +0x0D48 */
    uint32_t field_0D4C;   /* +0x0D4C */
    uint32_t field_0D50;   /* +0x0D50 */
    uint8_t  _pad_0D58[0x4];
    uint32_t field_0D58;   /* +0x0D58 */
    uint32_t field_0D5C;   /* +0x0D5C */
    uint32_t field_0D60;   /* +0x0D60 */
    uint32_t field_0D64;   /* +0x0D64 */
    uint32_t field_0D68;   /* +0x0D68 */
    uint32_t field_0D6C;   /* +0x0D6C */
    uint32_t field_0D70;   /* +0x0D70 */
    uint32_t field_0D74;   /* +0x0D74 */
    uint32_t field_0D78;   /* +0x0D78 */
    uint32_t field_0D7C;   /* +0x0D7C */
    uint32_t field_0D80;   /* +0x0D80 */
    uint32_t field_0D84;   /* +0x0D84 */
    uint32_t field_0D88;   /* +0x0D88 */
    uint8_t  _pad_0D90[0x4];
    uint32_t field_0D90;   /* +0x0D90 */
    uint32_t field_0D94;   /* +0x0D94 */
    uint32_t field_0D98;   /* +0x0D98 */
    uint32_t field_0D9C;   /* +0x0D9C */
    uint32_t field_0DA0;   /* +0x0DA0 */
    uint32_t field_0DA4;   /* +0x0DA4 */
    uint32_t field_0DA8;   /* +0x0DA8 */
    uint32_t field_0DAC;   /* +0x0DAC */
    uint32_t field_0DB0;   /* +0x0DB0 */
    uint32_t field_0DB4;   /* +0x0DB4 */
    uint32_t field_0DB8;   /* +0x0DB8 */
    uint32_t field_0DBC;   /* +0x0DBC */
    uint32_t field_0DC0;   /* +0x0DC0 */
    uint8_t  _pad_0DC8[0x4];
    uint32_t field_0DC8;   /* +0x0DC8 */
    uint32_t field_0DCC;   /* +0x0DCC */
    uint32_t field_0DD0;   /* +0x0DD0 */
    uint32_t field_0DD4;   /* +0x0DD4 */
    uint32_t field_0DD8;   /* +0x0DD8 */
    uint32_t field_0DDC;   /* +0x0DDC */
    uint32_t field_0DE0;   /* +0x0DE0 */
    uint32_t field_0DE4;   /* +0x0DE4 */
    uint32_t field_0DE8;   /* +0x0DE8 */
    uint32_t field_0DEC;   /* +0x0DEC */
    uint32_t field_0DF0;   /* +0x0DF0 */
    uint32_t field_0DF4;   /* +0x0DF4 */
    uint32_t field_0DF8;   /* +0x0DF8 */
    uint8_t  _pad_0E00[0x4];
    uint32_t field_0E00;   /* +0x0E00 */
    uint32_t field_0E04;   /* +0x0E04 */
    uint32_t field_0E08;   /* +0x0E08 */
    uint32_t field_0E0C;   /* +0x0E0C */
    uint32_t field_0E10;   /* +0x0E10 */
    uint32_t field_0E14;   /* +0x0E14 */
    uint32_t field_0E18;   /* +0x0E18 */
    uint32_t field_0E1C;   /* +0x0E1C */
    uint32_t field_0E20;   /* +0x0E20 */
    uint32_t field_0E24;   /* +0x0E24 */
    uint32_t field_0E28;   /* +0x0E28 */
    uint32_t field_0E2C;   /* +0x0E2C */
    uint32_t field_0E30;   /* +0x0E30 */
    uint8_t  _pad_0E38[0x4];
    uint32_t field_0E38;   /* +0x0E38 */
    uint32_t field_0E3C;   /* +0x0E3C */
    uint32_t field_0E40;   /* +0x0E40 */
    uint32_t field_0E44;   /* +0x0E44 */
    uint32_t field_0E48;   /* +0x0E48 */
    uint32_t field_0E4C;   /* +0x0E4C */
    uint32_t field_0E50;   /* +0x0E50 */
    uint32_t field_0E54;   /* +0x0E54 */
    uint32_t field_0E58;   /* +0x0E58 */
    uint32_t field_0E5C;   /* +0x0E5C */
    uint32_t field_0E60;   /* +0x0E60 */
    uint32_t field_0E64;   /* +0x0E64 */
    uint32_t field_0E68;   /* +0x0E68 */
    uint8_t  _pad_0E70[0x4];
    uint32_t field_0E70;   /* +0x0E70 */
    uint32_t field_0E74;   /* +0x0E74 */
    uint32_t field_0E78;   /* +0x0E78 */
    uint32_t field_0E7C;   /* +0x0E7C */
    uint32_t field_0E80;   /* +0x0E80 */
    uint32_t field_0E84;   /* +0x0E84 */
    uint32_t field_0E88;   /* +0x0E88 */
    uint32_t field_0E8C;   /* +0x0E8C */
    uint32_t field_0E90;   /* +0x0E90 */
    uint32_t field_0E94;   /* +0x0E94 */
    uint32_t field_0E98;   /* +0x0E98 */
    uint32_t field_0E9C;   /* +0x0E9C */
    uint32_t field_0EA0;   /* +0x0EA0 */
    uint8_t  _pad_0EA8[0x4];
    uint32_t field_0EA8;   /* +0x0EA8 */
    uint32_t field_0EAC;   /* +0x0EAC */
    uint32_t field_0EB0;   /* +0x0EB0 */
    uint32_t field_0EB4;   /* +0x0EB4 */
    uint32_t field_0EB8;   /* +0x0EB8 */
    uint32_t field_0EBC;   /* +0x0EBC */
    uint32_t field_0EC0;   /* +0x0EC0 */
    uint32_t field_0EC4;   /* +0x0EC4 */
    uint32_t field_0EC8;   /* +0x0EC8 */
    uint32_t field_0ECC;   /* +0x0ECC */
    uint32_t field_0ED0;   /* +0x0ED0 */
    uint32_t field_0ED4;   /* +0x0ED4 */
    uint32_t field_0ED8;   /* +0x0ED8 */
    uint8_t  _pad_0EE0[0x4];
    uint32_t field_0EE0;   /* +0x0EE0 */
    uint32_t field_0EE4;   /* +0x0EE4 */
    uint32_t field_0EE8;   /* +0x0EE8 */
    uint32_t field_0EEC;   /* +0x0EEC */
    uint32_t field_0EF0;   /* +0x0EF0 */
    uint32_t field_0EF4;   /* +0x0EF4 */
    uint32_t field_0EF8;   /* +0x0EF8 */
    uint32_t field_0EFC;   /* +0x0EFC */
    uint32_t field_0F00;   /* +0x0F00 */
    uint32_t field_0F04;   /* +0x0F04 */
    uint32_t field_0F08;   /* +0x0F08 */
    uint32_t field_0F0C;   /* +0x0F0C */
    uint32_t field_0F10;   /* +0x0F10 */
    uint8_t  _pad_0F18[0x4];
    uint32_t field_0F18;   /* +0x0F18 */
    uint32_t field_0F1C;   /* +0x0F1C */
    uint32_t field_0F20;   /* +0x0F20 */
    uint32_t field_0F24;   /* +0x0F24 */
    uint32_t field_0F28;   /* +0x0F28 */
    uint32_t field_0F2C;   /* +0x0F2C */
    uint32_t field_0F30;   /* +0x0F30 */
    uint32_t field_0F34;   /* +0x0F34 */
    uint32_t field_0F38;   /* +0x0F38 */
    uint32_t field_0F3C;   /* +0x0F3C */
    uint32_t field_0F40;   /* +0x0F40 */
    uint32_t field_0F44;   /* +0x0F44 */
    uint32_t field_0F48;   /* +0x0F48 */
    uint8_t  _pad_0F64[0x18];
    uint32_t field_0F64;   /* +0x0F64 */
    uint32_t field_0F68;   /* +0x0F68 */
    uint32_t field_0F6C;   /* +0x0F6C */
    uint32_t field_0F70;   /* +0x0F70 */
    uint32_t field_0F74;   /* +0x0F74 */
    uint32_t field_0F78;   /* +0x0F78 */
    uint32_t field_0F7C;   /* +0x0F7C */
    uint32_t field_0F80;   /* +0x0F80 */
    uint8_t  _pad_0F88[0x4];
    uint32_t field_0F88;   /* +0x0F88 */
    uint32_t field_0F8C;   /* +0x0F8C */
    uint32_t field_0F90;   /* +0x0F90 */
    uint32_t field_0F94;   /* +0x0F94 */
    uint32_t field_0F98;   /* +0x0F98 */
    uint32_t field_0F9C;   /* +0x0F9C */
    uint32_t field_0FA0;   /* +0x0FA0 */
    uint32_t field_0FA4;   /* +0x0FA4 */
    uint32_t field_0FA8;   /* +0x0FA8 */
    uint32_t field_0FAC;   /* +0x0FAC */
    uint32_t field_0FB0;   /* +0x0FB0 */
    uint32_t field_0FB4;   /* +0x0FB4 */
    uint32_t field_0FB8;   /* +0x0FB8 */
    uint8_t  _pad_0FC0[0x4];
    uint32_t field_0FC0;   /* +0x0FC0 */
    uint32_t field_0FC4;   /* +0x0FC4 */
    uint32_t field_0FC8;   /* +0x0FC8 */
    uint32_t field_0FCC;   /* +0x0FCC */
    uint32_t field_0FD0;   /* +0x0FD0 */
    uint32_t field_0FD4;   /* +0x0FD4 */
    uint32_t field_0FD8;   /* +0x0FD8 */
    uint32_t field_0FDC;   /* +0x0FDC */
    uint32_t field_0FE0;   /* +0x0FE0 */
    uint32_t field_0FE4;   /* +0x0FE4 */
    uint32_t field_0FE8;   /* +0x0FE8 */
    uint32_t field_0FEC;   /* +0x0FEC */
    uint32_t field_0FF0;   /* +0x0FF0 */
    uint8_t  _pad_0FF8[0x4];
    uint32_t field_0FF8;   /* +0x0FF8 */
    uint32_t field_0FFC;   /* +0x0FFC */
    /* struct size >= 0x1000 (4096) */
} CollisionMgr;

/* AreaTask -- 131 proven field(s), sizeof >= 0xa28
 *
 * Derived from: AreaTask_ctor
 */
typedef struct AreaTask {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_00C0[0xBC];
    uint8_t field_00C0;   /* +0x00C0 */
    uint8_t field_00C1;   /* +0x00C1 */
    uint8_t  _pad_0714[0x652];
    uint32_t field_0714;   /* +0x0714 */
    uint32_t field_0718;   /* +0x0718 */
    uint32_t field_071C;   /* +0x071C */
    uint32_t field_0720;   /* +0x0720 */
    uint32_t field_0724;   /* +0x0724 */
    uint32_t field_0728;   /* +0x0728 */
    uint32_t field_072C;   /* +0x072C */
    uint32_t field_0730;   /* +0x0730 */
    uint32_t field_0734;   /* +0x0734 */
    uint8_t  _pad_073C[0x4];
    uint32_t field_073C;   /* +0x073C */
    uint8_t field_0740;   /* +0x0740 */
    uint8_t  _pad_0742[0x1];
    uint8_t field_0742;   /* +0x0742 */
    uint8_t  _pad_0745[0x2];
    uint8_t field_0745;   /* +0x0745 */
    uint8_t field_0746;   /* +0x0746 */
    uint8_t  _pad_0748[0x1];
    uint32_t field_0748;   /* +0x0748 */
    uint32_t field_074C;   /* +0x074C */
    uint32_t field_0750;   /* +0x0750 */
    uint32_t field_0754;   /* +0x0754 */
    uint8_t  _pad_0764[0xC];
    uint32_t field_0764;   /* +0x0764 */
    uint32_t field_0768;   /* +0x0768 */
    uint32_t field_076C;   /* +0x076C */
    uint32_t field_0770;   /* +0x0770 */
    uint32_t field_0774;   /* +0x0774 */
    uint32_t field_0778;   /* +0x0778 */
    uint32_t field_077C;   /* +0x077C */
    uint32_t field_0780;   /* +0x0780 */
    uint32_t field_0784;   /* +0x0784 */
    uint8_t  _pad_0798[0x10];
    uint32_t field_0798;   /* +0x0798 */
    uint8_t  _pad_07A8[0xC];
    uint32_t field_07A8;   /* +0x07A8 */
    uint32_t field_07AC;   /* +0x07AC */
    uint32_t field_07B0;   /* +0x07B0 */
    uint32_t field_07B4;   /* +0x07B4 */
    uint32_t field_07B8;   /* +0x07B8 */
    uint32_t field_07BC;   /* +0x07BC */
    uint32_t field_07C0;   /* +0x07C0 */
    uint32_t field_07C4;   /* +0x07C4 */
    uint32_t field_07C8;   /* +0x07C8 */
    uint8_t  _pad_07DC[0x10];
    uint32_t field_07DC;   /* +0x07DC */
    uint8_t  _pad_07EC[0xC];
    uint32_t field_07EC;   /* +0x07EC */
    uint32_t field_07F0;   /* +0x07F0 */
    uint32_t field_07F4;   /* +0x07F4 */
    uint32_t field_07F8;   /* +0x07F8 */
    uint32_t field_07FC;   /* +0x07FC */
    uint32_t field_0800;   /* +0x0800 */
    uint32_t field_0804;   /* +0x0804 */
    uint32_t field_0808;   /* +0x0808 */
    uint32_t field_080C;   /* +0x080C */
    uint8_t  _pad_0820[0x10];
    uint32_t field_0820;   /* +0x0820 */
    uint8_t  _pad_0830[0xC];
    uint32_t field_0830;   /* +0x0830 */
    uint32_t field_0834;   /* +0x0834 */
    uint32_t field_0838;   /* +0x0838 */
    uint32_t field_083C;   /* +0x083C */
    uint32_t field_0840;   /* +0x0840 */
    uint32_t field_0844;   /* +0x0844 */
    uint32_t field_0848;   /* +0x0848 */
    uint32_t field_084C;   /* +0x084C */
    uint32_t field_0850;   /* +0x0850 */
    uint8_t  _pad_0864[0x10];
    uint32_t field_0864;   /* +0x0864 */
    uint8_t  _pad_0874[0xC];
    uint32_t field_0874;   /* +0x0874 */
    uint32_t field_0878;   /* +0x0878 */
    uint32_t field_087C;   /* +0x087C */
    uint32_t field_0880;   /* +0x0880 */
    uint32_t field_0884;   /* +0x0884 */
    uint32_t field_0888;   /* +0x0888 */
    uint32_t field_088C;   /* +0x088C */
    uint32_t field_0890;   /* +0x0890 */
    uint32_t field_0894;   /* +0x0894 */
    uint8_t  _pad_08A8[0x10];
    uint32_t field_08A8;   /* +0x08A8 */
    uint8_t  _pad_08B8[0xC];
    uint32_t field_08B8;   /* +0x08B8 */
    uint32_t field_08BC;   /* +0x08BC */
    uint32_t field_08C0;   /* +0x08C0 */
    uint32_t field_08C4;   /* +0x08C4 */
    uint32_t field_08C8;   /* +0x08C8 */
    uint32_t field_08CC;   /* +0x08CC */
    uint32_t field_08D0;   /* +0x08D0 */
    uint32_t field_08D4;   /* +0x08D4 */
    uint32_t field_08D8;   /* +0x08D8 */
    uint8_t  _pad_08EC[0x10];
    uint32_t field_08EC;   /* +0x08EC */
    uint8_t  _pad_08FC[0xC];
    uint32_t field_08FC;   /* +0x08FC */
    uint32_t field_0900;   /* +0x0900 */
    uint32_t field_0904;   /* +0x0904 */
    uint32_t field_0908;   /* +0x0908 */
    uint32_t field_090C;   /* +0x090C */
    uint32_t field_0910;   /* +0x0910 */
    uint32_t field_0914;   /* +0x0914 */
    uint32_t field_0918;   /* +0x0918 */
    uint32_t field_091C;   /* +0x091C */
    uint8_t  _pad_0930[0x10];
    uint32_t field_0930;   /* +0x0930 */
    uint8_t  _pad_0940[0xC];
    uint32_t field_0940;   /* +0x0940 */
    uint32_t field_0944;   /* +0x0944 */
    uint32_t field_0948;   /* +0x0948 */
    uint32_t field_094C;   /* +0x094C */
    uint32_t field_0950;   /* +0x0950 */
    uint32_t field_0954;   /* +0x0954 */
    uint32_t field_0958;   /* +0x0958 */
    uint32_t field_095C;   /* +0x095C */
    uint32_t field_0960;   /* +0x0960 */
    uint8_t  _pad_0974[0x10];
    uint32_t field_0974;   /* +0x0974 */
    uint8_t  _pad_0984[0xC];
    uint32_t field_0984;   /* +0x0984 */
    uint32_t field_0988;   /* +0x0988 */
    uint32_t field_098C;   /* +0x098C */
    uint32_t field_0990;   /* +0x0990 */
    uint32_t field_0994;   /* +0x0994 */
    uint32_t field_0998;   /* +0x0998 */
    uint32_t field_099C;   /* +0x099C */
    uint32_t field_09A0;   /* +0x09A0 */
    uint32_t field_09A4;   /* +0x09A4 */
    uint8_t  _pad_09B8[0x10];
    uint32_t field_09B8;   /* +0x09B8 */
    uint8_t  _pad_09C8[0xC];
    uint32_t field_09C8;   /* +0x09C8 */
    uint32_t field_09CC;   /* +0x09CC */
    uint32_t field_09D0;   /* +0x09D0 */
    uint32_t field_09D4;   /* +0x09D4 */
    uint32_t field_09D8;   /* +0x09D8 */
    uint32_t field_09DC;   /* +0x09DC */
    uint32_t field_09E0;   /* +0x09E0 */
    uint32_t field_09E4;   /* +0x09E4 */
    uint32_t field_09E8;   /* +0x09E8 */
    uint8_t  _pad_09FC[0x10];
    uint32_t field_09FC;   /* +0x09FC */
    uint32_t field_0A00;   /* +0x0A00 */
    uint32_t field_0A04;   /* +0x0A04 */
    uint32_t field_0A08;   /* +0x0A08 */
    uint32_t field_0A0C;   /* +0x0A0C */
    uint32_t field_0A10;   /* +0x0A10 */
    uint8_t field_0A14;   /* +0x0A14 */
    uint8_t  _pad_0A18[0x3];
    uint32_t field_0A18;   /* +0x0A18 */
    uint32_t field_0A1C;   /* +0x0A1C */
    uint32_t field_0A20;   /* +0x0A20 */
    uint32_t field_0A24;   /* +0x0A24 */
    /* struct size >= 0xa28 (2600) */
} AreaTask;

/* ResultScene -- 83 proven field(s), sizeof >= 0x410
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

/* CourseSelectTask -- 72 proven field(s), sizeof >= 0xca0
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
    uint8_t  _pad_0C9A[0x6];
    uint8_t field_0C9A;   /* +0x0C9A */
    uint8_t  _pad_0C9C[0x1];
    uint8_t field_0C9C;   /* +0x0C9C */
    uint8_t field_0C9D;   /* +0x0C9D */
    uint8_t field_0C9E;   /* +0x0C9E */
    uint8_t field_0C9F;   /* +0x0C9F */
    /* struct size >= 0xca0 (3232) */
} CourseSelectTask;

/* DemoScene -- 70 proven field(s), sizeof >= 0xf98
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
    /* struct size >= 0xf98 (3992) */
} DemoScene;

/* BasicSoundActor -- 59 proven field(s), sizeof >= 0x1a4
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

/* StageActor -- 53 proven field(s), sizeof >= 0x284
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
    uint8_t  _pad_0220[0x3];
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

/* MaskManager -- 51 proven field(s), sizeof >= 0xa10
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
    uint8_t  _pad_0278[0x128];
    uint32_t field_0278;   /* +0x0278 */
    uint32_t field_027C;   /* +0x027C */
    uint32_t field_0280;   /* +0x0280 */
    uint32_t field_0284;   /* +0x0284 */
    uint32_t field_0288;   /* +0x0288 */
    uint32_t field_028C;   /* +0x028C */
    uint8_t  _pad_03B8[0x128];
    uint32_t field_03B8;   /* +0x03B8 */
    uint32_t field_03BC;   /* +0x03BC */
    uint32_t field_03C0;   /* +0x03C0 */
    uint32_t field_03C4;   /* +0x03C4 */
    uint32_t field_03C8;   /* +0x03C8 */
    uint32_t field_03CC;   /* +0x03CC */
    uint8_t  _pad_04F8[0x128];
    uint32_t field_04F8;   /* +0x04F8 */
    uint32_t field_04FC;   /* +0x04FC */
    uint32_t field_0500;   /* +0x0500 */
    uint32_t field_0504;   /* +0x0504 */
    uint32_t field_0508;   /* +0x0508 */
    uint32_t field_050C;   /* +0x050C */
    uint8_t  _pad_0638[0x128];
    uint32_t field_0638;   /* +0x0638 */
    uint32_t field_063C;   /* +0x063C */
    uint32_t field_0640;   /* +0x0640 */
    uint32_t field_0644;   /* +0x0644 */
    uint32_t field_0648;   /* +0x0648 */
    uint32_t field_064C;   /* +0x064C */
    uint8_t  _pad_0778[0x128];
    uint32_t field_0778;   /* +0x0778 */
    uint32_t field_077C;   /* +0x077C */
    uint32_t field_0780;   /* +0x0780 */
    uint32_t field_0784;   /* +0x0784 */
    uint32_t field_0788;   /* +0x0788 */
    uint32_t field_078C;   /* +0x078C */
    uint8_t  _pad_08B8[0x128];
    uint32_t field_08B8;   /* +0x08B8 */
    uint32_t field_08BC;   /* +0x08BC */
    uint32_t field_08C0;   /* +0x08C0 */
    uint32_t field_08C4;   /* +0x08C4 */
    uint32_t field_08C8;   /* +0x08C8 */
    uint32_t field_08CC;   /* +0x08CC */
    uint8_t  _pad_09F8[0x128];
    uint32_t field_09F8;   /* +0x09F8 */
    uint32_t field_09FC;   /* +0x09FC */
    uint32_t field_0A00;   /* +0x0A00 */
    uint32_t field_0A04;   /* +0x0A04 */
    uint32_t field_0A08;   /* +0x0A08 */
    uint32_t field_0A0C;   /* +0x0A0C */
    /* struct size >= 0xa10 (2576) */
} MaskManager;

/* ColliderBase -- 46 proven field(s), sizeof >= 0x124
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
} ColliderBase;

/* FaderTaskBase -- 45 proven field(s), sizeof >= 0x1c4
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

/* GameSetupScene -- 44 proven field(s), sizeof >= 0x250
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
    /* struct size >= 0x250 (592) */
} GameSetupScene;

/* MultiPlayCourseSelectScene -- 44 proven field(s), sizeof >= 0x5b8
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

/* ChallengeResultScene -- 32 proven field(s), sizeof >= 0x2a4
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
    /* struct size >= 0x2a4 (676) */
} ChallengeResultScene;

/* DarkCloudDemoScene -- 25 proven field(s), sizeof >= 0xa08
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

/* MovingSoundActor -- 25 proven field(s), sizeof >= 0x12c
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
} MovingSoundActor;

/* RectCollider -- 24 proven field(s), sizeof >= 0x290
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

/* Actor -- 23 proven field(s), sizeof >= 0x50
 *
 * Derived from: _ZN5ActorC1EPK14ActorBuildInfo
 */
typedef struct Actor {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_000C[0x8];
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

/* BootScene -- 23 proven field(s), sizeof >= 0xf71
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

/* PlayerBase -- 20 proven field(s), sizeof >= 0x52c   VALIDATED against hand-established offsets
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
    uint8_t  _pad_0522[0x2];
    uint8_t field_0522;   /* +0x0522 */
    uint8_t  _pad_0524[0x1];
    uint32_t field_0524;   /* +0x0524 */
    uint32_t field_0528;   /* +0x0528 */
    /* struct size >= 0x52c (1324) */
} PlayerBase;

/* Heap -- 20 proven field(s), sizeof >= 0x7c
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

/* Thread -- 18 proven field(s), sizeof >= 0x90
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

/* CalculateTask -- 17 proven field(s), sizeof >= 0xb8
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

/* TerrainEffects -- 15 proven field(s), sizeof >= 0x104
 *
 * Derived from: TerrainEffects_ctor
 */
typedef struct TerrainEffects {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_000C[0x8];
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
    /* struct size >= 0x104 (260) */
} TerrainEffects;

/* ActiveCollider -- 14 proven field(s), sizeof >= 0x6f
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
} ActiveCollider;

/* NinJoyNpadDevice -- 14 proven field(s), sizeof >= 0x40
 *
 * Derived from: _ZN4sead16NinJoyNpadDeviceC1EPNS_13ControllerMgrEPNS_4HeapE
 */
typedef struct NinJoyNpadDevice {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_000C[0x8];
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
    /* struct size >= 0x40 (64) */
} NinJoyNpadDevice;

/* TaskBase -- 14 proven field(s), sizeof >= 0x70
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

/* EnemyFreezeMgr -- 13 proven field(s), sizeof >= 0x4d
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

/* MovementHandler -- 13 proven field(s), sizeof >= 0xe8
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
} MovementHandler;

/* ChallengeRetryScene -- 13 proven field(s), sizeof >= 0xd7c
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

/* GameOverScene -- 12 proven field(s), sizeof >= 0x118
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
    /* struct size >= 0x118 (280) */
} GameOverScene;

/* nn__ui2d__Layout_ -- 12 proven field(s), sizeof >= 0x38
 *
 * Derived from: nn__ui2d__Layout__ctor
 */
typedef struct nn__ui2d__Layout_ {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_000C[0x8];
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

/* FileDeviceMgr -- 10 proven field(s), sizeof >= 0x54
 *
 * Derived from: _ZN4sead13FileDeviceMgrC2Ev, _ZN4sead13FileDeviceMgrC2Ev_helper
 */
typedef struct FileDeviceMgr {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0010[0xC];
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

/* Player -- 8 proven field(s), sizeof >= 0x52c
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
    /* struct size >= 0x52c (1324) */
} Player;

/* ResourceMgr -- 8 proven field(s), sizeof >= 0x30
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

/* TileCheck -- 7 proven field(s), sizeof >= 0x4c
 *
 * Derived from: TileCheck_ctor
 */
typedef struct TileCheck {
    uint8_t field_0000;   /* +0x0000 */
    uint8_t  _pad_000C[0xB];
    uint32_t field_000C;   /* +0x000C */
    uint32_t field_0010;   /* +0x0010 */
    uint32_t field_0014;   /* +0x0014 */
    uint32_t field_0018;   /* +0x0018 */
    uint32_t field_001C;   /* +0x001C */
    uint8_t  _pad_0048[0x28];
    uint32_t field_0048;   /* +0x0048 */
    /* struct size >= 0x4c (76) */
} TileCheck;

/* Enemy -- 7 proven field(s), sizeof >= 0x284
 *
 * Derived from: _ZN5EnemyC2EPK14ActorBuildInfo
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
    /* struct size >= 0x284 (644) */
} Enemy;

/* EffectWrapper -- 6 proven field(s), sizeof >= 0x65
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

/* SoundActor -- 6 proven field(s), sizeof >= 0x8c
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

/* ColliderNode -- 4 proven field(s), sizeof >= 0x20
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

/* EffectData -- 4 proven field(s), sizeof >= 0x40
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

/* ShellEnemy -- 4 proven field(s), sizeof >= 0x284
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
    /* struct size >= 0x284 (644) */
} ShellEnemy;

/* ModelBase -- 4 proven field(s), sizeof >= 0x28
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

/* CoinBase -- 4 proven field(s), sizeof >= 0xa8
 *
 * Derived from: _ZN8CoinBaseC2EPK14ActorBuildInfo
 */
typedef struct CoinBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_009C[0x98];
    uint32_t field_009C;   /* +0x009C */
    uint32_t field_00A0;   /* +0x00A0 */
    uint32_t field_00A4;   /* +0x00A4 */
    /* struct size >= 0xa8 (168) */
} CoinBase;

/* BlockCoinBase -- 4 proven field(s), sizeof >= 0x84
 *
 * Derived from: _ZN13BlockCoinBaseC2EPK14ActorBuildInfo
 */
typedef struct BlockCoinBase {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0078[0x74];
    uint32_t field_0078;   /* +0x0078 */
    uint32_t field_007C;   /* +0x007C */
    uint32_t field_0080;   /* +0x0080 */
    /* struct size >= 0x84 (132) */
} BlockCoinBase;

/* TileMgr -- 4 proven field(s), sizeof >= 0x20
 *
 * Derived from: TileMgr_ctor
 */
typedef struct TileMgr {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0014[0x10];
    uint32_t field_0014;   /* +0x0014 */
    uint32_t field_0018;   /* +0x0018 */
    uint32_t field_001C;   /* +0x001C */
    /* struct size >= 0x20 (32) */
} TileMgr;

/* nn_atk_FsSoundArchive -- 4 proven field(s), sizeof >= 0x318
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
    /* struct size >= 0x318 (792) */
} nn_atk_FsSoundArchive;

/* LineFollower -- 3 proven field(s), sizeof >= 0x14
 *
 * Derived from: LineFollower_ctor
 */
typedef struct LineFollower {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_000C[0x8];
    uint32_t field_000C;   /* +0x000C */
    uint32_t field_0010;   /* +0x0010 */
    /* struct size >= 0x14 (20) */
} LineFollower;

/* Yoshi -- 3 proven field(s), sizeof >= 0x28c
 *
 * Derived from: Yoshi_ctor
 */
typedef struct Yoshi {
    uint32_t field_0000;   /* +0x0000 */
    uint8_t  _pad_0215[0x211];
    uint8_t field_0215;   /* +0x0215 */
    uint8_t  _pad_0288[0x72];
    uint32_t field_0288;   /* +0x0288 */
    /* struct size >= 0x28c (652) */
} Yoshi;

