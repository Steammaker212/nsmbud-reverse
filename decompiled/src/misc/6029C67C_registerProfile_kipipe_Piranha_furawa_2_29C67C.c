/* registerProfile_kipipe_Piranha_furawa_2_29C67C
 * address: 0x6029C67C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kipipe_Piranha_furawa_2_29C67C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C8FFD4 = 0;
  dword_60C8FFD8 = 0;
  dword_60C8FFDC = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC3362;
  Profile__ctor(&stru_60C8FFE0, Actor_kipipe_Piranha_furawa_2_build, 0x1E1u, &v0, &stru_60AFE1D0, 18);
}
