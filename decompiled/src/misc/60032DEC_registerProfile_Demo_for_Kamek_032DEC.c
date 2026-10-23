/* registerProfile_Demo_for_Kamek_032DEC
 * address: 0x60032DEC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Demo_for_Kamek_032DEC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C7FC4C = 0;
  dword_60C7FC50 = 0;
  dword_60C7FC54 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = "デモ用カメック";
  Profile__ctor(&stru_60C7FC58, Actor_Demo_for_Kamek_build, 723u, &v0, 0, 0);
}
