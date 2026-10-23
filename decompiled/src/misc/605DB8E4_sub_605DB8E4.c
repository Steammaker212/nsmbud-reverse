/* sub_605DB8E4
 * address: 0x605DB8E4   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DB8E4(int a1, float *a2, TileCheck_Result *r2_0, int a4, float a5)
{
  float v7; // r0
  float v9; // s2
  int result; // r0
  Vec2 a3; // [sp+8h] [bp-28h] BYREF
  Vec2 positionOffset; // [sp+10h] [bp-20h] BYREF

  v7 = a2[1];
  a3.x = *a2;
  a3.y = v7;
  positionOffset.x = a3.x;
  positionOffset.y = v7 - a5;
  v9 = v7;
  result = 0;
  if ( v9 != positionOffset.y )
  {
    sub_6014F61C(a1 + 648);
    if ( a4 )
      sub_6015D144((TileCheck *)(a1 + 652), a4);
    else
      FIELD_U16(a1, 652) = 256;
    return TileCheck_check((TileCheck *)(a1 + 652), r2_0, &a3, &positionOffset, 8);
  }
  return result;
}
