/* registerProfile_koinshin_StaffRoll_744698
 * address: 0x60744698   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_koinshin_StaffRoll_744698()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60CBE4B0 = (int)&sead__SafeStringBase__vtable;
  unk_60CBE4B4 = "balloon";
  unk_60CBE4B8 = &sead__SafeStringBase__vtable;
  dword_60CBE4BC = (int)"balloon";
  dword_60CBE4C0 = (int)&sead__SafeStringBase__vtable;
  dword_60CBE4C4 = (int)"balloon_back";
  dword_60CBE4C8 = (int)&sead__SafeStringBase__vtable;
  dword_60CBE4CC = (int)"float";
  dword_60CBE4D0 = (int)&sead__SafeStringBase__vtable;
  dword_60CBE4D4 = (int)"vibrate";
  sub_60000288();
  dword_60CBE4D8 = (int)&sead__SafeStringBase__vtable;
  dword_60CBE4DC = (int)"float_back";
  dword_60CBE4E0 = (int)&sead__SafeStringBase__vtable;
  dword_60CBE4E4 = (int)"vibrate_back";
  sub_60000288();
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AD9AF8;
  Profile__ctor(&stru_60CBE428, Actor_koinshin_StaffRoll_build, 0x34Fu, &v2, 0, 2);
  *v0 = &off_60C23260;
  dword_60CBE444 = CurrentStateID + 1;
  dword_60CBE440 = (int)&off_60C23354;
  dword_60CBE448 = (int)sub_60744ADC;
  dword_60CBE44C = 0;
  dword_60CBE450 = (int)nullsub_5436;
  dword_60CBE454 = 0;
  dword_60CBE458 = (int)nullsub_5437;
  dword_60CBE45C = 0;
  unk_60CBE460 = &off_60C23354;
  unk_60CBE464 = CurrentStateID + 2;
  CurrentStateID += 3;
  dword_60CBE484 = CurrentStateID;
  dword_60CBE468 = (int)sub_60744AFC;
  dword_60CBE480 = (int)&off_60C23354;
  dword_60CBE46C = 0;
  dword_60CBE488 = (int)&loc_60744DBC;
  dword_60CBE470 = (int)sub_60744C14;
  dword_60CBE48C = 0;
  dword_60CBE474 = 0;
  dword_60CBE490 = (int)&loc_60744E88;
  dword_60CBE478 = (int)nullsub_5438;
  dword_60CBE47C = 0;
  dword_60CBE494 = 0;
  dword_60CBE498 = (int)nullsub_5439;
  dword_60CBE49C = 0;
  return &dword_60CBE480;
}
