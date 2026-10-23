/* registerProfile_FireBros_ctor_2AA1BC
 * address: 0x602AA1BC   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int registerProfile_FireBros_ctor_2AA1BC()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C90A00 = 0;
  dword_60C90A04 = 0;
  dword_60C90A08 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC372D;
  Profile__ctor(&stru_60C909E0, FireBros_ctor, 0x2FAu, &v1, &stru_60AFE4E0, 18);
  dword_60C90A0C = 1088421888;
  dword_60C90A10 = -1082130432;
  dword_60C90A14 = 1093664768;
  return 1088421888;
}
