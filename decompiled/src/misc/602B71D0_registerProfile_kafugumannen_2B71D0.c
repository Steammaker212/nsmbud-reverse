/* registerProfile_kafugumannen_2B71D0
 * address: 0x602B71D0   size: 864   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char *registerProfile_kafugumannen_2B71D0()
{
  sead__SafeString v1[5]; // [sp+10h] [bp-28h] BYREF

  dword_60C90FB0 = 0;
  dword_60C90FB4 = 0;
  dword_60C90FB8 = 0;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC3941;
  Profile__ctor(&stru_60C90EAC, Actor_kafugumannen_build, 0x225u, v1, &stru_60AFE634, 530);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC3954;
  Profile__ctor(&stru_60C90EC4, Actor_kafugumannen_build, 0x226u, v1, &stru_60AFE634, 530);
  dword_60C90EE0 = CurrentStateID + 1;
  dword_60C90EDC = (int)&off_60BE4130;
  dword_60C90EE4 = (int)sub_602B6460;
  dword_60C90EE8 = 0;
  dword_60C90EEC = (int)&loc_602B650C;
  dword_60C90EF0 = 0;
  dword_60C90EF4 = (int)sub_602B68C8;
  dword_60C90EF8 = 0;
  unk_60C90EFC = &off_60BE4130;
  unk_60C90F00 = CurrentStateID + 2;
  dword_60C90F04 = (int)sub_602B68DC;
  dword_60C90F08 = 0;
  dword_60C90F0C = (int)&loc_602B6910;
  dword_60C90F10 = 0;
  dword_60C90F14 = (int)sub_602B6AD4;
  dword_60C90F18 = 0;
  unk_60C90F1C = &off_60BE4130;
  unk_60C90F20 = CurrentStateID + 3;
  dword_60C90F24 = (int)sub_602B6AE8;
  dword_60C90F28 = 0;
  dword_60C90F2C = (int)&loc_602B6B80;
  dword_60C90F30 = 0;
  dword_60C90F34 = (int)sub_602B6C80;
  dword_60C90F38 = 0;
  dword_60C90F3C = (int)&off_60BE4130;
  unk_60C90F40 = CurrentStateID + 4;
  dword_60C90F44 = (int)sub_602B6C94;
  dword_60C90F48 = 0;
  dword_60C90F4C = (int)&loc_602B6D14;
  dword_60C90F50 = 0;
  dword_60C90F54 = (int)sub_602B6EFC;
  dword_60C90F58 = 0;
  dword_60C90F5C = (int)&off_60BE4130;
  unk_60C90F60 = CurrentStateID + 5;
  CurrentStateID += 6;
  dword_60C90FD4 = (int)&sead__SafeStringBase__vtable;
  dword_60C90F64 = (int)sub_602B6F1C;
  dword_60C90F68 = 0;
  dword_60C90F80 = CurrentStateID;
  dword_60C90F84 = 456;
  dword_60C90F88 = 1;
  dword_60C90F6C = (int)&loc_602B6F70;
  dword_60C90F70 = 0;
  dword_60C90F74 = (int)sub_602B71B0;
  dword_60C90F78 = 0;
  dword_60C90F8C = 460;
  dword_60C90F90 = 1;
  dword_60C90F94 = 464;
  dword_60C90F98 = 1;
  dword_60C90F7C = (int)&off_60BE4144;
  dword_60C90F9C = (int)&stru_60C90710;
  dword_60C90FD8 = (int)"fugu";
  dword_60C90FDC = (int)&sead__SafeStringBase__vtable;
  dword_60C90FE0 = (int)"fuguBig";
  sub_60000288();
  dword_60C90FE4 = (int)&sead__SafeStringBase__vtable;
  dword_60C90FE8 = (int)"fugu";
  dword_60C90FEC = (int)&sead__SafeStringBase__vtable;
  dword_60C90FF0 = (int)"fuguBig";
  sub_60000288();
  dword_60C90FF4 = (int)&sead__SafeStringBase__vtable;
  dword_60C90FF8 = (int)"swim";
  dword_60C90FFC = (int)&sead__SafeStringBase__vtable;
  dword_60C91000 = (int)"jump";
  sub_60000288();
  dword_60C90FBC = 0;
  dword_60C90FC0 = -1042284544;
  dword_60C90FC4 = 0;
  qmemcpy(&dword_60C90FC8, "fff?fff?fff?", 12);
  dword_60C91004 = 856;
  dword_60C91008 = 6;
  dword_60C9100C = (int)"SE_EMY_FUGUMANNEN_SPLASH";
  dword_60C91010 = 857;
  dword_60C91014 = 7;
  dword_60C91018 = (int)"SE_EMY_FUGUMANNEN_JUMP";
  return "SE_EMY_FUGUMANNEN_JUMP";
}
