/* Quicksand_ctor
 * address: 0x605AA770   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall Quicksand_ctor(ActorBuildInfo *a1)
{
  int v2; // r0
  sead_IDisposer *result; // r0

  v2 = operator_new(0x11A88u);
  result = TerrainActor_ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)Quicksand_vtable;
  return result;
}
