/* registerProfile_surotoItem_740A20
 * address: 0x60740A20   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_surotoItem_740A20()
{
  sead__SafeString v0; // [sp+10h] [bp-18h] BYREF

  dword_60CBE278 = 0;
  dword_60CBE27C = 0;
  dword_60CBE280 = 0;
  dword_60CBE288 = CurrentStateID + 1;
  dword_60CBE284 = (int)&off_60C2314C;
  dword_60CBE28C = (int)nullsub_5421;
  dword_60CBE290 = 0;
  dword_60CBE294 = (int)nullsub_5422;
  dword_60CBE298 = 0;
  dword_60CBE29C = (int)nullsub_5423;
  dword_60CBE2A0 = 0;
  dword_60CBE2A8 = CurrentStateID + 2;
  dword_60CBE2A4 = (int)&off_60C2314C;
  dword_60CBE2AC = (int)slotPanel_wait_ref;
  dword_60CBE2B0 = 0;
  dword_60CBE2B4 = (int)nullsub_5424;
  dword_60CBE2B8 = 0;
  dword_60CBE2BC = (int)nullsub_5425;
  dword_60CBE2C0 = 0;
  dword_60CBE2C8 = CurrentStateID + 3;
  dword_60CBE2C4 = (int)&off_60C2314C;
  dword_60CBE2CC = (int)sub_6073F7F4;
  dword_60CBE2D0 = 0;
  dword_60CBE2D4 = (int)&loc_6073F8BC;
  dword_60CBE2D8 = 0;
  dword_60CBE2DC = (int)nullsub_5426;
  dword_60CBE2E0 = 0;
  dword_60CBE2E8 = CurrentStateID + 4;
  dword_60CBE2E4 = (int)&off_60C2314C;
  dword_60CBE2EC = (int)slotPanel_win_ref;
  dword_60CBE2F0 = 0;
  dword_60CBE2F4 = (int)slotPanel_wait_checked_ref;
  dword_60CBE2F8 = 0;
  dword_60CBE2FC = (int)nullsub_5427;
  dword_60CBE300 = 0;
  dword_60CBE308 = CurrentStateID + 5;
  dword_60CBE304 = (int)&off_60C2314C;
  dword_60CBE30C = (int)SE_MG_CMN_ITEM_SHOT_ref_2;
  dword_60CBE310 = 0;
  dword_60CBE314 = (int)sub_6073FC84;
  dword_60CBE318 = 0;
  dword_60CBE31C = (int)nullsub_5428;
  dword_60CBE320 = 0;
  dword_60CBE328 = CurrentStateID + 6;
  dword_60CBE324 = (int)&off_60C2314C;
  dword_60CBE32C = (int)sub_6073FD10;
  dword_60CBE330 = 0;
  dword_60CBE334 = (int)nullsub_5429;
  dword_60CBE338 = 0;
  dword_60CBE33C = (int)nullsub_5430;
  dword_60CBE340 = 0;
  dword_60CBE348 = CurrentStateID + 7;
  dword_60CBE34C = 0x234;
  dword_60CBE350 = 1;
  dword_60CBE354 = 0x238;
  dword_60CBE358 = 1;
  dword_60CBE35C = 572;
  dword_60CBE360 = 1;
  dword_60CBE344 = (int)&off_60C23160;
  dword_60CBE364 = (int)&stru_60C90950;
  CurrentStateID += 8;
  unk_60CBE36C = CurrentStateID;
  unk_60CBE370 = 588;
  dword_60CBE374 = 1;
  dword_60CBE378 = 592;
  dword_60CBE37C = 1;
  dword_60CBE380 = 596;
  dword_60CBE384 = 1;
  dword_60CBE368 = (int)&off_60C23160;
  dword_60CBE388 = (int)&stru_60C90998;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD9A15;
  Profile__ctor(&stru_60CBE38C, Actor_surotoItem_build, 0x33Cu, &v0, &stru_60B0A498, 0);
}
