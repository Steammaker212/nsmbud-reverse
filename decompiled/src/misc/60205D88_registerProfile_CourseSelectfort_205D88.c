/* registerProfile_CourseSelectfort_205D88
 * address: 0x60205D88   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CourseSelectfort_205D88()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8C63C = 0;
  dword_60C8C640 = 0;
  dword_60C8C644 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC1E4F;
  Profile__ctor(&stru_60C8C648, Actor_CourseSelectfort_build, 0x35Cu, &v1, 0, 0);
  *result = &off_60BD8754;
  return result;
}
