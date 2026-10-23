/* registerProfile_kipipe_faiyaPiranha_furawa_293E94
 * address: 0x60293E94   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kipipe_faiyaPiranha_furawa_293E94()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C8FA84 = 0;
  dword_60C8FA88 = 0;
  dword_60C8FA8C = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC30FF;
  Profile__ctor(&stru_60C8FA90, Actor_kipipe_faiyaPiranha_furawa_build, 0x1E4u, &v0, &stru_60AFDFC8, 18);
}
