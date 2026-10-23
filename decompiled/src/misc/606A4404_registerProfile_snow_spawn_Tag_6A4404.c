/* registerProfile_snow_spawn_Tag_6A4404
 * address: 0x606A4404   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_snow_spawn_Tag_6A4404()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  unk_60CB9AA0 = -196;
  *(_DWORD *)&byte_60CB9AA4 = -2014904321;
  dword_60CB9AA8 = 0;
  dword_60CB9AAC = 0;
  dword_60CB9AB0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD6FEC;
  Profile__ctor(&stru_60CB9A80, Actor_snow_spawn_Tag_build, 0x318u, &v1, &stru_60B08414, 0);
  *result = &off_60C192F4;
  return result;
}
