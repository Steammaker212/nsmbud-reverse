/* registerProfile_unira_RDASH_BGchekunarrow_3C757C
 * address: 0x603C757C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_unira_RDASH_BGchekunarrow_3C757C()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C988B0 = 0;
  dword_60C988B4 = 0;
  dword_60C988B8 = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC5E3D;
  Profile__ctor(&stru_60C988BC, Actor_unira_RDASH_BGchekunarrow_build, 0x17Fu, v0, &stru_60B00F04, 18);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC5E47;
  Profile__ctor(&stru_60C988D4, Actor_unira_RDASH_BGchekunarrow_build, 0x182u, v0, &stru_60B00F28, 18);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC5E5B;
  Profile__ctor(&stru_60C988EC, Actor_unira_RDASH_BGchekunarrow_build, 0x180u, v0, &stru_60B00F04, 18);
}
