/* PlantIceball_ctor
 * address: 0x60143930   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall PlantIceball_ctor(int a1)
{
  StateActor *v2; // r0
  StateActor *result; // r0

  v2 = (StateActor *)operator_new(0x1A60u);
  result = sub_601424B4(v2, (ActorBuildInfo *)a1);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60BD38D8;
  LOBYTE(result[1]._._.field_27C) = 0;
  result[1]._._.field_280 = 0;
  result[1]._.field_284 = 0;
  result[1]._._.scale.y = FIELD_F32(a1, 28);
  return result;
}
