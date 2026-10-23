/* registerProfile_nezumi_3503C8
 * address: 0x603503C8   size: 772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_nezumi_3503C8()
{
  sead__SafeString v0; // [sp+10h] [bp-20h] BYREF

  dword_60C95000 = 0;
  dword_60C95004 = 0;
  dword_60C95008 = 0;
  dword_60C9500C = 1063675494;
  dword_60C95010 = 1065353216;
  dword_60C95014 = 0x40000000;
  dword_60C95018 = (int)&sead__SafeStringBase__vtable;
  dword_60C9501C = (int)"walk";
  dword_60C95020 = (int)&sead__SafeStringBase__vtable;
  dword_60C95024 = (int)"panic";
  sub_60000288();
  dword_60C95028 = (int)&sead__SafeStringBase__vtable;
  dword_60C9502C = (int)"eye_walk";
  dword_60C95030 = (int)&sead__SafeStringBase__vtable;
  dword_60C95034 = (int)"eye_panic";
  sub_60000288();
  dword_60C94EF8 = CurrentStateID + 1;
  dword_60C94EFC = 444;
  dword_60C94F00 = 1;
  dword_60C94F04 = 448;
  dword_60C94F08 = 1;
  dword_60C94F0C = 452;
  dword_60C94F10 = 1;
  dword_60C94EF4 = (int)&off_60BEEC0C;
  dword_60C94F14 = (int)&stru_60C906EC;
  dword_60C94F1C = CurrentStateID + 2;
  unk_60C94F20 = 456;
  unk_60C94F24 = 1;
  unk_60C94F28 = 460;
  dword_60C94F2C = 1;
  dword_60C94F30 = 464;
  dword_60C94F34 = 1;
  dword_60C94F18 = (int)&off_60BEEC0C;
  dword_60C94F38 = (int)&stru_60C90710;
  dword_60C94F40 = CurrentStateID + 3;
  dword_60C94F3C = (int)&off_60BEEC20;
  dword_60C94F44 = (int)sub_60350770;
  dword_60C94F48 = 0;
  dword_60C94F4C = (int)SE_EMY_MOUSE_WALK_ref;
  dword_60C94F50 = 0;
  dword_60C94F54 = (int)nullsub_3393;
  dword_60C94F58 = 0;
  dword_60C94F5C = (int)&off_60BEEC20;
  unk_60C94F60 = CurrentStateID + 4;
  dword_60C94F64 = (int)sub_60350AE0;
  dword_60C94F68 = 0;
  dword_60C94F6C = (int)sub_60350AFC;
  dword_60C94F70 = 0;
  dword_60C94F74 = (int)nullsub_3394;
  dword_60C94F78 = 0;
  dword_60C94F7C = (int)&off_60BEEC20;
  unk_60C94F80 = CurrentStateID + 5;
  dword_60C94F84 = (int)sub_60350D78;
  dword_60C94F88 = 0;
  dword_60C94F8C = (int)&loc_60350D84;
  dword_60C94F90 = 0;
  dword_60C94F94 = (int)nullsub_3395;
  dword_60C94F98 = 0;
  dword_60C94F9C = (int)&off_60BEEC20;
  unk_60C94FA0 = CurrentStateID + 6;
  v0.vtable = &sead__SafeStringBase__vtable;
  dword_60C94FA4 = (int)&loc_60351298;
  dword_60C94FA8 = 0;
  dword_60C94FAC = (int)SE_EMY_MOUSE_RUN_ref;
  dword_60C94FB0 = 0;
  dword_60C94FB4 = (int)sub_60351534;
  dword_60C94FB8 = 0;
  CurrentStateID += 7;
  dword_60C94FC0 = CurrentStateID;
  dword_60C94FBC = (int)&off_60BEEC20;
  dword_60C94FC4 = (int)sub_60351544;
  dword_60C94FC8 = 0;
  dword_60C94FCC = (int)sub_60351578;
  dword_60C94FD0 = 0;
  dword_60C94FD4 = (int)nullsub_3396;
  dword_60C94FD8 = 0;
  v0.cstr = (char *)&unk_60AC4F4B;
  Profile__ctor(&stru_60C94FDC, Actor_nezumi_build, 0x28Cu, &v0, &stru_60AFFDF0, 2);
}
