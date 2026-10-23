/* DarkCloudDemoScene_ctor
 * address: 0x607E3508   size: 316   group: misc
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
  a1[13].vtable = (int)&sead__SafeStringBase__vtable;
  a1[13].containingHeap = (int)&byte_60ABC94D;
  a1[12].vtable = (int)off_60C5E9A4;
  a1[13].field_8 = 0;
  a1[13].field_C = 0;
  a1[14].vtable = 1;
  a1[14].field_8 = 0;
  a1[14].field_C = 0;
  a1[15].vtable = 0;
  a1[14].containingHeap = (int)off_60BD8394;
  a1[16].containingHeap = 0;
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  a1[143].vtable = 1065353216;
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
  a1[142].field_C = (int)off_60C5D014;
  a1[148].vtable = 0;
  a1[146].vtable = 0;
  a1[146].containingHeap = 0;
  a1[146].field_8 = 1092616192;
  a1[146].field_C = 0;
  a1[147].vtable = 0;
  a1[147].containingHeap = 0;
  a1[147].field_8 = 0;
  a1[147].field_C = 1065353216;
  sub_6090C214(&a1[148].containingHeap);
  a1[159].field_C = 0;
  a1[160].vtable = 0;
  a1[160].containingHeap = 0;
  return a1;
}
