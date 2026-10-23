/* sub_605E3528
 * address: 0x605E3528   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605E3528(int a1, int a2, ActiveCollider *a3)
{
  int v5; // r4
  float *v6; // r0
  float v7; // s0
  float v8; // s6
  float Bottom; // s0
  Vec2 v11; // [sp+8h] [bp-50h] BYREF
  Vec2 v12; // [sp+10h] [bp-48h] BYREF
  TileCheck_Result v13; // [sp+18h] [bp-40h] BYREF

  v5 = 0;
  if ( (FIELD_U8(a1, 6261) & 4) != 0 )
  {
    v6 = (float *)sub_605DBDAC(a1);
    if ( v6 )
    {
      v5 = 0;
      v13.field_C = 0;
      v13.field_10 = 0;
      v7 = v6[28];
      v8 = v6[144];
      v12.x = v6[27] + v6[143];
      v12.y = v7 + v8;
      v11.x = ActiveCollider_getCenterX(a3);
      v11.y = ActiveCollider_getCenterY(a3);
      if ( sub_605DBBA8(a1, &v13, &v12, &v11, 4) )
      {
        Bottom = ActiveCollider_getBottom(a3);
        return Bottom > v13.field_8;
      }
    }
  }
  return v5;
}
