/* sub_60373664
 * address: 0x60373664   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60373664(CollisionActor *a1, int a2)
{
  if ( a2 == 2 )
  {
    *(_DWORD *)&a1[1].collisionMgr[5056] = 0;
    *(_DWORD *)&a1[1].collisionMgr[5060] = 0;
  }
  return CollisionActor__afterExecute(a1, a2);
}
