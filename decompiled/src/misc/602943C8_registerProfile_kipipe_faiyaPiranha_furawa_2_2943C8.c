/* registerProfile_kipipe_faiyaPiranha_furawa_2_2943C8
 * address: 0x602943C8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kipipe_faiyaPiranha_furawa_2_2943C8()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C8FAB0 = 0;
  dword_60C8FAB4 = 0;
  dword_60C8FAB8 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC3133;
  Profile__ctor(&stru_60C8FABC, Actor_kipipe_faiyaPiranha_furawa_2_build, 0x1E5u, &v0, &stru_60AFDFEC, 18);
}
