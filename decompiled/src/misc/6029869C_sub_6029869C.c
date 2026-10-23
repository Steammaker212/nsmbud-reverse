/* sub_6029869C
 * address: 0x6029869C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029869C(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int result; // r0

  result = Enemy__processCollision(a1, a2, a3, 1);
  if ( !result )
    return Enemy__collisionYoshi(a1, a2, a3);
  return result;
}
