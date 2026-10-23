/* registerProfile_buroku_child_2_600174
 * address: 0x60600174   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_buroku_child_2_600174()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB2710 = 1065353216;
  dword_60CB2714 = 1065353216;
  dword_60CB2718 = 1065353216;
  dword_60CB2720 = CurrentStateID + 1;
  dword_60CB271C = (int)&off_60C0E9BC;
  dword_60CB2724 = (int)&loc_605FE528;
  dword_60CB2728 = 0;
  dword_60CB272C = (int)&loc_605FE7F0;
  dword_60CB2730 = 0;
  dword_60CB2734 = (int)nullsub_4843;
  dword_60CB2738 = 0;
  dword_60CB2740 = CurrentStateID + 2;
  dword_60CB273C = (int)&off_60C0E9BC;
  dword_60CB2744 = (int)sub_605FEA9C;
  dword_60CB2748 = 0;
  dword_60CB274C = (int)sub_605FEAC4;
  dword_60CB2750 = 0;
  dword_60CB2754 = (int)nullsub_4844;
  dword_60CB2758 = 0;
  CurrentStateID += 3;
  dword_60CB2760 = CurrentStateID;
  dword_60CB275C = (int)&off_60C0E9BC;
  dword_60CB2764 = (int)nullsub_4845;
  dword_60CB2768 = 0;
  dword_60CB276C = (int)sub_605FEBAC;
  dword_60CB2770 = 0;
  dword_60CB2774 = (int)nullsub_4846;
  dword_60CB2778 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD32C0;
  Profile__ctor(&stru_60CB277C, Actor_buroku_child_2_build, 0xCCu, &v0, &stru_60B06130, 2);
}
