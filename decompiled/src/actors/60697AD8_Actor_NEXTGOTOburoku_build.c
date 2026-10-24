/* Actor_NEXTGOTOburoku_build
 * address: 0x60697AD8   size: 264   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall Actor_NEXTGOTOburoku_build(ActorBuildInfo *a1)
{
  MultiStateActor *v2; // r0
  MultiStateActor *result; // r0

  v2 = (MultiStateActor *)operator_new(0x1808u);
  result = MultiStateActor__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60C17E18;
  LOWORD(result[1]._._._.settings1) = 0;
  BYTE2(result[1]._._._.settings1) = -1;
  result[1]._._._.settigns2 = 0;
  *(_DWORD *)&result[1]._._._.movementId = 2139095039;
  result[1]._._._.field_20.previous = (sead_ListNode *)2139095039;
  result[1]._._._.field_20.next = (sead_ListNode *)-8388609;
  FIELD_U32(result + (1) * 6104, 0x28) = -8388609;
  result[1]._._._.field_11 = 0;
  BYTE1(result[1]._._._.profile) = 0;
  BYTE1(result[1]._._._.id) = 0;
  BYTE1(result[1]._._._.heap) = 0;
  BYTE1(result[1]._._._.vtable) = 0;
  result[1]._._._.field_10 = 0;
  result[1]._._._.isDeleted = 0;
  result[1]._._._.field_12 = 0;
  LOBYTE(result[1]._._._.profile) = 0;
  HIBYTE(result[1]._._._.profile) = 0;
  BYTE2(result[1]._._._.profile) = 0;
  LOBYTE(result[1]._._._.id) = 0;
  HIBYTE(result[1]._._._.id) = 0;
  BYTE2(result[1]._._._.id) = 0;
  LOBYTE(result[1]._._._.heap) = 0;
  HIBYTE(result[1]._._._.heap) = 0;
  BYTE2(result[1]._._._.heap) = 0;
  LOBYTE(result[1]._._._.vtable) = 0;
  HIBYTE(result[1]._._._.vtable) = 0;
  BYTE2(result[1]._._._.vtable) = 0;
  return result;
}
