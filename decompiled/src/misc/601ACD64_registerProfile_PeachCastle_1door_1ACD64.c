/* registerProfile_PeachCastle_1door_1ACD64
 * address: 0x601ACD64   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_PeachCastle_1door_1ACD64()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8A638 = 0;
  dword_60C8A63C = 0;
  dword_60C8A640 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABFD19;
  Profile__ctor(&stru_60C8A644, Actor_PeachCastle_1door_build, 0x360u, &v1, 0, 0);
  *result = &off_60BD6508;
  return result;
}
