/* Actor_pipe_big_RDash_build_helper_6946F8
 * address: 0x606946F8   size: 116   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_pipe_big_RDash_build_helper_6946F8(StageActor *a1, ActorBuildInfo *a2)
{
  StageActor *result; // r0

  result = StageActor__ctor(a1, a2);
  FIELD_U32(result, 0x0) = (int)off_60C17C30;
  result[1].aCollider.field_5C = 0;
  result[1].aCollider.field_64 = 0;
  *(_DWORD *)&result[1].aCollider.field_6C = 0;
  result[1].aCollider.info.distToCenter.x = 0.0;
  result[1].aCollider.info.distToEdge.x = 0.0;
  result[1].aCollider.info.field_10 = 0;
  result[1].aCollider.info.category = 0;
  result[1].aCollider.info.mask = 0;
  *(_DWORD *)&result[1]._.field_10 = 0;
  result[1]._.profile = 0;
  result[1]._.id = 0;
  result[1]._.heap = 0;
  result[1]._.vtable = 0;
  result[1].aCollider.field_54 = 0;
  result[1].aCollider.field_50 = 0;
  result[1].aCollider.field_4C = 0;
  result[1].aCollider.field_48 = 0;
  result[1].aCollider.info.callback = 0;
  result[1].aCollider.trapezoidOffsetTopLeft = 0.0;
  result[1].aCollider.trapezoidOffsetTopRight = 0.0;
  result[1].aCollider.trapezoidOffsetBottomLeft = 0.0;
  return result;
}
