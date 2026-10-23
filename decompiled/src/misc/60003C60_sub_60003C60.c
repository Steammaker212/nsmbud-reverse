/* sub_60003C60
 * address: 0x60003C60   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60003C60(int result, int a2, float s0_0)
{
  __int64 v3; // d8
  unsigned int v4; // r12
  int v5; // r4
  _BOOL4 v6; // r7
  _BOOL4 v7; // r6
  float v10; // s0
  float v11; // r0
  float v12; // s0
  float v13; // r1
  Vec2 positionOffset; // [sp+8h] [bp-58h] BYREF
  Vec2 a3; // [sp+10h] [bp-50h] BYREF
  TileCheck_Result v16; // [sp+18h] [bp-48h] BYREF
  __int64 v17; // [sp+40h] [bp-20h]

  v4 = FIELD_U32(result, 24);
  if ( (v4 & 1) != 0 )
  {
    v17 = v3;
    v5 = result;
    v6 = v4 < 3;
    v7 = v4 > 1;
    sub_6014F61C(result + 648);
    v16.field_C = 0;
    v16.field_10 = 0;
    if ( v6 || !dword_60CBFA90 || (result = sub_60777B9C()) == 0 )
    {
      v10 = FIELD_F32(v5, 112);
      v11 = FIELD_F32(v5, 108);
      a3.x = v11;
      if ( v7 )
      {
        a3.y = v10 + s0_0;
        v12 = (float)(v10 + s0_0) + (float)(s0_0 * -2.0);
      }
      else
      {
        a3.y = v10;
        v12 = v10 - s0_0;
      }
      positionOffset.x = v11;
      positionOffset.y = v12;
      result = TileCheck_check((TileCheck *)(v5 + 652), &v16, &a3, &positionOffset, 15);
      if ( result == 1 )
      {
        v13 = v16.field_8;
        FIELD_F32(v5, 108) = v16.field_4;
        FIELD_F32(v5, 112) = v13;
        FIELD_F32(v5, 112) = v13 - FIELD_F32(a2, 8);
        result = FIELD_U32(v5, 2872) | 1;
        FIELD_U32(v5, 2872) = result;
      }
    }
  }
  return result;
}
