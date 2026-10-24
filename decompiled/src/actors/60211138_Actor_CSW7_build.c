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
  FIELD_U32(result + (3) * 80, 0x20) = 0;
  FIELD_U32(result + (3) * 80, 0x24) = (sead_ListNode *)2;
  LOWORD(FIELD_U32(result + (3) * 80, 0x28)) = 0;
  BYTE2(FIELD_U32(result + (3) * 80, 0x28)) = 0;
  heap = result[3].heap;
  id = result[3].id;
  FIELD_U32(result + (3) * 80, 0x2C) = FIELD_U32(result + (3) * 80, 0x0);
  result[3].field_30 = heap;
  result[3].field_34 = id;
  return result;
}
