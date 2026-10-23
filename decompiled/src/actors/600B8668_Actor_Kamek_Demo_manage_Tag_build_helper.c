/* Actor_Kamek_Demo_manage_Tag_build_helper
 * address: 0x600B8668   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_Kamek_Demo_manage_Tag_build_helper(StateActor *a1, ActorBuildInfo *a2)
{
  StateActor *result; // r0

  result = sub_600271A0(a1, a2);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60BC9898;
  LOBYTE(result[1]._._._.field_20.next) = 0;
  result[1]._._._.field_20.previous = 0;
  result[1]._._._.settigns2 = 0;
  *(_DWORD *)&result[1]._._._.movementId = 0;
  return result;
}
