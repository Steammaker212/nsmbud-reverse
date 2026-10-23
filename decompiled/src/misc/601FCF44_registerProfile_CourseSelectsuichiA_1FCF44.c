/* registerProfile_CourseSelectsuichiA_1FCF44
 * address: 0x601FCF44   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CourseSelectsuichiA_1FCF44()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8C134 = 0;
  dword_60C8C138 = 0;
  dword_60C8C13C = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC1D68;
  Profile__ctor(&stru_60C8C140, Actor_CourseSelectsuichiA_build, 0x371u, &v1, 0, 0);
  *result = &off_60BD8220;
  return result;
}
