/* sub_6027C0E4
 * address: 0x6027C0E4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027C0E4(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StageActor *owner; // r7
  int result; // r0

  owner = FIELD_U32(a3, 0x40);
  result = Enemy__processCollision(a1, a2, a3, 0);
  if ( result == 1 )
    return Enemy_killYoshi(a1, owner);
  if ( !result )
    return Enemy__collisionYoshi(a1, a2, a3);
  return result;
}
