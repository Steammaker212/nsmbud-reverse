/* registerProfile_Kamek_tsurara_0B01EC
 * address: 0x600B01EC   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Kamek_tsurara_0B01EC())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C83118 = 0;
  dword_60C8311C = 0;
  dword_60C83120 = 0;
  dword_60C83110 = (int)(float)((float)(2147500000.0 * 3.0) / 180.0);
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABCB77;
  Profile__ctor(&stru_60C8301C, Actor_Kamek_tsurara_build, 0x170u, &v2, 0, 32);
  *v0 = &off_60BC8EB0;
  dword_60C83038 = CurrentStateID + 1;
  dword_60C83034 = (int)&off_60BC9014;
  dword_60C8303C = (int)nullsub_2680;
  dword_60C83040 = 0;
  dword_60C83044 = (int)sub_600ACD9C;
  dword_60C83048 = 0;
  dword_60C8304C = (int)nullsub_2681;
  dword_60C83050 = 0;
  unk_60C83054 = &off_60BC9014;
  unk_60C83058 = CurrentStateID + 2;
  dword_60C8305C = (int)SE_BOSS_KAMECK_BLOCK_APPEAR_ref;
  dword_60C83060 = 0;
  dword_60C83064 = (int)sub_600AD290;
  dword_60C83068 = 0;
  dword_60C8306C = (int)nullsub_2682;
  dword_60C83070 = 0;
  unk_60C83074 = &off_60BC9014;
  unk_60C83078 = CurrentStateID + 3;
  dword_60C8307C = (int)sub_600AD330;
  dword_60C83080 = 0;
  dword_60C83084 = (int)sub_600AD340;
  dword_60C83088 = 0;
  dword_60C8308C = (int)nullsub_2683;
  dword_60C83090 = 0;
  unk_60C83094 = &off_60BC9014;
  unk_60C83098 = CurrentStateID + 4;
  dword_60C8309C = (int)sub_600AD440;
  dword_60C830A0 = 0;
  dword_60C830A4 = (int)sub_600AD464;
  dword_60C830A8 = 0;
  dword_60C830AC = (int)nullsub_2684;
  dword_60C830B0 = 0;
  CurrentStateID += 5;
  dword_60C830B8 = CurrentStateID;
  dword_60C830B4 = (int)&off_60BC9014;
  dword_60C830BC = (int)sub_600AD550;
  dword_60C830C0 = 0;
  dword_60C830C4 = (int)SE_OBJ_ICICLE_BREAK_ref;
  dword_60C830C8 = 0;
  dword_60C830CC = (int)nullsub_2685;
  dword_60C830D0 = 0;
  return nullsub_2685;
}
