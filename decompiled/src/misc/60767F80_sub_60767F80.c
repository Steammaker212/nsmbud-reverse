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

  LODWORD(FIELD_F32(a1, 0x6C)) = *a2;
  LODWORD(FIELD_F32(a1, 0x70)) = a2[1];
  LODWORD(FIELD_F32(a1, 0x74)) = a2[2];
  LODWORD(FIELD_F32(a1, 0x248)) = *a2;
  LODWORD(FIELD_F32(a1, 0x24C)) = a2[1];
  LODWORD(FIELD_F32(a1, 0x250)) = a2[2];
  LODWORD(FIELD_F32(a1, 0x260)) = *a2;
  LODWORD(FIELD_F32(a1, 0x264)) = a2[1];
  LODWORD(FIELD_F32(a1, 0x268)) = a2[2];
  *(_DWORD *)&FIELD_U8(a1 + (1) * 644, 0x1C) = *a2;
  FIELD_U32(a1 + (1) * 644, 0x20) = (sead_ListNode *)a2[1];
  FIELD_U32(a1 + (1) * 644, 0x24) = (sead_ListNode *)a2[2];
  a1[15].field_5C = *a2;
  a1[15].field_60 = a2[1];
  LODWORD(a1[15].field_64) = a2[2];
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 1080))(a1);
  result = StageActor__updateZoneId(a1);
  FIELD_U32(a1, 0x50) = a3;
  return result;
}
