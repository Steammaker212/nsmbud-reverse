/* registerProfile_kokaBuzzy_34C42C
 * address: 0x6034C42C   size: 1236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_kokaBuzzy_34C42C()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C94D40 = 0;
  dword_60C94D44 = 0;
  dword_60C94D48 = 0;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC4EA0;
  Profile__ctor(&stru_60C94B20, Actor_kokaBuzzy_build, 0x17Du, v1, &stru_60AFFCC8, 18);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC4EAA;
  Profile__ctor(&stru_60C94B38, Actor_kokaBuzzy_build, 0x17Eu, v1, &stru_60AFFCEC, 18);
  dword_60C94B54 = CurrentStateID + 1;
  dword_60C94B50 = (int)&off_60BEE570;
  dword_60C94B58 = (int)sub_60349C14;
  dword_60C94B5C = 0;
  dword_60C94B60 = (int)&loc_60349DAC;
  dword_60C94B64 = 0;
  dword_60C94B68 = (int)nullsub_3388;
  dword_60C94B6C = 0;
  dword_60C94B70 = (int)&off_60BEE570;
  *(_DWORD *)algn_60C94B74 = CurrentStateID + 2;
  dword_60C94B78 = (int)sub_60349EA8;
  dword_60C94B7C = 0;
  dword_60C94B80 = (int)&loc_60349EC0;
  dword_60C94B84 = 0;
  dword_60C94B88 = (int)nullsub_3389;
  dword_60C94B8C = 0;
  dword_60C94B90 = (int)&off_60BEE570;
  *(_DWORD *)algn_60C94B94 = CurrentStateID + 3;
  dword_60C94B98 = (int)sub_60349F5C;
  dword_60C94B9C = 0;
  dword_60C94BA0 = (int)&loc_6034A0D4;
  dword_60C94BA4 = 0;
  dword_60C94BA8 = (int)nullsub_3390;
  dword_60C94BAC = 0;
  dword_60C94BB0 = (int)&off_60BEE570;
  *(_DWORD *)algn_60C94BB4 = CurrentStateID + 4;
  dword_60C94BB8 = (int)sub_6034A34C;
  dword_60C94BBC = 0;
  dword_60C94BC0 = (int)sub_6034A364;
  dword_60C94BC4 = 0;
  dword_60C94BC8 = (int)nullsub_3391;
  dword_60C94BCC = 0;
  unk_60C94BD0 = &off_60BEE570;
  unk_60C94BD4 = CurrentStateID + 5;
  dword_60C94BD8 = (int)sub_6034A3DC;
  dword_60C94BDC = 0;
  dword_60C94BE0 = (int)sub_6034A478;
  dword_60C94BE4 = 0;
  dword_60C94BE8 = (int)sub_6034A4FC;
  dword_60C94BEC = 0;
  dword_60C94BF4 = CurrentStateID + 6;
  dword_60C94BF8 = 784;
  dword_60C94BFC = 1;
  dword_60C94C00 = 788;
  dword_60C94C04 = 1;
  dword_60C94C08 = 792;
  dword_60C94C0C = 1;
  dword_60C94BF0 = (int)&off_60BEE584;
  dword_60C94C10 = (int)&ShellEnemy_StateID_slide;
  dword_60C94C18 = CurrentStateID + 7;
  dword_60C94C1C = 796;
  dword_60C94C20 = 1;
  dword_60C94C24 = 800;
  dword_60C94C28 = 1;
  dword_60C94C2C = 804;
  dword_60C94C30 = 1;
  dword_60C94C14 = (int)&off_60BEE584;
  dword_60C94C34 = (int)&unk_60C97744;
  dword_60C94C3C = CurrentStateID + 8;
  dword_60C94C40 = 808;
  dword_60C94C44 = 1;
  dword_60C94C48 = 812;
  dword_60C94C4C = 1;
  dword_60C94C50 = 816;
  dword_60C94C54 = 1;
  dword_60C94C38 = (int)&off_60BEE584;
  dword_60C94C58 = (int)&dword_60C97768;
  dword_60C94C60 = CurrentStateID + 9;
  dword_60C94C64 = 820;
  dword_60C94C68 = 1;
  dword_60C94C6C = 824;
  dword_60C94C70 = 1;
  dword_60C94C74 = 828;
  dword_60C94C78 = 1;
  dword_60C94C5C = (int)&off_60BEE584;
  dword_60C94C7C = (int)&dword_60C9778C;
  dword_60C94C80 = (int)&off_60BEE570;
  *(_DWORD *)algn_60C94C84 = CurrentStateID + 10;
  dword_60C94C88 = (int)&loc_6034A51C;
  dword_60C94C8C = 0;
  dword_60C94C90 = (int)sub_6034AA30;
  dword_60C94C94 = 0;
  dword_60C94C98 = (int)&loc_6034AD68;
  dword_60C94C9C = 0;
  CurrentStateID += 11;
  unk_60C94CA4 = CurrentStateID;
  unk_60C94CA8 = 612;
  unk_60C94CAC = 1;
  unk_60C94CB0 = 616;
  dword_60C94CB4 = 1;
  dword_60C94CB8 = 620;
  dword_60C94CBC = 1;
  dword_60C94CA0 = (int)&off_60BEE584;
  dword_60C94D00 = (int)&sead__SafeStringBase__vtable;
  dword_60C94CC0 = (int)&Enemy_StateId_Frozen;
  dword_60C94D04 = (int)"met";
  dword_60C94D08 = (int)&sead__SafeStringBase__vtable;
  dword_60C94D0C = (int)"met";
  dword_60C94D10 = (int)&sead__SafeStringBase__vtable;
  dword_60C94D14 = (int)"met_shell";
  dword_60C94D18 = (int)&sead__SafeStringBase__vtable;
  dword_60C94D1C = (int)"met_eye_light";
  dword_60C94D20 = (int)&sead__SafeStringBase__vtable;
  dword_60C94D24 = (int)"met_eye_light";
  dword_60C94D28 = 1098907648;
  dword_60C94D2C = 1097859072;
  dword_60C94DAC = 0;
  dword_60C94DB0 = 1089470464;
  dword_60C94DB4 = 1090519040;
  dword_60C94DB8 = 1089470464;
  dword_60C94DBC = 0;
  dword_60C94DC0 = 3;
  dword_60C94DC4 = 0;
  dword_60C94DC8 = 35407;
  dword_60C94DCC = -327681;
  dword_60C94DD0 = 0;
  dword_60C94DD4 = (int)Enemy__collisionCallback;
  dword_60C94CE0[0] = 201326592;
  dword_60C94CE4 = 201326592;
  dword_60C94CE8 = 0x4000000;
  dword_60C94D30 = -1610612736;
  dword_60C94D34 = 1610612736;
  dword_60C94DE0 = 0;
  unk_60C94DE4 = 1089470464;
  unk_60C94DE8 = 1090519040;
  dword_60C94DEC = 1089470464;
  dword_60C94DF0 = 0;
  dword_60C94DF4 = 3;
  dword_60C94DF8 = 0;
  dword_60C94DFC = 34887;
  dword_60C94E00 = 8421382;
  dword_60C94E04 = 0;
  dword_60C94E08 = (int)sub_6034DA38;
  return &dword_60C94DE0;
}
