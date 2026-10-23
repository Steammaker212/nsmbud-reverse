/* sub_606F1CE8
 * address: 0x606F1CE8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

CollisionActor *__fastcall sub_606F1CE8(ActorBuildInfo *a1)
{
  CollisionActor *v2; // r0
  CollisionActor *result; // r0

  v2 = (CollisionActor *)operator_new(0x17B8u);
  result = CollisionActor__ctor(v2, a1);
  FIELD_U32(result, 0x0)._.vtable = (int)&off_60C2034C;
  result[1]._._.vtable = 0;
  result[1]._._.heap = 0;
  return result;
}
