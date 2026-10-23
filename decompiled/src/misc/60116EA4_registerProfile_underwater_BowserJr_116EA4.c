/* registerProfile_underwater_BowserJr_116EA4
 * address: 0x60116EA4   size: 996   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_underwater_BowserJr_116EA4())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60C86940 = 0;
  dword_60C86944 = 0;
  dword_60C86948 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABE43C;
  Profile__ctor(&stru_60C8694C, Actor_underwater_BowserJr_build, 0x335u, &v2, &stru_60AF630C, 0);
  *v0 = &off_60BD07C8;
  dword_60C86968 = CurrentStateID + 1;
  dword_60C86964 = (int)&off_60BD0C90;
  dword_60C8696C = (int)jcm_wait_ref;
  dword_60C86970 = 0;
  dword_60C86974 = (int)sub_601126B8;
  dword_60C86978 = 0;
  dword_60C8697C = (int)nullsub_2813;
  dword_60C86980 = 0;
  dword_60C86984 = (int)&off_60BD0C90;
  unk_60C86988 = CurrentStateID + 2;
  dword_60C8698C = (int)jcm_demo_battleA_ref;
  dword_60C86990 = 0;
  dword_60C86994 = (int)SE_VOC_JR_ref_3;
  dword_60C86998 = 0;
  dword_60C8699C = (int)nullsub_2814;
  dword_60C869A0 = 0;
  dword_60C869A4 = (int)&off_60BD0C90;
  unk_60C869A8 = CurrentStateID + 3;
  dword_60C869AC = (int)sub_60112A64;
  dword_60C869B0 = 0;
  dword_60C869B4 = (int)sub_60112C84;
  dword_60C869B8 = 0;
  dword_60C869BC = (int)nullsub_2815;
  dword_60C869C0 = 0;
  dword_60C869C4 = (int)&off_60BD0C90;
  unk_60C869C8 = CurrentStateID + 4;
  unk_60C869CC = 1092;
  unk_60C869D0 = 1;
  dword_60C869D4 = 1096;
  dword_60C869D8 = 1;
  dword_60C869DC = 1100;
  dword_60C869E0 = 1;
  dword_60C869E4 = (int)&off_60BD0C90;
  unk_60C869E8 = CurrentStateID + 5;
  dword_60C869EC = (int)sub_60112FA0;
  dword_60C869F0 = 0;
  dword_60C869F4 = (int)jcm_shot_st_wait_ref;
  dword_60C869F8 = 0;
  dword_60C869FC = (int)nullsub_2816;
  dword_60C86A00 = 0;
  dword_60C86A04 = (int)&off_60BD0C90;
  unk_60C86A08 = CurrentStateID + 6;
  dword_60C86A0C = (int)jcm_shot_ref;
  dword_60C86A10 = 0;
  dword_60C86A14 = (int)sub_601133B4;
  dword_60C86A18 = 0;
  dword_60C86A1C = (int)sub_601134BC;
  dword_60C86A20 = 0;
  dword_60C86A24 = (int)&off_60BD0C90;
  unk_60C86A28 = CurrentStateID + 7;
  dword_60C86A2C = (int)jcm_wait_ref_1134CC;
  dword_60C86A30 = 0;
  dword_60C86A34 = (int)sub_601135AC;
  dword_60C86A38 = 0;
  dword_60C86A3C = (int)sub_60113610;
  dword_60C86A40 = 0;
  unk_60C86A44 = &off_60BD0C90;
  unk_60C86A48 = CurrentStateID + 8;
  dword_60C86A4C = (int)jcm_special_ref;
  dword_60C86A50 = 0;
  dword_60C86A54 = (int)sub_6011370C;
  dword_60C86A58 = 0;
  dword_60C86A5C = (int)nullsub_2817;
  dword_60C86A60 = 0;
  dword_60C86A64 = (int)&off_60BD0C90;
  unk_60C86A68 = CurrentStateID + 9;
  dword_60C86A6C = (int)jcm_damage_s_ref;
  dword_60C86A70 = 0;
  dword_60C86A74 = (int)jcm_damage_ref;
  dword_60C86A78 = 0;
  dword_60C86A7C = (int)BowserJrBase__vf458__thunk_113B9C;
  dword_60C86A80 = 0;
  unk_60C86A84 = &off_60BD0C90;
  unk_60C86A88 = CurrentStateID + 10;
  unk_60C86A8C = 1116;
  unk_60C86A90 = 1;
  dword_60C86A94 = 1120;
  dword_60C86A98 = 1;
  dword_60C86A9C = 1124;
  dword_60C86AA0 = 1;
  dword_60C86AA4 = (int)&off_60BD0C90;
  unk_60C86AA8 = CurrentStateID + 11;
  unk_60C86AAC = 1128;
  unk_60C86AB0 = 1;
  dword_60C86AB4 = 1132;
  dword_60C86AB8 = 1;
  dword_60C86ABC = 1136;
  dword_60C86AC0 = 1;
  dword_60C86AC4 = (int)&off_60BD0C90;
  unk_60C86AC8 = CurrentStateID + 12;
  unk_60C86ACC = 456;
  unk_60C86AD0 = 1;
  dword_60C86AD4 = 460;
  dword_60C86AD8 = 1;
  dword_60C86ADC = 464;
  dword_60C86AE0 = 1;
  unk_60C86AE4 = &off_60BD0C90;
  unk_60C86AE8 = CurrentStateID + 13;
  dword_60C86AEC = (int)jc_wait_ref_113BA0;
  dword_60C86AF0 = 0;
  dword_60C86AF4 = (int)SE_AMB_WATER_SURFACE_DOWN_ref;
  dword_60C86AF8 = 0;
  dword_60C86AFC = (int)nullsub_2818;
  dword_60C86B00 = 0;
  CurrentStateID += 14;
  dword_60C86B08 = CurrentStateID;
  dword_60C86B04 = (int)&off_60BD0C90;
  dword_60C86B0C = (int)sub_601140F4;
  dword_60C86B10 = 0;
  dword_60C86B14 = (int)sub_601142E0;
  dword_60C86B18 = 0;
  dword_60C86B1C = (int)nullsub_2819;
  dword_60C86B20 = 0;
  return nullsub_2819;
}
