/* registerProfile_Ludwig_airship_0BD87C
 * address: 0x600BD87C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_Ludwig_airship_0BD87C()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C837C8 = (int)(float)((float)(2147500000.0 * 12.0) / 180.0);
  dword_60C837CC = (int)(float)((float)(2147500000.0 * 45.0) / 180.0);
  dword_60C837D0 = (int)(float)((float)(2147500000.0 * 0.5) / 180.0);
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABCD4A;
  Profile__ctor(&stru_60C837A8, Actor_Ludwig_airship_build, 0x2DFu, &v1, &stru_60AF5918, 0);
  *result = &off_60BC9F60;
  return result;
}
