/* registerProfile_jugemucloud_maruchipureifor_309D34
 * address: 0x60309D34   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_jugemucloud_maruchipureifor_309D34()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C92F34 = 0;
  dword_60C92F38 = 0;
  dword_60C92F3C = 0;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC43A5;
  Profile__ctor(&stru_60C92F40, Actor_jugemucloud_maruchipureifor_build, 0x26Du, v1, &stru_60AFF184, 18);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC43B5;
  Profile__ctor(&stru_60C92F58, Actor_jugemucloud_maruchipureifor_build, 0x26Eu, v1, &stru_60AFF1A8, 18);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC43CE;
  Profile__ctor(&stru_60C92F70, Actor_jugemucloud_maruchipureifor_build, 0x26Fu, v1, &stru_60AFF184, 18);
  dword_60C92F8C = CurrentStateID + 1;
  dword_60C92F88 = (int)&off_60BE94B8;
  dword_60C92F90 = (int)&loc_6030692C;
  dword_60C92F94 = 0;
  dword_60C92F98 = (int)&loc_60306A48;
  dword_60C92F9C = 0;
  dword_60C92FA0 = (int)nullsub_3318;
  dword_60C92FA4 = 0;
  dword_60C92FA8 = (int)&off_60BE94B8;
  *(_DWORD *)algn_60C92FAC = CurrentStateID + 2;
  dword_60C92FB0 = (int)SE_EMY_JUGEM_APP_ref;
  dword_60C92FB4 = 0;
  dword_60C92FB8 = (int)&loc_60306D50;
  dword_60C92FBC = 0;
  dword_60C92FC0 = (int)nullsub_3319;
  dword_60C92FC4 = 0;
  dword_60C92FC8 = (int)&off_60BE94B8;
  *(_DWORD *)algn_60C92FCC = CurrentStateID + 3;
  dword_60C92FD0 = (int)sub_60307018;
  dword_60C92FD4 = 0;
  dword_60C92FD8 = (int)&loc_603071CC;
  dword_60C92FDC = 0;
  dword_60C92FE0 = (int)nullsub_3320;
  dword_60C92FE4 = 0;
  unk_60C92FE8 = &off_60BE94B8;
  unk_60C92FEC = CurrentStateID + 4;
  dword_60C92FF0 = (int)sub_60307678;
  dword_60C92FF4 = 0;
  dword_60C92FF8 = (int)sub_60307690;
  dword_60C92FFC = 0;
  dword_60C93000 = (int)nullsub_3321;
  dword_60C93004 = 0;
  dword_60C93008 = (int)&off_60BE94B8;
  *(_DWORD *)algn_60C9300C = CurrentStateID + 5;
  CurrentStateID += 6;
  dword_60C9302C = CurrentStateID;
  dword_60C93010 = (int)sub_603077AC;
  dword_60C93028 = (int)&off_60BE94B8;
  dword_60C93014 = 0;
  dword_60C93030 = (int)sub_60307A50;
  dword_60C93018 = (int)&loc_603077C8;
  dword_60C93034 = 0;
  dword_60C9301C = 0;
  dword_60C93038 = (int)&loc_60307C0C;
  dword_60C93020 = (int)nullsub_3322;
  dword_60C93024 = 0;
  dword_60C9303C = 0;
  dword_60C93040 = (int)sub_6030859C;
  dword_60C93044 = 0;
  return &dword_60C93028;
}
