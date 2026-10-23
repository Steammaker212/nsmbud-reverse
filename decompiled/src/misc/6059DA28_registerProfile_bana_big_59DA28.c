/* registerProfile_bana_big_59DA28
 * address: 0x6059DA28   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateBase *registerProfile_bana_big_59DA28()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2100;
  Profile__ctor(&stru_60CAFB7C, Actor_bana_big_build, 0xE1u, &v1, &stru_60B04DB8, 2);
  dword_60CAFB98 = CurrentStateID + 1;
  dword_60CAFB9C = 228;
  dword_60CAFBA0 = 1;
  dword_60CAFBA4 = 232;
  dword_60CAFBA8 = 1;
  dword_60CAFBAC = 236;
  dword_60CAFBB0 = 1;
  dword_60CAFB94 = (int)&off_60C07AB8;
  dword_60CAFBB4 = (int)&dword_60CAFAC4;
  CurrentStateID += 2;
  unk_60CAFBBC = CurrentStateID;
  unk_60CAFBC0 = 196;
  unk_60CAFBC4 = 1;
  dword_60CAFBC8 = 200;
  dword_60CAFBCC = 1;
  dword_60CAFBD0 = 204;
  dword_60CAFBD4 = 1;
  dword_60CAFBB8 = (int)&off_60C07AB8;
  dword_60CAFBD8 = (int)&stru_60CAFAE8;
  return &stru_60CAFAE8;
}
