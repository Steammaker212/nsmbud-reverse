/* registerProfile_CourseSelect1Upkinokohausu_193A7C
 * address: 0x60193A7C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CourseSelect1Upkinokohausu_193A7C()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C89A1C = 0;
  dword_60C89A20 = 0;
  dword_60C89A24 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABF964;
  Profile__ctor(&stru_60C89A28, Actor_CourseSelect1Upkinokohausu_build, 0x35Du, &v1, 0, 0);
  *result = &off_60BD59F4;
  return result;
}
