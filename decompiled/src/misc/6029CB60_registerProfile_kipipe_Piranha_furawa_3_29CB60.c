/* registerProfile_kipipe_Piranha_furawa_3_29CB60
 * address: 0x6029CB60   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kipipe_Piranha_furawa_3_29CB60()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C90000 = 0;
  dword_60C90004 = 0;
  dword_60C90008 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC338A;
  Profile__ctor(&stru_60C9000C, Actor_kipipe_Piranha_furawa_3_build, 0x1E2u, &v0, &stru_60AFE1F4, 18);
}
