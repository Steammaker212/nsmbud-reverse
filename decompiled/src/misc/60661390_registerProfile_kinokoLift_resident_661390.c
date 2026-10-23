/* registerProfile_kinokoLift_resident_661390
 * address: 0x60661390   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_kinokoLift_resident_661390()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD5A34;
  Profile__ctor(&stru_60CB6878, Actor_kinokoLift_resident_build, 0xC9u, v1, &stru_60B07864, 2);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD5A50;
  Profile__ctor(&stru_60CB6890, Actor_kinokoLift_resident_build, 0xCAu, v1, &stru_60B07888, 2);
  dword_60CB68AC = CurrentStateID + 1;
  dword_60CB68A8 = (int)&off_60C14BF8;
  dword_60CB68B0 = (int)SE_OBJ_KINOKO_YOKO_LONGER_ref;
  dword_60CB68B4 = 0;
  dword_60CB68B8 = (int)&loc_6065FC90;
  dword_60CB68BC = 0;
  dword_60CB68C0 = (int)sub_6065FE10;
  dword_60CB68C4 = 0;
  unk_60CB68C8 = &off_60C14BF8;
  unk_60CB68CC = CurrentStateID + 2;
  dword_60CB68D0 = (int)nullsub_5061;
  dword_60CB68D4 = 0;
  dword_60CB68D8 = (int)sub_6065FE30;
  dword_60CB68DC = 0;
  dword_60CB68E0 = (int)sub_6065FE64;
  dword_60CB68E4 = 0;
  unk_60CB68E8 = &off_60C14BF8;
  unk_60CB68EC = CurrentStateID + 3;
  dword_60CB68F0 = (int)nullsub_5062;
  dword_60CB68F4 = 0;
  dword_60CB68F8 = (int)sub_6065FE84;
  dword_60CB68FC = 0;
  dword_60CB6900 = (int)sub_6065FECC;
  dword_60CB6904 = 0;
  unk_60CB6908 = &off_60C14BF8;
  unk_60CB690C = CurrentStateID + 4;
  dword_60CB6910 = (int)nullsub_5063;
  dword_60CB6914 = 0;
  dword_60CB6918 = (int)sub_6065FEEC;
  dword_60CB691C = 0;
  dword_60CB6920 = (int)sub_6065FF20;
  dword_60CB6924 = 0;
  unk_60CB6928 = &off_60C14BF8;
  unk_60CB692C = CurrentStateID + 5;
  dword_60CB6930 = (int)SE_OBJ_KINOKO_YOKO_SHORTER_ref;
  dword_60CB6934 = 0;
  dword_60CB6938 = (int)&loc_6065FF9C;
  dword_60CB693C = 0;
  dword_60CB6940 = (int)sub_60660118;
  dword_60CB6944 = 0;
  unk_60CB6948 = &off_60C14BF8;
  unk_60CB694C = CurrentStateID + 6;
  dword_60CB6950 = (int)nullsub_5064;
  dword_60CB6954 = 0;
  dword_60CB6958 = (int)sub_60660138;
  dword_60CB695C = 0;
  dword_60CB6960 = (int)sub_6066016C;
  dword_60CB6964 = 0;
  unk_60CB6968 = &off_60C14BF8;
  unk_60CB696C = CurrentStateID + 7;
  CurrentStateID += 8;
  dword_60CB698C = CurrentStateID;
  dword_60CB6970 = (int)nullsub_5065;
  dword_60CB6988 = (int)&off_60C14BF8;
  dword_60CB6974 = 0;
  dword_60CB6990 = (int)nullsub_5066;
  dword_60CB6978 = (int)sub_6066018C;
  dword_60CB6994 = 0;
  dword_60CB697C = 0;
  dword_60CB6998 = (int)sub_606601F4;
  dword_60CB6980 = (int)sub_606601D4;
  dword_60CB6984 = 0;
  dword_60CB699C = 0;
  dword_60CB69A0 = (int)sub_60660228;
  dword_60CB69A4 = 0;
  return &dword_60CB6988;
}
