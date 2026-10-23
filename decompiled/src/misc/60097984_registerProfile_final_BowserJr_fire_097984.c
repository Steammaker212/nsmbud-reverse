/* registerProfile_final_BowserJr_fire_097984
 * address: 0x60097984   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_final_BowserJr_fire_097984()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C823DC = 0;
  dword_60C823E0 = 0;
  dword_60C823E4 = 0;
  dword_60C823D8 = (int)(float)((float)(2147500000.0 * 70.0) / 180.0);
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABC444;
  Profile__ctor(&stru_60C823A0, Actor_final_BowserJr_fire_build, 0x2D7u, &v1, 0, 18);
  *result = &off_60BC7A78;
  return result;
}
