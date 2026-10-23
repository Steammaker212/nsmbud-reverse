/* sub_6098B61C
 * address: 0x6098B61C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_6098B61C(sead_IDisposer *a1)
{
  sead_IDisposer *result; // r0

  result = sead_IDisposer_ctor(a1);
  FIELD_U32(result, 0x0) = (int)off_60C5FFC0;
  result[1].vtable = (int)&off_60C600D8;
  result[1].containingHeap = 0;
  result[1].field_8 = 0;
  result[1].field_C = 0;
  result[2].vtable = (int)&result[2];
  result[2].containingHeap = (int)&result[2];
  result[2].field_8 = (int)&result[2].field_8;
  result[2].field_C = (int)&result[2].field_8;
  result[3].vtable = 0;
  result[3].containingHeap = 0;
  result[3].field_8 = 0;
  result[3].field_C = (int)&result[3].field_C;
  result[4].vtable = (int)&result[3].field_C;
  result[4].field_C = 0;
  result[4].field_8 = (int)&result[4].containingHeap;
  result[4].containingHeap = (int)&result[4].containingHeap;
  result[5].containingHeap = 0;
  result[5].field_8 = -1;
  result[5].field_C = (int)&sead__SafeStringBase__vtable;
  result[6].vtable = (int)&byte_60B3BA34;
  result[7].vtable = 0;
  result[6].field_C = 0;
  result[6].field_8 = 0;
  result[6].containingHeap = 0;
  result[7].containingHeap = 1061752795;
  LOBYTE(result[7].field_8) = -1;
  BYTE2(result[7].field_C) = 0;
  BYTE2(result[7].field_8) = 0;
  BYTE1(result[7].field_C) = 0;
  LOBYTE(result[8].vtable) = 0;
  HIBYTE(result[7].field_C) = 0;
  BYTE1(result[7].field_8) = 0;
  LOBYTE(result[7].field_C) = 0;
  HIBYTE(result[7].field_8) = 0;
  BYTE1(result[8].vtable) = 1;
  BYTE2(result[8].vtable) = 3;
  result[5].vtable = 4;
  return result;
}
