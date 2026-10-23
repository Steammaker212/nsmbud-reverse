/* sub_6050EB1C
 * address: 0x6050EB1C   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6050EB1C()
{
  dword_60CA80C0 = 0;
  dword_60CA80C4 = 0;
  dword_60CA80C8 = 0;
  dword_60CA808C = ++CurrentStateID;
  dword_60CA8088 = (int)&off_60BFF77C;
  dword_60CA8090 = (int)nullsub_4221;
  dword_60CA8094 = 0;
  dword_60CA8098 = (int)CourseSelectScene_Zanki1P_00_ref_2;
  dword_60CA809C = 0;
  dword_60CA80A0 = (int)nullsub_4222;
  dword_60CA80A4 = 0;
  dword_60CA80DC = (int)&sead__SafeStringBase__vtable;
  dword_60CA80E0 = (int)"CharaSet";
  dword_60CA80E4 = (int)&sead__SafeStringBase__vtable;
  dword_60CA80E8 = (int)"1UPZanki";
  dword_60CA80EC = (int)&sead__SafeStringBase__vtable;
  dword_60CA80F0 = (int)"Zanki";
  sub_60000288();
  dword_60CA80F4 = (int)&sead__SafeStringBase__vtable;
  dword_60CA80F8 = (int)"G_Icon_00";
  dword_60CA80FC = (int)&sead__SafeStringBase__vtable;
  dword_60CA8100 = (int)"G_1UPZanki_00";
  dword_60CA8104 = (int)&sead__SafeStringBase__vtable;
  dword_60CA8108 = (int)"G_Zanki_00";
  sub_60000288();
  dword_60CA80B0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA80B4 = (int)"N_Capture_00";
  sub_60000288();
  dword_60CA80CC = (int)&sead__SafeStringBase__vtable;
  dword_60CA80D0 = (int)"P_Icon_00";
  dword_60CA80D4 = (int)&sead__SafeStringBase__vtable;
  dword_60CA80D8 = (int)"P_MiiIcon_00";
  sub_60000288();
  dword_60CA80B8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA80BC = (int)"T_Zanki_00";
  return sub_60000288();
}
