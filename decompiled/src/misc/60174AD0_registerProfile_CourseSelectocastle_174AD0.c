/* registerProfile_CourseSelectocastle_174AD0
 * address: 0x60174AD0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CourseSelectocastle_174AD0()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C88BCC = 0;
  dword_60C88BD0 = 0;
  dword_60C88BD4 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "CourseSelectお城";
  Profile__ctor(&stru_60C88BD8, Actor_CourseSelectocastle_build, 0x35Bu, &v1, 0, 0);
  *result = &off_60BD4D98;
  return result;
}
