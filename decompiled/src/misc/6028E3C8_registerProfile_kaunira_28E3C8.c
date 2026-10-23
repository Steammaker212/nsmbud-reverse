/* registerProfile_kaunira_28E3C8
 * address: 0x6028E3C8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kaunira_28E3C8()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C8F570 = 0;
  dword_60C8F574 = 0;
  dword_60C8F578 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC2FB1;
  Profile__ctor(&stru_60C8F57C, Actor_kaunira_build, 0x181u, &v0, &stru_60AFDF60, 274);
}
