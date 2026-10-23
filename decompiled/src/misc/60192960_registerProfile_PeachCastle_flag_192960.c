/* registerProfile_PeachCastle_flag_192960
 * address: 0x60192960   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_PeachCastle_flag_192960()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C89994 = 0;
  dword_60C89998 = 0;
  dword_60C8999C = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABF88F;
  Profile__ctor(&stru_60C899A0, Actor_PeachCastle_flag_build, 0x37Cu, &v1, 0, 0);
  *result = &off_60BD5904;
  return result;
}
