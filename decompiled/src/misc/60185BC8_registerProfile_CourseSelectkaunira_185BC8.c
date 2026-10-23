/* registerProfile_CourseSelectkaunira_185BC8
 * address: 0x60185BC8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_CourseSelectkaunira_185BC8()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C894D4 = 0;
  dword_60C894D8 = 0;
  dword_60C894DC = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABF39D;
  Profile__ctor(&stru_60C894B0, Actor_CourseSelectkaunira_build, 0x386u, &v2, 0, 0);
  *v0 = &off_60BD5190;
  dword_60C894D0 = 0x2000000;
  return 0x2000000;
}
