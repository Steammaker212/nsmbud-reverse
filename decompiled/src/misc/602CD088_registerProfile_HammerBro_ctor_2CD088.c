/* registerProfile_HammerBro_ctor_2CD088
 * address: 0x602CD088   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_HammerBro_ctor_2CD088()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C91950 = 0;
  dword_60C91954 = 0;
  dword_60C91958 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC3B8A;
  Profile__ctor(&stru_60C918E4, HammerBro_ctor, 0x2F6u, &v1, &stru_60AFEA2C, 18);
  dword_60C9195C = 1077936128;
  dword_60C91960 = -1063256064;
  dword_60C91964 = 0;
  dword_60C91968 = -1073741824;
  dword_60C9196C = -1063256064;
  dword_60C91970 = 0;
  dword_60C91900 = CurrentStateID + 1;
  dword_60C91904 = 648;
  dword_60C91908 = 1;
  dword_60C9190C = 652;
  dword_60C91910 = 1;
  dword_60C91914 = 656;
  dword_60C91918 = 1;
  dword_60C918FC = (int)&off_60BE6020;
  dword_60C9191C = (int)&BroBase_StateID_JumpSt;
  CurrentStateID += 2;
  unk_60C91924 = CurrentStateID;
  unk_60C91928 = 684;
  unk_60C9192C = 1;
  unk_60C91930 = 688;
  dword_60C91934 = 1;
  dword_60C91938 = 692;
  dword_60C9193C = 1;
  dword_60C91920 = (int)&off_60BE6020;
  dword_60C91940 = (int)&BroBase_StateID_AirAttack;
  return &BroBase_StateID_AirAttack;
}
