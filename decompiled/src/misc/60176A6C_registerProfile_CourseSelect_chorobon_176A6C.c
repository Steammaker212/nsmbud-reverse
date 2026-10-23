/* registerProfile_CourseSelect_chorobon_176A6C
 * address: 0x60176A6C   size: 1216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_CourseSelect_chorobon_176A6C()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  dword_60C88E40 = 0;
  dword_60C88E44 = 0;
  dword_60C88E48 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABF157;
  Profile__ctor(&stru_60C88C20, Actor_CourseSelect_chorobon_build, 0x379u, &v2, 0, 0);
  *v0 = &off_60BD4E14;
  dword_60C88E4C = 1106247680;
  dword_60C88E50 = 0;
  dword_60C88E54 = 0;
  dword_60C88E58 = 0;
  dword_60C88C3C = CurrentStateID + 1;
  dword_60C88C38 = (int)&off_60BD4ED4;
  dword_60C88C40 = (int)sub_60174BE4;
  dword_60C88C44 = 0;
  dword_60C88C48 = (int)sub_60174BFC;
  dword_60C88C4C = 0;
  dword_60C88C50 = (int)nullsub_2881;
  dword_60C88C54 = 0;
  stru_60C88C58.vtable = &off_60BD4ED4;
  stru_60C88C58.id = CurrentStateID + 2;
  dword_60C88C60 = (int)sub_60174C98;
  dword_60C88C64 = 0;
  dword_60C88C68 = (int)sub_60174F3C;
  dword_60C88C6C = 0;
  dword_60C88C70 = (int)nullsub_2882;
  dword_60C88C74 = 0;
  stru_60C88C78.vtable = &off_60BD4ED4;
  stru_60C88C78.id = CurrentStateID + 3;
  dword_60C88C80 = (int)sub_60174F74;
  dword_60C88C84 = 0;
  dword_60C88C88 = (int)sub_60174F9C;
  dword_60C88C8C = 0;
  dword_60C88C90 = (int)nullsub_2883;
  dword_60C88C94 = 0;
  unk_60C88C98 = &off_60BD4ED4;
  unk_60C88C9C = CurrentStateID + 4;
  dword_60C88CA0 = (int)sub_60174FBC;
  dword_60C88CA4 = 0;
  dword_60C88CA8 = (int)sub_60175130;
  dword_60C88CAC = 0;
  dword_60C88CB0 = (int)nullsub_2884;
  dword_60C88CB4 = 0;
  unk_60C88CB8 = &off_60BD4ED4;
  unk_60C88CBC = CurrentStateID + 5;
  dword_60C88CC0 = (int)sub_60175228;
  dword_60C88CC4 = 0;
  dword_60C88CC8 = (int)sub_60175294;
  dword_60C88CCC = 0;
  dword_60C88CD0 = (int)nullsub_2885;
  dword_60C88CD4 = 0;
  dword_60C88CD8 = (int)&off_60BD4ED4;
  *(_DWORD *)algn_60C88CDC = CurrentStateID + 6;
  dword_60C88CE0 = (int)sub_6017531C;
  dword_60C88CE4 = 0;
  dword_60C88CE8 = (int)sub_60175320;
  dword_60C88CEC = 0;
  dword_60C88CF0 = (int)nullsub_2886;
  dword_60C88CF4 = 0;
  dword_60C88CF8 = (int)&off_60BD4ED4;
  *(_DWORD *)algn_60C88CFC = CurrentStateID + 7;
  dword_60C88D00 = (int)sub_60175328;
  dword_60C88D04 = 0;
  dword_60C88D08 = (int)sub_60175388;
  dword_60C88D0C = 0;
  dword_60C88D10 = (int)nullsub_2887;
  dword_60C88D14 = 0;
  unk_60C88D18 = &off_60BD4ED4;
  unk_60C88D1C = CurrentStateID + 8;
  dword_60C88D20 = (int)sub_601753B4;
  dword_60C88D24 = 0;
  dword_60C88D28 = (int)sub_601753F4;
  dword_60C88D2C = 0;
  dword_60C88D30 = (int)nullsub_154;
  dword_60C88D34 = 0;
  stru_60C88D38.vtable = &off_60BD4ED4;
  stru_60C88D38.id = CurrentStateID + 9;
  dword_60C88D40 = (int)nullsub_155;
  dword_60C88D44 = 0;
  dword_60C88D48 = (int)sub_60175408;
  dword_60C88D4C = 0;
  dword_60C88D50 = (int)nullsub_2888;
  dword_60C88D54 = 0;
  dword_60C88D58 = (int)&off_60BD4ED4;
  *(_DWORD *)algn_60C88D5C = CurrentStateID + 10;
  dword_60C88D60 = (int)sub_601755D0;
  dword_60C88D64 = 0;
  dword_60C88D68 = (int)sub_601755F4;
  dword_60C88D6C = 0;
  dword_60C88D70 = (int)nullsub_2889;
  dword_60C88D74 = 0;
  unk_60C88D78 = &off_60BD4ED4;
  unk_60C88D7C = CurrentStateID + 11;
  dword_60C88D80 = (int)sub_6017563C;
  dword_60C88D84 = 0;
  dword_60C88D88 = (int)&loc_60175660;
  dword_60C88D8C = 0;
  dword_60C88D90 = (int)nullsub_2890;
  dword_60C88D94 = 0;
  unk_60C88D98 = &off_60BD4ED4;
  unk_60C88D9C = CurrentStateID + 12;
  dword_60C88DA0 = (int)nullsub_2891;
  dword_60C88DA4 = 0;
  dword_60C88DA8 = (int)sub_601756D0;
  dword_60C88DAC = 0;
  dword_60C88DB0 = (int)nullsub_2892;
  dword_60C88DB4 = 0;
  unk_60C88DB8 = &off_60BD4ED4;
  unk_60C88DBC = CurrentStateID + 13;
  dword_60C88DC0 = (int)sub_60175700;
  dword_60C88DC4 = 0;
  dword_60C88DC8 = (int)sub_60175720;
  dword_60C88DCC = 0;
  dword_60C88DD0 = (int)nullsub_156;
  dword_60C88DD4 = 0;
  unk_60C88DD8 = &off_60BD4ED4;
  unk_60C88DDC = CurrentStateID + 14;
  dword_60C88DE0 = (int)nullsub_157;
  dword_60C88DE4 = 0;
  dword_60C88DE8 = (int)sub_6017574C;
  dword_60C88DEC = 0;
  dword_60C88DF0 = (int)nullsub_2893;
  dword_60C88DF4 = 0;
  unk_60C88DF8 = &off_60BD4ED4;
  unk_60C88DFC = CurrentStateID + 15;
  CurrentStateID += 16;
  dword_60C88E1C = CurrentStateID;
  dword_60C88E00 = (int)sub_6017577C;
  dword_60C88E18 = (int)&off_60BD4ED4;
  dword_60C88E04 = 0;
  dword_60C88E20 = (int)sub_60175808;
  dword_60C88E08 = (int)sub_60175788;
  dword_60C88E24 = 0;
  dword_60C88E0C = 0;
  dword_60C88E28 = (int)sub_601758E8;
  dword_60C88E10 = (int)nullsub_2894;
  dword_60C88E14 = 0;
  dword_60C88E2C = 0;
  dword_60C88E30 = (int)nullsub_2895;
  dword_60C88E34 = 0;
  return &dword_60C88E18;
}
