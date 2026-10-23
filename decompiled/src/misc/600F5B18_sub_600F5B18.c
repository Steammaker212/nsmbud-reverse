/* sub_600F5B18
 * address: 0x600F5B18   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600F5B18(CollisionActor *a1)
{
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
