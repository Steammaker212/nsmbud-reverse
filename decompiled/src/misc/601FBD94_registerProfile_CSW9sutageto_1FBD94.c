/* registerProfile_CSW9sutageto_1FBD94
 * address: 0x601FBD94   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CSW9sutageto_1FBD94()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8C0A4 = 0;
  dword_60C8C0A8 = 0;
  dword_60C8C0AC = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC1D20;
  Profile__ctor(&stru_60C8C0B0, Actor_CSW9sutageto_build, 0x38Du, &v1, 0, 0);
  *result = &off_60BD8140;
  return result;
}
