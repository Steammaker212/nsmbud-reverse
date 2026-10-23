/* registerProfile_CourseSelectairship_Iggy_1F3A08
 * address: 0x601F3A08   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CourseSelectairship_Iggy_1F3A08()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C8BA08 = 0;
  dword_60C8BA0C = 0;
  dword_60C8BA10 = 0;
  dword_60C8BA14 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BA18 = (int)"ship1";
  dword_60C8BA1C = (int)&sead__SafeStringBase__vtable;
  dword_60C8BA20 = (int)"ship2";
  dword_60C8BA24 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BA28 = (int)"ship3";
  dword_60C8BA2C = (int)&sead__SafeStringBase__vtable;
  dword_60C8BA30 = (int)"ship4";
  dword_60C8BA34 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BA38 = (int)"ship5";
  dword_60C8BA3C = (int)&sead__SafeStringBase__vtable;
  dword_60C8BA40 = (int)"shipBomb";
  dword_60C8BA44 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BA48 = (int)"ship6";
  dword_60C8BA4C = (int)&sead__SafeStringBase__vtable;
  dword_60C8BA50 = (int)"end";
  sub_60000288();
  dword_60C8BA00 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BA04 = (int)"WaitNormal";
  sub_60000288();
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC1BC5;
  Profile__ctor(&stru_60C8B9D8, Actor_CourseSelectairship_Iggy_build, 0x36Bu, &v1, 0, 0);
  *result = &off_60BD7420;
  return result;
}
