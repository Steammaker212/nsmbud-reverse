/* registerProfile_kuPiranha_3D51A0
 * address: 0x603D51A0   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kuPiranha_3D51A0()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C98F94 = 0;
  dword_60C98F98 = 0;
  dword_60C98F9C = 0;
  dword_60C98F7C = (int)&sead__SafeStringBase__vtable;
  dword_60C98F80 = (int)"pakkun_walk";
  dword_60C98F84 = (int)&sead__SafeStringBase__vtable;
  dword_60C98F88 = (int)"head";
  dword_60C98F8C = (int)&sead__SafeStringBase__vtable;
  dword_60C98F90 = (int)"check";
  dword_60C98E84 = CurrentStateID + 1;
  dword_60C98E80 = (int)&off_60BF812C;
  dword_60C98E88 = (int)&loc_603D3518;
  dword_60C98E8C = 0;
  dword_60C98E90 = (int)&loc_603D35C8;
  dword_60C98E94 = 0;
  dword_60C98E98 = (int)nullsub_3588;
  dword_60C98E9C = 0;
  dword_60C98EA0 = (int)&off_60BF812C;
  *(_DWORD *)algn_60C98EA4 = CurrentStateID + 2;
  dword_60C98EA8 = (int)sub_603D380C;
  dword_60C98EAC = 0;
  dword_60C98EB0 = (int)sub_603D384C;
  dword_60C98EB4 = 0;
  dword_60C98EB8 = (int)nullsub_3589;
  dword_60C98EBC = 0;
  dword_60C98EC0 = (int)&off_60BF812C;
  *(_DWORD *)algn_60C98EC4 = CurrentStateID + 3;
  dword_60C98EC8 = (int)sub_603D3910;
  dword_60C98ECC = 0;
  dword_60C98ED0 = (int)SE_EMY_WALK_PAKKUN_REACH_ref;
  dword_60C98ED4 = 0;
  dword_60C98ED8 = (int)sub_603D3AE4;
  dword_60C98EDC = 0;
  dword_60C98EE0 = (int)&off_60BF812C;
  *(_DWORD *)algn_60C98EE4 = CurrentStateID + 4;
  dword_60C98EE8 = (int)sub_603D3AF4;
  dword_60C98EEC = 0;
  dword_60C98EF0 = (int)sub_603D3B34;
  dword_60C98EF4 = 0;
  dword_60C98EF8 = (int)nullsub_3590;
  dword_60C98EFC = 0;
  dword_60C98F00 = (int)&off_60BF812C;
  *(_DWORD *)algn_60C98F04 = CurrentStateID + 5;
  v0.vtable = &sead__SafeStringBase__vtable;
  dword_60C98F08 = (int)sub_603D3B70;
  dword_60C98F0C = 0;
  dword_60C98F10 = (int)SE_EMY_WALK_PAKKUN_RECEDE_ref;
  dword_60C98F14 = 0;
  dword_60C98F18 = (int)sub_603D3E24;
  dword_60C98F1C = 0;
  CurrentStateID += 6;
  dword_60C98F24 = CurrentStateID;
  dword_60C98F28 = 456;
  dword_60C98F2C = 1;
  dword_60C98F30 = 460;
  dword_60C98F34 = 1;
  dword_60C98F38 = 464;
  dword_60C98F3C = 1;
  dword_60C98F20 = (int)&off_60BF8140;
  dword_60C98F40 = (int)&stru_60C90710;
  v0.cstr = (char *)&unk_60AC608B;
  Profile__ctor(&stru_60C98F44, Actor_kuPiranha_build, 0x1F3u, &v0, &stru_60B01228, 18);
}
