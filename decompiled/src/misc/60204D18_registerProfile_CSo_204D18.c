/* registerProfile_CSo_204D18
 * address: 0x60204D18   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CSo_204D18()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8C5E8 = 0;
  dword_60C8C5EC = 0;
  dword_60C8C5F0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC1E1C;
  Profile__ctor(&stru_60C8C5F4, Actor_CSo_build, 0x387u, &v1, 0, 0);
  *result = &off_60BD86E4;
  return result;
}
