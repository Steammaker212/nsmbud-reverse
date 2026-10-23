/* Actor_Battle_for_Item_2_build
 * address: 0x60471228   size: 100   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_Battle_for_Item_2_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0
  StateActor *result; // r0

  v2 = (StateActor *)operator_new(0x17F0u);
  result = StateActor_ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BFC8F0;
  result[1]._._._.settings1 = 0;
  *(_DWORD *)&result[1]._._._.field_10 = 0;
  result[1]._._._.profile = 0;
  result[1]._._._.id = 0;
  result[1]._._._.vtable = 0;
  result[1]._._._.heap = 0;
  return result;
}
