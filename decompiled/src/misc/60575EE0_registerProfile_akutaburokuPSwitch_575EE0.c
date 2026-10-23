/* registerProfile_akutaburokuPSwitch_575EE0
 * address: 0x60575EE0   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_akutaburokuPSwitch_575EE0()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = "アクターブロックスイッチ";
  Profile__ctor(&stru_60CAEB58, Actor_akutaburokuPSwitch_build, 0x13Au, v1, &stru_60B0464C, 4098);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = "アクターブロックＰスイッチ";
  Profile__ctor(&stru_60CAEB70, Actor_akutaburokuPSwitch_build, 0x13Bu, v1, &stru_60B0464C, 4098);
  dword_60CAEB8C = ++CurrentStateID;
  dword_60CAEB90 = 404;
  dword_60CAEB94 = 1;
  dword_60CAEB98 = 408;
  dword_60CAEB9C = 1;
  dword_60CAEBA0 = 412;
  dword_60CAEBA4 = 1;
  dword_60CAEB88 = (int)&off_60C03F0C;
  dword_60CAEBA8 = (int)&dword_60CAE2F8;
  return &dword_60CAEB88;
}
