/* registerProfile_JumpStand_62A46C
 * address: 0x6062A46C   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_JumpStand_62A46C()
{
  sead__SafeString v1; // [sp+10h] [bp-28h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3FA0;
  Profile__ctor(&stru_60CB3C6C, Actor_JumpStand_build, 0x22Bu, &v1, &stru_60B069A0, 2070);
  dword_60CB3C88 = CurrentStateID + 1;
  dword_60CB3C8C = 196;
  dword_60CB3C90 = 1;
  dword_60CB3C94 = 200;
  dword_60CB3C98 = 1;
  dword_60CB3C9C = 204;
  dword_60CB3CA0 = 1;
  dword_60CB3C84 = (int)&off_60C120EC;
  dword_60CB3CA4 = (int)&stru_60CB0ECC;
  dword_60CB3CB4 = 1;
  dword_60CB3CB8 = 224;
  dword_60CB3CBC = 1;
  dword_60CB3CC0 = 228;
  dword_60CB3CC4 = 1;
  unk_60CB3CA8 = &off_60C120EC;
  unk_60CB3CAC = CurrentStateID + 2;
  unk_60CB3CB0 = 220;
  dword_60CB3CC8 = (int)&stru_60CB0F14;
  dword_60CB3CD4 = 208;
  dword_60CB3CD8 = 1;
  dword_60CB3CDC = 212;
  dword_60CB3CE0 = 1;
  dword_60CB3CE4 = 216;
  dword_60CB3CE8 = 1;
  unk_60CB3CCC = &off_60C120EC;
  unk_60CB3CD0 = CurrentStateID + 3;
  dword_60CB3CEC = (int)&stru_60CB0EF0;
  dword_60CB3CF8 = 232;
  dword_60CB3CFC = 1;
  dword_60CB3D00 = 236;
  dword_60CB3D04 = 1;
  dword_60CB3D08 = 240;
  dword_60CB3D0C = 1;
  unk_60CB3CF0 = &off_60C120EC;
  unk_60CB3CF4 = CurrentStateID + 4;
  dword_60CB3D10 = (int)&stru_60CB0F38;
  dword_60CB3D18 = CurrentStateID + 5;
  dword_60CB3D14 = (int)&off_60C12100;
  dword_60CB3D1C = (int)sub_60628FA8;
  dword_60CB3D20 = 0;
  dword_60CB3D24 = (int)sub_60628FD4;
  dword_60CB3D28 = 0;
  dword_60CB3D2C = (int)nullsub_4941;
  dword_60CB3D30 = 0;
  stru_60CB3D34.vtable = &off_60C12100;
  stru_60CB3D34.id = CurrentStateID + 6;
  dword_60CB3D3C = (int)sub_60629014;
  dword_60CB3D40 = 0;
  dword_60CB3D44 = (int)&loc_60629038;
  dword_60CB3D48 = 0;
  dword_60CB3D4C = (int)nullsub_4942;
  dword_60CB3D50 = 0;
  CurrentStateID += 7;
  dword_60CB3D58 = CurrentStateID;
  dword_60CB3D54 = (int)&off_60C12100;
  dword_60CB3D5C = (int)sub_606291D0;
  dword_60CB3D60 = 0;
  dword_60CB3D64 = (int)&loc_606291E0;
  dword_60CB3D68 = 0;
  dword_60CB3D6C = (int)nullsub_4943;
  dword_60CB3D70 = 0;
  dword_60CB3D90[0] = (int)&sead__SafeStringBase__vtable;
  unk_60CB3D94 = "jump_step";
  unk_60CB3D98 = &sead__SafeStringBase__vtable;
  dword_60CB3D9C = (int)"jump_step";
  dword_60CB3DA0 = 1086324736;
  dword_60CB3DA4 = 2;
  dword_60CB3DA8 = (int)"SE_PLY_JUMPDAI";
  dword_60CB3DAC = 1083032207;
  dword_60CB3DB0 = 1;
  dword_60CB3DB4 = (int)"SE_PLY_JUMPDAI_HIGH";
  dword_60CB3D74[0] = 18;
  dword_60CB3D74[1] = 1091567616;
  dword_60CB3D74[2] = 0x40000000;
  byte_60CB3D80 = 0;
  return dword_60CB3D74;
}
