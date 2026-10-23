/* registerProfile_fire_62F258
 * address: 0x6062F258   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_fire_62F258())()
{
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60CB3FFC = 0;
  dword_60CB4000 = 0;
  dword_60CB4004 = 0;
  dword_60CB3FD4 = (int)&sead__SafeStringBase__vtable;
  dword_60CB3FD8 = (int)"kazan_rock";
  dword_60CB3FDC = (int)&sead__SafeStringBase__vtable;
  dword_60CB3FE0 = (int)"kazan_rock";
  dword_60CB3FE4 = (int)&sead__SafeStringBase__vtable;
  dword_60CB3FE8 = (int)"kazan_rockBig";
  dword_60CB3FEC = (int)&sead__SafeStringBase__vtable;
  dword_60CB3FF0 = (int)"kazan_rock";
  dword_60CB3FF4 = (int)&sead__SafeStringBase__vtable;
  dword_60CB3FF8 = (int)"kazan_rockBig";
  dword_60CB4008 = 0x2000000;
  dword_60CB400C = 11141120;
  dword_60CB4010 = 0x400000;
  dword_60CB4034 = -4194304;
  dword_60CB4014 = 0x2000000;
  dword_60CB4018 = -11141120;
  dword_60CB401C = -4194304;
  dword_60CB4020 = 50331648;
  dword_60CB4024 = 16711680;
  unk_60CB4028 = 0x400000;
  unk_60CB402C = 50331648;
  unk_60CB4030 = -16711680;
  unk_60CB4040 = 0x2000000;
  unk_60CB4044 = 11141120;
  v1.vtable = &sead__SafeStringBase__vtable;
  dword_60CB4048 = 0x400000;
  dword_60CB404C = 0x2000000;
  dword_60CB4050 = -11141120;
  dword_60CB4054 = -4194304;
  dword_60CB4058 = 41943040;
  dword_60CB405C = 13369344;
  dword_60CB4060 = 0x400000;
  dword_60CB4064 = 41943040;
  dword_60CB4068 = -13369344;
  dword_60CB406C = -4194304;
  v1.cstr = (char *)&unk_60AC759D;
  Profile__ctor(&stru_60CB3F6C, Actor_fire_build, 0x23Eu, &v1, 0, 18);
  dword_60CB3F88 = CurrentStateID + 1;
  dword_60CB3F84 = (int)&off_60C12508;
  dword_60CB3F8C = (int)sub_6062D608;
  dword_60CB3F90 = 0;
  dword_60CB3F94 = (int)j_SE_BOSS_KOOPA_ref;
  dword_60CB3F98 = 0;
  dword_60CB3F9C = (int)nullsub_4948;
  dword_60CB3FA0 = 0;
  CurrentStateID += 2;
  dword_60CB3FA8 = CurrentStateID;
  dword_60CB3FA4 = (int)&off_60C12508;
  dword_60CB3FAC = (int)sub_6062D744;
  dword_60CB3FB0 = 0;
  dword_60CB3FB4 = (int)nullsub_4949;
  dword_60CB3FB8 = 0;
  dword_60CB3FBC = (int)nullsub_4950;
  dword_60CB3FC0 = 0;
  return nullsub_4950;
}
