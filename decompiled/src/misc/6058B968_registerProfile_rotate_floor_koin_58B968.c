/* registerProfile_rotate_floor_koin_58B968
 * address: 0x6058B968   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_rotate_floor_koin_58B968()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "回転床同期コイン";
  Profile__ctor(&stru_60CAF398, Actor_rotate_floor_koin_build, 0x1A0u, &v1, &stru_60B04B28, 8198);
  dword_60CAF3B0 = 0x40000000;
  return &dword_60CAF3B0;
}
