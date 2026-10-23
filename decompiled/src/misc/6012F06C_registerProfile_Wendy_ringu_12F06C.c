/* registerProfile_Wendy_ringu_12F06C
 * address: 0x6012F06C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Wendy_ringu_12F06C())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  dword_60C87414 = 0;
  dword_60C87418 = 0;
  dword_60C8741C = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABE975;
  Profile__ctor(&stru_60C87420, Actor_Wendy_ringu_build, 0x2BDu, &v2, &stru_60AF64BC, 2);
  *v0 = &off_60BD1C10;
  dword_60C8743C = CurrentStateID + 1;
  dword_60C87438 = (int)&off_60BD1D40;
  dword_60C87440 = (int)sub_6012D978;
  dword_60C87444 = 0;
  dword_60C87448 = (int)sub_6012D98C;
  dword_60C8744C = 0;
  dword_60C87450 = (int)nullsub_2850;
  dword_60C87454 = 0;
  CurrentStateID += 2;
  dword_60C8745C = CurrentStateID;
  dword_60C87458 = (int)&off_60BD1D40;
  dword_60C87460 = (int)SE_BOSS_WENDY_RING_DISAPP_ref;
  dword_60C87464 = 0;
  dword_60C87468 = (int)sub_6012DCB0;
  dword_60C8746C = 0;
  dword_60C87470 = (int)nullsub_2851;
  dword_60C87474 = 0;
  return nullsub_2851;
}
