/* registerProfile_honeBuzzy_2D9E58
 * address: 0x602D9E58   size: 944   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_honeBuzzy_2D9E58()
{
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C91D7C = 0;
  dword_60C91D80 = 0;
  dword_60C91D84 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC3CE5;
  Profile__ctor(&stru_60C91C70, Actor_honeBuzzy_build, 0x210u, &v1, &stru_60AFEB50, 18);
  dword_60C91C8C = CurrentStateID + 1;
  dword_60C91C88 = (int)&off_60BE6C8C;
  dword_60C91C90 = (int)&loc_602D7F70;
  dword_60C91C94 = 0;
  dword_60C91C98 = (int)sub_602D7FF4;
  dword_60C91C9C = 0;
  dword_60C91CA0 = (int)nullsub_3283;
  dword_60C91CA4 = 0;
  dword_60C91CA8 = (int)&off_60BE6C8C;
  *(_DWORD *)algn_60C91CAC = CurrentStateID + 2;
  dword_60C91CB0 = (int)&loc_602D8228;
  dword_60C91CB4 = 0;
  dword_60C91CB8 = (int)sub_602D82CC;
  dword_60C91CBC = 0;
  dword_60C91CC0 = (int)nullsub_3284;
  dword_60C91CC4 = 0;
  dword_60C91CC8 = (int)&off_60BE6C8C;
  *(_DWORD *)algn_60C91CCC = CurrentStateID + 3;
  dword_60C91CD0 = (int)&loc_602D8440;
  dword_60C91CD4 = 0;
  dword_60C91CD8 = (int)&loc_602D8540;
  dword_60C91CDC = 0;
  dword_60C91CE0 = (int)sub_602D89FC;
  dword_60C91CE4 = 0;
  dword_60C91CE8 = (int)&off_60BE6C8C;
  *(_DWORD *)algn_60C91CEC = CurrentStateID + 4;
  dword_60C91CF0 = (int)&loc_602D8A0C;
  dword_60C91CF4 = 0;
  dword_60C91CF8 = (int)&loc_602D8BF8;
  dword_60C91CFC = 0;
  dword_60C91D00 = (int)sub_602D9114;
  dword_60C91D04 = 0;
  dword_60C91D08 = (int)&off_60BE6C8C;
  *(_DWORD *)algn_60C91D0C = CurrentStateID + 5;
  CurrentStateID += 6;
  dword_60C91D6C = (int)&sead__SafeStringBase__vtable;
  dword_60C91D2C = CurrentStateID;
  dword_60C91D10 = (int)&loc_602D9154;
  dword_60C91D14 = 0;
  dword_60C91D30 = 456;
  dword_60C91D34 = 1;
  dword_60C91D38 = 460;
  dword_60C91D3C = 1;
  dword_60C91D40 = 464;
  dword_60C91D44 = 1;
  dword_60C91D18 = (int)&loc_602D9358;
  dword_60C91D1C = 0;
  dword_60C91D28 = (int)&off_60BE6CA0;
  dword_60C91D20 = (int)sub_602D9DD0;
  dword_60C91D24 = 0;
  dword_60C91D48 = (int)&stru_60C90710;
  dword_60C91D70 = (int)"met_hone";
  dword_60C91D74 = (int)&sead__SafeStringBase__vtable;
  dword_60C91D78 = (int)"met_hone";
  dword_60C91DB0 = (int)&sead__SafeStringBase__vtable;
  unk_60C91DB4 = "met_hone_parts0";
  unk_60C91DB8 = &sead__SafeStringBase__vtable;
  dword_60C91DBC = (int)"met_hone_parts1";
  dword_60C91DC0 = (int)&sead__SafeStringBase__vtable;
  dword_60C91DC4 = (int)"met_hone_parts2";
  dword_60C91DC8 = (int)&sead__SafeStringBase__vtable;
  dword_60C91DCC = (int)"met_hone_parts3";
  dword_60C91DD0 = (int)&sead__SafeStringBase__vtable;
  dword_60C91DD4 = (int)"met_hone_parts4";
  dword_60C91DD8 = (int)&sead__SafeStringBase__vtable;
  dword_60C91DDC = (int)"met_hone_parts5";
  dword_60C91DE0 = (int)&sead__SafeStringBase__vtable;
  dword_60C91DE4 = (int)"met_hone_parts6";
  sub_60000288();
  dword_60C91E50 = (int)&sead__SafeStringBase__vtable;
  *(_DWORD *)algn_60C91E54 = "walk";
  dword_60C91E58 = 1;
  dword_60C91E5C = 1082130432;
  dword_60C91E60 = (int)&sead__SafeStringBase__vtable;
  dword_60C91E64 = (int)"down";
  dword_60C91E68 = 0;
  dword_60C91E6C = 1082130432;
  dword_60C91E70 = (int)&sead__SafeStringBase__vtable;
  dword_60C91E74 = (int)"down_knock";
  dword_60C91E78 = 0;
  dword_60C91E7C = 1082130432;
  dword_60C91E80 = (int)&sead__SafeStringBase__vtable;
  dword_60C91E84 = (int)"revive";
  dword_60C91E88 = 0;
  dword_60C91E8C = 1082130432;
  dword_60C91E90 = (int)&sead__SafeStringBase__vtable;
  dword_60C91E94 = (int)"toge_in";
  dword_60C91E98 = 0;
  dword_60C91E9C = 0;
  dword_60C91EA0 = (int)&sead__SafeStringBase__vtable;
  dword_60C91EA4 = (int)"toge_out";
  dword_60C91EA8 = 0;
  dword_60C91EAC = 1082130432;
  dword_60C91EB0 = (int)&sead__SafeStringBase__vtable;
  dword_60C91EB4 = (int)"toge_wait";
  dword_60C91EB8 = 1;
  dword_60C91EBC = 0;
  sub_60000288();
  dword_60C91D60 = 656175559;
  return 656175559;
}
