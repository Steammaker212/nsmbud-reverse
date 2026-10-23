/* Actor_majikuhandoTag_gu_i_build
 * address: 0x606860E8   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall Actor_majikuhandoTag_gu_i_build(ActorBuildInfo *a1)
{
  MultiStateActor *v2; // r0
  MultiStateActor *result; // r0

  v2 = (MultiStateActor *)operator_new(0x17D8u);
  result = MultiStateActor__ctor(v2, a1);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60C16F20;
  return result;
}
