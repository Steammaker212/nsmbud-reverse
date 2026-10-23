/* sub_603305B4
 * address: 0x603305B4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603305B4(Enemy *a1, ActiveCollider *a2, int a3)
{
  int result; // r0
  bool v7; // zf

  result = Enemy__processCollision(a1, a2, (ActiveCollider *)a3, 2);
  if ( !result )
    return Enemy__collisionPlayer((int)a1, (int)a2, a3);
  v7 = result == 3;
  if ( result != 3 )
    v7 = result == 1;
  if ( v7 )
    return sub_6033048C((int)a1, FIELD_U32(a3, 64));
  return result;
}
