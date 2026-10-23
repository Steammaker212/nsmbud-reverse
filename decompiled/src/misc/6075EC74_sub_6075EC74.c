/* sub_6075EC74
 * address: 0x6075EC74   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6075EC74(int a1)
{
  int v2; // r0
  int v3; // r0
  float v4; // s18
  float v5; // s16
  int v6; // r0
  int v7; // r0
  __n128 result; // q0
  float v9; // s6
  float v10; // s8
  _DWORD v11[2]; // [sp+0h] [bp-40h] BYREF
  int (**v12)(); // [sp+8h] [bp-38h] BYREF
  float v13; // [sp+Ch] [bp-34h]
  _BYTE v14[4]; // [sp+14h] [bp-2Ch] BYREF
  float v15; // [sp+18h] [bp-28h]

  v2 = FIELD_U32(a1, 668);
  if ( v2 )
  {
    v3 = v2 - 1;
    FIELD_U32(a1, 668) = v3;
  }
  else
  {
    v3 = 0;
  }
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_F32(a1, 116);
  if ( FIELD_U32(a1, 664) == 1 )
  {
    v6 = FIELD_U32(a1, 648);
    v12 = &sead__SafeStringBase__vtable;
    v13 = COERCE_FLOAT("ankle_l1");
    sub_60793F04(FIELD_U32(v6, 4), v14, &v12);
    v7 = FIELD_U32(a1, 648);
    v11[0] = &sead__SafeStringBase__vtable;
    v11[1] = "ankle_r1";
    sub_60793F04(FIELD_U32(v7, 4), &v12, v11);
    v3 = FIELD_U32(a1, 668);
    result.n128_f32[0] = (float)(v15 + v13) * 0.5;
  }
  else
  {
    result.n128_u32[0] = FIELD_U32(a1, 112);
  }
  v9 = FIELD_F32(a1, 676);
  v10 = FIELD_F32(a1, 680);
  if ( v3 <= 1 )
    v3 = 1;
  result.n128_f32[0] = result.n128_f32[0] - v9;
  result.n128_f32[2] = 1.0 / (float)v3;
  FIELD_F32(a1, 672) = FIELD_F32(a1, 672) + (float)((float)(v4 - FIELD_F32(a1, 672)) * result.n128_f32[2]);
  FIELD_F32(a1, 676) = v9 + (float)(result.n128_f32[0] * result.n128_f32[2]);
  FIELD_F32(a1, 680) = v10 + (float)(result.n128_f32[2] * (float)(v5 - v10));
  return result;
}
