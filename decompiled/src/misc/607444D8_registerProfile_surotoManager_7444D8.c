/* registerProfile_surotoManager_7444D8
 * address: 0x607444D8   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_surotoManager_7444D8()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CBE3A4 = 0;
  dword_60CBE3A8 = 0;
  dword_60CBE3AC = 0;
  dword_60CBE3B4 = CurrentStateID + 1;
  dword_60CBE3B0 = (int)&off_60C2324C;
  dword_60CBE3B8 = (int)nullsub_5431;
  dword_60CBE3BC = 0;
  dword_60CBE3C0 = (int)nullsub_5432;
  dword_60CBE3C4 = 0;
  dword_60CBE3C8 = (int)nullsub_5433;
  dword_60CBE3CC = 0;
  dword_60CBE3D4 = CurrentStateID + 2;
  dword_60CBE3D0 = (int)&off_60C2324C;
  dword_60CBE3D8 = (int)sub_60740D88;
  dword_60CBE3DC = 0;
  dword_60CBE3E0 = (int)&loc_60740D98;
  dword_60CBE3E4 = 0;
  dword_60CBE3E8 = (int)nullsub_5434;
  dword_60CBE3EC = 0;
  CurrentStateID += 3;
  dword_60CBE3F4 = CurrentStateID;
  dword_60CBE3F0 = (int)&off_60C2324C;
  dword_60CBE3F8 = (int)sub_60741564;
  dword_60CBE3FC = 0;
  dword_60CBE400 = (int)sub_60741590;
  dword_60CBE404 = 0;
  dword_60CBE408 = (int)nullsub_5435;
  dword_60CBE40C = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD9ADC;
  Profile__ctor(&stru_60CBE410, Actor_surotoManager_build, 0x1Bu, &v0, &stru_60B0A4E8, 0);
}
