/* registerProfile_CourseSelectairship_Larry_1F8688
 * address: 0x601F8688   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CourseSelectairship_Larry_1F8688()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C8BD68 = 0;
  dword_60C8BD6C = 0;
  dword_60C8BD70 = 0;
  dword_60C8BD74 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BD78 = (int)"ship1";
  dword_60C8BD7C = (int)&sead__SafeStringBase__vtable;
  dword_60C8BD80 = (int)"ship2";
  dword_60C8BD84 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BD88 = (int)"ship3";
  dword_60C8BD8C = (int)&sead__SafeStringBase__vtable;
  dword_60C8BD90 = (int)"ship4";
  dword_60C8BD94 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BD98 = (int)"ship5";
  dword_60C8BD9C = (int)&sead__SafeStringBase__vtable;
  dword_60C8BDA0 = (int)"shipBomb";
  dword_60C8BDA4 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BDA8 = (int)"ship6";
  dword_60C8BDAC = (int)&sead__SafeStringBase__vtable;
  dword_60C8BDB0 = (int)"end";
  sub_60000288();
  dword_60C8BD60 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BD64 = (int)"WaitNormal";
  sub_60000288();
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC1C28;
  Profile__ctor(&stru_60C8BD34, Actor_CourseSelectairship_Larry_build, 0x369u, &v1, 0, 0);
  *result = &off_60BD7778;
  return result;
}
