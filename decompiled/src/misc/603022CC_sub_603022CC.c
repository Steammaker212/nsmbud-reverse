/* sub_603022CC
 * address: 0x603022CC   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603022CC(int a1)
{
  int result; // r0
  float v3; // s0
  float v4; // r0
  float v5; // s2
  TileCheck *v6; // r0
  TileCheck_Result v7; // [sp+8h] [bp-A0h] BYREF
  TileCheck v8; // [sp+30h] [bp-78h] BYREF
  TileCheck_Param v9; // [sp+7Ch] [bp-2Ch] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-20h] BYREF
  Vec2 a3; // [sp+90h] [bp-18h] BYREF

  result = FIELD_U32(a1, 8484);
  if ( !result )
  {
    result = FIELD_U32(a1, 164);
    if ( !result )
    {
      a3.x = 0.0;
      a3.y = 0.0;
      v3 = FIELD_F32(a1, 112);
      v4 = FIELD_F32(a1, 108);
      if ( FIELD_U8(dword_60CC6D8C, 17) )
        v5 = flt_60AF2040[FIELD_U32(a1, 8512)];
      else
        v5 = 32.0;
      a3.x = FIELD_F32(a1, 108);
      positionOffset.x = v4;
      positionOffset.y = v3;
      *(_WORD *)&v9.field_0 = 0;
      a3.y = v3 + v5;
      v9.field_2 = FIELD_U8(a1, 86);
      v9.field_3 = FIELD_U8(a1, 87);
      v9.field_4 = 0;
      v9.field_8 = 0;
      v6 = TileCheck_ctor(&v8, &v9);
      v7.field_C = 0;
      v7.field_10 = 0;
      result = TileCheck_check(v6, &v7, &a3, &positionOffset, 8);
      if ( result == 1 )
      {
        result = LODWORD(v7.field_8);
        FIELD_F32(a1, 112) = v7.field_8;
      }
    }
  }
  return result;
}
