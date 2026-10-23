/* Iggy__vf678
 * address: 0x6009F840   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B7BA4
// 
// Overridden by: None
int __fastcall Iggy__vf678(int a1)
{
  int v2; // r6
  float v3; // s16
  float v4; // s18
  float v5; // s2
  bool v6; // zf
  float *v7; // r1
  int result; // r0
  float v9; // s2
  Vec2 positionOffset; // [sp+8h] [bp-58h] BYREF
  Vec2 a3; // [sp+10h] [bp-50h] BYREF
  TileCheck_Result v12[2]; // [sp+18h] [bp-48h] BYREF

  sub_60421AE4(FIELD_U32(a1, 7096), FIELD_U32(a1, 7120) + 32, 1);
  v2 = dword_60CC6484;
  FIELD_F32(a1, 8148) = FIELD_F32(dword_60CC6484, 120) + -32.0;
  FIELD_F32(a1, 8152) = FIELD_F32(v2, 112) + 32.0;
  v3 = FIELD_F32(v2, 112);
  v4 = FIELD_F32(v2, 120);
  v12[0].field_C = 0;
  v12[0].field_10 = 0;
  v5 = FIELD_F32(a1, 112);
  a3.x = FIELD_F32(a1, 108);
  positionOffset.x = a3.x;
  a3.y = v5 + 50.0;
  positionOffset.y = v5 + 250.0;
  v6 = TileCheck_check((TileCheck *)(a1 + 652), v12, &a3, &positionOffset, 4) == 0;
  v7 = (float *)(v2 + 124);
  result = FIELD_U32(a1, 112);
  if ( !v6 )
    v7 = &v12[0].field_8;
  v9 = *v7 + -40.0;
  FIELD_F32(a1, 8164) = v3 + -16.0;
  FIELD_F32(a1, 8168) = v9;
  FIELD_F32(a1, 8172) = v4 + 16.0;
  FIELD_F32(a1, 8176) = v9;
  FIELD_F32(a1, 8180) = v3 + -16.0;
  FIELD_U32(a1, 8184) = result;
  FIELD_F32(a1, 8188) = v4 + 16.0;
  FIELD_U32(a1, 0x2000) = result;
  return result;
}
