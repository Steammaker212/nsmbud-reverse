/* sub_6036A7E8
 * address: 0x6036A7E8   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6036A7E8(int a1)
{
  float32x2_t v1; // d8
  unsigned int v3; // r5
  float *v4; // r0
  float v5; // s18
  float v6; // s20
  float v7; // s22
  TileCheck *v8; // r0
  float32x2_t v9; // d2
  float v10; // s10
  float v11; // s0
  float v12; // s2
  Vec2 positionOffset; // [sp+8h] [bp-B8h] BYREF
  Vec2 a3; // [sp+10h] [bp-B0h] BYREF
  TileCheck_Result v16; // [sp+18h] [bp-A8h] BYREF
  TileCheck v17; // [sp+44h] [bp-7Ch] BYREF

  v3 = sub_6000F7B8(FIELD_F32(a1, 112) - FIELD_F32(a1, 588), FIELD_F32(a1, 108) - FIELD_F32(a1, 584));
  v4 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v1.n64_f32[0] = *v4;
  v5 = v4[1];
  v6 = v4[2];
  v7 = v4[3];
  v8 = sub_6015D0AC(&v17);
  v9.n64_u32[0] = 0;
  v16.field_C = 0;
  v16.field_10 = 0;
  v10 = FIELD_F32(a1, 576);
  v11 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v12 = FIELD_F32(a1, 112);
  v1.n64_f32[0] = v1.n64_f32[0] + (float)(v5 * v11);
  a3.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  a3.y = v12 + v10;
  positionOffset.x = a3.x + (float)((float)(v6 + (float)(v11 * v7)) * 48.0);
  positionOffset.y = (float)(v12 + v10) + (float)(vmax_f32(v1, v9).n64_f32[0] * 48.0);
  return TileCheck_check(v8, &v16, &a3, &positionOffset, 15) == 1
      && ((unsigned __int8)v16.field_0 & (FIELD_U32(a1, 80) + 1)) != 0;
}
