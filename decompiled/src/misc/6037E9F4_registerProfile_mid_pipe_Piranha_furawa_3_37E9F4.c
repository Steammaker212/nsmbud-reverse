/* registerProfile_mid_pipe_Piranha_furawa_3_37E9F4
 * address: 0x6037E9F4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_mid_pipe_Piranha_furawa_3_37E9F4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C96918 = 0;
  dword_60C9691C = 0;
  dword_60C96920 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC563D;
  Profile__ctor(&stru_60C96924, Actor_mid_pipe_Piranha_furawa_3_build, 0x30Au, &v0, &stru_60B0070C, 18);
}
