/* registerProfile_move_708530
 * address: 0x60708530   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_move_708530()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CBC8CC = CurrentStateID + 1;
  dword_60CBC8C8 = (int)&off_60C210A4;
  dword_60CBC8D0 = (int)sub_60707A1C;
  dword_60CBC8D4 = 0;
  dword_60CBC8D8 = (int)nullsub_5343;
  dword_60CBC8DC = 0;
  dword_60CBC8E0 = (int)nullsub_5344;
  dword_60CBC8E4 = 0;
  dword_60CBC8EC = CurrentStateID + 2;
  dword_60CBC8E8 = (int)&off_60C210A4;
  dword_60CBC8F0 = (int)sub_60707A38;
  dword_60CBC8F4 = 0;
  dword_60CBC8F8 = (int)&loc_60707A5C;
  dword_60CBC8FC = 0;
  dword_60CBC900 = (int)nullsub_5345;
  dword_60CBC904 = 0;
  CurrentStateID += 3;
  dword_60CBC90C = CurrentStateID;
  dword_60CBC908 = (int)&off_60C210A4;
  dword_60CBC910 = (int)sub_60707BD0;
  dword_60CBC914 = 0;
  dword_60CBC918 = (int)&loc_60707BEC;
  dword_60CBC91C = 0;
  dword_60CBC920 = (int)nullsub_5346;
  dword_60CBC924 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD87D4;
  Profile__ctor(&stru_60CBC928, Actor_move_build, 0xEAu, &v0, &stru_60B09B44, 0);
}
