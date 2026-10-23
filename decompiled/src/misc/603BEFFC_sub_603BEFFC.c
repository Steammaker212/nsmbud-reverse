/* sub_603BEFFC
 * address: 0x603BEFFC   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BEFFC(CollisionActor *a1, int a2)
{
  if ( a2 == 2 )
    HIBYTE(a1[1]._.field_260.x) = 0;
  return CollisionActor__afterExecute(a1, a2);
}
