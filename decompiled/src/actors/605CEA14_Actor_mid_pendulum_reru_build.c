/* Actor_mid_pendulum_reru_build
 * address: 0x605CEA14   size: 132   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_mid_pendulum_reru_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0
  StateActor *result; // r0

  v2 = (StateActor *)operator_new(0x1810u);
  result = sub_606C103C(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60C0AC2C;
  LOBYTE(result[1]._._._.field_2C) = 0;
  result[1]._._._.childCount = 0;
  result[1]._._._.field_20.next = 0;
  result[1]._._._.field_20.previous = 0;
  *(_DWORD *)&result[1]._._._.movementId = 0;
  result[1]._._._.settings1 = 0;
  result[1]._._._.settigns2 = 0;
  result[1]._._._.field_30 = 0;
  result[1]._._._.field_34 = 0;
  result[1]._._._.parent = 0;
  return result;
}
