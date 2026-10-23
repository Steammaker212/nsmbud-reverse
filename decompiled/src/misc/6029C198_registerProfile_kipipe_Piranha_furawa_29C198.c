/* registerProfile_kipipe_Piranha_furawa_29C198
 * address: 0x6029C198   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kipipe_Piranha_furawa_29C198()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C8FFA8 = 0;
  dword_60C8FFAC = 0;
  dword_60C8FFB0 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC333A;
  Profile__ctor(&stru_60C8FFB4, Actor_kipipe_Piranha_furawa_build, 0x1E0u, &v0, &stru_60AFE1AC, 18);
}
