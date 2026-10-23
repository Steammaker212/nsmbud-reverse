/* sub_6049A38C
 * address: 0x6049A38C   size: 956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6049A38C()
{
  dword_60CA06F0 = 0;
  dword_60CA06F4 = 0;
  dword_60CA06F8 = 0;
  dword_60CA05A4 = CurrentStateID + 1;
  dword_60CA05A0 = (int)&off_60BFDBD0;
  dword_60CA05A8 = (int)sub_60497460;
  dword_60CA05AC = 0;
  dword_60CA05B0 = (int)nullsub_3833;
  dword_60CA05B4 = 0;
  dword_60CA05B8 = (int)nullsub_3834;
  dword_60CA05BC = 0;
  stru_60CA05C0.vtable = &off_60BFDBD0;
  stru_60CA05C0.id = CurrentStateID + 2;
  dword_60CA05C8 = (int)sub_60497510;
  dword_60CA05CC = 0;
  dword_60CA05D0 = (int)sub_604976AC;
  dword_60CA05D4 = 0;
  dword_60CA05D8 = (int)nullsub_3835;
  dword_60CA05DC = 0;
  unk_60CA05E0 = &off_60BFDBD0;
  unk_60CA05E4 = CurrentStateID + 3;
  dword_60CA05E8 = (int)sub_60497754;
  dword_60CA05EC = 0;
  dword_60CA05F0 = (int)sub_60497778;
  dword_60CA05F4 = 0;
  dword_60CA05F8 = (int)sub_604977F8;
  dword_60CA05FC = 0;
  unk_60CA0600 = &off_60BFDBD0;
  unk_60CA0604 = CurrentStateID + 4;
  dword_60CA0608 = (int)nullsub_3836;
  dword_60CA060C = 0;
  dword_60CA0610 = (int)sub_60497810;
  dword_60CA0614 = 0;
  dword_60CA0618 = (int)nullsub_3837;
  dword_60CA061C = 0;
  unk_60CA0620 = &off_60BFDBD0;
  unk_60CA0624 = CurrentStateID + 5;
  dword_60CA0628 = (int)sub_60497964;
  dword_60CA062C = 0;
  dword_60CA0630 = (int)sub_60497A60;
  dword_60CA0634 = 0;
  dword_60CA0638 = (int)nullsub_3838;
  dword_60CA063C = 0;
  stru_60CA0640.vtable = &off_60BFDBD0;
  stru_60CA0640.id = CurrentStateID + 6;
  dword_60CA0648 = (int)sub_60497A80;
  dword_60CA064C = 0;
  dword_60CA0650 = (int)sub_60497C44;
  dword_60CA0654 = 0;
  dword_60CA0658 = (int)nullsub_3839;
  dword_60CA065C = 0;
  stru_60CA0660.vtable = &off_60BFDBD0;
  stru_60CA0660.id = CurrentStateID + 7;
  dword_60CA0668 = (int)sub_60497D08;
  dword_60CA066C = 0;
  dword_60CA0670 = (int)sub_60497ECC;
  dword_60CA0674 = 0;
  dword_60CA0678 = (int)sub_604983D8;
  dword_60CA067C = 0;
  stru_60CA0680.vtable = &off_60BFDBD0;
  stru_60CA0680.id = CurrentStateID + 8;
  dword_60CA0688 = (int)sub_604984AC;
  dword_60CA068C = 0;
  dword_60CA0690 = (int)sub_60498514;
  dword_60CA0694 = 0;
  dword_60CA0698 = (int)nullsub_3840;
  dword_60CA069C = 0;
  stru_60CA06A0.vtable = &off_60BFDBD0;
  stru_60CA06A0.id = CurrentStateID + 9;
  CurrentStateID += 10;
  dword_60CA06C4 = CurrentStateID;
  dword_60CA06A8 = (int)sub_604986AC;
  dword_60CA06C0 = (int)&off_60BFDBD0;
  dword_60CA06AC = 0;
  dword_60CA06C8 = (int)sub_60498758;
  dword_60CA06B0 = (int)sub_604986CC;
  dword_60CA06CC = 0;
  dword_60CA06B4 = 0;
  dword_60CA06D0 = (int)sub_60498834;
  dword_60CA06B8 = (int)nullsub_3841;
  dword_60CA06BC = 0;
  dword_60CA06D4 = 0;
  dword_60CA06D8 = (int)nullsub_3842;
  dword_60CA06DC = 0;
  dword_60CA06E0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA06E4 = (int)"ChangePlayerNum";
  dword_60CA06E8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA06EC = (int)"bflyt";
  dword_60CA070C = (int)&sead__SafeStringBase__vtable;
  dword_60CA0710 = (int)"In";
  dword_60CA0714 = (int)&sead__SafeStringBase__vtable;
  dword_60CA0718 = (int)"PlayerNum";
  dword_60CA071C = (int)&sead__SafeStringBase__vtable;
  dword_60CA0720 = (int)"Out";
  sub_60000288();
  dword_60CA06FC = (int)&sead__SafeStringBase__vtable;
  dword_60CA0700 = (int)"G_InOut_00";
  dword_60CA0704 = (int)&sead__SafeStringBase__vtable;
  dword_60CA0708 = (int)"G_PlayerNum_00";
  sub_60000288();
  dword_60CA0724 = (int)&sead__SafeStringBase__vtable;
  *(_DWORD *)algn_60CA0728 = "N_Player_00";
  *(_DWORD *)&algn_60CA0728[4] = &sead__SafeStringBase__vtable;
  dword_60CA0730 = (int)"N_Player_01";
  dword_60CA0734 = (int)&sead__SafeStringBase__vtable;
  dword_60CA0738 = (int)"N_Player_02";
  dword_60CA073C = (int)&sead__SafeStringBase__vtable;
  dword_60CA0740 = (int)"N_Player_03";
  return sub_60000288();
}
