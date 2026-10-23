/* sub_605DB99C
 * address: 0x605DB99C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DB99C(int a1, Vec2 *a2, TileCheck_Result *a3, int a4, float a5)
{
  float x; // r0
  float y; // r1
  int result; // r0
  Vec2 positionOffset; // [sp+8h] [bp-20h] BYREF

  x = FIELD_F32(a2, 0x0);
  y = FIELD_F32(a2, 0x4);
  positionOffset.x = x;
  positionOffset.y = y + a5;
  result = 0;
  if ( FIELD_F32(a2, 0x4) != (float)(y + a5) )
  {
    sub_6014F61C(a1 + 648);
    if ( a4 )
      sub_6015D144((TileCheck *)(a1 + 652), a4);
    else
      FIELD_U16(a1, 652) = 256;
    return TileCheck_check((TileCheck *)(a1 + 652), a3, a2, &positionOffset, 4);
  }
  return result;
}
