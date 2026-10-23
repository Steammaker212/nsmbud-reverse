/* registerProfile_furaingukinoko_60CD18
 * address: 0x6060CD18   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_furaingukinoko_60CD18())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  dword_60CB2D98 = 0;
  dword_60CB2D9C = 0;
  dword_60CB2DA0 = 16;
  dword_60CB2DA4 = 0x8000;
  dword_60CB2DA8 = 167772160;
  dword_60CB2DAC = 0x100000;
  dword_60CB2DB0 = 0x100000;
  dword_60CB2DB4 = 0x800000;
  dword_60CB2DB8 = 0;
  dword_60CB2DBC = 0;
  unk_60CB2DC0 = 16;
  unk_60CB2DC4 = 12288;
  unk_60CB2DC8 = 0x8000000;
  unk_60CB2DCC = 0x40000;
  dword_60CB2DD0 = 0x100000;
  dword_60CB2DD4 = 0x400000;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AD3798;
  Profile__ctor(&stru_60CB2DD8, Actor_furaingukinoko_build, 0x51u, &v2, &stru_60B06404, 2);
  *v0 = &off_60C0F920;
  dword_60CB2DF4 = CurrentStateID + 1;
  dword_60CB2DF0 = (int)&off_60C0F9F4;
  dword_60CB2DF8 = (int)sub_6060BCD4;
  dword_60CB2DFC = 0;
  dword_60CB2E00 = (int)sub_6060BDE0;
  dword_60CB2E04 = 0;
  dword_60CB2E08 = (int)nullsub_4876;
  dword_60CB2E0C = 0;
  CurrentStateID += 2;
  dword_60CB2E14 = CurrentStateID;
  dword_60CB2E10 = (int)&off_60C0F9F4;
  dword_60CB2E18 = (int)sub_6060BEE4;
  dword_60CB2E1C = 0;
  dword_60CB2E20 = (int)&loc_6060BFB4;
  dword_60CB2E24 = 0;
  dword_60CB2E28 = (int)nullsub_4877;
  dword_60CB2E2C = 0;
  return nullsub_4877;
}
