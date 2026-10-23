/* sub_60442F18
 * address: 0x60442F18   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60442F18(int a1)
{
  int v2; // r5
  float v3; // s0
  float v4; // s0
  int v5; // r0
  int v6; // r2
  int v7; // r2
  unsigned int v8; // r1
  int *result; // r0
  int v10; // r6
  float v11; // s16
  float v12; // s20
  float v13; // s18
  float v14; // s22
  int v15; // r5
  float v16; // s2
  float v17; // s0
  float v18; // s0
  float v19; // s0
  int v20; // r4
  int v21; // t1

  FIELD_U32(a1, 180) = 1065353216;
  v2 = a1 + 32;
  FIELD_U32(a1, 184) = 1184645120;
  FIELD_U8(a1, 36) = 1;
  sub_6090C9A0(a1 + 32);
  FIELD_U32(a1, 256) = 0;
  FIELD_U32(a1, 260) = 0;
  FIELD_U32(a1, 264) = 1176256512;
  FIELD_U32(a1, 268) = 0;
  FIELD_U32(a1, 272) = 0;
  FIELD_U32(a1, 276) = -1082130432;
  FIELD_U32(a1, 280) = 0;
  FIELD_U32(a1, 284) = 1065353216;
  FIELD_U32(a1, 288) = 0;
  v3 = sqrtf((float)((float)(1.0 * 1.0) + (float)(0.0 * 0.0)) + (float)(0.0 * 0.0));
  if ( v3 > 0.0 )
  {
    v4 = 1.0 / v3;
    FIELD_F32(a1, 280) = v4 * FIELD_F32(a1, 280);
    FIELD_F32(a1, 284) = v4 * FIELD_F32(a1, 284);
    FIELD_F32(a1, 288) = v4 * FIELD_F32(a1, 288);
  }
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 204) + 16))(a1 + 204, a1 + 208);
  v5 = dword_60CD0B40;
  v6 = FIELD_U32(dword_60CD0B40, 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 9u )
    v6 += 36;
  *(_DWORD *)(*(_DWORD *)v6 + 76) = v2;
  v7 = FIELD_U32(v5, 36);
  if ( FIELD_U32(v5, 32) > 9u )
    v7 += 36;
  *(_DWORD *)(*(_DWORD *)v7 + 72) = a1 + 204;
  v8 = FIELD_U32(v5, 32);
  result = *(int **)(v5 + 36);
  if ( v8 > 8 )
    result += 8;
  v10 = *result;
  if ( *result )
  {
    v11 = FIELD_F32(a1, 16);
    v12 = FIELD_F32(a1, 24);
    v13 = FIELD_F32(a1, 20);
    v14 = FIELD_F32(a1, 28);
    v15 = a1 + 304;
    FIELD_U32(a1, 452) = 1065353216;
    FIELD_U32(a1, 456) = 1184645120;
    FIELD_U8(a1, 308) = 1;
    sub_6090C9A0(a1 + 304);
    v16 = (float)(v11 + v12) * 0.5;
    v17 = (float)((float)-v13 - v14) * 0.5;
    FIELD_F32(a1, 528) = v16;
    FIELD_F32(a1, 532) = v17;
    FIELD_U32(a1, 536) = 1176256512;
    FIELD_F32(a1, 540) = v16;
    FIELD_F32(a1, 544) = v17;
    FIELD_U32(a1, 548) = -1082130432;
    FIELD_U32(a1, 552) = 0;
    FIELD_U32(a1, 556) = 1065353216;
    FIELD_U32(a1, 560) = 0;
    v18 = sqrtf((float)((float)(1.0 * 1.0) + (float)(0.0 * 0.0)) + (float)(0.0 * 0.0));
    if ( v18 > 0.0 )
    {
      v19 = 1.0 / v18;
      FIELD_F32(a1, 552) = v19 * FIELD_F32(a1, 552);
      FIELD_F32(a1, 556) = v19 * FIELD_F32(a1, 556);
      FIELD_F32(a1, 560) = v19 * FIELD_F32(a1, 560);
    }
    v21 = FIELD_U32(a1, 476);
    v20 = a1 + 476;
    result = (int *)(*(int (__fastcall **)(int, int))(v21 + 16))(v20, v20 + 4);
    FIELD_U32(v10, 72) = v20;
    FIELD_U32(v10, 76) = v15;
  }
  return result;
}
