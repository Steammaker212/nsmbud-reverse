/* registerProfile_CourseSelectairship_Roy_1FA9FC
 * address: 0x601FA9FC   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CourseSelectairship_Roy_1FA9FC()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C8BFF8 = 0;
  dword_60C8BFFC = 0;
  dword_60C8C000 = 0;
  dword_60C8C004 = (int)&sead__SafeStringBase__vtable;
  dword_60C8C008 = (int)"ship1";
  dword_60C8C00C = (int)&sead__SafeStringBase__vtable;
  dword_60C8C010 = (int)"ship2";
  dword_60C8C014 = (int)&sead__SafeStringBase__vtable;
  dword_60C8C018 = (int)"ship3";
  dword_60C8C01C = (int)&sead__SafeStringBase__vtable;
  dword_60C8C020 = (int)"ship4";
  dword_60C8C024 = (int)&sead__SafeStringBase__vtable;
  dword_60C8C028 = (int)"shipBomb";
  dword_60C8C02C = (int)&sead__SafeStringBase__vtable;
  dword_60C8C030 = (int)"ship5";
  dword_60C8C034 = (int)&sead__SafeStringBase__vtable;
  dword_60C8C038 = (int)"end";
  sub_60000288();
  dword_60C8BFF0 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BFF4 = (int)"WaitNormal";
  sub_60000288();
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC1CDF;
  Profile__ctor(&stru_60C8BFCC, Actor_CourseSelectairship_Roy_build, 0x36Cu, &v1, 0, 0);
  *result = &off_60BD7E10;
  return result;
}
