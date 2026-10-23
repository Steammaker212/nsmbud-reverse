/* Actor_ball_surekoin_parent_build
 * address: 0x605F2788   size: 180   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_ball_surekoin_parent_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0
  StateActor *result; // r0

  v2 = (StateActor *)operator_new(0x18B0u);
  result = StateActor_ctor(v2, a1);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60C0C278;
  result[1]._._._.heap = 0;
  *(_DWORD *)&result[1]._._._.field_10 = 0;
  *(_DWORD *)&result[1]._._._.movementId = 0;
  result[1]._._._.childCount = 0;
  result[1]._._._.field_34 = 0;
  result[1]._._._.field_40 = 0;
  result[1]._._._.field_4C = 0;
  result[1]._._.field_58 = 0;
  result[1]._._.field_64 = 0.0;
  result[1]._._.position.y = 0.0;
  result[1]._._.speed.y = 0.0;
  result[1]._._.maxSpeed.y = 0.0;
  result[1]._._.scale.y = 0.0;
  result[1]._._.rotation.y = 0;
  result[1]._._.field_AC = 0;
  result[1]._._.aCollider.activeNode.owner = 0;
  return result;
}
