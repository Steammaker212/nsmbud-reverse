/* registerProfile_buroku_child_5FDD50
 * address: 0x605FDD50   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_buroku_child_5FDD50()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB26A0 = 0;
  dword_60CB26A4 = 0;
  dword_60CB26A8 = 0;
  dword_60CB26AC = 1065353216;
  dword_60CB26B0 = 1065353216;
  dword_60CB26B4 = 1065353216;
  dword_60CB2618 = CurrentStateID + 1;
  dword_60CB2614 = (int)&off_60C0E7FC;
  dword_60CB261C = (int)nullsub_4838;
  dword_60CB2620 = 0;
  dword_60CB2624 = (int)sub_605FC130;
  dword_60CB2628 = 0;
  dword_60CB262C = (int)nullsub_4839;
  dword_60CB2630 = 0;
  dword_60CB2638 = CurrentStateID + 2;
  dword_60CB2634 = (int)&off_60C0E7FC;
  dword_60CB263C = (int)&loc_605FC218;
  dword_60CB2640 = 0;
  dword_60CB2644 = (int)&loc_605FC4D0;
  dword_60CB2648 = 0;
  dword_60CB264C = (int)nullsub_4840;
  dword_60CB2650 = 0;
  CurrentStateID += 3;
  dword_60CB2658 = CurrentStateID;
  dword_60CB2654 = (int)&off_60C0E7FC;
  dword_60CB265C = (int)sub_605FC774;
  dword_60CB2660 = 0;
  dword_60CB2664 = (int)sub_605FC79C;
  dword_60CB2668 = 0;
  dword_60CB266C = (int)nullsub_4841;
  dword_60CB2670 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = "伸縮ブロック・子(横)";
  Profile__ctor(&stru_60CB2674, Actor_buroku_child_build, 0xCBu, &v0, &stru_60B060C8, 2);
}
