/* registerProfile_CourseSelectairship_Wendy_1FAEE0
 * address: 0x601FAEE0   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CourseSelectairship_Wendy_1FAEE0()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C8C068 = 0;
  dword_60C8C06C = 0;
  dword_60C8C070 = 0;
  dword_60C8C074 = (int)&sead__SafeStringBase__vtable;
  dword_60C8C078 = (int)"ship1";
  dword_60C8C07C = (int)&sead__SafeStringBase__vtable;
  dword_60C8C080 = (int)"ship2";
  dword_60C8C084 = (int)&sead__SafeStringBase__vtable;
  dword_60C8C088 = (int)"ship3";
  dword_60C8C08C = (int)&sead__SafeStringBase__vtable;
  dword_60C8C090 = (int)"shipBomb";
  dword_60C8C094 = (int)&sead__SafeStringBase__vtable;
  dword_60C8C098 = (int)"ship4";
  dword_60C8C09C = (int)&sead__SafeStringBase__vtable;
  dword_60C8C0A0 = (int)"end";
  sub_60000288();
  dword_60C8C060 = (int)&sead__SafeStringBase__vtable;
  dword_60C8C064 = (int)"WaitNormal";
  sub_60000288();
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC1CFB;
  Profile__ctor(&stru_60C8C03C, Actor_CourseSelectairship_Wendy_build, 0x36Au, &v1, 0, 0);
  *result = &off_60BD7FA8;
  return result;
}
