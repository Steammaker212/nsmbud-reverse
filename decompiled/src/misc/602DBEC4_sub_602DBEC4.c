/* sub_602DBEC4
 * address: 0x602DBEC4   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_602DBEC4(int a1, int a2)
{
  float v4; // s0
  unsigned __int32 v5; // r0
  float v6; // r1
  float *v7; // r2
  float v8; // s12
  float v9; // s0
  float v10; // s4
  float v11; // s8
  float v12; // s2
  float v13; // s12
  float v14; // s10
  float v15; // s14
  __n64 result; // d0
  float32x2_t v17; // [sp+0h] [bp-40h] BYREF
  float v18; // [sp+8h] [bp-38h]
  float v19; // [sp+Ch] [bp-34h]
  float v20; // [sp+10h] [bp-30h]
  float v21; // [sp+14h] [bp-2Ch]
  float v22; // [sp+18h] [bp-28h]
  float v23; // [sp+1Ch] [bp-24h]
  float v24; // [sp+20h] [bp-20h]
  float v25; // [sp+24h] [bp-1Ch]
  int v26; // [sp+28h] [bp-18h]
  unsigned __int32 v27; // [sp+2Ch] [bp-14h]

  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_U32(a1, 116);
  v6 = FIELD_F32(a1, 108);
  v17.n64_u64[0] = 1065353216;
  v18 = 0.0;
  v20 = 0.0;
  v21 = 1.0;
  v22 = 0.0;
  v24 = 0.0;
  v25 = 0.0;
  *(float *)&v26 = 1.0;
  v19 = v6;
  v23 = v4 + 3.0;
  v27 = v5;
  Mtx34_rotateY(&v17, (unsigned int *)(a1 + 160));
  v7 = (float *)((char *)sinLutTable + (((unsigned int)dword_60C91D60 >> 20) & 0xFF0));
  v8 = FIELD_F32(a1, 6332);
  v9 = (float)(dword_60C91D60 & 0xFFFFFF) * 0.000000059605;
  v10 = v8 * (float)(*v7 + (float)(v7[1] * v9));
  v11 = v8 * (float)(v7[2] + (float)(v9 * v7[3]));
  result.n64_f32[0] = v19
                    + (float)((float)((float)(v10 * v17.n64_f32[1]) + (float)(v17.n64_f32[0] * 0.0)) + (float)(v11 * v18));
  v23 = v23 + (float)((float)((float)(v10 * v21) + (float)(v20 * 0.0)) + (float)(v11 * v22));
  v12 = v23;
  v13 = v25;
  v14 = v24;
  v15 = *(float *)&v26;
  result.n64_u32[1] = v27;
  *(_DWORD *)a2 = result.n64_u32[0];
  FIELD_F32(a2, 4) = v12;
  FIELD_F32(a2, 8) = result.n64_f32[1]
                     + (float)((float)((float)(v10 * v13) + (float)(v14 * 0.0)) + (float)(v11 * v15));
  return result;
}
