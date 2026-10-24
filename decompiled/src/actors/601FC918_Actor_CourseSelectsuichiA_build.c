/* Actor_CourseSelectsuichiA_build
 * address: 0x601FC918   size: 88   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_CourseSelectsuichiA_build(unsigned __int8 *a1)
{
  Actor *v2; // r0
  Actor *result; // r0
  sead_ListNode *vtable; // r2
  sead_ListNode *heap; // r3

  v2 = (Actor *)operator_new(0x124u);
  result = sub_601A75F0(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BD822C;
  *(_DWORD *)&FIELD_U8(result + (3) * 80, 0x1C) = 0;
  vtable = (sead_ListNode *)FIELD_U32(result + (1) * 80, 0x0);
  heap = (sead_ListNode *)FIELD_U32(result + (1) * 80, 0x4);
  FIELD_U32(result + (3) * 80, 0x28) = FIELD_U32(result + (1) * 80, 0x8);
  FIELD_U32(result + (3) * 80, 0x24) = heap;
  FIELD_U32(result + (3) * 80, 0x20) = vtable;
  FIELD_U32(result + (3) * 80, 0x2C) = a1[37];
  LOBYTE(FIELD_U32(result + (3) * 80, 0x30)) = 0;
  return result;
}
