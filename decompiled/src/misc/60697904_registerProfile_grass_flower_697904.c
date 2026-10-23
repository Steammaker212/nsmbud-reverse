/* registerProfile_grass_flower_697904
 * address: 0x60697904   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_grass_flower_697904()
{
  sead__SafeString v0; // [sp+10h] [bp-20h] BYREF

  dword_60CB9360 = 0;
  dword_60CB9364 = 0;
  dword_60CB9368 = 0;
  dword_60CB936C = 0;
  dword_60CB9370 = 0;
  dword_60CB9374 = 8;
  dword_60CB9378 = 0x200000;
  dword_60CB937C = 0x8000000;
  dword_60CB9380 = 6553600;
  dword_60CB9384 = 3276800;
  dword_60CB9388 = 0;
  dword_60CB938C = 0;
  dword_60CB9390 = 0;
  dword_60CB9394 = 8;
  dword_60CB9398 = 6553600;
  dword_60CB939C = 0x8000000;
  dword_60CB93A0 = 6553600;
  dword_60CB93A4 = 3276800;
  dword_60CB93A8 = 0;
  dword_60CB92D0 = CurrentStateID + 1;
  dword_60CB92D4 = 192;
  dword_60CB92D8 = 1;
  dword_60CB92DC = 196;
  dword_60CB92E0 = 1;
  dword_60CB92E4 = 200;
  dword_60CB92E8 = 1;
  dword_60CB92CC = (int)&off_60C17DA8;
  dword_60CB92EC = (int)&NullState;
  dword_60CB92FC = 1;
  dword_60CB9300 = 220;
  dword_60CB9304 = 1;
  dword_60CB9308 = 224;
  dword_60CB930C = 1;
  stru_60CB92F0.vtable = &off_60C17DA8;
  stru_60CB92F0.id = CurrentStateID + 2;
  unk_60CB92F8 = 216;
  dword_60CB9310 = (int)&NullState;
  CurrentStateID += 3;
  dword_60CB9320 = 1;
  dword_60CB9324 = 208;
  dword_60CB9328 = 1;
  dword_60CB932C = 212;
  dword_60CB9330 = 1;
  unk_60CB9314 = &off_60C17DA8;
  unk_60CB9318 = CurrentStateID;
  unk_60CB931C = 204;
  dword_60CB9334 = (int)&NullState;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD6AF6;
  Profile__ctor(&stru_60CB9338, Actor_grass_flower_build, 0x2EAu, &v0, &stru_60B07F38, 2);
}
