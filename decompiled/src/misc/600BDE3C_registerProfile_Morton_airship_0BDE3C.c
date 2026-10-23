/* registerProfile_Morton_airship_0BDE3C
 * address: 0x600BDE3C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_Morton_airship_0BDE3C()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C837F4 = (int)(float)((float)(2147500000.0 * 12.0) / 180.0);
  dword_60C837F8 = (int)(float)((float)(2147500000.0 * 45.0) / 180.0);
  dword_60C837FC = (int)(float)((float)(2147500000.0 * 0.5) / 180.0);
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABCD97;
  Profile__ctor(&stru_60C837D4, Actor_Morton_airship_build, 0x2DAu, &v1, &stru_60AF593C, 0);
  *result = &off_60BCA044;
  return result;
}
