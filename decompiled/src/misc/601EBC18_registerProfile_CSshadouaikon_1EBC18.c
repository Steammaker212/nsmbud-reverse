/* registerProfile_CSshadouaikon_1EBC18
 * address: 0x601EBC18   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CSshadouaikon_1EBC18()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8B1EC = 0;
  dword_60C8B1F0 = 0;
  dword_60C8B1F4 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC1A57;
  Profile__ctor(&stru_60C8B1F8, Actor_CSshadouaikon_build, 0x385u, &v1, 0, 0);
  *result = &off_60BD6EE8;
  return result;
}
