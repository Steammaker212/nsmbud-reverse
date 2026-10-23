/* sub_60289990
 * address: 0x60289990   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60289990(CollisionActor *a1)
{
  int v2; // r0

  v2 = -a1[1]._.field_1F0;
  if ( FIELD_U32(a1, 0x0).rotation.x - 0x4000000 > v2 )
    v2 = FIELD_U32(a1, 0x0).rotation.x - 0x4000000;
  FIELD_U32(a1, 0x0).rotation.x = v2;
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
