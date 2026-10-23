/* sub_603342D8
 * address: 0x603342D8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603342D8(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  unsigned int result; // r0

  if ( a1[1]._._.collisionMgr[56] )
    return sub_6033410C((unsigned int)a1, a2, a3);
  result = Enemy__processCollision(a1, a2, a3, 1);
  if ( !result )
    return Enemy__collisionYoshi((int)a1, (int)a2, (int)a3);
  return result;
}
