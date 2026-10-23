/* registerProfile_manhorupu_34562C
 * address: 0x6034562C   size: 820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_manhorupu_34562C()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C94894 = 0;
  dword_60C94898 = 0;
  dword_60C9489C = 0;
  dword_60C948CC = 0;
  dword_60C948C8 = 0;
  dword_60C948C4 = 0;
  dword_60C948C0 = 0;
  dword_60C948D0 = -1054343168;
  dword_60C948D4 = 1102053376;
  dword_60C948D8 = 1093140480;
  dword_60C948DC = 1099431936;
  dword_60C948E0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC4D3E;
  Profile__ctor(&stru_60C94734, Actor_manhorupu_build, 0x269u, &v1, &stru_60AFFBE4, 18);
  dword_60C94750 = CurrentStateID + 1;
  dword_60C9474C = (int)&off_60BEDE90;
  dword_60C94754 = (int)sub_60343184;
  dword_60C94758 = 0;
  dword_60C9475C = (int)sub_60343210;
  dword_60C94760 = 0;
  dword_60C94764 = (int)nullsub_3380;
  dword_60C94768 = 0;
  unk_60C9476C = &off_60BEDE90;
  unk_60C94770 = CurrentStateID + 2;
  dword_60C94774 = (int)SE_EMY_CHOROPU_M_OPEN_ref;
  dword_60C94778 = 0;
  dword_60C9477C = (int)sub_60343348;
  dword_60C94780 = 0;
  dword_60C94784 = (int)nullsub_3381;
  dword_60C94788 = 0;
  unk_60C9478C = &off_60BEDE90;
  unk_60C94790 = CurrentStateID + 3;
  dword_60C94794 = (int)sub_603437B4;
  dword_60C94798 = 0;
  dword_60C9479C = (int)sub_603437D4;
  dword_60C947A0 = 0;
  dword_60C947A4 = (int)nullsub_3382;
  dword_60C947A8 = 0;
  unk_60C947AC = &off_60BEDE90;
  unk_60C947B0 = CurrentStateID + 4;
  dword_60C947B4 = (int)SE_EMY_CHOROPU_M_APP_ref;
  dword_60C947B8 = 0;
  dword_60C947BC = (int)&loc_60343B10;
  dword_60C947C0 = 0;
  dword_60C947C4 = (int)nullsub_3383;
  dword_60C947C8 = 0;
  dword_60C947CC = (int)&off_60BEDE90;
  unk_60C947D0 = CurrentStateID + 5;
  dword_60C947D4 = (int)sub_60343F00;
  dword_60C947D8 = 0;
  dword_60C947DC = (int)sub_60343F6C;
  dword_60C947E0 = 0;
  dword_60C947E4 = (int)nullsub_3384;
  dword_60C947E8 = 0;
  unk_60C947EC = &off_60BEDE90;
  unk_60C947F0 = CurrentStateID + 6;
  dword_60C947F4 = (int)sub_6034440C;
  dword_60C947F8 = 0;
  dword_60C947FC = (int)&loc_60344468;
  dword_60C94800 = 0;
  dword_60C94804 = (int)nullsub_3385;
  dword_60C94808 = 0;
  dword_60C94810 = CurrentStateID + 7;
  dword_60C94814 = 456;
  dword_60C94818 = 1;
  dword_60C9481C = 460;
  dword_60C94820 = 1;
  dword_60C94824 = 464;
  dword_60C94828 = 1;
  dword_60C9480C = (int)&off_60BEDEA4;
  dword_60C9482C = (int)&stru_60C90710;
  dword_60C9483C = 1;
  dword_60C94840 = 448;
  dword_60C94844 = 1;
  dword_60C94848 = 452;
  dword_60C9484C = 1;
  unk_60C94830 = &off_60BEDEA4;
  unk_60C94834 = CurrentStateID + 8;
  unk_60C94838 = 444;
  dword_60C94850 = (int)&stru_60C906EC;
  CurrentStateID += 9;
  *(_DWORD *)algn_60C94858 = CurrentStateID;
  *(_DWORD *)&algn_60C94858[4] = 612;
  dword_60C94860 = 1;
  dword_60C94864 = 616;
  dword_60C94868 = 1;
  dword_60C9486C = 620;
  dword_60C94870 = 1;
  dword_60C94854 = (int)&off_60BEDEA4;
  dword_60C94874 = (int)&Enemy_StateId_Frozen;
  return &Enemy_StateId_Frozen;
}
