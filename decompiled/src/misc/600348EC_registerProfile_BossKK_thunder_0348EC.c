/* registerProfile_BossKK_thunder_0348EC
 * address: 0x600348EC   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_BossKK_thunder_0348EC())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C7FCF4 = 0;
  dword_60C7FCF8 = 0;
  dword_60C7FCFC = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABA976;
  Profile__ctor(&stru_60C7FD00, Actor_BossKK_thunder_build, 710u, &v2, &stru_60AF51D4, 0);
  *v0 = &off_60BC263C;
  dword_60C7FD1C = CurrentStateID + 1;
  dword_60C7FD18 = (int)&off_60BC27BC;
  dword_60C7FD20 = (int)sub_60033B44;
  dword_60C7FD24 = 0;
  dword_60C7FD28 = (int)SE_OBJ_BOSS_KK_THUNDER_L_ref;
  dword_60C7FD2C = 0;
  dword_60C7FD30 = (int)nullsub_2496;
  dword_60C7FD34 = 0;
  unk_60C7FD38 = &off_60BC27BC;
  unk_60C7FD3C = CurrentStateID + 2;
  dword_60C7FD40 = (int)sub_60033C14;
  dword_60C7FD44 = 0;
  dword_60C7FD48 = (int)SE_OBJ_BOSS_KK_THUNDER_SEPARATE_ref;
  dword_60C7FD4C = 0;
  dword_60C7FD50 = (int)nullsub_2497;
  dword_60C7FD54 = 0;
  unk_60C7FD58 = &off_60BC27BC;
  unk_60C7FD5C = CurrentStateID + 3;
  dword_60C7FD60 = (int)&loc_60033D2C;
  dword_60C7FD64 = 0;
  dword_60C7FD68 = (int)SE_OBJ_BOSS_KK_THUNDER_ref;
  dword_60C7FD6C = 0;
  dword_60C7FD70 = (int)nullsub_2498;
  dword_60C7FD74 = 0;
  unk_60C7FD78 = &off_60BC27BC;
  unk_60C7FD7C = CurrentStateID + 4;
  dword_60C7FD80 = (int)sub_60033EA4;
  dword_60C7FD84 = 0;
  dword_60C7FD88 = (int)nullsub_130;
  dword_60C7FD8C = 0;
  dword_60C7FD90 = (int)nullsub_131;
  dword_60C7FD94 = 0;
  CurrentStateID += 5;
  dword_60C7FD9C = CurrentStateID;
  dword_60C7FD98 = (int)&off_60BC27BC;
  dword_60C7FDA0 = (int)sub_60033EF4;
  dword_60C7FDA4 = 0;
  dword_60C7FDA8 = (int)nullsub_2499;
  dword_60C7FDAC = 0;
  dword_60C7FDB0 = (int)nullsub_2500;
  dword_60C7FDB4 = 0;
  return nullsub_2500;
}
