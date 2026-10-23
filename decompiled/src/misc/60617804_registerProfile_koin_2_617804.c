/* registerProfile_koin_2_617804
 * address: 0x60617804   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_koin_2_617804()
{
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60CB32C8 = 0;
  dword_60CB32CC = 0;
  dword_60CB32D0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3AC4;
  Profile__ctor(&stru_60CB32D4, Actor_koin_2_build, 0x77u, &v1, &stru_60B065D4, 2);
  dword_60CB32F0 = CurrentStateID + 1;
  dword_60CB32F4 = 204;
  dword_60CB32F8 = 1;
  dword_60CB32FC = 208;
  dword_60CB3300 = 1;
  dword_60CB3304 = 212;
  dword_60CB3308 = 1;
  dword_60CB32EC = (int)&off_60C10298;
  dword_60CB330C = (int)&dword_60CBAC38;
  dword_60CB331C = 1;
  dword_60CB3320 = 220;
  dword_60CB3324 = 1;
  dword_60CB3328 = 224;
  dword_60CB332C = 1;
  unk_60CB3310 = &off_60C10298;
  unk_60CB3314 = CurrentStateID + 2;
  unk_60CB3318 = 216;
  CurrentStateID += 3;
  dword_60CB3338 = CurrentStateID;
  dword_60CB3330 = (int)&dword_60CBAC5C;
  dword_60CB3334 = (int)&off_60C102AC;
  dword_60CB333C = (int)sub_606169D8;
  dword_60CB3340 = 0;
  dword_60CB3344 = (int)SE_SYS_STOCK_ITEM_USE_ref;
  dword_60CB3348 = 0;
  dword_60CB334C = (int)nullsub_4904;
  dword_60CB3350 = 0;
  return &dword_60CB3334;
}
