/* registerProfile_ne_me_66D040
 * address: 0x6066D040   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_ne_me_66D040())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD5D45;
  Profile__ctor(&stru_60CB6EC8, Actor_ne_me_build, 0x95u, &v1, &stru_60B07A90, 2);
  dword_60CB6EE4 = CurrentStateID + 1;
  dword_60CB6EE0 = (int)&off_60C155E8;
  dword_60CB6EE8 = (int)nullsub_5087;
  dword_60CB6EEC = 0;
  dword_60CB6EF0 = (int)sub_6066C958;
  dword_60CB6EF4 = 0;
  dword_60CB6EF8 = (int)nullsub_5088;
  dword_60CB6EFC = 0;
  CurrentStateID += 2;
  dword_60CB6F04 = CurrentStateID;
  dword_60CB6F00 = (int)&off_60C155E8;
  dword_60CB6F08 = (int)nullsub_5089;
  dword_60CB6F0C = 0;
  dword_60CB6F10 = (int)sub_6066C9F8;
  dword_60CB6F14 = 0;
  dword_60CB6F18 = (int)nullsub_259;
  dword_60CB6F1C = 0;
  return nullsub_259;
}
