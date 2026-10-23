/* registerProfile_Iggy_airship_0BC748
 * address: 0x600BC748   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_Iggy_airship_0BC748()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C83744 = (int)(float)((float)(2147500000.0 * 12.0) / 180.0);
  dword_60C83748 = (int)(float)((float)(2147500000.0 * 45.0) / 180.0);
  dword_60C8374C = (int)(float)((float)(2147500000.0 * 0.5) / 180.0);
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABCC85;
  Profile__ctor(&stru_60C83724, Actor_Iggy_airship_build, 0x2DDu, &v1, &stru_60AF58AC, 0);
  *result = &off_60BC9CA8;
  return result;
}
