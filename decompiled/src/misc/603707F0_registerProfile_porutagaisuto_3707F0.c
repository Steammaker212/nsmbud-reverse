/* registerProfile_porutagaisuto_3707F0
 * address: 0x603707F0   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_porutagaisuto_3707F0()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C95ED4 = 0;
  dword_60C95ED8 = 0;
  dword_60C95EDC = 0;
  dword_60C95EE4 = CurrentStateID + 1;
  dword_60C95EE0 = (int)&off_60BF0898;
  dword_60C95EE8 = (int)nullsub_3430;
  dword_60C95EEC = 0;
  dword_60C95EF0 = (int)sub_6036DA18;
  dword_60C95EF4 = 0;
  dword_60C95EF8 = (int)nullsub_3431;
  dword_60C95EFC = 0;
  dword_60C95F04 = CurrentStateID + 2;
  dword_60C95F00 = (int)&off_60BF0898;
  dword_60C95F08 = (int)sub_6036DB14;
  dword_60C95F0C = 0;
  dword_60C95F10 = (int)sub_6036DB28;
  dword_60C95F14 = 0;
  dword_60C95F18 = (int)nullsub_3432;
  dword_60C95F1C = 0;
  dword_60C95F24 = CurrentStateID + 3;
  dword_60C95F20 = (int)&off_60BF0898;
  dword_60C95F28 = (int)sub_6036DB88;
  dword_60C95F2C = 0;
  dword_60C95F30 = (int)sub_6036DC6C;
  dword_60C95F34 = 0;
  dword_60C95F38 = (int)nullsub_3433;
  dword_60C95F3C = 0;
  dword_60C95F44 = CurrentStateID + 4;
  dword_60C95F40 = (int)&off_60BF0898;
  dword_60C95F48 = (int)nullsub_3434;
  dword_60C95F4C = 0;
  dword_60C95F50 = (int)sub_6036DD84;
  dword_60C95F54 = 0;
  dword_60C95F58 = (int)nullsub_3435;
  dword_60C95F5C = 0;
  dword_60C95F64 = CurrentStateID + 5;
  dword_60C95F60 = (int)&off_60BF0898;
  dword_60C95F68 = (int)&loc_6036DE34;
  dword_60C95F6C = 0;
  dword_60C95F70 = (int)&loc_6036DED4;
  dword_60C95F74 = 0;
  dword_60C95F78 = (int)nullsub_3436;
  dword_60C95F7C = 0;
  dword_60C95F84 = CurrentStateID + 6;
  dword_60C95F80 = (int)&off_60BF0898;
  dword_60C95F88 = (int)sub_6036E230;
  dword_60C95F8C = 0;
  dword_60C95F90 = (int)sub_6036E298;
  dword_60C95F94 = 0;
  dword_60C95F98 = (int)nullsub_3437;
  dword_60C95F9C = 0;
  dword_60C95FA4 = CurrentStateID + 7;
  dword_60C95FA0 = (int)&off_60BF0898;
  dword_60C95FA8 = (int)sub_6036E448;
  dword_60C95FAC = 0;
  dword_60C95FB0 = (int)sub_6036E4AC;
  dword_60C95FB4 = 0;
  dword_60C95FB8 = (int)nullsub_3438;
  dword_60C95FBC = 0;
  CurrentStateID += 8;
  dword_60C95FC4 = CurrentStateID;
  dword_60C95FC0 = (int)&off_60BF0898;
  dword_60C95FC8 = (int)sub_6036E680;
  dword_60C95FCC = 0;
  dword_60C95FD0 = (int)sub_6036E7D0;
  dword_60C95FD4 = 0;
  dword_60C95FD8 = (int)nullsub_189;
  dword_60C95FDC = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC5324;
  Profile__ctor(&stru_60C95FE0, Actor_porutagaisuto_build, 0x29Fu, &v0, &stru_60B0037C, 16);
}
