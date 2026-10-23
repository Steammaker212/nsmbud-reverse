/* Actor_Flag_Switch_ON_OFFFlag_build
 * address: 0x60604FEC   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall Actor_Flag_Switch_ON_OFFFlag_build(ActorBuildInfo *a1)
{
  MultiStateActor *v2; // r0
  MultiStateActor *result; // r0

  v2 = (MultiStateActor *)operator_new(0x17F0u);
  result = FlagSwitchBase__ctor(v2, a1);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60C0F074;
  return result;
}
