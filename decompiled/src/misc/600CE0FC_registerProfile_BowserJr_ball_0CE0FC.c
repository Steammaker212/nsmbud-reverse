/* registerProfile_BowserJr_ball_0CE0FC
 * address: 0x600CE0FC   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_BowserJr_ball_0CE0FC())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C840AC = 0;
  dword_60C840B0 = 0;
  dword_60C840B4 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABD133;
  Profile__ctor(&stru_60C840B8, Actor_BowserJr_ball_build, 0x334u, &v2, &stru_60AF5B7C, 2);
  *v0 = &off_60BCADC8;
  dword_60C840D0 = 1031798784;
  dword_60C840D8 = CurrentStateID + 1;
  dword_60C840D4 = (int)&off_60BCB078;
  dword_60C840DC = (int)nullsub_2728;
  dword_60C840E0 = 0;
  dword_60C840E4 = (int)sub_600CCDF0;
  dword_60C840E8 = 0;
  dword_60C840EC = (int)nullsub_2729;
  dword_60C840F0 = 0;
  unk_60C840F4 = &off_60BCB078;
  unk_60C840F8 = CurrentStateID + 2;
  dword_60C840FC = (int)sub_600CCE48;
  dword_60C84100 = 0;
  dword_60C84104 = (int)&loc_600CCEEC;
  dword_60C84108 = 0;
  dword_60C8410C = (int)nullsub_2730;
  dword_60C84110 = 0;
  CurrentStateID += 3;
  dword_60C84118 = CurrentStateID;
  dword_60C84114 = (int)&off_60BCB078;
  dword_60C8411C = (int)sub_600CD070;
  dword_60C84120 = 0;
  dword_60C84124 = (int)sub_600CD0AC;
  dword_60C84128 = 0;
  dword_60C8412C = (int)nullsub_2731;
  dword_60C84130 = 0;
  return nullsub_2731;
}
