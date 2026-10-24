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
  *(_DWORD *)&FIELD_U8(result + (3) * 80, 0x1C) = 0;
  FIELD_U32(result + (3) * 80, 0x20) = 0;
  FIELD_U32(result + (3) * 80, 0x24) = (sead_ListNode *)-1;
  FIELD_U32(result + (3) * 80, 0x28) = 0;
  FIELD_U32(result + (3) * 80, 0x2C) = 0;
  FIELD_U32(result + (3) * 80, 0x30) = 0;
  FIELD_U32(result + (3) * 80, 0x34) = 1065353216;
  FIELD_U32(result + (3) * 80, 0x38) = (Actor *)1065353216;
  LOBYTE(FIELD_U32(result + (3) * 80, 0x3C)) = 0;
  return result;
}
