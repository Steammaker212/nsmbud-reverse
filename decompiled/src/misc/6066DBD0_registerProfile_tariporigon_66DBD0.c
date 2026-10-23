/* registerProfile_tariporigon_66DBD0
 * address: 0x6066DBD0   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_tariporigon_66DBD0())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD5D85;
  Profile__ctor(&stru_60CB6F20, Actor_tariporigon_build, 0x3Bu, &v1, &stru_60B07AB4, 2);
  dword_60CB6F3C = CurrentStateID + 1;
  dword_60CB6F38 = (int)&off_60C156C4;
  dword_60CB6F40 = (int)nullsub_5090;
  dword_60CB6F44 = 0;
  dword_60CB6F48 = (int)nullsub_5091;
  dword_60CB6F4C = 0;
  dword_60CB6F50 = (int)nullsub_5092;
  dword_60CB6F54 = 0;
  CurrentStateID += 2;
  dword_60CB6F5C = CurrentStateID;
  dword_60CB6F58 = (int)&off_60C156C4;
  dword_60CB6F60 = (int)sub_6066D220;
  dword_60CB6F64 = 0;
  dword_60CB6F68 = (int)sub_6066D224;
  dword_60CB6F6C = 0;
  dword_60CB6F70 = (int)nullsub_260;
  dword_60CB6F74 = 0;
  return nullsub_260;
}
