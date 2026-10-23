/* sub_603578AC
 * address: 0x603578AC   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603578AC(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int owner; // r5
  int result; // r0
  _BYTE *v8; // r0

  owner = (int)FIELD_U32(a3, 0x40);
  result = Enemy__processCollision((Enemy *)a1, a2, a3, 0);
  if ( result == 1 )
  {
    FIELD_U32(a1, 6252) = 0;
    FIELD_U16(a1, 6432) = 512;
    v8 = *(_BYTE **)(a1 + 632);
    if ( v8 )
      *v8 |= 4u;
    return Enemy_killYoshi(a1, owner);
  }
  else if ( !result )
  {
    return Enemy__collisionYoshi(a1, (int)a2, (int)a3);
  }
  return result;
}
