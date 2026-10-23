/* registerProfile_Kamek_magic_0B10F8
 * address: 0x600B10F8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_Kamek_magic_0B10F8()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8317C = 0;
  dword_60C83180 = 0;
  dword_60C83184 = 0;
  dword_60C83170 = (int)(float)((float)(2147500000.0 * 30.0) / 180.0);
  dword_60C83174 = (int)(float)((float)(2147500000.0 * 80.0) / 180.0);
  dword_60C83178 = (int)(float)((float)(2147500000.0 * 30.0) / 180.0);
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABCBE1;
  Profile__ctor(&stru_60C83144, Actor_Kamek_magic_build, 0x2CAu, &v1, 0, 18);
  *result = &off_60BC904C;
  return result;
}
