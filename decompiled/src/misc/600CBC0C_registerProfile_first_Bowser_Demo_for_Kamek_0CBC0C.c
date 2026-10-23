/* registerProfile_first_Bowser_Demo_for_Kamek_0CBC0C
 * address: 0x600CBC0C   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_first_Bowser_Demo_for_Kamek_0CBC0C())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C83FB8 = 0;
  dword_60C83FBC = 0;
  dword_60C83FC0 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABD0B6;
  Profile__ctor(&stru_60C83FC4, Actor_first_Bowser_Demo_for_Kamek_build, 0x2D2u, &v2, 0, 0);
  *v0 = &off_60BCA9EC;
  dword_60C83FE0 = CurrentStateID + 1;
  dword_60C83FDC = (int)&off_60BCAC70;
  dword_60C83FE4 = (int)jc_demo_W8_appear_ref_CB3B0;
  dword_60C83FE8 = 0;
  dword_60C83FEC = (int)SE_VOC_KMC_WAKE_UP_ref;
  dword_60C83FF0 = 0;
  dword_60C83FF4 = (int)nullsub_2720;
  dword_60C83FF8 = 0;
  unk_60C83FFC = &off_60BCAC70;
  unk_60C84000 = CurrentStateID + 2;
  dword_60C84004 = (int)jc_demo_W8_magic_ref_CB4D0;
  dword_60C84008 = 0;
  dword_60C8400C = (int)ef_wand_ref;
  dword_60C84010 = 0;
  dword_60C84014 = (int)nullsub_2721;
  dword_60C84018 = 0;
  CurrentStateID += 3;
  dword_60C84020 = CurrentStateID;
  dword_60C8401C = (int)&off_60BCAC70;
  dword_60C84024 = (int)nullsub_2722;
  dword_60C84028 = 0;
  dword_60C8402C = (int)nullsub_2723;
  dword_60C84030 = 0;
  dword_60C84034 = (int)nullsub_2724;
  dword_60C84038 = 0;
  return nullsub_2724;
}
