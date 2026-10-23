/* registerProfile_CourseSelectsurotokinokohausu_1951EC
 * address: 0x601951EC   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CourseSelectsurotokinokohausu_1951EC()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C89B0C = 0;
  dword_60C89B10 = 0;
  dword_60C89B14 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABF9C6;
  Profile__ctor(&stru_60C89B18, Actor_CourseSelectsurotokinokohausu_build, 0x35Fu, &v1, 0, 0);
  *result = &off_60BD5BE4;
  return result;
}
