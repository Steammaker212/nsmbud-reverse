/* registerProfile_akutakoinwater_kishiTag_58E5A0
 * address: 0x6058E5A0   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_akutakoinwater_kishiTag_58E5A0())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD1F46;
  Profile__ctor(&stru_60CAF50C, Actor_akutakoinwater_kishiTag_build, 0x18Au, &v1, &stru_60B04C00, 0);
  dword_60CAF528 = CurrentStateID + 1;
  dword_60CAF524 = (int)&off_60C06FC0;
  dword_60CAF52C = (int)nullsub_4675;
  dword_60CAF530 = 0;
  dword_60CAF534 = (int)&loc_6058DF54;
  dword_60CAF538 = 0;
  dword_60CAF53C = (int)nullsub_4676;
  dword_60CAF540 = 0;
  CurrentStateID += 2;
  dword_60CAF548 = CurrentStateID;
  dword_60CAF544 = (int)&off_60C06FC0;
  dword_60CAF54C = (int)sub_6058E33C;
  dword_60CAF550 = 0;
  dword_60CAF554 = (int)sub_6058E354;
  dword_60CAF558 = 0;
  dword_60CAF55C = (int)nullsub_4677;
  dword_60CAF560 = 0;
  return nullsub_4677;
}
