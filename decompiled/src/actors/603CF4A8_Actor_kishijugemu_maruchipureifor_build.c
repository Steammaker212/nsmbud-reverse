/* Actor_kishijugemu_maruchipureifor_build
 * address: 0x603CF4A8   size: 108   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_kishijugemu_maruchipureifor_build(ActorBuildInfo *a1)
{
  StageActor *v2; // r0
  StageActor *result; // r0

  v2 = (StageActor *)operator_new(0x2B4u);
  result = StageActor__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BF79CC;
  result[1]._.vtable = 2139095039;
  result[1]._.heap = 2139095039;
  result[1]._.id = -8388609;
  result[1]._.profile = (Profile *)-8388609;
  result[1]._.field_20.previous = 0;
  result[1]._.field_20.next = 0;
  result[1]._.childCount = 0;
  result[1]._.field_2C = 0;
  *(_DWORD *)&result[1]._.movementId = 0;
  result[1]._.settigns2 = 0;
  result[1]._.settings1 = 0;
  *(_DWORD *)&result[1]._.field_10 = 0;
  return result;
}
