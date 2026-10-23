/* registerProfile_Iggy_magic_0A379C
 * address: 0x600A379C   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_Iggy_magic_0A379C()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C82A40 = 0;
  dword_60C82A44 = 0;
  dword_60C82A48 = 0;
  dword_60C82A30 = (int)(float)((float)(2147500000.0 * 30.0) / 180.0);
  dword_60C82A34 = (int)(float)((float)(2147500000.0 * 80.0) / 180.0);
  dword_60C82A38 = (int)(float)((float)(2147500000.0 * 50.0) / 180.0);
  dword_60C82A3C = (int)(float)((float)(2147500000.0 * 70.0) / 180.0);
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABC88D;
  Profile__ctor(&stru_60C82A18, Actor_Iggy_magic_build, 0x2C1u, &v1, &stru_60AF5688, 18);
  *result = &off_60BC8354;
  return result;
}
