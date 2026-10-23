/* registerProfile_CourseSelectairship_Ludwig_1F98CC
 * address: 0x601F98CC   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CourseSelectairship_Ludwig_1F98CC()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C8BF18 = 0;
  dword_60C8BF1C = 0;
  dword_60C8BF20 = 0;
  dword_60C8BF24 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BF28 = (int)"ship1";
  dword_60C8BF2C = (int)&sead__SafeStringBase__vtable;
  dword_60C8BF30 = (int)"ship2";
  dword_60C8BF34 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BF38 = (int)"ship3";
  dword_60C8BF3C = (int)&sead__SafeStringBase__vtable;
  dword_60C8BF40 = (int)"shipBomb";
  dword_60C8BF44 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BF48 = (int)"ship4";
  dword_60C8BF4C = (int)&sead__SafeStringBase__vtable;
  dword_60C8BF50 = (int)"end";
  sub_60000288();
  dword_60C8BEF0 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BEF4 = (int)"WaitNormal";
  sub_60000288();
  dword_60C8BEF8 = (int)&sead__SafeStringBase__vtable;
  v1.vtable = &sead__SafeStringBase__vtable;
  dword_60C8BEFC = (int)"cobShipLudwig";
  dword_60C8BF00 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BF04 = (int)"cobShipLudwigBoro";
  dword_60C8BF08 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BF0C = (int)"cobShipLudwig";
  dword_60C8BF10 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BF14 = (int)"cobShipLudwigBoro";
  v1.cstr = (char *)&unk_60AC1C95;
  Profile__ctor(&stru_60C8BEC4, Actor_CourseSelectairship_Ludwig_build, 0x36Du, &v1, 0, 0);
  *result = &off_60BD7AD0;
  return result;
}
