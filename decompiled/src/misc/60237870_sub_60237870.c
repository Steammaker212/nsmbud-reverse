/* sub_60237870
 * address: 0x60237870   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_60237870(sead_IDisposer *a1)
{
  sead_IDisposer *result; // r0

  result = sead_IDisposer_ctor(a1);
  FIELD_U32(result, 0x0) = (int)&off_60BD95C0;
  FIELD_U32(result + (1) * 16, 0x0) = 1065353216;
  result[1].containingHeap = 1065353216;
  result[1].field_8 = 1065353216;
  result[1].field_C = 1065353216;
  FIELD_U32(result + (2) * 16, 0x0) = 1065353216;
  result[2].containingHeap = 1065353216;
  result[2].field_8 = 1065353216;
  result[2].field_C = 1065353216;
  FIELD_U32(result + (3) * 16, 0x0) = 1065353216;
  result[3].containingHeap = 1065353216;
  result[3].field_8 = 1065353216;
  result[3].field_C = 1065353216;
  FIELD_U32(result + (4) * 16, 0x0) = 1065353216;
  result[4].containingHeap = 1065353216;
  result[4].field_8 = 1065353216;
  result[4].field_C = 1065353216;
  FIELD_U32(result + (5) * 16, 0x0) = 1065353216;
  FIELD_U32(result + (5) * 16, 0x4) = 1065353216;
  result[5].field_8 = 1065353216;
  result[5].field_C = 1065353216;
  FIELD_U32(result + (6) * 16, 0x0) = 1065353216;
  FIELD_U32(result + (6) * 16, 0x4) = 1065353216;
  result[6].field_8 = 1065353216;
  FIELD_U32(result + (6) * 16, 0xC) = 1065353216;
  return result;
}
