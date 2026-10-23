/* registerProfile_first_Bowser_Demo_for_BowserJr_Crown_0634B0
 * address: 0x600634B0   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_first_Bowser_Demo_for_BowserJr_Crown_0634B0())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C81088 = 0;
  dword_60C8108C = 0;
  dword_60C81090 = 0;
  dword_60C81084 = (int)(float)((float)(2147500000.0 * 20.0) / 180.0);
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABB8DA;
  Profile__ctor(&stru_60C80FDC, Actor_first_Bowser_Demo_for_BowserJr_Crown_build, 0x2CFu, &v2, 0, 0);
  *v0 = &off_60BC6060;
  dword_60C80FF8 = CurrentStateID + 1;
  dword_60C80FF4 = (int)&off_60BC63F0;
  dword_60C80FFC = (int)jc_demo_W8_appear_ref_61C24;
  dword_60C81000 = 0;
  dword_60C81004 = (int)SE_BOSS_ref;
  dword_60C81008 = 0;
  dword_60C8100C = (int)nullsub_2560;
  dword_60C81010 = 0;
  unk_60C81014 = &off_60BC63F0;
  unk_60C81018 = CurrentStateID + 2;
  dword_60C8101C = (int)jc_demo_W8_magic_ref_62270;
  dword_60C81020 = 0;
  dword_60C81024 = (int)SE_EMY_KAMECK_FLY_MAGIC_ref_2;
  dword_60C81028 = 0;
  dword_60C8102C = (int)nullsub_2561;
  dword_60C81030 = 0;
  unk_60C81034 = &off_60BC63F0;
  unk_60C81038 = CurrentStateID + 3;
  dword_60C8103C = (int)sub_60062568;
  dword_60C81040 = 0;
  dword_60C81044 = (int)SE_AMB_KP_EARTHQUAKE_ref;
  dword_60C81048 = 0;
  dword_60C8104C = (int)nullsub_2562;
  dword_60C81050 = 0;
  CurrentStateID += 4;
  dword_60C81058 = CurrentStateID;
  dword_60C81054 = (int)&off_60BC63F0;
  dword_60C8105C = (int)nullsub_2563;
  dword_60C81060 = 0;
  dword_60C81064 = (int)SE_AMB_KP_EARTHQUAKE_ref_2;
  dword_60C81068 = 0;
  dword_60C8106C = (int)nullsub_2564;
  dword_60C81070 = 0;
  return nullsub_2564;
}
