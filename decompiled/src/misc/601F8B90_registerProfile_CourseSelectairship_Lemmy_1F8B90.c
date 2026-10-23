/* registerProfile_CourseSelectairship_Lemmy_1F8B90
 * address: 0x601F8B90   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_CourseSelectairship_Lemmy_1F8B90()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60C8BE68 = 0;
  dword_60C8BE6C = 0;
  dword_60C8BE70 = 0;
  dword_60C8BE74 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BE78 = (int)"shipStop";
  dword_60C8BE7C = (int)&sead__SafeStringBase__vtable;
  dword_60C8BE80 = (int)"shipOpen1";
  dword_60C8BE84 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BE88 = (int)"shipOpen2";
  dword_60C8BE8C = (int)&sead__SafeStringBase__vtable;
  dword_60C8BE90 = (int)"end";
  sub_60000288();
  dword_60C8BE94 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BE98 = (int)"ship1";
  dword_60C8BE9C = (int)&sead__SafeStringBase__vtable;
  dword_60C8BEA0 = (int)"ship2";
  dword_60C8BEA4 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BEA8 = (int)"ship3";
  dword_60C8BEAC = (int)&sead__SafeStringBase__vtable;
  dword_60C8BEB0 = (int)"shipBomb";
  dword_60C8BEB4 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BEB8 = (int)"ship4";
  dword_60C8BEBC = (int)&sead__SafeStringBase__vtable;
  dword_60C8BEC0 = (int)"end";
  sub_60000288();
  dword_60C8BE60 = (int)&sead__SafeStringBase__vtable;
  dword_60C8BE64 = (int)"WaitNormal";
  sub_60000288();
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC1C64;
  Profile__ctor(&stru_60C8BDB4, Actor_CourseSelectairship_Lemmy_build, 0x367u, &v2, 0, 0);
  *v0 = &off_60BD7910;
  dword_60C8BDD0 = CurrentStateID + 1;
  dword_60C8BDD4 = 92;
  dword_60C8BDD8 = 1;
  dword_60C8BDDC = 96;
  dword_60C8BDE0 = 1;
  dword_60C8BDE4 = 100;
  dword_60C8BDE8 = 1;
  dword_60C8BDCC = (int)&off_60BD7AA8;
  dword_60C8BDEC = (int)&dword_60C8B630;
  dword_60C8BDF8 = 212;
  dword_60C8BDFC = 1;
  dword_60C8BE00 = 216;
  dword_60C8BE04 = 1;
  dword_60C8BE08 = 220;
  dword_60C8BE0C = 1;
  unk_60C8BDF0 = &off_60BD7AA8;
  unk_60C8BDF4 = CurrentStateID + 2;
  dword_60C8BE10 = (int)&unk_60C8B798;
  dword_60C8BE1C = 224;
  dword_60C8BE20 = 1;
  dword_60C8BE24 = 228;
  dword_60C8BE28 = 1;
  dword_60C8BE2C = 232;
  dword_60C8BE30 = 1;
  unk_60C8BE14 = &off_60BD7AA8;
  unk_60C8BE18 = CurrentStateID + 3;
  CurrentStateID += 4;
  dword_60C8BE3C = CurrentStateID;
  dword_60C8BE34 = (int)&unk_60C8B7BC;
  dword_60C8BE38 = (int)&off_60BD7ABC;
  dword_60C8BE40 = (int)sub_601F8F40;
  dword_60C8BE44 = 0;
  dword_60C8BE48 = (int)sub_601F8F5C;
  dword_60C8BE4C = 0;
  dword_60C8BE50 = (int)nullsub_2994;
  dword_60C8BE54 = 0;
  return &dword_60C8BE38;
}
