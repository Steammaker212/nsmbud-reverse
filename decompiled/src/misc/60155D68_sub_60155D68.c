/* sub_60155D68
 * address: 0x60155D68   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60155D68(int a1, float *a2, float *r2_0, int a4, float *arg0)
{
  int v9; // r7
  float v10; // r1
  float v11; // r0
  float v12; // r1
  TileCheck_Result v14; // [sp+8h] [bp-50h] BYREF
  Vec2 positionOffset; // [sp+30h] [bp-28h] BYREF
  Vec2 a3; // [sp+38h] [bp-20h] BYREF

  if ( *a2 != *r2_0 || (v9 = 0, a2[1] != r2_0[1]) )
  {
    sub_6014F61C(a1);
    FIELD_U8(a1, 5) = 1;
    v10 = a2[1];
    a3.x = *a2;
    a3.y = v10;
    v11 = r2_0[1];
    v12 = *r2_0;
    v9 = 0;
    v14.field_C = 0;
    v14.field_10 = 0;
    positionOffset.x = v12;
    positionOffset.y = v11;
    if ( TileCheck_check((TileCheck *)(a1 + 4), &v14, &a3, &positionOffset, a4) == 1 )
    {
      if ( arg0 )
      {
        *arg0 = v14.field_4;
        arg0[1] = v14.field_8;
      }
      return 1;
    }
  }
  return v9;
}
