/* CourseSelectTask_ctor
 * address: 0x601FD6E4   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall CourseSelectTask_ctor(sead_IDisposer *a1, int a2)
{
  CalculateTask2_ctor(a1, a2, (int)"CourseSelectTask");
  FIELD_U32(a1, 0x0) = (int)off_60BD8300;
  LOBYTE(a1[12].vtable) = 0;
  a1[13].vtable = (int)&off_60BD83F8;
  a1[13].containingHeap = (int)&off_60BD8408;
  a1[13].field_8 = (int)&off_60BD842C;
  a1[13].field_C = (int)a1;
  a1[14].vtable = 0;
  StateMgr_ctor((StateMgr *)&a1[14].containingHeap, (StateExecuter *)&a1[13].containingHeap, &NullState);
  a1[13].vtable = (int)&off_60BD83E8;
  sead_IDisposer_ctor((sead_IDisposer *)((char *)a1 + 244));
  a1[16].containingHeap = (int)&sead__SafeStringBase__vtable;
  a1[16].field_8 = (int)&byte_60ABC94D;
  a1[15].containingHeap = (int)off_60C5E9A4;
  a1[16].field_C = 0;
  a1[17].vtable = 0;
  a1[17].containingHeap = 1;
  a1[17].field_C = 0;
  a1[18].vtable = 0;
  a1[18].containingHeap = 0;
  a1[17].field_8 = (int)off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)((char *)a1 + 312));
  a1[20].field_8 = (int)&sead__SafeStringBase__vtable;
  a1[20].field_C = (int)&byte_60ABC94D;
  a1[19].field_8 = (int)off_60C5E9A4;
  a1[21].vtable = 0;
  a1[21].containingHeap = 0;
  a1[21].field_8 = 1;
  a1[22].vtable = 0;
  a1[22].containingHeap = 0;
  a1[22].field_8 = 0;
  a1[21].field_C = (int)off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)((char *)a1 + 380));
  a1[24].field_C = (int)&sead__SafeStringBase__vtable;
  a1[25].vtable = (int)&byte_60ABC94D;
  a1[23].field_C = (int)off_60C5E9A4;
  a1[25].containingHeap = 0;
  a1[25].field_8 = 0;
  a1[25].field_C = 1;
  a1[26].containingHeap = 0;
  a1[26].field_8 = 0;
  a1[26].field_C = 0;
  a1[26].vtable = (int)off_60BD8394;
  sead_IDisposer_ctor(a1 + 28);
  a1[29].vtable = (int)&sead__SafeStringBase__vtable;
  a1[29].containingHeap = (int)&byte_60ABC94D;
  a1[28].vtable = (int)off_60C5E9A4;
  a1[29].field_8 = 0;
  a1[29].field_C = 0;
  a1[30].vtable = 1;
  a1[30].field_8 = 0;
  a1[30].field_C = 0;
  a1[31].vtable = 0;
  a1[30].containingHeap = (int)off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)((char *)a1 + 516));
  a1[33].containingHeap = (int)&sead__SafeStringBase__vtable;
  a1[33].field_8 = (int)&byte_60ABC94D;
  a1[32].containingHeap = (int)off_60C5E9A4;
  a1[33].field_C = 0;
  a1[34].vtable = 0;
  a1[34].containingHeap = 1;
  a1[34].field_C = 0;
  a1[35].vtable = 0;
  a1[35].containingHeap = 0;
  a1[34].field_8 = (int)off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)((char *)a1 + 584));
  a1[37].field_8 = (int)&sead__SafeStringBase__vtable;
  a1[37].field_C = (int)&byte_60ABC94D;
  a1[36].field_8 = (int)off_60C5E9A4;
  a1[38].vtable = 0;
  a1[38].containingHeap = 0;
  a1[38].field_8 = 1;
  a1[39].vtable = 0;
  a1[39].containingHeap = 0;
  a1[39].field_8 = 0;
  a1[38].field_C = (int)off_60BD8394;
  sub_6090A654(&a1[40].field_C);
  sub_6090C6DC((int)&a1[46].containingHeap);
  sub_6090A654(&a1[57].vtable);
  sub_6090C6DC((int)&a1[62].field_8);
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  a1[199].field_8 = 0;
  a1[200].vtable = (int)&a1[200].field_8;
  a1[199].field_C = (int)&BufferedSafeStringBase_char_vtable_probably;
  a1[200].containingHeap = 5;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&a1[199].field_C);
  *(_BYTE *)a1[200].vtable = 0;
  a1[199].field_C = (int)&off_60BD4F38;
  a1[201].vtable = 0;
  LOWORD(a1[201].field_8) = 0;
  BYTE2(a1[201].field_8) = 0;
  a1[201].field_C = 1;
  FIELD_U32(dword_60C99DEC, 508) = 0;
  return a1;
}
