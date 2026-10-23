/* registerProfile_background_for_Peach_065F8C
 * address: 0x60065F8C   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_background_for_Peach_065F8C())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C81110 = 0;
  dword_60C81114 = 0;
  dword_60C81118 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABB987;
  Profile__ctor(&stru_60C8111C, Actor_background_for_Peach_build, 0x2E2u, &v2, 0, 0);
  *v0 = &off_60BC66F4;
  dword_60C81138 = CurrentStateID + 1;
  dword_60C81134 = (int)&off_60BC67C8;
  dword_60C8113C = (int)lkp_help_me_wait1_ref;
  dword_60C81140 = 0;
  dword_60C81144 = (int)sub_6006485C;
  dword_60C81148 = 0;
  dword_60C8114C = (int)nullsub_133;
  dword_60C81150 = 0;
  unk_60C81154 = &off_60BC67C8;
  unk_60C81158 = CurrentStateID + 2;
  dword_60C8115C = (int)sub_60064894;
  dword_60C81160 = 0;
  dword_60C81164 = (int)SE_VOC_PCH_NOTICE_ref;
  dword_60C81168 = 0;
  dword_60C8116C = (int)nullsub_2568;
  dword_60C81170 = 0;
  stru_60C81174.vtable = &off_60BC67C8;
  stru_60C81174.id = CurrentStateID + 3;
  dword_60C8117C = (int)sub_60064F7C;
  dword_60C81180 = 0;
  dword_60C81184 = (int)&loc_6006507C;
  dword_60C81188 = 0;
  dword_60C8118C = (int)nullsub_2569;
  dword_60C81190 = 0;
  unk_60C81194 = &off_60BC67C8;
  unk_60C81198 = CurrentStateID + 4;
  dword_60C8119C = (int)sub_60065298;
  dword_60C811A0 = 0;
  dword_60C811A4 = (int)SE_VOC_PCH_SURPRISE_ref;
  dword_60C811A8 = 0;
  dword_60C811AC = (int)nullsub_2570;
  dword_60C811B0 = 0;
  stru_60C811B4.vtable = &off_60BC67C8;
  stru_60C811B4.id = CurrentStateID + 5;
  dword_60C811BC = (int)sub_60065494;
  dword_60C811C0 = 0;
  dword_60C811C4 = (int)sub_600655E0;
  dword_60C811C8 = 0;
  dword_60C811CC = (int)nullsub_2571;
  dword_60C811D0 = 0;
  CurrentStateID += 6;
  dword_60C811D8 = CurrentStateID;
  dword_60C811D4 = (int)&off_60BC67C8;
  dword_60C811DC = (int)lkp_wait_ref;
  dword_60C811E0 = 0;
  dword_60C811E4 = (int)sub_600657C8;
  dword_60C811E8 = 0;
  dword_60C811EC = (int)nullsub_134;
  dword_60C811F0 = 0;
  return nullsub_134;
}
