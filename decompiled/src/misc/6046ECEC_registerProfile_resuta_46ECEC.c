/* registerProfile_resuta_46ECEC
 * address: 0x6046ECEC   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_resuta_46ECEC()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC99BD;
  Profile__ctor(&stru_60C9D7C8, Actor_resuta_build, 0x21u, &v2, &stru_60B02890, 0);
  *v0 = &off_60BFC4D8;
  dword_60C9D7E8[0] = 0x40000000;
  dword_60C9D7E8[1] = -1073741824;
  dword_60C9D7E8[2] = 1107296256;
  dword_60C9D7F4 = 1107296256;
  return dword_60C9D7E8;
}
