/* registerProfile_Roy_airship_0BE3FC
 * address: 0x600BE3FC   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_Roy_airship_0BE3FC()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C83820 = (int)(float)((float)(2147500000.0 * 12.0) / 180.0);
  dword_60C83824 = (int)(float)((float)(2147500000.0 * 45.0) / 180.0);
  dword_60C83828 = (int)(float)((float)(2147500000.0 * 0.5) / 180.0);
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABCDCA;
  Profile__ctor(&stru_60C83800, Actor_Roy_airship_build, 0x2DEu, &v1, &stru_60AF5960, 0);
  *result = &off_60BCA128;
  return result;
}
