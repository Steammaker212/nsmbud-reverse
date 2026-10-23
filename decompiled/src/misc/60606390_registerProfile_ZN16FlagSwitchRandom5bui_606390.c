/* registerProfile_ZN16FlagSwitchRandom5bui_606390
 * address: 0x60606390   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_ZN16FlagSwitchRandom5bui_606390()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD34ED;
  Profile__ctor(&stru_60CB2A78, FlagSwitchRandom__build, 3u, &v1, &stru_60B062F4, 0);
  dword_60CB2A94 = ++CurrentStateID;
  dword_60CB2A90 = (int)&off_60C0F564;
  dword_60CB2A98 = (int)nullsub_4858;
  dword_60CB2A9C = 0;
  dword_60CB2AA0 = (int)sub_60605F70;
  dword_60CB2AA4 = 0;
  dword_60CB2AA8 = (int)nullsub_4859;
  dword_60CB2AAC = 0;
  return &dword_60CB2A90;
}
