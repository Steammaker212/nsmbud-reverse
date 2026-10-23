/* registerProfile_akutaDRCtachi_58F490
 * address: 0x6058F490   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_akutaDRCtachi_58F490())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CAF584 = 0;
  dword_60CAF588 = 0;
  dword_60CAF58C = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD1F90;
  Profile__ctor(&stru_60CAF590, Actor_akutaDRCtachi_build, 0xAu, &v1, 0, 4);
  dword_60CAF5AC = CurrentStateID + 1;
  dword_60CAF5A8 = (int)&off_60C0723C;
  dword_60CAF5B0 = (int)nullsub_4678;
  dword_60CAF5B4 = 0;
  dword_60CAF5B8 = (int)sub_6058ED08;
  dword_60CAF5BC = 0;
  dword_60CAF5C0 = (int)nullsub_4679;
  dword_60CAF5C4 = 0;
  unk_60CAF5C8 = &off_60C0723C;
  unk_60CAF5CC = CurrentStateID + 2;
  dword_60CAF5D0 = (int)nullsub_4680;
  dword_60CAF5D4 = 0;
  dword_60CAF5D8 = (int)sub_6058EE0C;
  dword_60CAF5DC = 0;
  dword_60CAF5E0 = (int)nullsub_4681;
  dword_60CAF5E4 = 0;
  unk_60CAF5E8 = &off_60C0723C;
  unk_60CAF5EC = CurrentStateID + 3;
  dword_60CAF5F0 = (int)nullsub_4682;
  dword_60CAF5F4 = 0;
  dword_60CAF5F8 = (int)sub_6058EF40;
  dword_60CAF5FC = 0;
  dword_60CAF600 = (int)nullsub_4683;
  dword_60CAF604 = 0;
  CurrentStateID += 4;
  dword_60CAF60C = CurrentStateID;
  dword_60CAF608 = (int)&off_60C0723C;
  dword_60CAF610 = (int)nullsub_4684;
  dword_60CAF614 = 0;
  dword_60CAF618 = (int)sub_6058F020;
  dword_60CAF61C = 0;
  dword_60CAF620 = (int)nullsub_4685;
  dword_60CAF624 = 0;
  return nullsub_4685;
}
