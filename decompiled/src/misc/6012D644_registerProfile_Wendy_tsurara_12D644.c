/* registerProfile_Wendy_tsurara_12D644
 * address: 0x6012D644   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Wendy_tsurara_12D644())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C87320 = 0;
  dword_60C87324 = 0;
  dword_60C87328 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABE915;
  Profile__ctor(&stru_60C8732C, Actor_Wendy_tsurara_build, 0x171u, &v2, &stru_60AF6460, 16);
  *v0 = &off_60BD18F0;
  dword_60C87348 = CurrentStateID + 1;
  dword_60C87344 = (int)&off_60BD1BFC;
  dword_60C8734C = (int)sub_6012BD5C;
  dword_60C87350 = 0;
  dword_60C87354 = (int)sub_6012BDE8;
  dword_60C87358 = 0;
  dword_60C8735C = (int)nullsub_2845;
  dword_60C87360 = 0;
  unk_60C87364 = &off_60BD1BFC;
  unk_60C87368 = CurrentStateID + 2;
  dword_60C8736C = (int)sub_6012C0B4;
  dword_60C87370 = 0;
  dword_60C87374 = (int)sub_6012C1D8;
  dword_60C87378 = 0;
  dword_60C8737C = (int)nullsub_2846;
  dword_60C87380 = 0;
  dword_60C87384 = (int)&off_60BD1BFC;
  unk_60C87388 = CurrentStateID + 3;
  dword_60C8738C = (int)sub_6012C204;
  dword_60C87390 = 0;
  dword_60C87394 = (int)sub_6012C25C;
  dword_60C87398 = 0;
  dword_60C8739C = (int)nullsub_2847;
  dword_60C873A0 = 0;
  unk_60C873A4 = &off_60BD1BFC;
  unk_60C873A8 = CurrentStateID + 4;
  dword_60C873AC = (int)gura_anim_S_ref;
  dword_60C873B0 = 0;
  dword_60C873B4 = (int)SE_BOSS_ICICLE_SIGN_ref;
  dword_60C873B8 = 0;
  dword_60C873BC = (int)nullsub_2848;
  dword_60C873C0 = 0;
  CurrentStateID += 5;
  dword_60C873C8 = CurrentStateID;
  dword_60C873C4 = (int)&off_60BD1BFC;
  dword_60C873CC = (int)rakka_anim_S_ref;
  dword_60C873D0 = 0;
  dword_60C873D4 = (int)SE_OBJ_ICICLE_BREAK_ref_12C56C;
  dword_60C873D8 = 0;
  dword_60C873DC = (int)nullsub_2849;
  dword_60C873E0 = 0;
  return nullsub_2849;
}
