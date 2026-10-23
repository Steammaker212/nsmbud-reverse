/* registerProfile_CourseSelect_W8_cloud_21694C
 * address: 0x6021694C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CourseSelect_W8_cloud_21694C()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8D23C = 0;
  dword_60C8D240 = 0;
  dword_60C8D244 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC1FEF;
  Profile__ctor(&stru_60C8D248, Actor_CourseSelect_W8_cloud_build, 0x364u, &v1, 0, 0);
  *result = &off_60BD9028;
  return result;
}
