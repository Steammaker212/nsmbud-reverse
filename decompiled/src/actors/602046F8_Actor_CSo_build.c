/* Actor_CSo_build
 * address: 0x602046F8   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_CSo_build(unsigned __int8 *a1)
{
  Actor *v2; // r0
  Actor *result; // r0

  v2 = (Actor *)operator_new(0x130u);
  result = sub_601A75F0(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BD86F0;
  *(_DWORD *)&result[3].movementId = 0;
  result[3].field_20.previous = 0;
  result[3].field_20.next = (sead_ListNode *)-1;
  result[3].childCount = 0;
  result[3].field_2C = 0;
  result[3].field_30 = 0;
  result[3].field_34 = 1065353216;
  result[3].parent = (Actor *)1065353216;
  LOBYTE(result[3].field_3C) = 0;
  return result;
}
