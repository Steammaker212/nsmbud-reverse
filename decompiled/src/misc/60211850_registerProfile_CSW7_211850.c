/* registerProfile_CSW7_211850
 * address: 0x60211850   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CSW7_211850()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8CFAC = 0;
  dword_60C8CFB0 = 0;
  dword_60C8CFB4 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC1F28;
  Profile__ctor(&stru_60C8CFB8, Actor_CSW7_build, 0x37Fu, &v1, 0, 0);
  *result = &off_60BD8EFC;
  return result;
}
