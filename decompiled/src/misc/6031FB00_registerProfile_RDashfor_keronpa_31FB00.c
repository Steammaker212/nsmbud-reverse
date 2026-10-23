/* registerProfile_RDashfor_keronpa_31FB00
 * address: 0x6031FB00   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_RDashfor_keronpa_31FB00()
{
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C937A8 = 0;
  dword_60C937AC = 0;
  dword_60C937B0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC4704;
  Profile__ctor(&stru_60C937B4, Actor_RDashfor_keronpa_build, 0x22Du, &v1, &stru_60AFF620, 18);
  dword_60C937D0 = CurrentStateID + 1;
  dword_60C937D4 = 708;
  dword_60C937D8 = 1;
  dword_60C937DC = 712;
  dword_60C937E0 = 1;
  dword_60C937E4 = 716;
  dword_60C937E8 = 1;
  dword_60C937CC = (int)&off_60BEAD38;
  dword_60C937EC = (int)&NullState;
  dword_60C937FC = 1;
  dword_60C93800 = 724;
  dword_60C93804 = 1;
  dword_60C93808 = 728;
  dword_60C9380C = 1;
  dword_60C937F0 = (int)&off_60BEAD38;
  unk_60C937F4 = CurrentStateID + 2;
  unk_60C937F8 = 720;
  dword_60C93810 = (int)&NullState;
  dword_60C93820 = 1;
  dword_60C93824 = 736;
  dword_60C93828 = 1;
  dword_60C9382C = 740;
  dword_60C93830 = 1;
  dword_60C93814 = (int)&off_60BEAD38;
  *(_DWORD *)algn_60C93818 = CurrentStateID + 3;
  *(_DWORD *)&algn_60C93818[4] = 732;
  dword_60C93834 = (int)&NullState;
  dword_60C93844 = 1;
  dword_60C93848 = 748;
  dword_60C9384C = 1;
  dword_60C93850 = 752;
  dword_60C93854 = 1;
  dword_60C93838 = (int)&off_60BEAD38;
  unk_60C9383C = CurrentStateID + 4;
  unk_60C93840 = 744;
  dword_60C93858 = (int)&NullState;
  dword_60C93868 = 1;
  dword_60C9386C = 760;
  dword_60C93870 = 1;
  dword_60C93874 = 764;
  dword_60C93878 = 1;
  dword_60C9385C = (int)&off_60BEAD38;
  unk_60C93860 = CurrentStateID + 5;
  unk_60C93864 = 756;
  dword_60C9387C = (int)&NullState;
  CurrentStateID += 6;
  unk_60C93884 = CurrentStateID;
  unk_60C93888 = 684;
  dword_60C9388C = 1;
  dword_60C93890 = 688;
  dword_60C93894 = 1;
  dword_60C93898 = 692;
  dword_60C9389C = 1;
  dword_60C93880 = (int)&off_60BEAD38;
  dword_60C938A0 = (int)&dword_60C93710;
  return &dword_60C93710;
}
