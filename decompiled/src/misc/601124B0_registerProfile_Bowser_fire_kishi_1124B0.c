/* registerProfile_Bowser_fire_kishi_1124B0
 * address: 0x601124B0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_Bowser_fire_kishi_1124B0()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABE41D;
  Profile__ctor(&stru_60C86920, Actor_Bowser_fire_kishi_build, 0x2CDu, &v1, &stru_60AF62E8, 0);
  *result = &off_60BD0730;
  return result;
}
