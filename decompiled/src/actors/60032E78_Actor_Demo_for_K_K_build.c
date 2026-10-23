/* Actor_Demo_for_K_K_build
 * address: 0x60032E78   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall Actor_Demo_for_K_K_build(ActorBuildInfo *a1)
{
  Enemy *v2; // r0
  Enemy *result; // r0

  v2 = (Enemy *)operator_new(0x18A8u);
  result = Enemy__ctor(v2, a1);
  FIELD_U32(result, 0x0)._._._.vtable = (int)off_60BC23B0;
  result[1]._._._._.vtable = 0;
  LOWORD(result[1]._._._._.heap) = 0;
  return result;
}
