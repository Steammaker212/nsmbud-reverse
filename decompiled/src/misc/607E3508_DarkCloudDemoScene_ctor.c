/* DarkCloudDemoScene_ctor
 * address: 0x607E3508   size: 316   group: misc
 * sym: # DarkCloudDemoScene_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall DarkCloudDemoScene_ctor(sead_IDisposer *a1, int a2)
{
  CalculateTask3_ctor((int)a1, a2, (int)"DarkCloudDemoScene");
  FIELD_U32(a1, 0x0) = (int)off_60C26AE0;
  sead_IDisposer_ctor(a1 + 12);
  FIELD_U32(a1 + (13) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(a1 + (13) * 16, 0x4) = (int)&byte_60ABC94D;
  FIELD_U32(a1 + (12) * 16, 0x0) = (int)off_60C5E9A4;
  FIELD_U32(a1 + (13) * 16, 0x8) = 0;
  FIELD_U32(a1 + (13) * 16, 0xC) = 0;
  FIELD_U32(a1 + (14) * 16, 0x0) = 1;
  FIELD_U32(a1 + (14) * 16, 0x8) = 0;
  FIELD_U32(a1 + (14) * 16, 0xC) = 0;
  FIELD_U32(a1 + (15) * 16, 0x0) = 0;
  FIELD_U32(a1 + (14) * 16, 0x4) = (int)off_60BD8394;
  FIELD_U32(a1 + (16) * 16, 0x4) = 0;
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  FIELD_U32(a1 + (143) * 16, 0x0) = 1065353216;
  a1[143].containingHeap = 0;
  a1[143].field_8 = 0;
  a1[143].field_C = 0;
  a1[144].vtable = 0;
  a1[144].containingHeap = 1065353216;
  a1[144].field_8 = 0;
  a1[144].field_C = 0;
  a1[145].vtable = 0;
  a1[145].containingHeap = 0;
  a1[145].field_8 = 1065353216;
  a1[145].field_C = 0;
  FIELD_U32(a1 + (142) * 16, 0xC) = (int)off_60C5D014;
  FIELD_U32(a1 + (148) * 16, 0x0) = 0;
  FIELD_U32(a1 + (146) * 16, 0x0) = 0;
  FIELD_U32(a1 + (146) * 16, 0x4) = 0;
  FIELD_U32(a1 + (146) * 16, 0x8) = 1092616192;
  FIELD_U32(a1 + (146) * 16, 0xC) = 0;
  FIELD_U32(a1 + (147) * 16, 0x0) = 0;
  FIELD_U32(a1 + (147) * 16, 0x4) = 0;
  FIELD_U32(a1 + (147) * 16, 0x8) = 0;
  FIELD_U32(a1 + (147) * 16, 0xC) = 1065353216;
  sub_6090C214(&a1[148].containingHeap);
  FIELD_U32(a1 + (159) * 16, 0xC) = 0;
  FIELD_U32(a1 + (160) * 16, 0x0) = 0;
  FIELD_U32(a1 + (160) * 16, 0x4) = 0;
  return a1;
}
