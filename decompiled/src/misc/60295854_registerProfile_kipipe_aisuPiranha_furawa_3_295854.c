/* registerProfile_kipipe_aisuPiranha_furawa_3_295854
 * address: 0x60295854   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kipipe_aisuPiranha_furawa_3_295854()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C8FB8C = 0;
  dword_60C8FB90 = 0;
  dword_60C8FB94 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC3231;
  Profile__ctor(&stru_60C8FB98, Actor_kipipe_aisuPiranha_furawa_3_build, 0x1EAu, &v0, &stru_60AFE0A0, 18);
}
