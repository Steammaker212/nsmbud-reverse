/* sub_6051863C
 * address: 0x6051863C   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6051863C()
{
  dword_60CA88A8 = 0;
  dword_60CA88AC = 0;
  dword_60CA88B0 = 0;
  dword_60CA8850 = ++CurrentStateID;
  dword_60CA884C = (int)&off_60BFFA98;
  dword_60CA8854 = (int)nullsub_4252;
  dword_60CA8858 = 0;
  dword_60CA885C = (int)sub_60517830;
  dword_60CA8860 = 0;
  dword_60CA8864 = (int)nullsub_4253;
  dword_60CA8868 = 0;
  dword_60CA8878 = (int)&sead__SafeStringBase__vtable;
  dword_60CA887C = (int)"PreGameCourseIn";
  dword_60CA8880 = (int)&sead__SafeStringBase__vtable;
  dword_60CA8884 = (int)"bflyt";
  dword_60CA8888 = (int)&sead__SafeStringBase__vtable;
  dword_60CA888C = (int)"In";
  dword_60CA8890 = (int)&sead__SafeStringBase__vtable;
  dword_60CA8894 = (int)"CourseInPattern";
  dword_60CA8898 = (int)&sead__SafeStringBase__vtable;
  dword_60CA889C = (int)"PlayerNum";
  dword_60CA88A0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA88A4 = (int)"Out";
  dword_60CA88CC = (int)&sead__SafeStringBase__vtable;
  dword_60CA88D0 = (int)"G_InOut_00";
  dword_60CA88D4 = (int)&sead__SafeStringBase__vtable;
  dword_60CA88D8 = (int)"G_Loop_00";
  dword_60CA88DC = (int)&sead__SafeStringBase__vtable;
  dword_60CA88E0 = (int)"G_Zanki_00";
  dword_60CA88E4 = (int)&sead__SafeStringBase__vtable;
  dword_60CA88E8 = (int)"G_CourseInPattern_00";
  sub_60000288();
  dword_60CA88B4 = (int)&sead__SafeStringBase__vtable;
  *(_DWORD *)algn_60CA88B8 = "N_ModelPlayMario_00";
  *(_DWORD *)&algn_60CA88B8[4] = &sead__SafeStringBase__vtable;
  dword_60CA88C0 = (int)"N_ModelPlayLuigi_00";
  dword_60CA88C4 = (int)&sead__SafeStringBase__vtable;
  dword_60CA88C8 = (int)"N_Totten_00";
  return sub_60000288();
}
