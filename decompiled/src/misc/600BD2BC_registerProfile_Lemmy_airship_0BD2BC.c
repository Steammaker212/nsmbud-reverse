/* registerProfile_Lemmy_airship_0BD2BC
 * address: 0x600BD2BC   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_Lemmy_airship_0BD2BC()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8379C = (int)(float)((float)(2147500000.0 * 12.0) / 180.0);
  dword_60C837A0 = (int)(float)((float)(2147500000.0 * 45.0) / 180.0);
  dword_60C837A4 = (int)(float)((float)(2147500000.0 * 0.5) / 180.0);
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABCD05;
  Profile__ctor(&stru_60C8377C, Actor_Lemmy_airship_build, 0x2D9u, &v1, &stru_60AF58F4, 0);
  *result = &off_60BC9E7C;
  return result;
}
