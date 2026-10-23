/* registerProfile_CourseSelectsuichiB_1FD610
 * address: 0x601FD610   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CourseSelectsuichiB_1FD610()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8C158 = 0;
  dword_60C8C15C = 0;
  dword_60C8C160 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC1D8B;
  Profile__ctor(&stru_60C8C164, Actor_CourseSelectsuichiB_build, 0x372u, &v1, 0, 0);
  *result = &off_60BD8290;
  return result;
}
