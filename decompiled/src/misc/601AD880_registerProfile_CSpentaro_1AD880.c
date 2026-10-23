/* registerProfile_CSpentaro_1AD880
 * address: 0x601AD880   size: 1172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_CSpentaro_1AD880()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  dword_60C8A8A0 = 0;
  dword_60C8A8A4 = 0;
  dword_60C8A8A8 = 0;
  dword_60C8A8AC = 1103626240;
  dword_60C8A8B0 = 0;
  dword_60C8A8B4 = 1101004800;
  dword_60C8A8B8 = 0;
  dword_60C8A69C = (int)&sead__SafeStringBase__vtable;
  unk_60C8A6A0 = "attack_fast";
  unk_60C8A6A4 = &sead__SafeStringBase__vtable;
  dword_60C8A6A8 = (int)"turn";
  dword_60C8A6AC = (int)&sead__SafeStringBase__vtable;
  dword_60C8A6B0 = (int)"dead";
  sub_60000288();
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABFDF1;
  Profile__ctor(&stru_60C8A6B4, Actor_CSpentaro_build, 0x381u, &v2, 0, 0);
  *v0 = &off_60BD65E8;
  dword_60C8A6D0 = CurrentStateID + 1;
  dword_60C8A6CC = (int)&off_60BD66B0;
  dword_60C8A6D4 = (int)nullsub_2954;
  dword_60C8A6D8 = 0;
  dword_60C8A6DC = (int)sub_601ADED4;
  dword_60C8A6E0 = 0;
  dword_60C8A6E4 = (int)nullsub_2955;
  dword_60C8A6E8 = 0;
  unk_60C8A6EC = &off_60BD66B0;
  unk_60C8A6F0 = CurrentStateID + 2;
  dword_60C8A6F4 = (int)&loc_601ADF00;
  dword_60C8A6F8 = 0;
  dword_60C8A6FC = (int)dword_601ADF8C;
  dword_60C8A700 = 0;
  dword_60C8A704 = (int)nullsub_2956;
  dword_60C8A708 = 0;
  unk_60C8A70C = &off_60BD66B0;
  unk_60C8A710 = CurrentStateID + 3;
  dword_60C8A714 = (int)sub_601AE100;
  dword_60C8A718 = 0;
  dword_60C8A71C = (int)sub_601AE134;
  dword_60C8A720 = 0;
  dword_60C8A724 = (int)nullsub_2957;
  dword_60C8A728 = 0;
  dword_60C8A72C = (int)&off_60BD66B0;
  unk_60C8A730 = CurrentStateID + 4;
  dword_60C8A734 = (int)&loc_601AE258;
  dword_60C8A738 = 0;
  dword_60C8A73C = (int)&loc_601AE4C8;
  dword_60C8A740 = 0;
  dword_60C8A744 = (int)nullsub_2958;
  dword_60C8A748 = 0;
  dword_60C8A74C = (int)&off_60BD66B0;
  unk_60C8A750 = CurrentStateID + 5;
  dword_60C8A754 = (int)skl_root_ref_1AEA70;
  dword_60C8A758 = 0;
  dword_60C8A75C = (int)&loc_601AEBC4;
  dword_60C8A760 = 0;
  dword_60C8A764 = (int)nullsub_2959;
  dword_60C8A768 = 0;
  dword_60C8A76C = (int)&off_60BD66B0;
  unk_60C8A770 = CurrentStateID + 6;
  dword_60C8A774 = (int)sub_601AEF14;
  dword_60C8A778 = 0;
  dword_60C8A77C = (int)&loc_601AEF70;
  dword_60C8A780 = 0;
  dword_60C8A784 = (int)nullsub_2960;
  dword_60C8A788 = 0;
  unk_60C8A78C = &off_60BD66B0;
  unk_60C8A790 = CurrentStateID + 7;
  dword_60C8A794 = (int)sub_601AF1CC;
  dword_60C8A798 = 0;
  dword_60C8A79C = (int)&loc_601AF26C;
  dword_60C8A7A0 = 0;
  dword_60C8A7A4 = (int)nullsub_2961;
  dword_60C8A7A8 = 0;
  unk_60C8A7AC = &off_60BD66B0;
  unk_60C8A7B0 = CurrentStateID + 8;
  dword_60C8A7B4 = (int)nullsub_2962;
  dword_60C8A7B8 = 0;
  dword_60C8A7BC = (int)sub_601AF4F8;
  dword_60C8A7C0 = 0;
  dword_60C8A7C4 = (int)nullsub_2963;
  dword_60C8A7C8 = 0;
  unk_60C8A7CC = &off_60BD66B0;
  unk_60C8A7D0 = CurrentStateID + 9;
  dword_60C8A7D4 = (int)sub_601AF6BC;
  dword_60C8A7D8 = 0;
  dword_60C8A7DC = (int)sub_601AF754;
  dword_60C8A7E0 = 0;
  dword_60C8A7E4 = (int)nullsub_2964;
  dword_60C8A7E8 = 0;
  unk_60C8A7EC = &off_60BD66B0;
  unk_60C8A7F0 = CurrentStateID + 10;
  dword_60C8A7F4 = (int)sub_601AF8AC;
  dword_60C8A7F8 = 0;
  dword_60C8A7FC = (int)sub_601AF8E0;
  dword_60C8A800 = 0;
  dword_60C8A804 = (int)nullsub_2965;
  dword_60C8A808 = 0;
  dword_60C8A80C = (int)&off_60BD66B0;
  unk_60C8A810 = CurrentStateID + 11;
  dword_60C8A814 = (int)sub_601AFAA0;
  dword_60C8A818 = 0;
  dword_60C8A81C = (int)sub_601AFB18;
  dword_60C8A820 = 0;
  dword_60C8A824 = (int)nullsub_2966;
  dword_60C8A828 = 0;
  unk_60C8A82C = &off_60BD66B0;
  unk_60C8A830 = CurrentStateID + 12;
  dword_60C8A834 = (int)nullsub_2967;
  dword_60C8A838 = 0;
  dword_60C8A83C = (int)sub_601AFB5C;
  dword_60C8A840 = 0;
  dword_60C8A844 = (int)nullsub_2968;
  dword_60C8A848 = 0;
  unk_60C8A84C = &off_60BD66B0;
  unk_60C8A850 = CurrentStateID + 13;
  CurrentStateID += 14;
  dword_60C8A870 = CurrentStateID;
  dword_60C8A854 = (int)nullsub_2969;
  dword_60C8A86C = (int)&off_60BD66B0;
  dword_60C8A858 = 0;
  dword_60C8A874 = (int)sub_601AFBC4;
  dword_60C8A85C = (int)sub_601AFB94;
  dword_60C8A878 = 0;
  dword_60C8A860 = 0;
  dword_60C8A87C = (int)sub_601AFC18;
  dword_60C8A864 = (int)nullsub_2970;
  dword_60C8A868 = 0;
  dword_60C8A880 = 0;
  dword_60C8A884 = (int)nullsub_2971;
  dword_60C8A888 = 0;
  return &dword_60C8A86C;
}
