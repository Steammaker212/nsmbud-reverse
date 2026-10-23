/* registerProfile_Wendy_airship_0C0F1C
 * address: 0x600C0F1C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_Wendy_airship_0C0F1C()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C83970 = (int)(float)((float)(2147500000.0 * 12.0) / 180.0);
  dword_60C83974 = (int)(float)((float)(2147500000.0 * 45.0) / 180.0);
  dword_60C83978 = (int)(float)((float)(2147500000.0 * 0.5) / 180.0);
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABCE99;
  Profile__ctor(&stru_60C83950, Actor_Wendy_airship_build, 0x2DCu, &v1, &stru_60AF59A8, 0);
  *result = &off_60BCA2F4;
  return result;
}
