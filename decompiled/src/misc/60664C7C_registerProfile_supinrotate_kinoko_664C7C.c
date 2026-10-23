/* registerProfile_supinrotate_kinoko_664C7C
 * address: 0x60664C7C   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_supinrotate_kinoko_664C7C())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD5B23;
  Profile__ctor(&stru_60CB6ADC, Actor_supinrotate_kinoko_build, 0xC5u, &v1, &stru_60B078D0, 2);
  dword_60CB6AF4 = -53673984;
  dword_60CB6AFC = CurrentStateID + 1;
  dword_60CB6AF8 = (int)&off_60C14DEC;
  dword_60CB6B00 = (int)nullsub_5075;
  dword_60CB6B04 = 0;
  dword_60CB6B08 = (int)&loc_6066354C;
  dword_60CB6B0C = 0;
  dword_60CB6B10 = (int)nullsub_5076;
  dword_60CB6B14 = 0;
  unk_60CB6B18 = &off_60C14DEC;
  unk_60CB6B1C = CurrentStateID + 2;
  dword_60CB6B20 = (int)&loc_60663614;
  dword_60CB6B24 = 0;
  dword_60CB6B28 = (int)&loc_60663658;
  dword_60CB6B2C = 0;
  dword_60CB6B30 = (int)nullsub_5077;
  dword_60CB6B34 = 0;
  unk_60CB6B38 = &off_60C14DEC;
  unk_60CB6B3C = CurrentStateID + 3;
  dword_60CB6B40 = (int)sub_606638D4;
  dword_60CB6B44 = 0;
  dword_60CB6B48 = (int)&loc_606638E4;
  dword_60CB6B4C = 0;
  dword_60CB6B50 = (int)nullsub_5078;
  dword_60CB6B54 = 0;
  CurrentStateID += 4;
  dword_60CB6B5C = CurrentStateID;
  dword_60CB6B58 = (int)&off_60C14DEC;
  dword_60CB6B60 = (int)sub_60663A0C;
  dword_60CB6B64 = 0;
  dword_60CB6B68 = (int)&loc_60663A4C;
  dword_60CB6B6C = 0;
  dword_60CB6B70 = (int)nullsub_5079;
  dword_60CB6B74 = 0;
  return nullsub_5079;
}
