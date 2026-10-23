/* sub_60333B3C
 * address: 0x60333B3C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60333B3C(CollisionActor *a1)
{
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
