/* registerProfile_kipipe_aisuPiranha_furawa_2_2954F4
 * address: 0x602954F4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kipipe_aisuPiranha_furawa_2_2954F4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C8FB60 = 0;
  dword_60C8FB64 = 0;
  dword_60C8FB68 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC3200;
  Profile__ctor(&stru_60C8FB6C, Actor_kipipe_aisuPiranha_furawa_2_build, 0x1E9u, &v0, &stru_60AFE07C, 18);
}
