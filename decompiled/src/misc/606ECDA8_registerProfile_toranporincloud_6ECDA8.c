/* registerProfile_toranporincloud_6ECDA8
 * address: 0x606ECDA8   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_toranporincloud_6ECDA8())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60CBC03C = 0;
  dword_60CBC040 = 0;
  dword_60CBC044 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD8310;
  Profile__ctor(&stru_60CBC048, Actor_toranporincloud_build, 0x52u, &v1, &stru_60B09244, 2);
  dword_60CBC064 = CurrentStateID + 1;
  dword_60CBC060 = (int)&off_60C1FDD0;
  dword_60CBC068 = (int)nullsub_5300;
  dword_60CBC06C = 0;
  dword_60CBC070 = (int)sub_606EBC3C;
  dword_60CBC074 = 0;
  dword_60CBC078 = (int)nullsub_5301;
  dword_60CBC07C = 0;
  CurrentStateID += 2;
  dword_60CBC084 = CurrentStateID;
  dword_60CBC080 = (int)&off_60C1FDD0;
  dword_60CBC088 = (int)nullsub_5302;
  dword_60CBC08C = 0;
  dword_60CBC090 = (int)sub_606EBC6C;
  dword_60CBC094 = 0;
  dword_60CBC098 = (int)nullsub_5303;
  dword_60CBC09C = 0;
  return nullsub_5303;
}
