/* registerProfile_Kamek_Demo_manage_Tag_0ACC38
 * address: 0x600ACC38   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Kamek_Demo_manage_Tag_0ACC38()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C82FE8 = 0;
  dword_60C82FEC = 0;
  dword_60C82FF0 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60ABCB58;
  Profile__ctor(&stru_60C82FF4, Actor_Kamek_Demo_manage_Tag_build, 0x2B0u, &v0, &stru_60AF5794, 0);
}
