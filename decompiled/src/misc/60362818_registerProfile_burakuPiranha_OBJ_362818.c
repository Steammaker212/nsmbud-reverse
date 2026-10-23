/* registerProfile_burakuPiranha_OBJ_362818
 * address: 0x60362818   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_burakuPiranha_OBJ_362818()
{
  sead__SafeString v0[3]; // [sp+10h] [bp-18h] BYREF

  dword_60C957CC = 0;
  dword_60C957D0 = 0;
  dword_60C957D4 = 0;
  dword_60C957DC = CurrentStateID + 1;
  dword_60C957D8 = (int)&off_60BEF974;
  dword_60C957E0 = (int)sub_60360FA8;
  dword_60C957E4 = 0;
  dword_60C957E8 = (int)sub_603610B8;
  dword_60C957EC = 0;
  dword_60C957F0 = (int)nullsub_3412;
  dword_60C957F4 = 0;
  unk_60C957F8 = &off_60BEF974;
  unk_60C957FC = CurrentStateID + 2;
  dword_60C95800 = (int)sub_603612EC;
  dword_60C95804 = 0;
  dword_60C95808 = (int)sub_60361340;
  dword_60C9580C = 0;
  dword_60C95810 = (int)nullsub_3413;
  dword_60C95814 = 0;
  unk_60C95818 = &off_60BEF974;
  unk_60C9581C = CurrentStateID + 3;
  dword_60C95820 = (int)sub_60361350;
  dword_60C95824 = 0;
  dword_60C95828 = (int)sub_60361430;
  dword_60C9582C = 0;
  dword_60C95830 = (int)sub_60361460;
  dword_60C95834 = 0;
  unk_60C95838 = &off_60BEF974;
  unk_60C9583C = CurrentStateID + 4;
  dword_60C95840 = (int)sub_6036147C;
  dword_60C95844 = 0;
  dword_60C95848 = (int)sub_603615B4;
  dword_60C9584C = 0;
  dword_60C95850 = (int)sub_60361634;
  dword_60C95854 = 0;
  dword_60C95858 = (int)&off_60BEF974;
  *(_DWORD *)algn_60C9585C = CurrentStateID + 5;
  CurrentStateID += 6;
  dword_60C9587C = CurrentStateID;
  dword_60C95878 = (int)&off_60BEF974;
  dword_60C95860 = (int)nullsub_3414;
  dword_60C95864 = 0;
  dword_60C95880 = (int)sub_60361714;
  dword_60C95884 = 0;
  dword_60C95868 = (int)sub_60361654;
  dword_60C9586C = 0;
  dword_60C95888 = (int)sub_60361868;
  dword_60C9588C = 0;
  dword_60C95870 = (int)nullsub_3415;
  dword_60C95874 = 0;
  dword_60C95890 = (int)sub_6036196C;
  dword_60C95894 = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC518C;
  Profile__ctor(&stru_60C95898, Actor_burakuPiranha_OBJ_build, 0x1F6u, v0, &stru_60B00194, 0);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC51A5;
  Profile__ctor(&stru_60C958B0, Actor_burakuPiranha_OBJ_build, 0x1F7u, v0, &stru_60B001B8, 0);
}
