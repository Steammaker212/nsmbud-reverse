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
  LOWORD(result[1].vtable) = FIELD_U16(a2, 16);
  BYTE2(result[1].vtable) = FIELD_U8(a2, 18);
  HIBYTE(result[1].vtable) = FIELD_U8(a2, 19);
  result[1].containingHeap = FIELD_U32(a2, 20);
  v4 = FIELD_U32(a2, 28);
  v5 = FIELD_U32(a2, 32);
  result[1].field_8 = FIELD_U32(a2, 24);
  result[1].field_C = v4;
  result[2].vtable = v5;
  result[2].containingHeap = FIELD_U32(a2, 36);
  result[2].field_8 = FIELD_U32(a2, 40);
  result[2].field_C = FIELD_U32(a2, 44);
  result[3].vtable = FIELD_U32(a2, 48);
  result[3].containingHeap = FIELD_U32(a2, 52);
  result[3].field_8 = FIELD_U32(a2, 56);
  return result;
}
