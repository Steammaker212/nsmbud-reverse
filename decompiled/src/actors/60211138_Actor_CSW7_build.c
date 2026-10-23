/* Actor_CSW7_build
 * address: 0x60211138   size: 88   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_CSW7_build(unsigned __int8 *a1)
{
  Actor *v2; // r0
  Actor *result; // r0
  int heap; // r2
  int id; // r3

  v2 = (Actor *)operator_new(0x128u);
  result = sub_601A75F0(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BD8F08;
  result[3].field_20.previous = 0;
  result[3].field_20.next = (sead_ListNode *)2;
  LOWORD(result[3].childCount) = 0;
  BYTE2(result[3].childCount) = 0;
  heap = result[3].heap;
  id = result[3].id;
  result[3].field_2C = result[3].vtable;
  result[3].field_30 = heap;
  result[3].field_34 = id;
  return result;
}
