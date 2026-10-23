/* registerProfile_janpuburoku_56E868
 * address: 0x6056E868   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *registerProfile_janpuburoku_56E868()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD16A4;
  Profile__ctor(&stru_60CAE710, Actor_janpuburoku_build, 0xE4u, &v1, (ActorInfo *)&unk_60B04388, 2);
  dword_60CAE72C = CurrentStateID + 1;
  dword_60CAE728 = (int)&off_60C02AB8;
  dword_60CAE730 = (int)sub_6056C20C;
  dword_60CAE734 = 0;
  dword_60CAE738 = (int)sub_6056C21C;
  dword_60CAE73C = 0;
  dword_60CAE740 = (int)nullsub_4620;
  dword_60CAE744 = 0;
  dword_60CAE74C = CurrentStateID + 2;
  dword_60CAE748 = (int)&off_60C02AB8;
  dword_60CAE750 = (int)sub_6056C33C;
  dword_60CAE754 = 0;
  dword_60CAE758 = (int)sub_6056C358;
  dword_60CAE75C = 0;
  dword_60CAE760 = (int)nullsub_4621;
  dword_60CAE764 = 0;
  dword_60CAE76C = CurrentStateID + 3;
  dword_60CAE770 = 248;
  dword_60CAE774 = 1;
  dword_60CAE778 = 252;
  dword_60CAE77C = 1;
  dword_60CAE780 = 256;
  dword_60CAE784 = 1;
  dword_60CAE768 = (int)&off_60C02ACC;
  dword_60CAE788 = (int)&dword_60CB04A4;
  CurrentStateID += 4;
  unk_60CAE790 = CurrentStateID;
  unk_60CAE794 = 272;
  dword_60CAE798 = 1;
  dword_60CAE79C = 276;
  dword_60CAE7A0 = 1;
  dword_60CAE7A4 = 280;
  dword_60CAE7A8 = 1;
  dword_60CAE78C = (int)&off_60C02ACC;
  dword_60CAE7AC = (int)&unk_60CB04EC;
  return &unk_60CB04EC;
}
