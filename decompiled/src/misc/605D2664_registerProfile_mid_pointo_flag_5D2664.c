/* registerProfile_mid_pointo_flag_5D2664
 * address: 0x605D2664   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_mid_pointo_flag_5D2664())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60CB119C = 0;
  dword_60CB11A0 = 0;
  dword_60CB11A4 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2A7E;
  Profile__ctor(&stru_60CB11A8, Actor_mid_pointo_flag_build, 0x235u, &v1, &stru_60B058B4, 2);
  dword_60CB11C4 = CurrentStateID + 1;
  dword_60CB11C0 = (int)&off_60C0B074;
  dword_60CB11C8 = (int)wait_sea_ref;
  dword_60CB11CC = 0;
  dword_60CB11D0 = (int)&loc_605D0FD4;
  dword_60CB11D4 = 0;
  dword_60CB11D8 = (int)nullsub_4775;
  dword_60CB11DC = 0;
  CurrentStateID += 2;
  dword_60CB11E4 = CurrentStateID;
  dword_60CB11E0 = (int)&off_60C0B074;
  dword_60CB11E8 = (int)swing_sea_ref;
  dword_60CB11EC = 0;
  dword_60CB11F0 = (int)sub_605D128C;
  dword_60CB11F4 = 0;
  dword_60CB11F8 = (int)nullsub_4776;
  dword_60CB11FC = 0;
  return nullsub_4776;
}
