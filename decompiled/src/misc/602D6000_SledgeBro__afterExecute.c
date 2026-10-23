/* SledgeBro__afterExecute
 * address: 0x602D6000   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60003418
// 
// Overridden by: None
int __fastcall SledgeBro__afterExecute(int a1, int a2)
{
  if ( a2 == 2 )
    ActiveCollider_reset((ActiveCollider *)(a1 + 6360));
  return CollisionActor__afterExecute((CollisionActor *)a1, a2);
}
