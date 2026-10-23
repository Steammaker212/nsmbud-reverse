/* registerProfile_LargeGoomba_ctor_33FBC4
 * address: 0x6033FBC4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_LargeGoomba_ctor_33FBC4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C94558 = 0;
  dword_60C9455C = 0;
  dword_60C94560 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC4C73;
  Profile__ctor(&stru_60C94564, LargeGoomba_ctor, 0x1D9u, &v0, &stru_60AFFB44, 18);
}
