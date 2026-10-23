/* sub_601017CC
 * address: 0x601017CC   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601017CC(int a1)
{
  float v2; // s0
  float v3; // s16
  float v4; // s16
  float v5; // s18
  float *v6; // r0
  bool v7; // zf
  float v8; // s2
  float v9; // s24
  float v10; // s4
  int v11; // r5
  TileCheck_Result v13; // [sp+8h] [bp-78h] BYREF
  Vec2 positionOffset; // [sp+30h] [bp-50h] BYREF
  Vec2 a3[9]; // [sp+38h] [bp-48h] BYREF

  sub_6014F61C(a1 + 648);
  v13.field_C = 0;
  v13.field_10 = 0;
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(dword_60CC6484, 132);
  a3[0].x = FIELD_F32(a1, 108);
  positionOffset.x = a3[0].x;
  a3[0].y = v2 + -32.0;
  positionOffset.y = v2 + -240.0;
  v4 = v3 + -100.0;
  v5 = v4;
  if ( TileCheck_check((TileCheck *)(a1 + 652), &v13, a3, &positionOffset, 8) == 1 )
  {
    v6 = (float *)v13.field_20;
    v5 = v13.field_8;
    v7 = v13.field_20 == 0;
    if ( v13.field_20 )
    {
      v6 = *(float **)(v13.field_20 + 144);
      v7 = v6 == 0;
    }
    if ( !v7 )
    {
      if ( v6[23] == 0.0 || v6[26] == 0.0 )
      {
        if ( v6[30] != 0.0 )
          v5 = v4;
      }
      else
      {
        v5 = v4;
      }
    }
  }
  v8 = FIELD_F32(a1, 112);
  a3[0].x = FIELD_F32(a1, 108) - FIELD_F32(a1, 6768);
  positionOffset.x = a3[0].x;
  a3[0].y = v8 + -32.0;
  positionOffset.y = v8 + -240.0;
  v9 = v4;
  if ( TileCheck_check((TileCheck *)(a1 + 652), &v13, a3, &positionOffset, 8) == 1 )
  {
    v9 = v4;
    if ( (v13.field_1C & 0xF) != 2 )
      v9 = v13.field_8;
  }
  v10 = FIELD_F32(a1, 112);
  a3[0].x = FIELD_F32(a1, 108) + FIELD_F32(a1, 6768);
  a3[0].y = v10 + -32.0;
  positionOffset.x = a3[0].x;
  positionOffset.y = v10 + -240.0;
  if ( TileCheck_check((TileCheck *)(a1 + 652), &v13, a3, &positionOffset, 8) == 1 && (v13.field_1C & 0xF) != 2 )
    v4 = v13.field_8;
  v11 = 1;
  if ( v9 <= (float)(v5 + (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1)) )
    return v4 > (float)(v5 + (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1));
  return v11;
}
