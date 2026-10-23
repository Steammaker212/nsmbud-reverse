/* registerProfile_CourseSelectkaPiranha_1AAC8C
 * address: 0x601AAC8C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_CourseSelectkaPiranha_1AAC8C()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C8A544 = 0;
  dword_60C8A548 = 0;
  dword_60C8A54C = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABFC62;
  Profile__ctor(&stru_60C8A520, Actor_CourseSelectkaPiranha_build, 0x384u, &v2, 0, 0);
  *v0 = &off_60BD635C;
  dword_60C8A540 = 0x2000000;
  return 0x2000000;
}
