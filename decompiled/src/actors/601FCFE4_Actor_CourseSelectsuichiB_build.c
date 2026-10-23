/* Actor_CourseSelectsuichiB_build
 * address: 0x601FCFE4   size: 88   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_CourseSelectsuichiB_build(unsigned __int8 *a1)
{
  Actor *v2; // r0
  Actor *result; // r0
  sead_ListNode *vtable; // r2
  sead_ListNode *heap; // r3

  v2 = (Actor *)operator_new(0x124u);
  result = sub_601A75F0(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BD829C;
  *(_DWORD *)&result[3].movementId = 0;
  vtable = (sead_ListNode *)result[1].vtable;
  heap = (sead_ListNode *)result[1].heap;
  result[3].childCount = result[1].id;
  result[3].field_20.next = heap;
  result[3].field_20.previous = vtable;
  result[3].field_2C = a1[37];
  LOBYTE(result[3].field_30) = 0;
  return result;
}
