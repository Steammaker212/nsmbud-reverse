/* registerProfile_mid_pipe_Piranha_furawa_37E724
 * address: 0x6037E724   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_mid_pipe_Piranha_furawa_37E724()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C968D0 = 0;
  dword_60C968D4 = 0;
  dword_60C968D8 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC55CF;
  Profile__ctor(&stru_60C968DC, Actor_mid_pipe_Piranha_furawa_build, 0x308u, &v0, &stru_60B006C4, 18);
}
