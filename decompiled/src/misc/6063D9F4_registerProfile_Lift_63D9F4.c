/* registerProfile_Lift_63D9F4
 * address: 0x6063D9F4   size: 876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Lift_63D9F4()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60CB5898 = 0;
  dword_60CB589C = 0;
  dword_60CB58A0 = 0;
  dword_60CB58A4 = (int)&sead__SafeStringBase__vtable;
  dword_60CB58A8 = (int)"leaf1";
  dword_60CB58AC = (int)&sead__SafeStringBase__vtable;
  dword_60CB58B0 = (int)"leaf2";
  dword_60CB58B4 = (int)&sead__SafeStringBase__vtable;
  dword_60CB58B8 = (int)"leaf3";
  sub_60000288();
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD501E;
  Profile__ctor(&stru_60CB5718, Actor_Lift_build, 0x104u, &v1, &stru_60B07368, 2);
  dword_60CB5734 = CurrentStateID + 1;
  dword_60CB5730 = (int)&off_60C131D4;
  dword_60CB5738 = (int)sub_6063E0B8;
  dword_60CB573C = 0;
  dword_60CB5740 = (int)sub_6063E234;
  dword_60CB5744 = 0;
  dword_60CB5748 = (int)nullsub_4982;
  dword_60CB574C = 0;
  unk_60CB5750 = &off_60C131D4;
  unk_60CB5754 = CurrentStateID + 2;
  dword_60CB5758 = (int)sub_6063E3C4;
  dword_60CB575C = 0;
  dword_60CB5760 = (int)sub_6063E3F4;
  dword_60CB5764 = 0;
  dword_60CB5768 = (int)nullsub_4983;
  dword_60CB576C = 0;
  unk_60CB5770 = &off_60C131D4;
  unk_60CB5774 = CurrentStateID + 3;
  dword_60CB5778 = (int)sub_6063E4C4;
  dword_60CB577C = 0;
  dword_60CB5780 = (int)sub_6063E4EC;
  dword_60CB5784 = 0;
  dword_60CB5788 = (int)nullsub_4984;
  dword_60CB578C = 0;
  unk_60CB5790 = &off_60C131D4;
  unk_60CB5794 = CurrentStateID + 4;
  dword_60CB5798 = (int)sub_6063E524;
  dword_60CB579C = 0;
  dword_60CB57A0 = (int)sub_6063E584;
  dword_60CB57A4 = 0;
  dword_60CB57A8 = (int)nullsub_4985;
  dword_60CB57AC = 0;
  unk_60CB57B0 = &off_60C131D4;
  unk_60CB57B4 = CurrentStateID + 5;
  dword_60CB57B8 = (int)nullsub_4986;
  dword_60CB57BC = 0;
  dword_60CB57C0 = (int)sub_6063E5F8;
  dword_60CB57C4 = 0;
  dword_60CB57C8 = (int)nullsub_4987;
  dword_60CB57CC = 0;
  unk_60CB57D0 = &off_60C131D4;
  unk_60CB57D4 = CurrentStateID + 6;
  dword_60CB57D8 = (int)sub_6063E660;
  dword_60CB57DC = 0;
  dword_60CB57E0 = (int)sub_6063E6A4;
  dword_60CB57E4 = 0;
  dword_60CB57E8 = (int)nullsub_4988;
  dword_60CB57EC = 0;
  unk_60CB57F0 = &off_60C131D4;
  unk_60CB57F4 = CurrentStateID + 7;
  dword_60CB57F8 = (int)sub_6063E6D0;
  dword_60CB57FC = 0;
  dword_60CB5800 = (int)sub_6063E6E0;
  dword_60CB5804 = 0;
  dword_60CB5808 = (int)nullsub_4989;
  dword_60CB580C = 0;
  unk_60CB5810 = &off_60C131D4;
  unk_60CB5814 = CurrentStateID + 8;
  dword_60CB5818 = (int)sub_6063E71C;
  dword_60CB581C = 0;
  dword_60CB5820 = (int)sub_6063E75C;
  dword_60CB5824 = 0;
  dword_60CB5828 = (int)nullsub_4990;
  dword_60CB582C = 0;
  unk_60CB5830 = &off_60C131D4;
  unk_60CB5834 = CurrentStateID + 9;
  CurrentStateID += 10;
  dword_60CB5854 = CurrentStateID;
  dword_60CB5838 = (int)sub_6063E9A8;
  dword_60CB5850 = (int)&off_60C131D4;
  dword_60CB583C = 0;
  dword_60CB5858 = (int)nullsub_4992;
  dword_60CB5840 = (int)sub_6063EA34;
  dword_60CB585C = 0;
  dword_60CB5844 = 0;
  dword_60CB5860 = (int)nullsub_4993;
  dword_60CB5848 = (int)nullsub_4991;
  dword_60CB584C = 0;
  dword_60CB5864 = 0;
  dword_60CB5868 = (int)nullsub_4994;
  dword_60CB586C = 0;
  return &dword_60CB5850;
}
