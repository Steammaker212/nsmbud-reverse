/* Water_ctor
 * address: 0x605AB254   size: 80   group: misc
 * sym: # Water_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall Water_ctor(ActorBuildInfo *a1)
{
  int v2; // r0
  sead_IDisposer *result; // r0

  v2 = operator_new(0x11A98u);
  result = TerrainActor_ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)Water_vtable;
  result[4520].containingHeap = 0x40000000;
  result[4520].field_8 = 0;
  result[4520].field_C = 0;
  result[4521].vtable = 0;
  return result;
}
