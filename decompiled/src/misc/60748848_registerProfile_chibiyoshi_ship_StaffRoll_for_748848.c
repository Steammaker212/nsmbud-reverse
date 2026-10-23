/* registerProfile_chibiyoshi_ship_StaffRoll_for_748848
 * address: 0x60748848   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_chibiyoshi_ship_StaffRoll_for_748848()
{
  sead__SafeString v1[3]; // [sp+10h] [bp-18h] BYREF

  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD9BA5;
  Profile__ctor(&stru_60CBE620, Actor_chibiyoshi_ship_StaffRoll_for_build, 0x34Au, v1, 0, 0);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD9BDF;
  Profile__ctor(&stru_60CBE638, Actor_chibiyoshi_ship_StaffRoll_for_build, 0x34Bu, v1, 0, 0);
  dword_60CBE654 = CurrentStateID + 1;
  dword_60CBE650 = (int)&off_60C235A4;
  dword_60CBE658 = (int)sub_607477B0;
  dword_60CBE65C = 0;
  dword_60CBE660 = (int)sub_6074780C;
  dword_60CBE664 = 0;
  dword_60CBE668 = (int)nullsub_5442;
  dword_60CBE66C = 0;
  CurrentStateID += 2;
  dword_60CBE674 = CurrentStateID;
  dword_60CBE678 = 136;
  dword_60CBE67C = 1;
  dword_60CBE680 = 140;
  dword_60CBE684 = 1;
  dword_60CBE688 = 144;
  dword_60CBE68C = 1;
  dword_60CBE670 = (int)&off_60C235B8;
  dword_60CBE690 = (int)&dword_60CBE6AC;
  dword_60CBE6A4 = 23860929;
  dword_60CBE6A8 = 143165576;
  return &dword_60CBE6A4;
}
