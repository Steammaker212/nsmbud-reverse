/* registerProfile_kirifuki_RDash_330FD0
 * address: 0x60330FD0   size: 820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_kirifuki_RDash_330FD0()
{
  sead__SafeString v1[5]; // [sp+10h] [bp-28h] BYREF

  dword_60C93D84 = 0;
  dword_60C93D88 = 0;
  dword_60C93D8C = 0;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC4A9B;
  Profile__ctor(&stru_60C93D90, Actor_kirifuki_RDash_build, 0x312u, v1, &stru_60AFF8F4, 18);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC4AAB;
  Profile__ctor(&stru_60C93DA8, Actor_kirifuki_RDash_build, 0x313u, v1, &stru_60AFF8F4, 18);
  dword_60C93DC4 = CurrentStateID + 1;
  dword_60C93DC0 = (int)&off_60BEC578;
  dword_60C93DC8 = (int)sub_6032DDBC;
  dword_60C93DCC = 0;
  dword_60C93DD0 = (int)sub_6032DE78;
  dword_60C93DD4 = 0;
  dword_60C93DD8 = (int)nullsub_3355;
  dword_60C93DDC = 0;
  dword_60C93DE0 = (int)&off_60BEC578;
  *(_DWORD *)algn_60C93DE4 = CurrentStateID + 2;
  dword_60C93DE8 = (int)SE_EMY_HUHU_BREATH_IN_ref;
  dword_60C93DEC = 0;
  dword_60C93DF0 = (int)sub_6032E0E0;
  dword_60C93DF4 = 0;
  dword_60C93DF8 = (int)nullsub_3356;
  dword_60C93DFC = 0;
  dword_60C93E00 = (int)&off_60BEC578;
  *(_DWORD *)algn_60C93E04 = CurrentStateID + 3;
  dword_60C93E08 = (int)sub_6032E390;
  dword_60C93E0C = 0;
  dword_60C93E10 = (int)SE_EMY_HUHU_BREATH_OUT_ref;
  dword_60C93E14 = 0;
  dword_60C93E18 = (int)nullsub_3357;
  dword_60C93E1C = 0;
  dword_60C93E20 = (int)&off_60BEC578;
  *(_DWORD *)algn_60C93E24 = CurrentStateID + 4;
  dword_60C93E28 = (int)sub_6032E7AC;
  dword_60C93E2C = 0;
  dword_60C93E30 = (int)sub_6032E988;
  dword_60C93E34 = 0;
  dword_60C93E38 = (int)nullsub_3358;
  dword_60C93E3C = 0;
  unk_60C93E40 = &off_60BEC578;
  unk_60C93E44 = CurrentStateID + 5;
  dword_60C93E48 = (int)dead_02_ref;
  dword_60C93E4C = 0;
  dword_60C93E50 = (int)sub_6032ECAC;
  dword_60C93E54 = 0;
  dword_60C93E58 = (int)nullsub_3359;
  dword_60C93E5C = 0;
  unk_60C93E60 = &off_60BEC578;
  unk_60C93E64 = CurrentStateID + 6;
  dword_60C93E68 = (int)sub_6032ED40;
  dword_60C93E6C = 0;
  dword_60C93E70 = (int)sub_6032EED0;
  dword_60C93E74 = 0;
  dword_60C93E78 = (int)nullsub_180;
  dword_60C93E7C = 0;
  unk_60C93E80 = &off_60BEC578;
  unk_60C93E84 = CurrentStateID + 7;
  dword_60C93E88 = (int)dead_02_ref_2;
  dword_60C93E8C = 0;
  dword_60C93E90 = (int)sub_6032F144;
  dword_60C93E94 = 0;
  dword_60C93E98 = (int)nullsub_3360;
  dword_60C93E9C = 0;
  dword_60C93EA0 = (int)&off_60BEC578;
  *(_DWORD *)algn_60C93EA4 = CurrentStateID + 8;
  CurrentStateID += 9;
  dword_60C93EA8 = (int)SE_EMY_HUHU_EXTINCT_ref;
  dword_60C93EAC = 0;
  dword_60C93EC4 = CurrentStateID;
  dword_60C93EC8 = 612;
  dword_60C93ECC = 1;
  dword_60C93EB0 = (int)SE_EMY_HUHU_EXTINCT_ref_32F460;
  dword_60C93EB4 = 0;
  dword_60C93EB8 = (int)sub_6032F690;
  dword_60C93EBC = 0;
  dword_60C93ED0 = 616;
  dword_60C93ED4 = 1;
  dword_60C93ED8 = 620;
  dword_60C93EDC = 1;
  dword_60C93EC0 = (int)&off_60BEC58C;
  dword_60C93EE0 = (int)&Enemy_StateId_Frozen;
  return &dword_60C93EC0;
}
