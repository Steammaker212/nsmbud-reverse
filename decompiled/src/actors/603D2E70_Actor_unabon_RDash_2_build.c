/* Actor_unabon_RDash_2_build
 * address: 0x603D2E70   size: 196   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_unabon_RDash_2_build(ActorBuildInfo *a1)
{
  StageActor *v2; // r0
  StageActor *result; // r0

  v2 = (StageActor *)operator_new(0x2F4u);
  result = StageActor__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BF7DB4;
  result[1]._.vtable = 0;
  result[1]._.heap = 0;
  result[1]._.id = 0;
  result[1]._.profile = (Profile *)-1;
  *(_DWORD *)&result[1]._.field_10 = 0;
  LOWORD(result[1]._.settings1) = 0;
  BYTE2(result[1]._.settings1) = 0;
  result[1]._.field_20.next = 0;
  result[1]._.field_20.previous = 0;
  *(_DWORD *)&result[1]._.movementId = 0;
  result[1]._.settigns2 = 0;
  result[1]._.childCount = -1;
  result[1]._.field_2C = 0;
  LOWORD(result[1]._.field_30) = 0;
  BYTE2(result[1]._.field_30) = 0;
  result[1]._.field_40 = 0;
  result[1]._.field_3C = 0;
  result[1]._.parent = 0;
  result[1]._.field_34 = 0;
  result[1]._.field_44 = -1;
  result[1]._.field_48 = 0;
  LOWORD(result[1]._.field_4C) = 0;
  BYTE2(result[1]._.field_4C) = 0;
  result[1].field_5C = 0;
  result[1].field_58 = 0;
  *(_DWORD *)&result[1].playerId = 0;
  result[1].direction = 0;
  result[1].field_60 = -1;
  result[1].field_64 = 0.0;
  LOWORD(result[1].xAcceleration) = 0;
  BYTE2(result[1].xAcceleration) = 0;
  result[1].position.x = 0.0;
  return result;
}
