/* registerProfile_seichin_snow_ball_148DA0
 * address: 0x60148DA0   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_seichin_snow_ball_148DA0())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C880BC = 0;
  dword_60C880C0 = 0;
  dword_60C880C4 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABEE25;
  Profile__ctor(&stru_60C880C8, Actor_seichin_snow_ball_build, 0x286u, &v2, 0, 160);
  *v0 = &off_60BD3EEC;
  dword_60C880E4 = CurrentStateID + 1;
  dword_60C880E0 = (int)&off_60BD41E4;
  dword_60C880E8 = (int)sub_601469C4;
  dword_60C880EC = 0;
  dword_60C880F0 = (int)sub_601469D8;
  dword_60C880F4 = 0;
  dword_60C880F8 = (int)sub_60146C28;
  dword_60C880FC = 0;
  unk_60C88100 = &off_60BD41E4;
  unk_60C88104 = CurrentStateID + 2;
  dword_60C88108 = (int)&loc_60146C94;
  dword_60C8810C = 0;
  dword_60C88110 = (int)&loc_60146D04;
  dword_60C88114 = 0;
  dword_60C88118 = (int)nullsub_2876;
  dword_60C8811C = 0;
  unk_60C88120 = &off_60BD41E4;
  unk_60C88124 = CurrentStateID + 3;
  dword_60C88128 = (int)sub_60147150;
  dword_60C8812C = 0;
  dword_60C88130 = (int)sub_60147188;
  dword_60C88134 = 0;
  dword_60C88138 = (int)nullsub_153;
  dword_60C8813C = 0;
  CurrentStateID += 4;
  dword_60C88144 = CurrentStateID;
  dword_60C88140 = (int)&off_60BD41E4;
  dword_60C88148 = (int)SE_OBJ_CMN_SPLASH_ref_1471B8;
  dword_60C8814C = 0;
  dword_60C88150 = (int)sub_601472B0;
  dword_60C88154 = 0;
  dword_60C88158 = (int)nullsub_2877;
  dword_60C8815C = 0;
  return nullsub_2877;
}
