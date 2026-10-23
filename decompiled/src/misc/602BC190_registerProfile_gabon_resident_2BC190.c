/* registerProfile_gabon_resident_2BC190
 * address: 0x602BC190   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_gabon_resident_2BC190()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C9112C = 0;
  dword_60C91130 = 0;
  dword_60C91134 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC3A08;
  Profile__ctor(&stru_60C91138, Actor_gabon_resident_build, 0x280u, &v0, &stru_60AFE724, 18);
}
