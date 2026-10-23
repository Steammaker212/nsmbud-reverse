/* Actor_resuta_build
 * address: 0x6046E490   size: 128   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_resuta_build(int a1)
{
  Actor *v2; // r0
  Actor *result; // r0
  int v4; // r2
  int v5; // r3

  v2 = (Actor *)operator_new(0x7Cu);
  result = Actor__ctor(v2, (ActorBuildInfo *)a1);
  FIELD_U32(result, 0x0) = (int)off_60BFC4E4;
  v4 = FIELD_U32(a1, 20);
  v5 = FIELD_U32(a1, 24);
  result[1].vtable = FIELD_U32(a1, 16);
  result[1].heap = v4;
  result[1].id = v5;
  LOBYTE(result[1].profile) = FIELD_U8(a1, 32);
  *(_DWORD *)&result[1].field_10 = (unsigned int)FIELD_U32(result, 0x14) >> 28;
  LOBYTE(result[1].settings1) = 0;
  BYTE1(result[1].settings1) = 1;
  result[1].settigns2 = 2139095039;
  *(_DWORD *)&result[1].movementId = 2139095039;
  result[1].field_20.previous = (sead_ListNode *)-8388609;
  result[1].field_20.next = (sead_ListNode *)-8388609;
  result[1].childCount = 0;
  return result;
}
