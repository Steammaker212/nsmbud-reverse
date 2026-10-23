/* registerProfile_koinmakiItem_72DDEC
 * address: 0x6072DDEC   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_koinmakiItem_72DDEC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CBD998 = 0;
  dword_60CBD99C = 0;
  dword_60CBD9A0 = 0;
  dword_60CBD9A8 = CurrentStateID + 1;
  dword_60CBD9A4 = (int)&off_60C22354;
  dword_60CBD9AC = (int)nullsub_5362;
  dword_60CBD9B0 = 0;
  dword_60CBD9B4 = (int)nullsub_5363;
  dword_60CBD9B8 = 0;
  dword_60CBD9BC = (int)nullsub_5364;
  dword_60CBD9C0 = 0;
  dword_60CBD9C8 = CurrentStateID + 2;
  dword_60CBD9C4 = (int)&off_60C22354;
  dword_60CBD9CC = (int)sub_6072CDB8;
  dword_60CBD9D0 = 0;
  dword_60CBD9D4 = (int)&loc_6072CE90;
  dword_60CBD9D8 = 0;
  dword_60CBD9DC = (int)nullsub_5365;
  dword_60CBD9E0 = 0;
  dword_60CBD9E8 = CurrentStateID + 3;
  dword_60CBD9E4 = (int)&off_60C22354;
  dword_60CBD9EC = (int)sub_6072D0AC;
  dword_60CBD9F0 = 0;
  dword_60CBD9F4 = (int)nullsub_5366;
  dword_60CBD9F8 = 0;
  dword_60CBD9FC = (int)nullsub_5367;
  dword_60CBDA00 = 0;
  dword_60CBDA08 = CurrentStateID + 4;
  dword_60CBDA04 = (int)&off_60C22354;
  dword_60CBDA0C = (int)SE_MG_CM_PANEL_OK_CNT_ref;
  dword_60CBDA10 = 0;
  dword_60CBDA14 = (int)&loc_6072D128;
  dword_60CBDA18 = 0;
  dword_60CBDA1C = (int)nullsub_5368;
  dword_60CBDA20 = 0;
  dword_60CBDA28 = CurrentStateID + 5;
  dword_60CBDA24 = (int)&off_60C22354;
  dword_60CBDA2C = (int)mochimakiBall_wait_ref;
  dword_60CBDA30 = 0;
  dword_60CBDA34 = (int)nullsub_5369;
  dword_60CBDA38 = 0;
  dword_60CBDA3C = (int)nullsub_5370;
  dword_60CBDA40 = 0;
  CurrentStateID += 6;
  dword_60CBDA48 = CurrentStateID;
  dword_60CBDA44 = (int)&off_60C22354;
  dword_60CBDA4C = (int)sub_6072D268;
  dword_60CBDA50 = 0;
  dword_60CBDA54 = (int)mochimakiBall_fail_ref;
  dword_60CBDA58 = 0;
  dword_60CBDA5C = (int)nullsub_5371;
  dword_60CBDA60 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD9533;
  Profile__ctor(&stru_60CBDA64, Actor_koinmakiItem_build, 0x33Eu, &v0, &stru_60B0A244, 0);
}
