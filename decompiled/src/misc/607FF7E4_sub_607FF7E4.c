/* sub_607FF7E4
 * address: 0x607FF7E4   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_607FF7E4(sead_IDisposer *a1, int a2)
{
  sead_IDisposer *result; // r0
  int v4; // r2
  int v5; // r3

  result = sead_IDisposer_ctor(a1);
  FIELD_U32(result, 0x0) = (int)off_60C27E0C;
  LOWORD(FIELD_U32(result + (1) * 16, 0x0)) = FIELD_U16(a2, 16);
  BYTE2(FIELD_U32(result + (1) * 16, 0x0)) = FIELD_U8(a2, 18);
  HIBYTE(FIELD_U32(result + (1) * 16, 0x0)) = FIELD_U8(a2, 19);
  FIELD_U32(result + (1) * 16, 0x4) = FIELD_U32(a2, 20);
  v4 = FIELD_U32(a2, 28);
  v5 = FIELD_U32(a2, 32);
  FIELD_U32(result + (1) * 16, 0x8) = FIELD_U32(a2, 24);
  result[1].field_C = v4;
  result[2].vtable = v5;
  FIELD_U32(result + (2) * 16, 0x4) = FIELD_U32(a2, 36);
  FIELD_U32(result + (2) * 16, 0x8) = FIELD_U32(a2, 40);
  FIELD_U32(result + (2) * 16, 0xC) = FIELD_U32(a2, 44);
  FIELD_U32(result + (3) * 16, 0x0) = FIELD_U32(a2, 48);
  FIELD_U32(result + (3) * 16, 0x4) = FIELD_U32(a2, 52);
  FIELD_U32(result + (3) * 16, 0x8) = FIELD_U32(a2, 56);
  return result;
}
