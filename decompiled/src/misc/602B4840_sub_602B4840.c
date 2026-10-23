/* sub_602B4840
 * address: 0x602B4840   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B4840(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int result; // r0

  result = Enemy__processCollision(a1, a2, a3, 1);
  if ( !result )
    return Enemy__collisionYoshi((int)a1, (int)a2, (int)a3);
  return result;
}
