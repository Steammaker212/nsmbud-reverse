/* registerProfile_sub_602A0DE8_2A1924
 * address: 0x602A1924   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_sub_602A0DE8_2A1924())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C90308 = 0;
  dword_60C9030C = 0;
  dword_60C90310 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC34D4;
  Profile__ctor(&stru_60C90314, sub_602A0DE8, 0x303u, &v1, &stru_60AFE3A8, 2);
  dword_60C90330 = CurrentStateID + 1;
  dword_60C9032C = (int)&off_60BE27F4;
  dword_60C90334 = (int)nullsub_3192;
  dword_60C90338 = 0;
  dword_60C9033C = (int)nullsub_3193;
  dword_60C90340 = 0;
  dword_60C90344 = (int)nullsub_3194;
  dword_60C90348 = 0;
  CurrentStateID += 2;
  dword_60C90350 = CurrentStateID;
  dword_60C9034C = (int)&off_60BE27F4;
  dword_60C90354 = (int)nullsub_3195;
  dword_60C90358 = 0;
  dword_60C9035C = (int)nullsub_3196;
  dword_60C90360 = 0;
  dword_60C90364 = (int)nullsub_3197;
  dword_60C90368 = 0;
  return nullsub_3197;
}
