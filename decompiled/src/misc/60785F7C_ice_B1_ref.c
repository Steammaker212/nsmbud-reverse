/* ice_B1_ref
 * address: 0x60785F7C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__guard *ice_B1_ref()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ADB64E;
  Profile__ctor(&stru_60CC42DC, Actor_Player_ice_build, 0xEDu, &v1, 0, 0);
  dword_60CC4304 = (int)&sead__SafeStringBase__vtable;
  dword_60CC4308 = (int)"ice_B1";
  dword_60CC430C = (int)&sead__SafeStringBase__vtable;
  dword_60CC4310 = (int)"ice_B1";
  return &dword_60CC4300;
}
