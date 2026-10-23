/* registerProfile_koinmaki_72C558
 * address: 0x6072C558   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_koinmaki_72C558()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CBD8B0 = 0;
  dword_60CBD8B4 = 0;
  dword_60CBD8B8 = 0;
  dword_60CBD8C0 = CurrentStateID + 1;
  dword_60CBD8BC = (int)&off_60C220AC;
  dword_60CBD8C4 = (int)nullsub_271;
  dword_60CBD8C8 = 0;
  dword_60CBD8CC = (int)nullsub_272;
  dword_60CBD8D0 = 0;
  dword_60CBD8D4 = (int)nullsub_273;
  dword_60CBD8D8 = 0;
  dword_60CBD8E0 = CurrentStateID + 2;
  dword_60CBD8DC = (int)&off_60C220AC;
  dword_60CBD8E4 = (int)mochimakiCannon_ready_ref;
  dword_60CBD8E8 = 0;
  dword_60CBD8EC = (int)sub_6072A8F8;
  dword_60CBD8F0 = 0;
  dword_60CBD8F4 = (int)nullsub_5359;
  dword_60CBD8F8 = 0;
  CurrentStateID += 3;
  dword_60CBD900 = CurrentStateID;
  dword_60CBD8FC = (int)&off_60C220AC;
  dword_60CBD904 = (int)sub_6072A954;
  dword_60CBD908 = 0;
  dword_60CBD90C = (int)SE_MG_CM_CANNON_MOVE_ref;
  dword_60CBD910 = 0;
  dword_60CBD914 = (int)nullsub_5360;
  dword_60CBD918 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD9491;
  Profile__ctor(&stru_60CBD91C, Actor_koinmaki_build, 0x33Du, &v0, &stru_60B0A1CC, 0);
}
