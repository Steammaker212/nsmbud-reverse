/* registerProfile_light_ruburokuLift_5B8B08
 * address: 0x605B8B08   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_light_ruburokuLift_5B8B08()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD24CF;
  Profile__ctor(&stru_60CB05CC, Actor_light_ruburokuLift_build, 0xC8u, &v1, &stru_60B0540C, 2);
  dword_60CB05E8 = ++CurrentStateID;
  dword_60CB05EC = 192;
  dword_60CB05F0 = 1;
  dword_60CB05F4 = 196;
  dword_60CB05F8 = 1;
  dword_60CB05FC = 200;
  dword_60CB0600 = 1;
  dword_60CB05E4 = (int)&off_60C09718;
  dword_60CB0604 = (int)&dword_60CB7C70;
  return &dword_60CB05E4;
}
