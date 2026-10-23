/* registerProfile_minigemupaneruItem_735C78
 * address: 0x60735C78   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_minigemupaneruItem_735C78()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CBDD64 = CurrentStateID + 1;
  dword_60CBDD60 = (int)&off_60C2294C;
  dword_60CBDD68 = (int)nullsub_5382;
  dword_60CBDD6C = 0;
  dword_60CBDD70 = (int)nullsub_5383;
  dword_60CBDD74 = 0;
  dword_60CBDD78 = (int)nullsub_5384;
  dword_60CBDD7C = 0;
  dword_60CBDD84 = CurrentStateID + 2;
  dword_60CBDD80 = (int)&off_60C2294C;
  dword_60CBDD88 = (int)sub_60733E9C;
  dword_60CBDD8C = 0;
  dword_60CBDD90 = (int)nullsub_5385;
  dword_60CBDD94 = 0;
  dword_60CBDD98 = (int)nullsub_5386;
  dword_60CBDD9C = 0;
  dword_60CBDDA4 = CurrentStateID + 3;
  dword_60CBDDA0 = (int)&off_60C2294C;
  dword_60CBDDA8 = (int)sub_60733EFC;
  dword_60CBDDAC = 0;
  dword_60CBDDB0 = (int)shufflePanel_in_ref;
  dword_60CBDDB4 = 0;
  dword_60CBDDB8 = (int)nullsub_5387;
  dword_60CBDDBC = 0;
  dword_60CBDDC4 = CurrentStateID + 4;
  dword_60CBDDC0 = (int)&off_60C2294C;
  dword_60CBDDC8 = (int)shufflePanel_out_ref;
  dword_60CBDDCC = 0;
  dword_60CBDDD0 = (int)sub_607343F8;
  dword_60CBDDD4 = 0;
  dword_60CBDDD8 = (int)nullsub_5388;
  dword_60CBDDDC = 0;
  dword_60CBDDE4 = CurrentStateID + 5;
  dword_60CBDDE0 = (int)&off_60C2294C;
  dword_60CBDDE8 = (int)sub_60734624;
  dword_60CBDDEC = 0;
  dword_60CBDDF0 = (int)sub_60734748;
  dword_60CBDDF4 = 0;
  dword_60CBDDF8 = (int)nullsub_5389;
  dword_60CBDDFC = 0;
  dword_60CBDE04 = CurrentStateID + 6;
  dword_60CBDE00 = (int)&off_60C2294C;
  dword_60CBDE08 = (int)sub_60734938;
  dword_60CBDE0C = 0;
  dword_60CBDE10 = (int)shufflePanel_hahaha_ref;
  dword_60CBDE14 = 0;
  dword_60CBDE18 = (int)nullsub_5390;
  dword_60CBDE1C = 0;
  CurrentStateID += 7;
  dword_60CBDE24 = CurrentStateID;
  dword_60CBDE20 = (int)&off_60C2294C;
  dword_60CBDE28 = (int)sub_60734AD8;
  dword_60CBDE2C = 0;
  dword_60CBDE30 = (int)SE_MG_CMN_ITEM_SHOT_ref;
  dword_60CBDE34 = 0;
  dword_60CBDE38 = (int)nullsub_5391;
  dword_60CBDE3C = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD97DD;
  Profile__ctor(&stru_60CBDE40, Actor_minigemupaneruItem_build, 0x33Bu, &v0, &stru_60B0A38C, 0);
}
