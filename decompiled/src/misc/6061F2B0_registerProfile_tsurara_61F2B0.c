/* registerProfile_tsurara_61F2B0
 * address: 0x6061F2B0   size: 944   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (*registerProfile_tsurara_61F2B0())()
{
  sead__SafeString v1; // [sp+10h] [bp-28h] BYREF

  dword_60CB3830 = 0;
  dword_60CB3834 = 0;
  dword_60CB3838 = 0;
  dword_60CB383C = (int)&sead__SafeStringBase__vtable;
  dword_60CB3840 = (int)"obj_turara_rakka_S";
  dword_60CB3844 = (int)&sead__SafeStringBase__vtable;
  dword_60CB3848 = (int)"obj_turara_rakka_L";
  sub_60000288();
  dword_60CB384C = (int)&sead__SafeStringBase__vtable;
  dword_60CB3850 = (int)"gura_wait_S";
  dword_60CB3854 = (int)&sead__SafeStringBase__vtable;
  dword_60CB3858 = (int)"gura_wait_L";
  sub_60000288();
  dword_60CB385C = (int)&sead__SafeStringBase__vtable;
  dword_60CB3860 = (int)"gura_anim_S";
  dword_60CB3864 = (int)&sead__SafeStringBase__vtable;
  dword_60CB3868 = (int)"gura_anim_L";
  sub_60000288();
  dword_60CB386C = (int)&sead__SafeStringBase__vtable;
  dword_60CB3870 = (int)"rakka_anim_S";
  dword_60CB3874 = (int)&sead__SafeStringBase__vtable;
  dword_60CB3878 = (int)"rakka_anim_L";
  sub_60000288();
  dword_60CB387C = (int)&sead__SafeStringBase__vtable;
  dword_60CB3880 = (int)"obj_turara_rakka_S";
  dword_60CB3884 = (int)&sead__SafeStringBase__vtable;
  dword_60CB3888 = (int)"obj_turara_rakka_L";
  sub_60000288();
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3E29;
  Profile__ctor(&stru_60CB36F8, Actor_tsurara_build, 0x30Bu, &v1, &stru_60B067C8, 16);
  dword_60CB3714 = CurrentStateID + 1;
  dword_60CB3718 = 632;
  dword_60CB371C = 1;
  dword_60CB3720 = 636;
  dword_60CB3724 = 1;
  dword_60CB3728 = 640;
  dword_60CB372C = 1;
  dword_60CB3710 = (int)&off_60C11398;
  dword_60CB3730 = (int)&dword_60CB3898;
  dword_60CB3738 = CurrentStateID + 2;
  dword_60CB3734 = (int)&off_60C113AC;
  dword_60CB373C = (int)sub_6061F770;
  dword_60CB3740 = 0;
  dword_60CB3744 = (int)sub_6061F7AC;
  dword_60CB3748 = 0;
  dword_60CB374C = (int)nullsub_4920;
  dword_60CB3750 = 0;
  unk_60CB3754 = &off_60C113AC;
  unk_60CB3758 = CurrentStateID + 3;
  dword_60CB375C = (int)sub_6061F81C;
  dword_60CB3760 = 0;
  dword_60CB3764 = (int)&loc_6061F848;
  dword_60CB3768 = 0;
  dword_60CB376C = (int)nullsub_4921;
  dword_60CB3770 = 0;
  dword_60CB3774 = &off_60C113AC;
  unk_60CB3778 = CurrentStateID + 4;
  dword_60CB377C = (int)nullsub_4922;
  dword_60CB3780 = 0;
  dword_60CB3784 = (int)nullsub_4923;
  dword_60CB3788 = 0;
  dword_60CB378C = (int)nullsub_4924;
  dword_60CB3790 = 0;
  unk_60CB379C = 644;
  unk_60CB37A0 = 1;
  unk_60CB37A4 = 648;
  dword_60CB37A8 = 1;
  dword_60CB37AC = 652;
  dword_60CB37B0 = 1;
  unk_60CB3794 = &off_60C11398;
  unk_60CB3798 = CurrentStateID + 5;
  dword_60CB37B4 = (int)&unk_60CB38BC;
  dword_60CB37C0 = 656;
  dword_60CB37C4 = 1;
  dword_60CB37C8 = 660;
  dword_60CB37CC = 1;
  dword_60CB37D0 = 664;
  dword_60CB37D4 = 1;
  unk_60CB37B8 = &off_60C11398;
  unk_60CB37BC = CurrentStateID + 6;
  dword_60CB37D8 = (int)&dword_60CB38E0;
  unk_60CB37DC = &off_60C113AC;
  unk_60CB37E0 = CurrentStateID + 7;
  dword_60CB37E4 = (int)sub_6061F974;
  dword_60CB37E8 = 0;
  dword_60CB37EC = (int)&loc_6061F9C4;
  dword_60CB37F0 = 0;
  dword_60CB37F4 = (int)nullsub_4925;
  dword_60CB37F8 = 0;
  CurrentStateID += 8;
  dword_60CB3800 = CurrentStateID;
  dword_60CB37FC = (int)&off_60C113AC;
  dword_60CB3804 = (int)sub_6061FB48;
  dword_60CB3808 = 0;
  dword_60CB380C = (int)&loc_6061FBC8;
  dword_60CB3810 = 0;
  dword_60CB3814 = (int)nullsub_4926;
  dword_60CB3818 = 0;
  return nullsub_4926;
}
