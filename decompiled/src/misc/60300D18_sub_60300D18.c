/* sub_60300D18
 * address: 0x60300D18   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60300D18(int a1)
{
  int result; // r0
  float x; // s16
  int v4; // [sp+0h] [bp-20h] BYREF
  int target; // [sp+4h] [bp-1Ch] BYREF
  Vec2 out; // [sp+8h] [bp-18h] BYREF

  FIELD_U32(a1, 8504) = StageActor__distanceToPlayer((StateActor *)a1, &out);
  result = sub_60300AE4(a1, &out);
  if ( result == 1 )
  {
    x = out.x;
    target = 0x40000000 - sub_6000F7B8(fabsf(out.y), out.x);
    v4 = 100663296;
    moveValueTo((int *)(a1 + 160), &target, &v4);
    result = x < 0.0;
    FIELD_U32(a1, 80) = result;
  }
  return result;
}
