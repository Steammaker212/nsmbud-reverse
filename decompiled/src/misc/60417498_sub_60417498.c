/* sub_60417498
 * address: 0x60417498   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60417498(int a1, void *a2)
{
  int v4; // r0
  int v5; // r0
  float v6; // s0
  float v7; // s2
  int v8; // r0
  int v9; // r0
  float v10; // s0
  float v11; // s2
  int v12; // r0
  int v13; // r0
  float v14; // s0
  float v15; // s2
  int v16; // r0
  int v17; // r0
  float v18; // s0
  float v19; // s2
  int v20; // r0
  int v21; // r0
  float v22; // s0
  float v23; // s2
  float result; // s0
  int v25; // [sp+20h] [bp-48h] BYREF
  int v26; // [sp+24h] [bp-44h]

  v25 = 1151336448;
  v26 = 1144258560;
  FIELD_U32(a1, 20) = 29;
  FIELD_U32(a1, 24) = 854;
  FIELD_U32(a1, 28) = 480;
  v4 = operator_new_8DE25C(0x40u, a2, 4);
  FIELD_U32(a1, 32) = ((int (__fastcall *)(int, int *, float, float, float, float))loc_60919ED8)(
                           v4,
                           &v25,
                           0.0,
                           0.0,
                           854.0,
                           480.0);
  v5 = operator_new_8DE25C(0x158u, a2, 4);
  FIELD_U32(a1, 36) = sub_6091ABEC(v5);
  v6 = *(float *)&v25;
  v7 = *(float *)&v26;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_F32(a1, 48) = v6 + 0.0;
  FIELD_F32(a1, 52) = v7 + 0.0;
  FIELD_U32(a1, 60) = 2;
  FIELD_U32(a1, 64) = 0;
  FIELD_U32(a1, 72) = 29;
  FIELD_U32(a1, 76) = 854;
  FIELD_U32(a1, 80) = 480;
  v8 = operator_new_8DE25C(0x40u, a2, 4);
  FIELD_U32(a1, 84) = ((int (__fastcall *)(int, int *, float, float, float, float))loc_60919ED8)(
                           v8,
                           &v25,
                           0.0,
                           0.0,
                           854.0,
                           480.0);
  v9 = operator_new_8DE25C(0x158u, a2, 4);
  FIELD_U32(a1, 88) = sub_6091ABEC(v9);
  v10 = *(float *)&v25;
  v11 = *(float *)&v26;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 96) = 0;
  FIELD_F32(a1, 100) = v10 + 0.0;
  FIELD_F32(a1, 104) = v11 + 0.0;
  FIELD_U32(a1, 112) = 2;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 124) = 29;
  FIELD_U32(a1, 128) = 1280;
  FIELD_U32(a1, 132) = 720;
  v12 = operator_new_8DE25C(0x40u, a2, 4);
  FIELD_U32(a1, 136) = ((int (__fastcall *)(int, int *, float, float, float, float))loc_60919ED8)(
                            v12,
                            &v25,
                            0.0,
                            0.0,
                            1280.0,
                            720.0);
  v13 = operator_new_8DE25C(0x158u, a2, 4);
  FIELD_U32(a1, 140) = sub_6091ABEC(v13);
  v14 = *(float *)&v25;
  v15 = *(float *)&v26;
  FIELD_U32(a1, 144) = 0;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 168) = 0;
  FIELD_F32(a1, 152) = v14 + 0.0;
  FIELD_F32(a1, 156) = v15 + 0.0;
  FIELD_U32(a1, 120) = sub_6093E948(
                            dword_60CD09F8,
                            0,
                            &dword_60C9BAC0,
                            FIELD_U32(a1, 124),
                            FIELD_U32(a1, 128),
                            FIELD_U32(a1, 132),
                            1,
                            0,
                            0,
                            1,
                            0);
  sub_60959C50(a1 + 392);
  FIELD_U32(a1, 176) = 29;
  FIELD_U32(a1, 180) = 1920;
  FIELD_U32(a1, 184) = 1080;
  v16 = operator_new_8DE25C(0x40u, a2, 4);
  FIELD_U32(a1, 188) = ((int (__fastcall *)(int, int *, float, float, float, float))loc_60919ED8)(
                            v16,
                            &v25,
                            0.0,
                            0.0,
                            1920.0,
                            1080.0);
  v17 = operator_new_8DE25C(0x158u, a2, 4);
  FIELD_U32(a1, 192) = sub_6091ABEC(v17);
  v18 = *(float *)&v25;
  v19 = *(float *)&v26;
  FIELD_U32(a1, 196) = 0;
  FIELD_U32(a1, 200) = 0;
  FIELD_F32(a1, 204) = v18 + 0.0;
  FIELD_F32(a1, 208) = v19 + 0.0;
  FIELD_U32(a1, 216) = 1;
  FIELD_U32(a1, 220) = 1;
  FIELD_U32(a1, 228) = 29;
  FIELD_U32(a1, 232) = 854;
  FIELD_U32(a1, 236) = 480;
  v20 = operator_new_8DE25C(0x40u, a2, 4);
  FIELD_U32(a1, 240) = ((int (__fastcall *)(int, int *, float, float, float, float))loc_60919ED8)(
                            v20,
                            &v25,
                            0.0,
                            0.0,
                            854.0,
                            480.0);
  v21 = operator_new_8DE25C(0x158u, a2, 4);
  FIELD_U32(a1, 244) = sub_6091ABEC(v21);
  v22 = *(float *)&v25;
  v23 = *(float *)&v26;
  FIELD_U32(a1, 248) = 0;
  FIELD_U32(a1, 252) = 0;
  result = v22 + 0.0;
  FIELD_F32(a1, 256) = result;
  FIELD_F32(a1, 260) = v23 + 0.0;
  FIELD_U32(a1, 268) = 1;
  FIELD_U32(a1, 272) = 1;
  return result;
}
