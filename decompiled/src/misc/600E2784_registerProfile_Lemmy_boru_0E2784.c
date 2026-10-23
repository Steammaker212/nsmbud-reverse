/* registerProfile_Lemmy_boru_0E2784
 * address: 0x600E2784   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Lemmy_boru_0E2784())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C84D08 = 0;
  dword_60C84D0C = 0;
  dword_60C84D10 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABD6FD;
  Profile__ctor(&stru_60C84D14, Actor_Lemmy_boru_build, 0x15Fu, &v2, &stru_60AF5DC4, 2);
  *v0 = &off_60BCCA6C;
  dword_60C84D30 = CurrentStateID + 1;
  dword_60C84D2C = (int)&off_60BCCBD0;
  dword_60C84D34 = (int)sub_600E17FC;
  dword_60C84D38 = 0;
  dword_60C84D3C = (int)sub_600E180C;
  dword_60C84D40 = 0;
  dword_60C84D44 = (int)nullsub_2746;
  dword_60C84D48 = 0;
  unk_60C84D4C = &off_60BCCBD0;
  unk_60C84D50 = CurrentStateID + 2;
  dword_60C84D54 = (int)shell_ball_out_ref;
  dword_60C84D58 = 0;
  dword_60C84D5C = (int)&loc_600E19DC;
  dword_60C84D60 = 0;
  dword_60C84D64 = (int)nullsub_2747;
  dword_60C84D68 = 0;
  CurrentStateID += 3;
  dword_60C84D70 = CurrentStateID;
  dword_60C84D6C = (int)&off_60BCCBD0;
  dword_60C84D74 = (int)sub_600E1BD0;
  dword_60C84D78 = 0;
  dword_60C84D7C = (int)sub_600E1D04;
  dword_60C84D80 = 0;
  dword_60C84D84 = (int)nullsub_2748;
  dword_60C84D88 = 0;
  return nullsub_2748;
}
