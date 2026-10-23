/* registerProfile_afterbattle_Demo_Boxing_BowserJr_03A12C
 * address: 0x6003A12C   size: 1348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_afterbattle_Demo_Boxing_BowserJr_03A12C())()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r0
  sead__SafeString v3[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C7FDC0 = 0;
  dword_60C7FDC4 = 0;
  dword_60C7FDC8 = 0;
  v3[0].vtable = &sead__SafeStringBase__vtable;
  v3[0].cstr = "ボクシングクッパJr.";
  Profile__ctor(&stru_60C7FDCC, Actor_afterbattle_Demo_Boxing_BowserJr_build, 824u, v3, &stru_60AF5210, 0);
  v3[0].vtable = &sead__SafeStringBase__vtable;
  *v0 = &off_60BC27D0;
  v3[0].cstr = "戦闘後デモボクシングクッパJr.";
  Profile__ctor(&stru_60C7FDE4, Actor_afterbattle_Demo_Boxing_BowserJr_build, 825u, v3, &stru_60AF5210, 0);
  *v1 = &off_60BC27DC;
  dword_60C7FE00 = CurrentStateID + 1;
  dword_60C7FDFC = (int)&off_60BC2CC0;
  dword_60C7FE04 = (int)sub_60034BE0;
  dword_60C7FE08 = 0;
  dword_60C7FE0C = (int)sub_60034C10;
  dword_60C7FE10 = 0;
  dword_60C7FE14 = (int)nullsub_2501;
  dword_60C7FE18 = 0;
  dword_60C7FE1C = (int)&off_60BC2CC0;
  unk_60C7FE20 = CurrentStateID + 2;
  dword_60C7FE24 = (int)jcb_demo_battleA_ref;
  dword_60C7FE28 = 0;
  dword_60C7FE2C = (int)SE_VOC_JR_ref;
  dword_60C7FE30 = 0;
  dword_60C7FE34 = (int)nullsub_2502;
  dword_60C7FE38 = 0;
  dword_60C7FE3C = (int)&off_60BC2CC0;
  unk_60C7FE40 = CurrentStateID + 3;
  dword_60C7FE44 = 1092;
  dword_60C7FE48 = 1;
  unk_60C7FE4C = 1096;
  unk_60C7FE50 = 1;
  unk_60C7FE54 = 1100;
  dword_60C7FE58 = 1;
  dword_60C7FE5C = (int)&off_60BC2CC0;
  unk_60C7FE60 = CurrentStateID + 4;
  dword_60C7FE64 = (int)sub_60034F8C;
  dword_60C7FE68 = 0;
  dword_60C7FE6C = (int)sub_60034FD0;
  dword_60C7FE70 = 0;
  dword_60C7FE74 = (int)nullsub_2503;
  dword_60C7FE78 = 0;
  unk_60C7FE7C = &off_60BC2CC0;
  unk_60C7FE80 = CurrentStateID + 5;
  dword_60C7FE84 = (int)jcb_attack_st_ref;
  dword_60C7FE88 = 0;
  dword_60C7FE8C = (int)sub_60035130;
  dword_60C7FE90 = 0;
  dword_60C7FE94 = (int)nullsub_2504;
  dword_60C7FE98 = 0;
  unk_60C7FE9C = &off_60BC2CC0;
  unk_60C7FEA0 = CurrentStateID + 6;
  dword_60C7FEA4 = (int)jcb_attack_st_wait_ref;
  dword_60C7FEA8 = 0;
  dword_60C7FEAC = (int)nullsub_2505;
  dword_60C7FEB0 = 0;
  dword_60C7FEB4 = (int)nullsub_2506;
  dword_60C7FEB8 = 0;
  unk_60C7FEBC = &off_60BC2CC0;
  unk_60C7FEC0 = CurrentStateID + 7;
  dword_60C7FEC4 = (int)jcb_attack_ed_ref;
  dword_60C7FEC8 = 0;
  dword_60C7FECC = (int)SE_VOC_JR_PUNCH_GO_ref;
  dword_60C7FED0 = 0;
  dword_60C7FED4 = (int)sub_60035478;
  dword_60C7FED8 = 0;
  dword_60C7FEDC = (int)&off_60BC2CC0;
  unk_60C7FEE0 = CurrentStateID + 8;
  dword_60C7FEE4 = (int)sub_600354A0;
  dword_60C7FEE8 = 0;
  dword_60C7FEEC = (int)sub_600354B8;
  dword_60C7FEF0 = 0;
  dword_60C7FEF4 = (int)nullsub_2507;
  dword_60C7FEF8 = 0;
  dword_60C7FEFC = (int)&off_60BC2CC0;
  unk_60C7FF00 = CurrentStateID + 9;
  dword_60C7FF04 = (int)sub_600354C8;
  dword_60C7FF08 = 0;
  dword_60C7FF0C = (int)sub_60035598;
  dword_60C7FF10 = 0;
  dword_60C7FF14 = (int)sub_60035DB0;
  dword_60C7FF18 = 0;
  dword_60C7FF1C = (int)&off_60BC2CC0;
  unk_60C7FF20 = CurrentStateID + 10;
  dword_60C7FF24 = (int)sub_60035DC0;
  dword_60C7FF28 = 0;
  dword_60C7FF2C = (int)sub_60035EFC;
  dword_60C7FF30 = 0;
  dword_60C7FF34 = (int)sub_600363BC;
  dword_60C7FF38 = 0;
  dword_60C7FF3C = (int)&off_60BC2CC0;
  unk_60C7FF40 = CurrentStateID + 11;
  dword_60C7FF44 = 1104;
  dword_60C7FF48 = 1;
  dword_60C7FF4C = 1108;
  dword_60C7FF50 = 1;
  dword_60C7FF54 = 1112;
  dword_60C7FF58 = 1;
  unk_60C7FF5C = &off_60BC2CC0;
  unk_60C7FF60 = CurrentStateID + 12;
  dword_60C7FF64 = 1116;
  dword_60C7FF68 = 1;
  dword_60C7FF6C = 1120;
  dword_60C7FF70 = 1;
  dword_60C7FF74 = 1124;
  dword_60C7FF78 = 1;
  unk_60C7FF7C = &off_60BC2CC0;
  unk_60C7FF80 = CurrentStateID + 13;
  dword_60C7FF84 = 1128;
  dword_60C7FF88 = 1;
  dword_60C7FF8C = 1132;
  dword_60C7FF90 = 1;
  dword_60C7FF94 = 1136;
  dword_60C7FF98 = 1;
  dword_60C7FF9C = (int)&off_60BC2CC0;
  unk_60C7FFA0 = CurrentStateID + 14;
  dword_60C7FFA4 = 456;
  dword_60C7FFA8 = 1;
  dword_60C7FFAC = 460;
  dword_60C7FFB0 = 1;
  dword_60C7FFB4 = 464;
  dword_60C7FFB8 = 1;
  unk_60C7FFBC = &off_60BC2CC0;
  unk_60C7FFC0 = CurrentStateID + 15;
  dword_60C7FFC4 = (int)sub_600363E4;
  dword_60C7FFC8 = 0;
  dword_60C7FFCC = (int)sub_60036428;
  dword_60C7FFD0 = 0;
  dword_60C7FFD4 = (int)nullsub_2508;
  dword_60C7FFD8 = 0;
  unk_60C7FFDC = &off_60BC2CC0;
  unk_60C7FFE0 = CurrentStateID + 16;
  dword_60C7FFE4 = (int)sub_600364B0;
  dword_60C7FFE8 = 0;
  dword_60C7FFEC = (int)sub_60036500;
  dword_60C7FFF0 = 0;
  dword_60C7FFF4 = (int)nullsub_132;
  dword_60C7FFF8 = 0;
  unk_60C7FFFC = &off_60BC2CC0;
  unk_60C80000 = CurrentStateID + 17;
  dword_60C80004 = (int)sub_60036528;
  dword_60C80008 = 0;
  dword_60C8000C = (int)SE_VOC_JR_READY_ref;
  dword_60C80010 = 0;
  dword_60C80014 = (int)nullsub_2509;
  dword_60C80018 = 0;
  CurrentStateID += 18;
  dword_60C80020 = CurrentStateID;
  dword_60C8001C = (int)&off_60BC2CC0;
  dword_60C80024 = (int)jc_demo_W7_shock2_ref;
  dword_60C80028 = 0;
  dword_60C8002C = (int)sub_60036924;
  dword_60C80030 = 0;
  dword_60C80034 = (int)nullsub_2510;
  dword_60C80038 = 0;
  return nullsub_2510;
}
