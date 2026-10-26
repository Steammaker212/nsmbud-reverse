/* CourseSelectTask_ctor
 * address: 0x601FD6E4   size: 704   group: misc
 * sym: # CourseSelectTask_ctor as UNKNOWN
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
  LOBYTE(FIELD_U32(a1 + (12) * 16, 0x0)) = 0;
  FIELD_U32(a1 + (13) * 16, 0x0) = (int)&off_60BD83F8;
  FIELD_U32(a1 + (13) * 16, 0x4) = (int)&off_60BD8408;
  FIELD_U32(a1 + (13) * 16, 0x8) = (int)&off_60BD842C;
  a1[13].field_C = (int)a1;
  a1[14].vtable = 0;
  StateMgr_ctor((StateMgr *)&FIELD_U32(a1 + (14) * 16, 0x4), (StateExecuter *)&FIELD_U32(a1 + (13) * 16, 0x4), &NullState);
  FIELD_U32(a1 + (13) * 16, 0x0) = (int)&off_60BD83E8;
  sead_IDisposer_ctor((sead_IDisposer *)((char *)a1 + 244));
  FIELD_U32(a1 + (16) * 16, 0x4) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(a1 + (16) * 16, 0x8) = (int)&byte_60ABC94D;
  FIELD_U32(a1 + (15) * 16, 0x4) = (int)off_60C5E9A4;
  FIELD_U32(a1 + (16) * 16, 0xC) = 0;
  FIELD_U32(a1 + (17) * 16, 0x0) = 0;
  FIELD_U32(a1 + (17) * 16, 0x4) = 1;
  FIELD_U32(a1 + (17) * 16, 0xC) = 0;
  FIELD_U32(a1 + (18) * 16, 0x0) = 0;
  FIELD_U32(a1 + (18) * 16, 0x4) = 0;
  FIELD_U32(a1 + (17) * 16, 0x8) = (int)off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)((char *)a1 + 312));
  FIELD_U32(a1 + (20) * 16, 0x8) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(a1 + (20) * 16, 0xC) = (int)&byte_60ABC94D;
  FIELD_U32(a1 + (19) * 16, 0x8) = (int)off_60C5E9A4;
  FIELD_U32(a1 + (21) * 16, 0x0) = 0;
  FIELD_U32(a1 + (21) * 16, 0x4) = 0;
  FIELD_U32(a1 + (21) * 16, 0x8) = 1;
  FIELD_U32(a1 + (22) * 16, 0x0) = 0;
  FIELD_U32(a1 + (22) * 16, 0x4) = 0;
  FIELD_U32(a1 + (22) * 16, 0x8) = 0;
  FIELD_U32(a1 + (21) * 16, 0xC) = (int)off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)((char *)a1 + 380));
  FIELD_U32(a1 + (24) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(a1 + (25) * 16, 0x0) = (int)&byte_60ABC94D;
  FIELD_U32(a1 + (23) * 16, 0xC) = (int)off_60C5E9A4;
  FIELD_U32(a1 + (25) * 16, 0x4) = 0;
  FIELD_U32(a1 + (25) * 16, 0x8) = 0;
  FIELD_U32(a1 + (25) * 16, 0xC) = 1;
  FIELD_U32(a1 + (26) * 16, 0x4) = 0;
  FIELD_U32(a1 + (26) * 16, 0x8) = 0;
  FIELD_U32(a1 + (26) * 16, 0xC) = 0;
  FIELD_U32(a1 + (26) * 16, 0x0) = (int)off_60BD8394;
  sead_IDisposer_ctor(a1 + 28);
  FIELD_U32(a1 + (29) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(a1 + (29) * 16, 0x4) = (int)&byte_60ABC94D;
  FIELD_U32(a1 + (28) * 16, 0x0) = (int)off_60C5E9A4;
  FIELD_U32(a1 + (29) * 16, 0x8) = 0;
  FIELD_U32(a1 + (29) * 16, 0xC) = 0;
  FIELD_U32(a1 + (30) * 16, 0x0) = 1;
  FIELD_U32(a1 + (30) * 16, 0x8) = 0;
  FIELD_U32(a1 + (30) * 16, 0xC) = 0;
  FIELD_U32(a1 + (31) * 16, 0x0) = 0;
  FIELD_U32(a1 + (30) * 16, 0x4) = (int)off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)((char *)a1 + 516));
  FIELD_U32(a1 + (33) * 16, 0x4) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(a1 + (33) * 16, 0x8) = (int)&byte_60ABC94D;
  FIELD_U32(a1 + (32) * 16, 0x4) = (int)off_60C5E9A4;
  FIELD_U32(a1 + (33) * 16, 0xC) = 0;
  FIELD_U32(a1 + (34) * 16, 0x0) = 0;
  FIELD_U32(a1 + (34) * 16, 0x4) = 1;
  FIELD_U32(a1 + (34) * 16, 0xC) = 0;
  FIELD_U32(a1 + (35) * 16, 0x0) = 0;
  FIELD_U32(a1 + (35) * 16, 0x4) = 0;
  FIELD_U32(a1 + (34) * 16, 0x8) = (int)off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)((char *)a1 + 584));
  FIELD_U32(a1 + (37) * 16, 0x8) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(a1 + (37) * 16, 0xC) = (int)&byte_60ABC94D;
  FIELD_U32(a1 + (36) * 16, 0x8) = (int)off_60C5E9A4;
  FIELD_U32(a1 + (38) * 16, 0x0) = 0;
  FIELD_U32(a1 + (38) * 16, 0x4) = 0;
  FIELD_U32(a1 + (38) * 16, 0x8) = 1;
  FIELD_U32(a1 + (39) * 16, 0x0) = 0;
  FIELD_U32(a1 + (39) * 16, 0x4) = 0;
  FIELD_U32(a1 + (39) * 16, 0x8) = 0;
  FIELD_U32(a1 + (38) * 16, 0xC) = (int)off_60BD8394;
  sub_6090A654(&FIELD_U32(a1 + (40) * 16, 0xC));
  sub_6090C6DC((int)&FIELD_U32(a1 + (46) * 16, 0x4));
  sub_6090A654(&FIELD_U32(a1 + (57) * 16, 0x0));
  sub_6090C6DC((int)&FIELD_U32(a1 + (62) * 16, 0x8));
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  FIELD_U32(a1 + (199) * 16, 0x8) = 0;
  FIELD_U32(a1 + (200) * 16, 0x0) = (int)&a1[200].field_8;
  FIELD_U32(a1 + (199) * 16, 0xC) = (int)&BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1 + (200) * 16, 0x4) = 5;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&FIELD_U32(a1 + (199) * 16, 0xC));
  *(_BYTE *)FIELD_U32(a1 + (200) * 16, 0x0) = 0;
  FIELD_U32(a1 + (199) * 16, 0xC) = (int)&off_60BD4F38;
  FIELD_U32(a1 + (201) * 16, 0x0) = 0;
  LOWORD(a1[201].field_8) = 0;
  BYTE2(a1[201].field_8) = 0;
  FIELD_U32(a1 + (201) * 16, 0xC) = 1;
  FIELD_U32(dword_60C99DEC, 508) = 0;
  return a1;
}
