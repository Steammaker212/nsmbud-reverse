/* registerProfile_CourseSelectopuninguKamek_1A7854
 * address: 0x601A7854   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_CourseSelectopuninguKamek_1A7854()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60C8A368 = 0;
  dword_60C8A36C = 0;
  dword_60C8A370 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABFBDF;
  Profile__ctor(&stru_60C8A27C, Actor_CourseSelectopuninguKamek_build, 0x374u, &v2, 0, 0);
  dword_60C8A374 = (int)&sead__SafeStringBase__vtable;
  *v0 = &off_60BD6164;
  dword_60C8A378 = (int)"W104";
  dword_60C8A37C = (int)&sead__SafeStringBase__vtable;
  dword_60C8A380 = (int)"F057";
  dword_60C8A384 = (int)&sead__SafeStringBase__vtable;
  dword_60C8A388 = (int)"W1T0";
  dword_60C8A38C = (int)&sead__SafeStringBase__vtable;
  dword_60C8A390 = (int)"W1X0";
  dword_60C8A394 = (int)&sead__SafeStringBase__vtable;
  dword_60C8A398 = (int)&byte_60B3BA34;
  dword_60C8A39C = (int)&sead__SafeStringBase__vtable;
  dword_60C8A3A0 = (int)"W7T0";
  dword_60C8A3A4 = (int)&sead__SafeStringBase__vtable;
  dword_60C8A3A8 = (int)&byte_60B3BA34;
  dword_60C8A3AC = (int)&sead__SafeStringBase__vtable;
  dword_60C8A3B0 = (int)&byte_60B3BA34;
  dword_60C8A3B4 = (int)&sead__SafeStringBase__vtable;
  dword_60C8A3B8 = (int)&byte_60B3BA34;
  dword_60C8A3BC = (int)&sead__SafeStringBase__vtable;
  dword_60C8A3C0 = (int)&byte_60B3BA34;
  sub_60000288();
  dword_60C8A298 = CurrentStateID + 1;
  dword_60C8A29C = 92;
  dword_60C8A2A0 = 1;
  dword_60C8A2A4 = 96;
  dword_60C8A2A8 = 1;
  dword_60C8A2AC = 100;
  dword_60C8A2B0 = 1;
  dword_60C8A294 = (int)&off_60BD6210;
  dword_60C8A2B4 = (int)&NullState;
  unk_60C8A2BC = CurrentStateID + 2;
  unk_60C8A2C0 = 104;
  dword_60C8A2C4 = 1;
  dword_60C8A2C8 = 108;
  dword_60C8A2CC = 1;
  dword_60C8A2D0 = 112;
  dword_60C8A2D4 = 1;
  dword_60C8A2B8 = (int)&off_60BD6210;
  dword_60C8A2D8 = (int)&NullState;
  dword_60C8A2E4 = 116;
  dword_60C8A2E8 = 1;
  dword_60C8A2EC = 120;
  dword_60C8A2F0 = 1;
  dword_60C8A2F4 = 124;
  dword_60C8A2F8 = 1;
  unk_60C8A2DC = &off_60BD6210;
  unk_60C8A2E0 = CurrentStateID + 3;
  dword_60C8A2FC = (int)&NullState;
  dword_60C8A308 = 128;
  dword_60C8A30C = 1;
  dword_60C8A310 = 132;
  dword_60C8A314 = 1;
  dword_60C8A318 = 136;
  dword_60C8A31C = 1;
  dword_60C8A300 = (int)&off_60BD6210;
  *(_DWORD *)algn_60C8A304 = CurrentStateID + 4;
  dword_60C8A320 = (int)&NullState;
  CurrentStateID += 5;
  *(_DWORD *)algn_60C8A328 = CurrentStateID;
  *(_DWORD *)&algn_60C8A328[4] = 140;
  dword_60C8A330 = 1;
  dword_60C8A334 = 144;
  dword_60C8A338 = 1;
  dword_60C8A33C = 148;
  dword_60C8A340 = 1;
  dword_60C8A324 = (int)&off_60BD6210;
  dword_60C8A344 = (int)&NullState;
  return 1;
}
