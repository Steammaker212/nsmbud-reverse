/* sub_605DBA44
 * address: 0x605DBA44   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DBA44(int a1, Vec2 *a2, TileCheck_Result *a3, int a4, float s0_0)
{
  float x; // r0
  float y; // r1
  char *v11; // r2
  int result; // r0
  int a5; // r9
  Vec2 positionOffset; // [sp+8h] [bp-28h] BYREF

  x = FIELD_F32(a2, 0x0);
  y = FIELD_F32(a2, 0x4);
  positionOffset.y = y;
  positionOffset.x = x;
  v11 = (char *)&unk_60AFDF94;
  if ( s0_0 < 0.0 )
    v11 = &byte_60AFDF95;
  positionOffset.x = x + s0_0;
  if ( x != (float)(x + s0_0) || (result = 0, FIELD_F32(a2, 0x4) != y) )
  {
    a5 = (unsigned __int8)*v11;
    sub_6014F61C(a1 + 648);
    if ( a4 )
      sub_6015D144((TileCheck *)(a1 + 652), a4);
    else
      FIELD_U16(a1, 652) = 256;
    return TileCheck_check((TileCheck *)(a1 + 652), a3, a2, &positionOffset, a5);
  }
  return result;
}
