/* sub_6039B5BC
 * address: 0x6039B5BC   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039B5BC(int a1)
{
  int v2; // r5
  float v3; // s0
  float v4; // s16
  TileCheck *v5; // r0
  float v6; // r0
  int v7; // r1
  TileCheck_Result v9; // [sp+8h] [bp-A8h] BYREF
  TileCheck v10; // [sp+30h] [bp-80h] BYREF
  TileCheck_Param v11; // [sp+7Ch] [bp-34h] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-28h] BYREF
  Vec2 a3; // [sp+90h] [bp-20h] BYREF

  if ( FIELD_U8(a1, 2992) )
  {
    v2 = 0;
    if ( FIELD_U8(a1, 2996) )
      return v2;
  }
  else if ( !FIELD_U8(a1, 3000) )
  {
    return 0;
  }
  v2 = 1;
  if ( (FIELD_U8(a1, 6320) & 1) == 0 )
  {
    v2 = 0;
    if ( FIELD_U8(a1, 6399) )
    {
      v3 = FIELD_F32(a1, 112);
      a3.x = FIELD_F32(a1, 108);
      v4 = v3 + 16.0;
      a3.y = v3 + 16.0;
      positionOffset.y = v3 + 16.0;
      positionOffset.x = a3.x;
      positionOffset.y = FIELD_F32(AreaTask_intance, 1816);
      if ( (float)(v3 + 16.0) >= positionOffset.y )
      {
        v2 = 0;
        *(_WORD *)&v11.field_0 = 0;
        v11.field_2 = FIELD_U8(a1, 86);
        v11.field_3 = FIELD_U8(a1, 87);
        v11.field_4 = 0;
        v11.field_8 = 0;
        v5 = TileCheck_ctor(&v10, &v11);
        v9.field_C = 0;
        v9.field_10 = 0;
        v6 = COERCE_FLOAT(TileCheck_check(v5, &v9, &a3, &positionOffset, 8));
        v7 = 0;
        if ( LODWORD(v6) == 1 )
        {
          v7 = 0;
          if ( fabsf(v9.field_8 - v4) <= 20.0 )
          {
            v6 = v9.field_8;
            v7 = 1;
          }
        }
        if ( v7 == 1 )
          FIELD_F32(a1, 112) = v6;
      }
    }
  }
  return v2;
}
