/* registerProfile_pentaro_ice_36D958
 * address: 0x6036D958   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_pentaro_ice_36D958()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C95EB0 = 0;
  dword_60C95EB4 = 0;
  dword_60C95EB8 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC52E1;
  Profile__ctor(&stru_60C95E98, Actor_pentaro_ice_build, 0x16Au, &v1, 0, 34);
  dword_60C95EBC = 1068037571;
  dword_60C95EC0 = 1062836634;
  dword_60C95EC4 = 1068037571;
  unk_60C95EC8 = 1012417745;
  unk_60C95ECC = 1007371158;
  unk_60C95ED0 = 0;
  return 1068037571;
}
