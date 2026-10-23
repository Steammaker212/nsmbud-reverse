/* registerProfile_kira_30E08C
 * address: 0x6030E08C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kira_30E08C()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C93104 = 0;
  dword_60C93108 = 0;
  dword_60C9310C = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC446D;
  Profile__ctor(&stru_60C93110, Actor_kira_build, 0x70u, v0, &stru_60AFF2B8, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC4483;
  Profile__ctor(&stru_60C93128, Actor_kira_build, 0x71u, v0, &stru_60AFF2B8, 2);
}
