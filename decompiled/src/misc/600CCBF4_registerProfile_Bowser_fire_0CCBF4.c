/* registerProfile_Bowser_fire_0CCBF4
 * address: 0x600CCBF4   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Bowser_fire_0CCBF4())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABD0F4;
  Profile__ctor(&stru_60C8405C, Actor_Bowser_fire_build, 0x2CEu, &v2, 0, 162);
  *v0 = &off_60BCAC84;
  dword_60C84078 = 1069547520;
  dword_60C8407C = 1069547520;
  dword_60C84080 = 1069547520;
  dword_60C84088 = CurrentStateID + 1;
  dword_60C84084 = (int)&off_60BCADB4;
  dword_60C8408C = (int)sub_600CC038;
  dword_60C84090 = 0;
  dword_60C84094 = (int)SE_BOSS_KOOPA_FIRE_SHOT_ref;
  dword_60C84098 = 0;
  dword_60C8409C = (int)nullsub_2725;
  dword_60C840A0 = 0;
  CurrentStateID += 2;
  dword_60C84040 = CurrentStateID;
  dword_60C8403C = (int)&off_60BCADB4;
  dword_60C84044 = (int)sub_600CC28C;
  dword_60C84048 = 0;
  dword_60C8404C = (int)nullsub_2726;
  dword_60C84050 = 0;
  dword_60C84054 = (int)nullsub_2727;
  dword_60C84058 = 0;
  return nullsub_2727;
}
