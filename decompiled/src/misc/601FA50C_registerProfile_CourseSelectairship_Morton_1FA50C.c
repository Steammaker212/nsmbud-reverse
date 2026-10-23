/* registerProfile_CourseSelectairship_Morton_1FA50C
 * address: 0x601FA50C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CourseSelectairship_Morton_1FA50C()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C8BF88 = 0;
  dword_60C8BF8C = 0;
  dword_60C8BF90 = 0;
  dword_60C8BF94 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BF98 = (int)"ship1";
  dword_60C8BF9C = (int)&sead__SafeStringBase__vtable;
  dword_60C8BFA0 = (int)"ship2";
  dword_60C8BFA4 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BFA8 = (int)"ship3";
  dword_60C8BFAC = (int)&sead__SafeStringBase__vtable;
  dword_60C8BFB0 = (int)"ship4";
  dword_60C8BFB4 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BFB8 = (int)"shipBomb";
  dword_60C8BFBC = (int)&sead__SafeStringBase__vtable;
  dword_60C8BFC0 = (int)"ship5";
  dword_60C8BFC4 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BFC8 = (int)"end";
  sub_60000288();
  dword_60C8BF80 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BF84 = (int)"WaitNormal";
  sub_60000288();
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC1CBD;
  Profile__ctor(&stru_60C8BF5C, Actor_CourseSelectairship_Morton_build, 0x368u, &v1, 0, 0);
  *result = &off_60BD7C78;
  return result;
}
