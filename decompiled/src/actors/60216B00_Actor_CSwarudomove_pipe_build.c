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
  *(_DWORD *)&FIELD_U8(result + (3) * 80, 0x1C) = &off_60BD90A4;
  FIELD_U32(result + (3) * 80, 0x20) = (sead_ListNode *)result;
  FIELD_U32(result + (3) * 80, 0x24) = 0;
  FIELD_U32(result + (3) * 80, 0x34) = 0;
  FIELD_U32(result + (3) * 80, 0x38) = (Actor *)-1;
  FIELD_U32(result + (3) * 80, 0x3C) = 0;
  FIELD_U32(result + (3) * 80, 0x40) = 0;
  FIELD_U32(result + (3) * 80, 0x44) = 0;
  FIELD_U32(result + (3) * 80, 0x28) = 0;
  FIELD_U32(result + (3) * 80, 0x2C) = 0;
  FIELD_U32(result + (3) * 80, 0x30) = 0;
  return result;
}
