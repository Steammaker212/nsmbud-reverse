/* registerProfile_rotate_control_for_korekushonkoin_5F6D88
 * address: 0x605F6D88   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_rotate_control_for_korekushonkoin_5F6D88()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2FB2;
  Profile__ctor(&stru_60CB2338, Actor_rotate_control_for_korekushonkoin_build, 0x1B3u, &v1, &stru_60B05ED0, 8194);
  dword_60CB2354 = ++CurrentStateID;
  dword_60CB2350 = (int)&off_60C0C7E0;
  dword_60CB2358 = (int)nullsub_4832;
  dword_60CB235C = 0;
  dword_60CB2360 = (int)sub_605F68B4;
  dword_60CB2364 = 0;
  dword_60CB2368 = (int)nullsub_4833;
  dword_60CB236C = 0;
  return &dword_60CB2350;
}
