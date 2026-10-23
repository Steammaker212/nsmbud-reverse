/* sub_60390170
 * address: 0x60390170   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60390170(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int owner; // r7
  int result; // r0

  owner = (int)FIELD_U32(a3, 0x40);
  result = Enemy__processCollision(a1, a2, a3, 0);
  if ( result == 1 )
    return Enemy_killYoshi((int)a1, owner);
  if ( !result )
    return Enemy__collisionYoshi((int)a1, (int)a2, (int)a3);
  return result;
}
