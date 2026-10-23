/* registerProfile_haipamakusu_82FC6C
 * address: 0x6082FC6C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_haipamakusu_82FC6C()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AE4F1B;
  Profile__ctor(&stru_60CC709C, Actor_haipamakusu_build, 0x244u, v0, &stru_60B0E044, 0);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AE4F37;
  Profile__ctor(&stru_60CC70B4, Actor_haipamakusu_build, 0x245u, v0, &stru_60B0E044, 0);
}
