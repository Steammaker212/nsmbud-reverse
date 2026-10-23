/* registerProfile_chibiyoshi_light_ru_678478
 * address: 0x60678478   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_chibiyoshi_light_ru_678478()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD6260;
  Profile__ctor(&stru_60CB7D34, Actor_chibiyoshi_light_ru_build, 0x1C1u, &v1, &stru_60B07CAC, 4);
  dword_60CB7D54 = (int)&sead__SafeStringBase__vtable;
  dword_60CB7D58 = (int)"light";
  dword_60CB7D68 = (int)&sead__SafeStringBase__vtable;
  dword_60CB7D6C = (int)"light_wait";
  dword_60CB7D70 = 1;
  dword_60CB7D74 = (int)&sead__SafeStringBase__vtable;
  dword_60CB7D78 = (int)"light_flash";
  dword_60CB7D7C = 0;
  return sub_60000288();
}
