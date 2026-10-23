/* registerProfile_Larry_airship_0BCD08
 * address: 0x600BCD08   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_Larry_airship_0BCD08()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C83770 = (int)(float)((float)(2147500000.0 * 12.0) / 180.0);
  dword_60C83774 = (int)(float)((float)(2147500000.0 * 45.0) / 180.0);
  dword_60C83778 = (int)(float)((float)(2147500000.0 * 0.5) / 180.0);
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABCCC4;
  Profile__ctor(&stru_60C83750, Actor_Larry_airship_build, 0x2DBu, &v1, &stru_60AF58D0, 0);
  *result = &off_60BC9D98;
  return result;
}
