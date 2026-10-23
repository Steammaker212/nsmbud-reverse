/* registerProfile_ZN10BoomBoomW1C1EPK14Act_04FB70
 * address: 0x6004FB70   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_ZN10BoomBoomW1C1EPK14Act_04FB70())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60C8059C = 0;
  dword_60C805A0 = 0;
  dword_60C805A4 = 0;
  dword_60C80590 = (int)(float)((float)(2147500000.0 * 30.0) / 180.0);
  dword_60C80594 = -1091058194;
  dword_60C80598 = 1085412931;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = "ブンブン（Ｗ１砦）";
  Profile__ctor(&stru_60C80490, BoomBoomW1__ctor, 0x2A7u, &v2, &stru_60AF5278, 0);
  *v0 = &off_60BC324C;
  dword_60C804AC = CurrentStateID + 1;
  dword_60C804B0 = 1060;
  dword_60C804B4 = 1;
  dword_60C804B8 = 1064;
  dword_60C804BC = 1;
  dword_60C804C0 = 1068;
  dword_60C804C4 = 1;
  dword_60C804A8 = (int)&off_60BC3774;
  dword_60C804C8 = (int)&dword_60C80654;
  dword_60C804D8 = 1;
  dword_60C804DC = 1224;
  dword_60C804E0 = 1;
  dword_60C804E4 = 1228;
  dword_60C804E8 = 1;
  dword_60C804CC = (int)&off_60BC3774;
  unk_60C804D0 = CurrentStateID + 2;
  unk_60C804D4 = 1220;
  dword_60C804EC = (int)&NullState;
  dword_60C804F8 = 1232;
  dword_60C804FC = 1;
  dword_60C80500 = 1236;
  dword_60C80504 = 1;
  dword_60C80508 = 1240;
  dword_60C8050C = 1;
  unk_60C804F0 = &off_60BC3774;
  unk_60C804F4 = CurrentStateID + 3;
  dword_60C80510 = (int)&NullState;
  dword_60C8051C = 1244;
  dword_60C80520 = 1;
  dword_60C80524 = 1248;
  dword_60C80528 = 1;
  dword_60C8052C = 1252;
  dword_60C80530 = 1;
  dword_60C80514 = (int)&off_60BC3774;
  unk_60C80518 = CurrentStateID + 4;
  dword_60C80534 = (int)&NullState;
  dword_60C8053C = CurrentStateID + 5;
  dword_60C80538 = (int)&off_60BC3788;
  dword_60C80540 = (int)&loc_6004D514;
  dword_60C80544 = 0;
  dword_60C80548 = (int)sub_6004D634;
  dword_60C8054C = 0;
  dword_60C80550 = (int)nullsub_2526;
  dword_60C80554 = 0;
  CurrentStateID += 6;
  dword_60C8055C = CurrentStateID;
  dword_60C80558 = (int)&off_60BC3788;
  dword_60C80560 = (int)sub_6004D76C;
  dword_60C80564 = 0;
  dword_60C80568 = (int)sub_6004D7B4;
  dword_60C8056C = 0;
  dword_60C80570 = (int)nullsub_2527;
  dword_60C80574 = 0;
  return nullsub_2527;
}
