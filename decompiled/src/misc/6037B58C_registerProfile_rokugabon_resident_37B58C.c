/* registerProfile_rokugabon_resident_37B58C
 * address: 0x6037B58C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_rokugabon_resident_37B58C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C96688 = 0;
  dword_60C9668C = 0;
  dword_60C96690 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC557F;
  Profile__ctor(&stru_60C96694, Actor_rokugabon_resident_build, 0x283u, &v0, &stru_60B0067C, 18);
}
