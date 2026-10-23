/* registerProfile_fishubon_2B0078
 * address: 0x602B0078   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_fishubon_2B0078()
{
  sead__SafeString v1; // [sp+Ch] [bp-2Ch] BYREF

  dword_60C90C8C = 0;
  dword_60C90C90 = 0;
  dword_60C90C94 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC3813;
  Profile__ctor(&stru_60C90BBC, Actor_fishubon_build, 0x224u, &v1, &stru_60AFE584, 18);
  dword_60C90BD8 = CurrentStateID + 1;
  dword_60C90BD4 = (int)&off_60BE385C;
  dword_60C90BDC = (int)sub_602AF5EC;
  dword_60C90BE0 = 0;
  dword_60C90BE4 = (int)&loc_602AF6B4;
  dword_60C90BE8 = 0;
  dword_60C90BEC = (int)nullsub_3222;
  dword_60C90BF0 = 0;
  dword_60C90BF4 = (int)&off_60BE385C;
  unk_60C90BF8 = CurrentStateID + 2;
  dword_60C90BFC = (int)sub_602AF8C8;
  dword_60C90C00 = 0;
  dword_60C90C04 = (int)&loc_602AF9A8;
  dword_60C90C08 = 0;
  dword_60C90C0C = (int)nullsub_3223;
  dword_60C90C10 = 0;
  dword_60C90C14 = (int)&off_60BE385C;
  unk_60C90C18 = CurrentStateID + 3;
  dword_60C90C1C = (int)sub_602AFB34;
  dword_60C90C20 = 0;
  dword_60C90C24 = (int)&loc_602AFC1C;
  dword_60C90C28 = 0;
  dword_60C90C2C = (int)sub_602AFEE0;
  dword_60C90C30 = 0;
  dword_60C90C34 = (int)&off_60BE385C;
  unk_60C90C38 = CurrentStateID + 4;
  CurrentStateID += 5;
  dword_60C90C84 = (int)&sead__SafeStringBase__vtable;
  dword_60C90C58 = CurrentStateID;
  dword_60C90C3C = (int)sub_602AFEF0;
  dword_60C90C40 = 0;
  dword_60C90C5C = 456;
  dword_60C90C60 = 1;
  dword_60C90C64 = 460;
  dword_60C90C68 = 1;
  dword_60C90C6C = 464;
  dword_60C90C70 = 1;
  dword_60C90C44 = (int)sub_602AFFC8;
  dword_60C90C48 = 0;
  dword_60C90C54 = (int)&off_60BE3870;
  dword_60C90C4C = (int)nullsub_3224;
  dword_60C90C50 = 0;
  dword_60C90C74 = (int)&stru_60C90710;
  dword_60C90C88 = (int)"fishbone";
  dword_60C90C98 = (int)&sead__SafeStringBase__vtable;
  dword_60C90C9C = (int)"fishbone";
  dword_60C90CA0 = (int)&sead__SafeStringBase__vtable;
  dword_60C90CA4 = (int)"fish_bone_eye";
  sub_60000288();
  dword_60C90CB8 = (int)&sead__SafeStringBase__vtable;
  dword_60C90CBC = (int)"fishbone_breakA";
  dword_60C90CC0 = (int)&sead__SafeStringBase__vtable;
  dword_60C90CC4 = (int)"fishbone_breakB";
  dword_60C90CC8 = (int)&sead__SafeStringBase__vtable;
  dword_60C90CCC = (int)"fishbone_breakC";
  dword_60C90CD0 = (int)&sead__SafeStringBase__vtable;
  dword_60C90CD4 = (int)"fishbone_breakD";
  sub_60000288();
  dword_60C90D10 = (int)&sead__SafeStringBase__vtable;
  dword_60C90D14 = (int)"swim";
  dword_60C90D18 = (int)&sead__SafeStringBase__vtable;
  dword_60C90D1C = (int)"eye_swim";
  dword_60C90D20 = 1;
  dword_60C90D24 = (int)&sead__SafeStringBase__vtable;
  unk_60C90D28 = "attack_st";
  unk_60C90D2C = &sead__SafeStringBase__vtable;
  unk_60C90D30 = "eye_attack_st";
  dword_60C90D34 = 1;
  dword_60C90D38 = (int)&sead__SafeStringBase__vtable;
  dword_60C90D3C = (int)"attack";
  dword_60C90D40 = (int)&sead__SafeStringBase__vtable;
  dword_60C90D44 = (int)"eye_attack";
  dword_60C90D48 = 1;
  sub_60000288();
  dword_60C90CA8 = (int)&sead__SafeStringBase__vtable;
  unk_60C90CAC = "attack_st";
  unk_60C90CB0 = &sead__SafeStringBase__vtable;
  unk_60C90CB4 = "eye_attack_st";
  sub_60000288();
  dword_60C90C80 = 0x800000;
  dword_60C90CE0 = -1098907648;
  unk_60C90CE4 = 1065353216;
  unk_60C90CE8 = 0;
  dword_60C90CEC = 1036831949;
  dword_60C90CF0 = 1069547520;
  dword_60C90CF4 = 0;
  dword_60C90CF8 = 1056964608;
  dword_60C90CFC = 1065353216;
  dword_60C90D00 = 0;
  unk_60C90D04 = -1097229926;
  unk_60C90D08 = 1069547520;
  unk_60C90D0C = 0;
  return -1097229926;
}
