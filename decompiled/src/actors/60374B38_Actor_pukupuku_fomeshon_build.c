/* Actor_pukupuku_fomeshon_build
 * address: 0x60374B38   size: 108   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_pukupuku_fomeshon_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0
  StateActor *result; // r0

  v2 = (StateActor *)operator_new(0x1830u);
  result = StateActor_ctor(v2, a1);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60BF0F10;
  result[1]._._._.vtable = 0;
  result[1]._._.field_58 = 0;
  *(_WORD *)&result[1]._._.playerId = 0;
  result[1]._._.direction = 0;
  result[1]._._._.field_4C = 0;
  result[1]._._._.field_44 = 0;
  result[1]._._._.field_48 = 0;
  return result;
}
