/* registerProfile_fire_spawn_6A5098
 * address: 0x606A5098   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_fire_spawn_6A5098()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CB9AB4 = 0;
  dword_60CB9AB8 = 0;
  dword_60CB9ABC = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD7023;
  Profile__ctor(&stru_60CB9AC0, Actor_fire_spawn_build, 0x319u, &v1, &stru_60B08438, 0);
  *result = &off_60C19594;
  return result;
}
