/* cube_kinoko_ref
 * address: 0x606CE1C8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int cube_kinoko_ref()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD7BA2;
  Profile__ctor(&stru_60CBB34C, Actor_rotate_buroku_kinoko_build, 0x9Au, &v1, &stru_60B08BE4, 2);
  dword_60CBB364 = (int)&sead__SafeStringBase__vtable;
  dword_60CBB368 = (int)"cube_kinoko_S";
  dword_60CBB36C = 1117782016;
  dword_60CBB370 = 1117782016;
  dword_60CBB374 = (int)&sead__SafeStringBase__vtable;
  dword_60CBB378 = (int)"cube_kinoko_L";
  dword_60CBB37C = 1131413504;
  dword_60CBB380 = 1131413504;
  return sub_60000288();
}
