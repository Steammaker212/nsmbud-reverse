/* Actor_CSwarudomove_pipe_build
 * address: 0x60216B00   size: 108   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_CSwarudomove_pipe_build(unsigned __int8 *a1)
{
  Actor *v2; // r0
  Actor *result; // r0

  v2 = (Actor *)operator_new(0x138u);
  result = sub_601A75F0(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BD90B8;
  *(_DWORD *)&result[3].movementId = &off_60BD90A4;
  result[3].field_20.previous = (sead_ListNode *)result;
  result[3].field_20.next = 0;
  result[3].field_34 = 0;
  result[3].parent = (Actor *)-1;
  result[3].field_3C = 0;
  result[3].field_40 = 0;
  result[3].field_44 = 0;
  result[3].childCount = 0;
  result[3].field_2C = 0;
  result[3].field_30 = 0;
  return result;
}
