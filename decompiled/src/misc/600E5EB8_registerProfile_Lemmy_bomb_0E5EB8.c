/* registerProfile_Lemmy_bomb_0E5EB8
 * address: 0x600E5EB8   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Lemmy_bomb_0E5EB8())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C84EE4 = 0;
  dword_60C84EE8 = 0;
  dword_60C84EEC = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABD761;
  Profile__ctor(&stru_60C84EF0, Actor_Lemmy_bomb_build, 0x160u, &v2, &stru_60AF5E2C, 2);
  *v0 = &off_60BCCCE0;
  dword_60C84F0C = CurrentStateID + 1;
  dword_60C84F08 = (int)&off_60BCCE44;
  dword_60C84F10 = (int)sub_600E3CC4;
  dword_60C84F14 = 0;
  dword_60C84F18 = (int)&loc_600E3D20;
  dword_60C84F1C = 0;
  dword_60C84F20 = (int)nullsub_2749;
  dword_60C84F24 = 0;
  unk_60C84F28 = &off_60BCCE44;
  unk_60C84F2C = CurrentStateID + 2;
  dword_60C84F30 = (int)SE_BOSS_LEMMY_MAGIC_SHOT_ref;
  dword_60C84F34 = 0;
  dword_60C84F38 = (int)&loc_600E40DC;
  dword_60C84F3C = 0;
  dword_60C84F40 = (int)nullsub_2750;
  dword_60C84F44 = 0;
  dword_60C84F48 = (int)&off_60BCCE44;
  *(_DWORD *)algn_60C84F4C = CurrentStateID + 3;
  dword_60C84F50 = (int)SE_BOSS_JR_BOMB_BURST_ref;
  dword_60C84F54 = 0;
  dword_60C84F58 = (int)sub_600E4854;
  dword_60C84F5C = 0;
  dword_60C84F60 = (int)nullsub_2751;
  dword_60C84F64 = 0;
  CurrentStateID += 4;
  dword_60C84F6C = CurrentStateID;
  dword_60C84F68 = (int)&off_60BCCE44;
  dword_60C84F70 = (int)sub_600E49AC;
  dword_60C84F74 = 0;
  dword_60C84F78 = (int)sub_600E4A48;
  dword_60C84F7C = 0;
  dword_60C84F80 = (int)nullsub_2752;
  dword_60C84F84 = 0;
  return nullsub_2752;
}
