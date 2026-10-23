/* sub_602FFFC8
 * address: 0x602FFFC8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FFFC8(int a1, int a2)
{
  if ( a2 == 2 )
  {
    ActiveCollider_reset((ActiveCollider *)(a1 + 6912));
    ActiveCollider_reset((ActiveCollider *)(a1 + 6608));
  }
  return CollisionActor__afterExecute((CollisionActor *)a1, a2);
}
