/* sub_60767F80
 * address: 0x60767F80   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall sub_60767F80(StageActor *a1, int *a2, int a3)
{
  StageActor *result; // r0

  LODWORD(FIELD_U32(a1, 0x6C).x) = *a2;
  LODWORD(FIELD_U32(a1, 0x6C).y) = a2[1];
  LODWORD(FIELD_U32(a1, 0x6C).z) = a2[2];
  LODWORD(FIELD_U32(a1, 0x248).x) = *a2;
  LODWORD(FIELD_U32(a1, 0x248).y) = a2[1];
  LODWORD(FIELD_U32(a1, 0x248).z) = a2[2];
  LODWORD(FIELD_U32(a1, 0x260).x) = *a2;
  LODWORD(FIELD_U32(a1, 0x260).y) = a2[1];
  LODWORD(FIELD_U32(a1, 0x260).z) = a2[2];
  *(_DWORD *)&a1[1]._.movementId = *a2;
  a1[1]._.field_20.previous = (sead_ListNode *)a2[1];
  a1[1]._.field_20.next = (sead_ListNode *)a2[2];
  a1[15].field_5C = *a2;
  a1[15].field_60 = a2[1];
  LODWORD(a1[15].field_64) = a2[2];
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0).vtable + 1080))(a1);
  result = StageActor__updateZoneId(a1);
  FIELD_U32(a1, 0x50) = a3;
  return result;
}
